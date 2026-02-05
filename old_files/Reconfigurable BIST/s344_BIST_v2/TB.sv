`timescale 1 ns / 1ns
module BIST_TB ();
parameter clk_period=10;

reg clk = 1'b0;
reg rst = 1'b1;
reg NbarT = 1'b0;
wire done_sig, fail;
reg storeSig = 1'b0;
wire [3:0] sigAddr;
reg session;

reg mode = 1'b0;
reg seed_ld;

int i = 0;
int j = 0;
integer sigFile, logFile, faultFile, status;
real faultCount, detectedFault;//number of collapsed faults // number of detected faults
string wireName;
string faultsPath, newfaultsPath, readIdx, writeIdx;

time FS_end_time, FS_start_time, BIST_end_time, BIST_start_time;

reg stuckAtVal;
reg stopSimulation = 1'b0;
reg faultInjection = 1'b0;
reg NbarE = 1'b1; // Normal FS vs. Enhanced FS


parameter sizePI      = 9; 
parameter sizePO      = 11;
parameter PRPG_Size   = 9;
parameter MISR_Size   = 11;
parameter SRSG_Size   = 15;
parameter SISA_Size   = 15;

parameter ShiftSize   = 15;
parameter numOfCycles = 3;
parameter numOfRounds = 3;
reg [sizePI-1:0] normalPI = 0;
reg [sizePI-1:0] testPI, last_LFSR_state, LFSR_temp;
wire [sizePO-1:0] normalPO;

reg [PRPG_Size-1:0] PRPG_poly;
reg [PRPG_Size-1:0] PRPG_seed;
reg [SRSG_Size-1:0] SRSG_poly;
reg [SRSG_Size-1:0] SRSG_seed;
reg [MISR_Size-1:0] MISR_poly;
reg [MISR_Size-1:0] MISR_seed;
reg [SISA_Size-1:0] SISA_poly;
reg [SISA_Size-1:0] SISA_seed;
reg [MISR_Size+SISA_Size-1:0] sigOut;

reg [3:0] cfgAddr;
reg [14:0] cfgData;


//Configuration ROM instance
STCR STCR_inst (
		.address(cfgAddr), 
		.data(cfgData)
	);

s344_testable # (
		.sizePI     (sizePI     ), 
        .sizePO     (sizePO     ),
        .PRPG_Size  (PRPG_Size  ),
        .MISR_Size  (MISR_Size  ),
        .SRSG_Size  (SRSG_Size  ),
        .SISA_Size  (SISA_Size  ),
        .ShiftSize  (ShiftSize  ),
        .numOfCycles(numOfCycles), 
        .numOfRounds(numOfRounds)
	) DUT 
	(
		.clk(clk),
		.rst(rst),
		.normalPI(normalPI),
		.normalPO(normalPO),
		.NbarT(NbarT),
		.PRPG_poly(PRPG_poly),
		.PRPG_seed(PRPG_seed),
		.SRSG_poly(SRSG_poly),
		.SRSG_seed(SRSG_seed),
		.MISR_poly(MISR_poly),
		.MISR_seed(MISR_seed),
		.SISA_poly(SISA_poly),
		.SISA_seed(SISA_seed),
		.done(done_sig),
		.sigOut(sigOut),
		.storeSig(storeSig),
		.fail(fail),
		.sigAddrOut(sigAddr),
		.mode(mode), 
		.testPI(testPI),
		.session(~session)
	);


always #(clk_period/2) clk = ~clk; 

// always @ (negedge done_sig) begin
// 	$display("DONE ISSUED at %t \n", $time);

initial begin
	sigFile = $fopen("signatures.txt", "w");
	logFile = $fopen("FS_log.txt", "w");
	mode = 1'b1;

	rst = 1'b0;
	#1;
	rst = 1'b1;
	session = 1'b0;

	//initialization
	cfgAddr = 0; #clk_period; PRPG_poly = cfgData[PRPG_Size-1:0]; #clk_period; 
	cfgAddr = 1; #clk_period; PRPG_seed = cfgData[PRPG_Size-1:0]; #clk_period; 
	cfgAddr = 2; #clk_period; SRSG_poly = cfgData[SRSG_Size-1:0]; #clk_period; 
	cfgAddr = 3; #clk_period; SRSG_seed = cfgData[SRSG_Size-1:0]; #clk_period; 
	cfgAddr = 4; #clk_period; MISR_poly = cfgData[MISR_Size-1:0]; #clk_period; 
	cfgAddr = 5; #clk_period; MISR_seed = cfgData[MISR_Size-1:0]; #clk_period; 
	cfgAddr = 6; #clk_period; SISA_poly = cfgData[SISA_Size-1:0]; #clk_period; 
	cfgAddr = 7; #clk_period; SISA_seed = cfgData[SISA_Size-1:0]; #clk_period; 
	// #clk_period;
	// // store golden signatures:
	// rst = 1'b1;
	// NbarT = 1'b1;
	// #(10*clk_period);
	// rst = 1'b0;
	// // #10;
	// $display("Starting Golden Signature Generation ... \n");
	// for (i = 0; i < numOfRounds; i = i + 1) begin
	// 	wait ((done_sig == 1'b1));
	// 	// PRPG_seed[i] = ~PRPG_seed[i];
	// 	wait ((done_sig == 1'b0));
	// 	// $display("DONE ISSUED at %t \n", $realtime);
	// 	$fwrite(sigFile, "%b", sigOut);
	// 	$fwrite(sigFile, "\n");
	// end
	// $fclose(sigFile);
	// storeSig = 1'b1;
	// NbarT = 1'b0;
	// rst = 1'b1;
	// #(1*clk_period);
	// rst = 1'b0;
	// $display("Starting Golden Signaturs Stored at %t \n", $realtime);



	// enhanced BIST signature generation
	if (NbarE == 1'b1) begin
			rst = 1'b1;
			NbarT = 1'b1;
			#(10*clk_period);
			rst = 1'b0;
			$display("Starting Golden Signature Generation ... \n");
			for (i = 0; i < (numOfRounds*4); i = i + 1) begin
				wait ((done_sig == 1'b1));
				wait ((done_sig == 1'b0));
				$fwrite(sigFile, "%b", sigOut);
				$fwrite(sigFile, "\n");
			end
			$fclose(sigFile);
			NbarT = 1'b0;
			
			#(1*clk_period);
			$display("Starting Golden Signaturs Stored at %t \n", $realtime);
		$fclose(sigFile);
		storeSig = 1'b1;

		// golden signatures are stored
		// time for fault simulation
		faultFile = $fopen("s344_faultlist.flt", "r");
		$display("===> Fault Simulation Starting ...\n");
		FS_start_time = $realtime;
		cfgAddr = 1; #clk_period; PRPG_seed = cfgData[PRPG_Size-1:0]; #clk_period; 
		while (!$feof(faultFile)) begin
			// rst = 1'b0;
			session = 1'b0;
			// seed_ld = 1'b0;
			cfgAddr = 1; #clk_period; PRPG_seed = cfgData[PRPG_Size-1:0];
			#clk_period; 
			// seed_ld = 1'b1;
			rst = 1'b1;
			session = 1'b1;
			status = $fscanf(faultFile,"s@%b  %s\n", stuckAtVal, wireName);
			// $fwrite(logFile, "Net to be faulty => %s to %b \n", wireName, stuckAtVal);
			faultInjection = 1'b1;
			// #1;
			faultCount = faultCount + 1;
			NbarT = 1'b1;
			BIST_start_time = $realtime;
			for (j = 0; j < 4; j++)begin
				// $fwrite(logFile, "********** ROUND: %d\n", j);
				// seed_ld = 1'b0;
				// rst = 1'b1;
				NbarT = 1'b1;
				#(10*clk_period);
				rst = 1'b0;
				for (i = 0; i < numOfRounds; i = i + 1) begin
					wait ((done_sig == 1'b1));
					wait ((done_sig == 1'b0));
				end
				// // NbarT = 1'b0;

				// last_LFSR_state = testPI;
				// LFSR_temp = last_LFSR_state;
				// LFSR_temp[bitsToFlip[j]] = ~LFSR_temp[bitsToFlip[j]];
				// PRPG_seed = LFSR_temp;
				// seed_ld = 1'b1; // loading the flipped seed
				#(1*clk_period);
			end
			BIST_end_time = $realtime;
			if (fail == 1'b1) begin
				detectedFault = detectedFault + 1;
				// $display("FAULT DETECTED\n");
				$fwrite(logFile, "FAULT DETECTED : %s	S@%b \n", wireName, stuckAtVal);
			end
			faultInjection = 1'b0;
			// rst = 1'b1;
			session = 1'b0;
			// #(1*clk_period);
			// rst = 1'b1;
		end
		FS_end_time = $realtime;
		$fwrite(logFile, "\n\n==========> Fault Coverage: %f \n", detectedFault/faultCount);
		$fwrite(logFile, "==========> Fault Simulation Time: %t \n", FS_end_time-FS_start_time);
		$fwrite(logFile, "==========> BIST Run Time: %t \n", BIST_end_time-BIST_start_time);
	end


	// // golden signatures are stored
	// // time for fault simulation
	// faultFile = $fopen("s344_faultlist.flt", "r");
	// $display("===> Fault Simulation Starting ...\n");
	// FS_start_time = $realtime;
	// cfgAddr = 1; #clk_period; PRPG_seed = cfgData[PRPG_Size-1:0]; #clk_period; 
	// NbarT = 1'b1;
	// while (!$feof(faultFile)) begin
	// 	rst = 1'b1;
	// 	cfgAddr = 1; #clk_period; PRPG_seed = cfgData[PRPG_Size-1:0]; #clk_period; 
	// 	rst = 1'b0;
	// 	status = $fscanf(faultFile,"s@%b  %s\n", stuckAtVal, wireName);
	// 	// $fwrite(logFile, "Net to be faulty => %s to %b \n", wireName, stuckAtVal);
	// 	faultInjection = 1'b1;
	// 	// #1;
	// 	faultCount = faultCount + 1;
	// 	NbarT = 1'b1;
	// 	BIST_start_time = $realtime;
	// 	for (i = 0; i < numOfRounds; i = i + 1) begin
	// 		wait ((done_sig == 1'b1));
	// 		// PRPG_seed[i] = ~PRPG_seed[i];
	// 		wait ((done_sig == 1'b0));
	// 	end
	// 	BIST_end_time = $realtime;
	// 	// $fwrite(logFile, "#### LBIST Run is done\n");
	// 	if (fail == 1'b1) begin
	// 		detectedFault = detectedFault + 1;
	// 		// $display("FAULT DETECTED\n");
	// 		// $fwrite(logFile, "FAULT DETECTED \n");

	// 	end
	// 	faultInjection = 1'b0;
	// 	rst = 1'b1;
	// 	#(1*clk_period);
	// 	rst = 1'b0;
	// end
	// FS_end_time = $realtime;
	// $fwrite(logFile, "\n\n==========> Fault Coverage: %f \n", detectedFault/faultCount);
	// $fwrite(logFile, "==========> Fault Simulation Time: %t \n", FS_end_time-FS_start_time);
	// $fwrite(logFile, "==========> BIST Run Time: %t \n", BIST_end_time-BIST_start_time);

	
	// $fclose(logFile);
	// $fclose(faultFile);
	// #(10*clk_period);
	// end
	$stop;
end	


endmodule
