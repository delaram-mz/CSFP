`timescale 1 ns / 1ns
module SerialFS_TB ();
reg a, b, c, d, e;

wire y1_Fout, y2_Fout, y3_Fout;
wire y1_Gout, y2_Gout, y3_Gout;

reg detected;
integer logFile, testFile, faultFile, status, FCFile, faultsF, newfaultFile;
integer i;
real faultCount, detectedFault, TVnum;//number of collapsed faults // number of detected faults
reg[35:0] testVector;// applied test vector
// reg [8*20:1] wireName;// name of the current faulty wire
string wireName, wireName_prev;
string faultsPath, newfaultsPath, readIdx, writeIdx;


reg stuckAtVal, stuckAtVal_prev;
reg stopSimulation = 1'b0;
reg faultInjection = 1'b0;

mine FUT (
	.a(a), .b(b), .c(c), .d(d), .e(e), .y1(y1_Fout), .y2(y2_Fout), .y3(y3_Fout)
	);
mine GUT (
	.a(a), .b(b), .c(c), .d(d), .e(e), .y1(y1_Gout), .y2(y2_Gout), .y3(y3_Gout)
	);


// Enhanced Partial Fault Simulation with Fault Dropping
initial begin
	logFile = $fopen("FS_log.txt", "w");
	FCFile = $fopen("EnhancedPartialFS_FC.txt", "w");
	{a, b, c, d, e} = 0;

	TVnum = 0;
	faultCount = 22;
	detectedFault = 0;
	i = 0;
	TVnum = 0;
	$fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
	testFile = $fopen("testPatterns30.txt", "r");//Test set File
	while(!$feof(testFile)) begin
		status = $fscanf(testFile,"%b\n", testVector);
		$fwrite(logFile, "Test Vector number %d is:  %b \n",i, testVector);
		if (i==0) begin
			faultFile = $fopen("mine_faultlist.flt", "r");
		end
		else begin
			$sformat(readIdx, "%0d", i);
			faultsPath = {"faults/faultSet_",readIdx,".flt"};
			faultFile = $fopen(faultsPath, "r");
		end

		$sformat(writeIdx, "%0d", i+1);
		newfaultsPath = {"faults/faultSet_",writeIdx,".flt"};
		newfaultFile = $fopen(newfaultsPath, "w");
		while( !$feof(faultFile))begin
			detected = 1'b0;
			status = $fscanf(faultFile,"s@%b\n  %s", stuckAtVal, wireName);
			$display(status);
			// $fwrite(logFile, "Net to be faulty => %s to %b \n", wireName, stuckAtVal);
			if(status != -1) begin
				#2;
				{a, b, c, d, e} = testVector;
				#2;
				faultInjection = 1'b1;
				#90;
				if ({y1_Fout, y2_Fout, y3_Fout} != {y1_Gout, y2_Gout, y3_Gout}) 
				begin
					detected = 1'b1;//in case of mismatch the fault is detected
					detectedFault = detectedFault + 1;//incrementing the number of detected faults
					$fwrite(logFile, "Detected fault : s@%b  %s\n", stuckAtVal, wireName);
				end
				else begin
					// $fwrite(logFile, "Undetected fault:   %s to %b at %t\n", wireName, stuckAtVal, $time);
					// if ((wireName != wireName_prev) || (stuckAtVal != stuckAtVal_prev)) begin
						$fwrite(newfaultFile, "s@%b  %s\n", stuckAtVal, wireName);
					// end			
				end
				wireName_prev = wireName;
				stuckAtVal_prev = stuckAtVal;
				faultInjection = 1'b0;
				#2;
			end
		end
		$fclose(newfaultFile);
		$fclose(faultFile);
		i = i+1;
		$display("Test set size = %d\nCollapsed Faults = %d\nDetected Faults = %d\n", i, faultCount ,detectedFault );
		$display("coverage = %f\n", detectedFault/faultCount);
		$fwrite(FCFile, "Test set Size = %d;	Fault Coverage : %f \n", i, detectedFault/faultCount);
	end
	$fclose(testFile);
	$fclose(logFile);
	$fwrite(FCFile, "Simulation Time: %t \n", $time);
	$fclose(FCFile);
	// $display("Simulation Done at = %t\n", $time);
	stopSimulation = 1'b1;
	#10;
	$stop;
end

endmodule
