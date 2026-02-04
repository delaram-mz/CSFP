`timescale 1 ns / 1ns
module SerialFS_TB ();
reg N1, N2, N3, N6, N7;
wire N22_Fout, N23_Fout, N22_Gout, N23_Gout;

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

c17 FUT (.N1(N1), .N2(N2), .N3(N3), .N6(N6), .N7(N7), .N22(N22_Fout), .N23(N23_Fout));
c17 GUT (.N1(N1), .N2(N2), .N3(N3), .N6(N6), .N7(N7), .N22(N22_Gout), .N23(N23_Gout));



// Enhanced Partial Fault Simulation with Fault Dropping
initial begin
	{N1, N2, N3, N6, N7} = 0;			
	logFile = $fopen("FS_log.txt", "w");
	FCFile = $fopen("EnhancedPartialFS_FC.txt", "w");
	TVnum = 0;
	faultCount = 15;
	detectedFault = 0;
	i = 0;
	TVnum = 0;
	$fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
	testFile = $fopen("testPatterns.txt", "r");//Test set File
	while(!$feof(testFile)&&(i<40) && (detectedFault<faultCount)) begin
		status = $fscanf(testFile,"%b\n", testVector);
		$fwrite(logFile, "Test Vector number %d is:  %b \n",i, testVector);
		if (i==0) begin
			faultFile = $fopen("c17_faultlist.flt", "r");
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
			// $fwrite(logFile, "Net to be faulty => %s to %b \n", wireName, stuckAtVal);
			#2;
			{N1, N2, N3, N6, N7} = testVector;			
			#2;
			faultInjection = 1'b1;
			#9;
			if ( {N22_Gout, N23_Gout} != {N22_Fout, N23_Fout}) 
			begin
				detected = 1'b1;//in case of mismatch the fault is detected
				detectedFault = detectedFault + 1;//incrementing the number of detected faults
				$fwrite(logFile, "Detected fault : s@%b  %s\n", stuckAtVal, wireName);
			end
			else begin
				// $fwrite(logFile, "Undetected fault:   %s to %b at %t\n", wireName, stuckAtVal, $time);
				if ((wireName != wireName_prev) || (stuckAtVal != stuckAtVal_prev)) begin
					$fwrite(newfaultFile, "s@%b  %s\n", stuckAtVal, wireName);
				end
			end
			wireName_prev = wireName;
			stuckAtVal_prev = stuckAtVal;
			faultInjection = 1'b0;
			#2;
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


// initial begin
// 	// Testing
// 	// N1 = 1'b0;
// 	// N2 = 1'b0;
// 	// N3 = 1'b0;
// 	// N6 = 1'b0;
// 	// N7 = 1'b0;
// 	// #10;
// 	// N1 = 1'b1;
// 	// N2 = 1'b1;
// 	// N3 = 1'b1;
// 	// N6 = 1'b1;
// 	// N7 = 1'b1;
// 	// #10;
	

// 	faultCount = 0;
// 	detectedFault = 0;
// 	logFile = $fopen("FS_log.txt", "w");
// 	// faultFile = $fopen("c17_faultlist.flt", "w");//create a file for faults
// 	// $FaultCollapsing(SerialFS_TB.FUT, "c7552.flt");//using a pli function generate collpsed faults
// 	// $fclose(faultFile);
// 	faultFile = $fopen("c17_faultlist.flt", "r");
// 	$fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
// 	while( !$feof(faultFile))begin//Outer loop : Faults
// 		detected = 1'b0;
// 		status = $fscanf(faultFile,"%s s@%b\n", wireName, stuckAtVal);
// 		$fwrite(logFile, "Net to be faulty => %s to %b \n", wireName, stuckAtVal);
// 		faultInjection = 1'b1;
// 		faultCount = faultCount + 1;
// 	// 	$InjectFault ( wireName , stuckAtVal);
// 		testFile = $fopen("testPatterns32.txt", "r");//Test set File
// 		while((!$feof(testFile))&(detected == 0)) begin
// 			#30;//Inner loop : applying test vectors per each fault until it is detected or test set is exhausted
// 			status = $fscanf(testFile,"%b\n", testVector);
// 	// 		//$display("testVec = %b\n", testVector);//current test vector
// 			{N1, N2, N3, N6, N7} = testVector;
// 			#60;
// 			if ( {N22_Gout, N23_Gout} != {N22_Fout, N23_Fout}) begin
// 				detected = 1'b1;//in case of mismatch the fault is detected
// 				detectedFault = detectedFault + 1;//incrementing the number of detected faults
// 				$display("Fault:%s SA%b detecteds at %t.",wireName, stuckAtVal, $time);
// 			end//if
// 		end //while eof test
// 		faultInjection = 1'b0;
// 	// 	$RemoveFault(wireName);
// 		#30;
// 	// 	faultCount = faultCount+ 1;
// 	end//while eof faults
// 	$fclose(logFile);
// 	$display("Collapsed Faults = %d\n , Detected Faults = %d\n", faultCount ,detectedFault );
// 	$display("coverage = %f\n", detectedFault/faultCount);
// 	stopSimulation = 1'b0;
// 	$stop;
// end // end of initial
endmodule