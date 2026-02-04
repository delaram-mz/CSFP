`timescale 1 ns / 1ns
module SerialFS_TB ();
reg N1, N107, N116, N124, N125, N128, N13, 
	N132, N137, N143, N150, N159, N169, N179, 
	N190, N20, N200, N213, N222, N223, N226, 
	N232, N238, N244, N250, N257, N264, N270, 
	N274, N283, N294, N303, N311, N317, N322, 
	N326, N329, N33, N330, N343, N349, N350, 
	N41, N45, N50, N58, N68, N77, N87, N97;
 
wire N1713_Fout, N1947_Fout, N3195_Fout, N3833_Fout,
	N3987_Fout, N4028_Fout, N4145_Fout, N4589_Fout, 
	N4667_Fout, N4815_Fout, N4944_Fout, N5002_Fout, 
	N5045_Fout, N5047_Fout, N5078_Fout, N5102_Fout, 
	N5120_Fout, N5121_Fout, N5192_Fout, N5231_Fout, 
	N5360_Fout, N5361_Fout;
wire N1713_Gout, N1947_Gout, N3195_Gout, N3833_Gout, 
	N3987_Gout, N4028_Gout, N4145_Gout, N4589_Gout, 
	N4667_Gout, N4815_Gout, N4944_Gout, N5002_Gout, 
	N5045_Gout, N5047_Gout, N5078_Gout, N5102_Gout, 
	N5120_Gout, N5121_Gout, N5192_Gout, N5231_Gout, 
	N5360_Gout, N5361_Gout;


reg detected;
integer logFile, testFile, faultFile, status, FCFile, faultsF, newfaultFile;
integer i;
real faultCount, detectedFault, TVnum;//number of collapsed faults // number of detected faults
reg[49:0] testVector;// applied test vector
// reg [8*20:1] wireName;// name of the current faulty wire
string wireName, wireName_prev;
string faultsPath, newfaultsPath, readIdx, writeIdx;

reg stuckAtVal, stuckAtVal_prev;
reg stopSimulation = 1'b0;
reg faultInjection = 1'b0;

c3540 FUT ( 
	.N1(N1), .N107(N107), .N116(N116), .N124(N124), .N125(N125), .N128(N128), .N13(N13), 
	.N132(N132), .N137(N137), .N143(N143), .N150(N150), .N159(N159), .N169(N169), .N179(N179), 
	.N190(N190), .N20(N20), .N200(N200), .N213(N213), .N222(N222), .N223(N223), .N226(N226), 
	.N232(N232), .N238(N238), .N244(N244), .N250(N250), .N257(N257), .N264(N264), .N270(N270), 
	.N274(N274), .N283(N283), .N294(N294), .N303(N303), .N311(N311), .N317(N317), .N322(N322), 
	.N326(N326), .N329(N329), .N33(N33), .N330(N330), .N343(N343), .N349(N349), .N350(N350), 
	.N41(N41), .N45(N45), .N50(N50), .N58(N58), .N68(N68), .N77(N77), .N87(N87), .N97(N97),
	.N1713(N1713_Fout), .N1947(N1947_Fout), .N3195(N3195_Fout), .N3833(N3833_Fout),
	.N3987(N3987_Fout), .N4028(N4028_Fout), .N4145(N4145_Fout), .N4589(N4589_Fout), 
	.N4667(N4667_Fout), .N4815(N4815_Fout), .N4944(N4944_Fout), .N5002(N5002_Fout), 
	.N5045(N5045_Fout), .N5047(N5047_Fout), .N5078(N5078_Fout), .N5102(N5102_Fout), 
	.N5120(N5120_Fout), .N5121(N5121_Fout), .N5192(N5192_Fout), .N5231(N5231_Fout), 
	.N5360(N5360_Fout), .N5361(N5361_Fout));

c3540 GUT ( 
	.N1(N1), .N107(N107), .N116(N116), .N124(N124), .N125(N125), .N128(N128), .N13(N13), 
	.N132(N132), .N137(N137), .N143(N143), .N150(N150), .N159(N159), .N169(N169), .N179(N179), 
	.N190(N190), .N20(N20), .N200(N200), .N213(N213), .N222(N222), .N223(N223), .N226(N226), 
	.N232(N232), .N238(N238), .N244(N244), .N250(N250), .N257(N257), .N264(N264), .N270(N270), 
	.N274(N274), .N283(N283), .N294(N294), .N303(N303), .N311(N311), .N317(N317), .N322(N322), 
	.N326(N326), .N329(N329), .N33(N33), .N330(N330), .N343(N343), .N349(N349), .N350(N350), 
	.N41(N41), .N45(N45), .N50(N50), .N58(N58), .N68(N68), .N77(N77), .N87(N87), .N97(N97),
	.N1713(N1713_Gout), .N1947(N1947_Gout), .N3195(N3195_Gout), .N3833(N3833_Gout),
	.N3987(N3987_Gout), .N4028(N4028_Gout), .N4145(N4145_Gout), .N4589(N4589_Gout), 
	.N4667(N4667_Gout), .N4815(N4815_Gout), .N4944(N4944_Gout), .N5002(N5002_Gout), 
	.N5045(N5045_Gout), .N5047(N5047_Gout), .N5078(N5078_Gout), .N5102(N5102_Gout), 
	.N5120(N5120_Gout), .N5121(N5121_Gout), .N5192(N5192_Gout), .N5231(N5231_Gout), 
	.N5360(N5360_Gout), .N5361(N5361_Gout));


// // Enhanced Partial Fault Simulation with Fault Dropping
// initial begin
// 	{N1, N107, N116, N124, N125, N128, N13, 
// 	N132, N137, N143, N150, N159, N169, N179, 
// 	N190, N20, N200, N213, N222, N223, N226, 
// 	N232, N238, N244, N250, N257, N264, N270, 
// 	N274, N283, N294, N303, N311, N317, N322, 
// 	N326, N329, N33, N330, N343, N349, N350, 
// 	N41, N45, N50, N58, N68, N77, N87, N97} = 0;
// 	logFile = $fopen("FS_log.txt", "w");
// 	FCFile = $fopen("EnhancedPartialFS_FC.txt", "w");
// 	// FCFile = $fopen("EnhancedPartialFS_FC.txt", "w");

// 	TVnum = 0;
// 	faultCount = 3130;
// 	detectedFault = 0;
// 	i = 0;
// 	TVnum = 0;
// 	$fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
// 	testFile = $fopen("testPatterns.txt", "r");//Test set File
// 	while(!$feof(testFile)) begin
// 		status = $fscanf(testFile,"%b\n", testVector);
// 		$fwrite(logFile, "Test Vector number %d is:  %b \n",i, testVector);
// 		if (i==0) begin
// 			faultFile = $fopen("c3540_faultlist.flt", "r");
// 		end
// 		else begin
// 			$sformat(readIdx, "%0d", i);
// 			faultsPath = {"faults/faultSet_",readIdx,".flt"};
// 			faultFile = $fopen(faultsPath, "r");
// 		end

// 		$sformat(writeIdx, "%0d", i+1);
// 		newfaultsPath = {"faults/faultSet_",writeIdx,".flt"};
// 		newfaultFile = $fopen(newfaultsPath, "w");
// 		while( !$feof(faultFile))begin
// 			detected = 1'b0;
// 			status = $fscanf(faultFile,"s@%b\n  %s", stuckAtVal, wireName);
// 			// $fwrite(logFile, "Net to be faulty => %s to %b \n", wireName, stuckAtVal);
// 			if(status != -1) begin
// 				#2;
// 				{N1, N107, N116, N124, N125, N128, N13, 
// 				N132, N137, N143, N150, N159, N169, N179, 
// 				N190, N20, N200, N213, N222, N223, N226, 
// 				N232, N238, N244, N250, N257, N264, N270, 
// 				N274, N283, N294, N303, N311, N317, N322, 
// 				N326, N329, N33, N330, N343, N349, N350, 
// 				N41, N45, N50, N58, N68, N77, N87, N97} = testVector;
// 				#2;
// 				faultInjection = 1'b1;
// 				#9;
// 				if ( {N1713_Fout, N1947_Fout, N3195_Fout, N3833_Fout,
// 					N3987_Fout, N4028_Fout, N4145_Fout, N4589_Fout, 
// 					N4667_Fout, N4815_Fout, N4944_Fout, N5002_Fout, 
// 					N5045_Fout, N5047_Fout, N5078_Fout, N5102_Fout, 
// 					N5120_Fout, N5121_Fout, N5192_Fout, N5231_Fout, 
// 					N5360_Fout, N5361_Fout} != {N1713_Gout, N1947_Gout, N3195_Gout, N3833_Gout, 
// 					N3987_Gout, N4028_Gout, N4145_Gout, N4589_Gout, 
// 					N4667_Gout, N4815_Gout, N4944_Gout, N5002_Gout, 
// 					N5045_Gout, N5047_Gout, N5078_Gout, N5102_Gout, 
// 					N5120_Gout, N5121_Gout, N5192_Gout, N5231_Gout, 
// 					N5360_Gout, N5361_Gout}) 
// 				begin
// 					detected = 1'b1;//in case of mismatch the fault is detected
// 					detectedFault = detectedFault + 1;//incrementing the number of detected faults
// 					$fwrite(logFile, "Detected fault : s@%b  %s\n", stuckAtVal, wireName);
// 				end
// 				else begin
// 					// $fwrite(logFile, "Undetected fault:   %s to %b at %t\n", wireName, stuckAtVal, $time);
// 					// if ((wireName != wireName_prev) || (stuckAtVal != stuckAtVal_prev)) begin
// 						$fwrite(newfaultFile, "s@%b  %s\n", stuckAtVal, wireName);
// 					// end
// 				end
// 				wireName_prev = wireName;
// 				stuckAtVal_prev = stuckAtVal;
// 				faultInjection = 1'b0;
// 				#2;
// 			end
// 		end
// 		$fclose(newfaultFile);
// 		$fclose(faultFile);
// 		i = i+1;
// 		$display("Test set size = %d\nCollapsed Faults = %d\nDetected Faults = %d\n", i, faultCount ,detectedFault );
// 		$display("coverage = %f\n", detectedFault/faultCount);
// 		$fwrite(FCFile, "Test set Size = %d;	Fault Coverage : %f \n", i, detectedFault/faultCount);
// 	end
// 	$fclose(testFile);
// 	$fclose(logFile);
// 	$fwrite(FCFile, "Simulation Time: %t \n", $time);
// 	$fclose(FCFile);
// 	// $display("Simulation Done at = %t\n", $time);
// 	stopSimulation = 1'b1;
// 	#10;
// 	$stop;
// end
// endmodule





// Typical Fault Simulation
initial begin
	faultCount = 0;
	detectedFault = 0;
	// logFile = $fopen("FS_log.txt", "w");
	// FCFile = $fopen("typicalFS_FC.txt", "w");
	faultFile = $fopen("c3540_faultlist.flt", "r");
	while(!$feof(faultFile))begin//Outer loop : Faults
		detected = 1'b0;
		status = $fscanf(faultFile,"s@%b\n  %s", stuckAtVal, wireName);
		faultInjection = 1'b1;
		#1;
		faultCount = faultCount + 1;
		testFile = $fopen("testPatterns.txt", "r");//Test set File
		while((!$feof(testFile))&(detected == 0)) begin //Inner Loop : TVs
			status = $fscanf(testFile,"%b\n", testVector);
				{N1, N107, N116, N124, N125, N128, N13, 
				N132, N137, N143, N150, N159, N169, N179, 
				N190, N20, N200, N213, N222, N223, N226, 
				N232, N238, N244, N250, N257, N264, N270, 
				N274, N283, N294, N303, N311, N317, N322, 
				N326, N329, N33, N330, N343, N349, N350, 
				N41, N45, N50, N58, N68, N77, N87, N97} = testVector;
							#1;
					if ( {N1713_Fout, N1947_Fout, N3195_Fout, N3833_Fout,
					N3987_Fout, N4028_Fout, N4145_Fout, N4589_Fout, 
					N4667_Fout, N4815_Fout, N4944_Fout, N5002_Fout, 
					N5045_Fout, N5047_Fout, N5078_Fout, N5102_Fout, 
					N5120_Fout, N5121_Fout, N5192_Fout, N5231_Fout, 
					N5360_Fout, N5361_Fout} != {N1713_Gout, N1947_Gout, N3195_Gout, N3833_Gout, 
					N3987_Gout, N4028_Gout, N4145_Gout, N4589_Gout, 
					N4667_Gout, N4815_Gout, N4944_Gout, N5002_Gout, 
					N5045_Gout, N5047_Gout, N5078_Gout, N5102_Gout, 
					N5120_Gout, N5121_Gout, N5192_Gout, N5231_Gout, 
					N5360_Gout, N5361_Gout}) 
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



