`timescale 1 ns / 1ns
module SerialFS_TB ();
reg clk=1'b0;
reg rst=1'b1;
reg D;
wire Q_Fout;
wire Q_Gout;


reg detected;
integer logFile, testFile, faultFile, status, FCFile, faultsF, newfaultFile;
integer i;
real faultCount, detectedFault, TVnum;//number of collapsed faults // number of detected faults
reg testVector;// applied test vector
// reg [8*20:1] wireName;// name of the current faulty wire
string wireName, wireName_prev;
string faultsPath, newfaultsPath, readIdx, writeIdx;

reg stuckAtVal, stuckAtVal_prev;
reg stopSimulation = 1'b0;
reg faultInjection = 1'b0;

DUT FUT ( 
	.clk(clk), .rst(rst), .D_i(D), .Q_o(Q_Fout));

DUT GUT ( 
		.clk(clk), .rst(rst), .D_i(D), .Q_o(Q_Gout));

always begin
	#2 clk = ~clk;
end
// Typical Fault Simulation
initial begin
	faultCount = 0;
	detectedFault = 0;
	// logFile = $fopen("FS_log.txt", "w");
	// FCFile = $fopen("typicalFS_FC.txt", "w");
	faultFile = $fopen("DFF_faultlist.flt", "r");
	while(!$feof(faultFile))begin//Outer loop : Faults
		detected = 1'b0;
		status = $fscanf(faultFile,"s@%b\n  %s", stuckAtVal, wireName);
		faultInjection = 1'b1;
		// @(posedge clk);
		faultCount = faultCount + 1;
		testFile = $fopen("testPatterns.txt", "r");//Test set File
		while((!$feof(testFile))&(detected == 0)) begin //Inner Loop : TVs
			status = $fscanf(testFile,"%b\n", testVector);
				D = testVector;
				 @(posedge clk);
				
					if ( Q_Fout != Q_Gout) 
					begin
				detected = 1'b1;//in case of mismatch the fault is detected
				detectedFault = detectedFault + 1;//incrementing the number of detected faults
			end//if
		end //while eof test
		$fclose(testFile);
		faultInjection = 1'b0;
		#1;
	end//while eof faults
	// $fclose(logFile);
	$display("Collapsed Faults = %d\n , Detected Faults = %d\n", faultCount ,detectedFault );
	$display("coverage = %f\n", detectedFault/faultCount);
	// $fwrite(FCFile, "Fault Coverage %f \n", detectedFault/faultCount);
	// $fwrite(FCFile, "Simulation Time: %t \n", $time);
	// $fclose(FCFile);
	stopSimulation = 1'b1;
	#10;
	$stop;
end // end of initial

endmodule


