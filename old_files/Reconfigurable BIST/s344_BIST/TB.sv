`timescale 1 ns / 1ns
module TB ();
parameter clk_period=10;

reg clk = 1'b0;
reg rst = 1'b1;
reg NbarT = 1'b0;
wire done_sig, fail;
reg storeSig = 1'b0;

int i = 0;
integer sigFile, logFile, faultFile, status;
real faultCount, detectedFault;//number of collapsed faults // number of detected faults
string wireName;
string faultsPath, newfaultsPath, readIdx, writeIdx;

time FS_end_time, FS_start_time, BIST_end_time, BIST_start_time;

reg stuckAtVal;
reg stopSimulation = 1'b0;
reg faultInjection = 1'b0;


parameter sizePI      = 9; 
parameter sizePO      = 11;
parameter PRPG_Size   = 9;
parameter MISR_Size   = 11;
parameter SRSG_Size   = 15;
parameter SISA_Size   = 15;

parameter ShiftSize   = 15;
parameter numOfCycles = 3;
parameter numOfRounds = 4;
reg [sizePI-1:0] normalPI = 0;
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
		.fail(fail)
	);


always #(clk_period/2) clk = ~clk; 

// always @ (negedge done_sig) begin
// 	$display("DONE ISSUED at %t \n", $time);

initial begin
	sigFile = $fopen("signatures.txt", "w");
	logFile = $fopen("FS_log.txt", "w");
	rst = 1'b0;
	#1;
	rst = 1'b1;

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
	// store golden signatures:
	rst = 1'b1;
	NbarT = 1'b1;
	#(10*clk_period);
	rst = 1'b0;
	// #10;
	$display("Starting Golden Signature Generation ... \n");
	for (i = 0; i < numOfRounds; i = i + 1) begin
		wait ((done_sig == 1'b1));
		PRPG_seed[i] = ~PRPG_seed[i];
		wait ((done_sig == 1'b0));
		// $display("DONE ISSUED at %t \n", $realtime);
		$fwrite(sigFile, "%b", sigOut);
		$fwrite(sigFile, "\n");
	end
	$fclose(sigFile);
	storeSig = 1'b1;
	NbarT = 1'b0;
	rst = 1'b1;
	#(1*clk_period);
	rst = 1'b0;
	$display("Starting Golden Signaturs Stored at %t \n", $realtime);

	// golden signatures are stored
	// time for fault simulation
	faultFile = $fopen("s344_faultlist.flt", "r");
	$display("===> Fault Simulation Starting ...\n");
	FS_start_time = $realtime;
	NbarT = 1'b1;
	while (!$feof(faultFile)) begin
		status = $fscanf(faultFile,"s@%b  %s\n", stuckAtVal, wireName);
		$fwrite(logFile, "Net to be faulty => %s to %b \n", wireName, stuckAtVal);
		faultInjection = 1'b1;
		// #1;
		faultCount = faultCount + 1;
		NbarT = 1'b1;
		BIST_start_time = $realtime;
		for (i = 0; i < numOfRounds; i = i + 1) begin
			wait ((done_sig == 1'b1));
			PRPG_seed[i] = ~PRPG_seed[i];
			wait ((done_sig == 1'b0));
		end
		BIST_end_time = $realtime;
		$fwrite(logFile, "#### LBIST Run is done\n");
		if (fail == 1'b1) begin
			detectedFault = detectedFault + 1;
			// $display("FAULT DETECTED\n");
			$fwrite(logFile, "FAULT DETECTED\n");

		end
		faultInjection = 1'b0;
		rst = 1'b1;
		#(1*clk_period);
		rst = 1'b0;
	end
	FS_end_time = $realtime;
	$fwrite(logFile, "\n\n==========> Fault Coverage: %f \n", detectedFault/faultCount);
	$fwrite(logFile, "==========> Fault Simulation Time: %t \n", FS_end_time-FS_start_time);
	$fwrite(logFile, "==========> BIST Run Time: %t \n", BIST_end_time-BIST_start_time);

	
	$fclose(logFile);
	$fclose(faultFile);
	#(10*clk_period);
	$stop;
end	


// // Typical Fault Simulation
// initial begin

// 	faultCount = 0;
// 	detectedFault = 0;
// 	logFile = $fopen("FS_log.txt", "w");
// 	FCFile = $fopen("typicalFS_FC.txt", "w");
// 	faultFile = $fopen("s27_faultlist.flt", "r");
// 	$fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
// 	while( !$feof(faultFile))begin//Outer loop : Faults
// 		status = $fscanf(faultFile,"s@%b\n  %s", stuckAtVal, wireName);

// 		$fwrite(logFile, "Net to be faulty => %s to %b \n", wireName, stuckAtVal);
// 		faultInjection = 1'b1;
// 		faultCount = faultCount + 1;
// 		detected = 1'b0;
// 		rst = 1'b1;
// 		#(clk_period);
// 		rst = 1'b0;



// 		// testFile = $fopen("testPatterns500.txt", "r");//Test set File
// 		while((!$feof(testFile))&(detected == 0)) begin
// 			status = $fscanf(testFile,"%b\n", testVector);
// 			{N1, N10, N104, N13, N16, N19, N22, N25, N28, N31, N34, N37, N4, N40, N43, N46, N49, N53, N56, N60, N63, N66, N69, N7, N72, N76, N79, N82, N85, N88, N91, N94, N99} = testVector;
// 			#90;
// 			if ( {N2753_Gout, N2754_Gout, N2755_Gout, N2756_Gout, N2762_Gout, N2767_Gout, N2768_Gout, N2779_Gout, N2780_Gout, N2781_Gout, N2782_Gout, N2783_Gout, N2784_Gout, N2785_Gout, N2786_Gout, N2787_Gout, N2811_Gout, N2886_Gout, N2887_Gout, N2888_Gout, N2889_Gout, N2890_Gout, N2891_Gout, N2892_Gout, N2899_Gout} != {N2753_Fout, N2754_Fout, N2755_Fout, N2756_Fout, N2762_Fout, N2767_Fout, N2768_Fout, N2779_Fout, N2780_Fout, N2781_Fout, N2782_Fout, N2783_Fout, N2784_Fout, N2785_Fout, N2786_Fout, N2787_Fout, N2811_Fout, N2886_Fout, N2887_Fout, N2888_Fout, N2889_Fout, N2890_Fout, N2891_Fout, N2892_Fout, N2899_Fout}) begin
// 				detected = 1'b1;//in case of mismatch the fault is detected
// 				detectedFault = detectedFault + 1;//incrementing the number of detected faults
// 			end//if
// 		end //while eof test
// 		$fclose(testFile);
// 		faultInjection = 1'b0;
// 		#20;
// 	end//while eof faults
// 	// $fclose(logFile);
// 	$display("Collapsed Faults = %d\n , Detected Faults = %d\n", faultCount ,detectedFault );
// 	$display("coverage = %f\n", detectedFault/faultCount);
// 	$fwrite(FCFile, "Fault Coverage %f \n", detectedFault/faultCount);
// 	$fwrite(FCFile, "Simulation Time: %t \n", $time);
// 	$fclose(FCFile);
// 	stopSimulation = 1'b0;
// 	#10;
// 	$stop;
// end // end of initial




// initial begin
// 	rst = 1'b1;
// 	#(10*clk_period);
// 	rst = 1'b0;


	
// 	#10;
// 	$stop;
// end // end of initial

endmodule
