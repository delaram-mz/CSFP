`timescale 1 ns / 1ns
module SerialFS_TB ();
reg N1, N106, N113, N120, N127, N134, N141, 
	N148, N15, N155, N162, N169, N176, N183, 
	N190, N197, N204, N211, N218, N22, N225, 
	N226, N227, N228, N229, N230, N231, N232, 
	N233, N29, N36, N43, N50, N57, N64, N71, 
	N78, N8, N85, N92, N99;
 
wire N1324_Fout, N1325_Fout, N1326_Fout, N1327_Fout, N1328_Fout, N1329_Fout, N1330_Fout, N1331_Fout, N1332_Fout, N1333_Fout, N1334_Fout, N1335_Fout, N1336_Fout, N1337_Fout, N1338_Fout, N1339_Fout, N1340_Fout, N1341_Fout, N1342_Fout, N1343_Fout, N1344_Fout, N1345_Fout, N1346_Fout, N1347_Fout, N1348_Fout, N1349_Fout, N1350_Fout, N1351_Fout, N1352_Fout, N1353_Fout, N1354_Fout, N1355_Fout;
wire N1324_Gout, N1325_Gout, N1326_Gout, N1327_Gout, N1328_Gout, N1329_Gout, N1330_Gout, N1331_Gout, N1332_Gout, N1333_Gout, N1334_Gout, N1335_Gout, N1336_Gout, N1337_Gout, N1338_Gout, N1339_Gout, N1340_Gout, N1341_Gout, N1342_Gout, N1343_Gout, N1344_Gout, N1345_Gout, N1346_Gout, N1347_Gout, N1348_Gout, N1349_Gout, N1350_Gout, N1351_Gout, N1352_Gout, N1353_Gout, N1354_Gout, N1355_Gout;


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

c1355 FUT ( 
	.N1(N1), .N106(N106), .N113(N113), .N120(N120), .N127(N127), .N134(N134), .N141(N141), 
	.N148(N148), .N15(N15), .N155(N155), .N162(N162), .N169(N169), .N176(N176), .N183(N183), 
	.N190(N190), .N197(N197), .N204(N204), .N211(N211), .N218(N218), .N22(N22), .N225(N225), 
	.N226(N226), .N227(N227), .N228(N228), .N229(N229), .N230(N230), .N231(N231), .N232(N232), 
	.N233(N233), .N29(N29), .N36(N36), .N43(N43), .N50(N50), .N57(N57), .N64(N64), .N71(N71), 
	.N78(N78), .N8(N8), .N85(N85), .N92(N92), .N99(N99),
	.N1324(N1324_Fout), .N1325(N1325_Fout), .N1326(N1326_Fout), .N1327(N1327_Fout), 
	.N1328(N1328_Fout), .N1329(N1329_Fout), .N1330(N1330_Fout), .N1331(N1331_Fout), 
	.N1332(N1332_Fout), .N1333(N1333_Fout), .N1334(N1334_Fout), .N1335(N1335_Fout), 
	.N1336(N1336_Fout), .N1337(N1337_Fout), .N1338(N1338_Fout), .N1339(N1339_Fout), 
	.N1340(N1340_Fout), .N1341(N1341_Fout), .N1342(N1342_Fout), .N1343(N1343_Fout), 
	.N1344(N1344_Fout), .N1345(N1345_Fout), .N1346(N1346_Fout), .N1347(N1347_Fout), 
	.N1348(N1348_Fout), .N1349(N1349_Fout), .N1350(N1350_Fout), .N1351(N1351_Fout), 
	.N1352(N1352_Fout), .N1353(N1353_Fout), .N1354(N1354_Fout), .N1355(N1355_Fout)
);

c1355 GUT ( 
	.N1(N1), .N106(N106), .N113(N113), .N120(N120), .N127(N127), .N134(N134), .N141(N141), 
	.N148(N148), .N15(N15), .N155(N155), .N162(N162), .N169(N169), .N176(N176), .N183(N183), 
	.N190(N190), .N197(N197), .N204(N204), .N211(N211), .N218(N218), .N22(N22), .N225(N225), 
	.N226(N226), .N227(N227), .N228(N228), .N229(N229), .N230(N230), .N231(N231), .N232(N232), 
	.N233(N233), .N29(N29), .N36(N36), .N43(N43), .N50(N50), .N57(N57), .N64(N64), .N71(N71), 
	.N78(N78), .N8(N8), .N85(N85), .N92(N92), .N99(N99),
	.N1324(N1324_Gout), .N1325(N1325_Gout), .N1326(N1326_Gout), .N1327(N1327_Gout), 
	.N1328(N1328_Gout), .N1329(N1329_Gout), .N1330(N1330_Gout), .N1331(N1331_Gout), 
	.N1332(N1332_Gout), .N1333(N1333_Gout), .N1334(N1334_Gout), .N1335(N1335_Gout), 
	.N1336(N1336_Gout), .N1337(N1337_Gout), .N1338(N1338_Gout), .N1339(N1339_Gout), 
	.N1340(N1340_Gout), .N1341(N1341_Gout), .N1342(N1342_Gout), .N1343(N1343_Gout), 
	.N1344(N1344_Gout), .N1345(N1345_Gout), .N1346(N1346_Gout), .N1347(N1347_Gout), 
	.N1348(N1348_Gout), .N1349(N1349_Gout), .N1350(N1350_Gout), .N1351(N1351_Gout), 
	.N1352(N1352_Gout), .N1353(N1353_Gout), .N1354(N1354_Gout), .N1355(N1355_Gout)
);


// Enhanced Partial Fault Simulation with Fault Dropping
initial begin
	// logFile = $fopen("FS_log.txt", "w");
	FCFile = $fopen("EnhancedPartialFS_FC.txt", "w");
	{N1, N106, N113, N120, N127, N134, N141, N148, N15, N155, N162, N169, N176, N183, N190, N197, N204, N211, N218, N22, N225, N226, N227, N228, N229, N230, N231, N232, N233, N29, N36, N43, N50, N57, N64, N71, N78, N8, N85, N92, N99} = 0;
	TVnum = 0;
	faultCount = 1846;
	detectedFault = 0;
	i = 0;
	TVnum = 0;
	// $fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
	testFile = $fopen("testPatterns400.txt", "r");//Test set File
	while(!$feof(testFile)&&(i<400)) begin
		status = $fscanf(testFile,"%b\n", testVector);
		// $fwrite(logFile, "Test Vector number %d is:  %b \n",i, testVector);
		if (i==0) begin
			faultFile = $fopen("c1355_faultlist.flt", "r");
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
			faultInjection = 1'b1;
			#2;
			{N1, N106, N113, N120, N127, N134, N141, N148, N15, N155, N162, N169, N176, N183, N190, N197, N204, N211, N218, N22, N225, N226, N227, N228, N229, N230, N231, N232, N233, N29, N36, N43, N50, N57, N64, N71, N78, N8, N85, N92, N99} = testVector;
			#9;
			if ( {N1324_Fout, N1325_Fout, N1326_Fout, N1327_Fout, N1328_Fout, N1329_Fout, N1330_Fout, N1331_Fout, N1332_Fout, N1333_Fout, N1334_Fout, N1335_Fout, N1336_Fout, N1337_Fout, N1338_Fout, N1339_Fout, N1340_Fout, N1341_Fout, N1342_Fout, N1343_Fout, N1344_Fout, N1345_Fout, N1346_Fout, N1347_Fout, N1348_Fout, N1349_Fout, N1350_Fout, N1351_Fout, N1352_Fout, N1353_Fout, N1354_Fout, N1355_Fout} != {N1324_Gout, N1325_Gout, N1326_Gout, N1327_Gout, N1328_Gout, N1329_Gout, N1330_Gout, N1331_Gout, N1332_Gout, N1333_Gout, N1334_Gout, N1335_Gout, N1336_Gout, N1337_Gout, N1338_Gout, N1339_Gout, N1340_Gout, N1341_Gout, N1342_Gout, N1343_Gout, N1344_Gout, N1345_Gout, N1346_Gout, N1347_Gout, N1348_Gout, N1349_Gout, N1350_Gout, N1351_Gout, N1352_Gout, N1353_Gout, N1354_Gout, N1355_Gout}) 
			begin
				detected = 1'b1;//in case of mismatch the fault is detected
				detectedFault = detectedFault + 1;//incrementing the number of detected faults
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

// 		$display("Test set size = %d\n Collapsed Faults = %d\n Detected Faults = %d\n", i, faultCount ,detectedFault );
// 		$display("coverage = %f\n", detectedFault/faultCount);
// 		$fwrite(FCFile, "Test set Size = %d;	Fault Coverage : %f \n", i, detectedFault/faultCount);
// 		$fclose(faultFile);



// 		while( !$feof(faultFile))begin//Outer loop : Faults
// 			if (i==1)begin
// 				faultFile = $fopen("c1908_faultlist.flt", "r");
// 			end
// 			else begin
// 				$sformat(str_num, "%0d", i);
// 				faultsPath = {"faults/faultSet_",str_num,".flt"};
// 				faultFile = $fopen(faultsPath, "w");
// 			end
// 			detected = 1'b0;
// 			status = $fscanf(faultFile,"s@%b\n  %s", stuckAtVal, wireName);
// 			faultInjection = 1'b1;
// 			faultCount = faultCount + 1;
// 			testFile = $fopen("testPatterns500.txt", "r");//Test set File
// 			// while((!$feof(testFile))&(detected == 0)) begin
// 			while((TVnum<i)&(detected == 0)) begin
// 				#90;//Inner loop : applying test vectors per each fault until it is detected or test set is exhausted
// 				status = $fscanf(testFile,"%b\n", testVector);
// 				{N1, N10, N104, N13, N16, N19, N22, N25, N28, N31, N34, N37, N4, N40, N43, N46, N49, N53, N56, N60, N63, N66, N69, N7, N72, N76, N79, N82, N85, N88, N91, N94, N99} = testVector;
// 				#90;
// 				if ( {N2753_Gout, N2754_Gout, N2755_Gout, N2756_Gout, N2762_Gout, N2767_Gout, N2768_Gout, N2779_Gout, N2780_Gout, N2781_Gout, N2782_Gout, N2783_Gout, N2784_Gout, N2785_Gout, N2786_Gout, N2787_Gout, N2811_Gout, N2886_Gout, N2887_Gout, N2888_Gout, N2889_Gout, N2890_Gout, N2891_Gout, N2892_Gout, N2899_Gout} != {N2753_Fout, N2754_Fout, N2755_Fout, N2756_Fout, N2762_Fout, N2767_Fout, N2768_Fout, N2779_Fout, N2780_Fout, N2781_Fout, N2782_Fout, N2783_Fout, N2784_Fout, N2785_Fout, N2786_Fout, N2787_Fout, N2811_Fout, N2886_Fout, N2887_Fout, N2888_Fout, N2889_Fout, N2890_Fout, N2891_Fout, N2892_Fout, N2899_Fout}) begin
// 					detected = 1'b1;//in case of mismatch the fault is detected
// 					detectedFault = detectedFault + 1;//incrementing the number of detected faults
// 					$sformat(str_num, "%0d", i+1);
// 					faultsPath = {"faults/faultSet_",str_num,".flt"};
// 					newfaultsF = $fopen(faultsPath, "w");
// 					$fwrite(newfaultsF, "s@%b  %s\n", stuckAtVal, wireName);
// 				end//if
// 				TVnum = TVnum +1;
// 			end //while eof test
// 			$fclose(testFile);
// 			faultInjection = 1'b0;
// 			#90;
// 		end//while eof faults
// 		$fclose(newfaultsF);
// 		$display("Test set size = %d\n Collapsed Faults = %d\n Detected Faults = %d\n", i, faultCount ,detectedFault );
// 		$display("coverage = %f\n", detectedFault/faultCount);
// 		$fwrite(FCFile, "Test set Size = %d;	Fault Coverage : %f \n", i, detectedFault/faultCount);
// 		$fclose(faultFile);

// 	// end	
// 	$fclose(logFile);
// 	// $display("Collapsed Faults = %d\n , Detected Faults = %d\n", faultCount ,detectedFault );
// 	// $display("coverage = %f\n", detectedFault/faultCount);
// 	// $fwrite(FCFile, "Fault Coverage %f \n", detectedFault/faultCount);
// 	stopSimulation = 1'b0;
// 	$stop;
// end // end of initial

















// initial begin

// 	faultCount = 0;
// 	detectedFault = 0;
// 	logFile = $fopen("FS_log.txt", "w");
// 	FCFile = $fopen("FC_curve.txt", "w");
// 	faultFile = $fopen("c1908_faultlist.flt", "r");


// 	testFile = $fopen("testPatterns500.txt", "r");//Open Testset File
// 		// while((!$feof(testFile))&(detected == 0)) begin
// 	$fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
// 	while(!$feof(testFile)) begin
// 		detectedFault = 0;
// 		faultCount = 0;
// 		while( !$feof(faultFile))begin//Inner loop : Faults
// 			status = $fscanf(faultFile,"s@%b\n  %s", stuckAtVal, wireName);
// 			$fwrite(logFile, "Net to be faulty => %s to %b \n", wireName, stuckAtVal);
// 			faultInjection = 1'b1;
// 			faultCount = faultCount + 1;
// 			#50;
// 			status = $fscanf(testFile,"%b\n", testVector);
// 			{N1, N10, N104, N13, N16, N19, N22, N25, N28, N31, N34, N37, N4, N40, N43, N46, N49, N53, N56, N60, N63, N66, N69, N7, N72, N76, N79, N82, N85, N88, N91, N94, N99} = testVector;
// 			#90;
// 			if ( {N2753_Gout, N2754_Gout, N2755_Gout, N2756_Gout, N2762_Gout, N2767_Gout, N2768_Gout, N2779_Gout, N2780_Gout, N2781_Gout, N2782_Gout, N2783_Gout, N2784_Gout, N2785_Gout, N2786_Gout, N2787_Gout, N2811_Gout, N2886_Gout, N2887_Gout, N2888_Gout, N2889_Gout, N2890_Gout, N2891_Gout, N2892_Gout, N2899_Gout} != {N2753_Fout, N2754_Fout, N2755_Fout, N2756_Fout, N2762_Fout, N2767_Fout, N2768_Fout, N2779_Fout, N2780_Fout, N2781_Fout, N2782_Fout, N2783_Fout, N2784_Fout, N2785_Fout, N2786_Fout, N2787_Fout, N2811_Fout, N2886_Fout, N2887_Fout, N2888_Fout, N2889_Fout, N2890_Fout, N2891_Fout, N2892_Fout, N2899_Fout}) 
// 			begin
// 				detected = 1'b1;//in case of mismatch the fault is detected
// 				detectedFault = detectedFault + 1;//incrementing the number of detected faults
// 			end
// 			faultInjection = 1'b0;
// 			#50;
// 		end
// 		$display("Collapsed Faults = %d\n , Detected Faults = %d\n", faultCount ,detectedFault );
// 		$display("coverage = %f\n", detectedFault/faultCount);
// 		$fwrite(FCFile, "Fault Coverage %f \n", detectedFault/faultCount);
// 	end
// 	$fclose(logFile);
// 	stopSimulation = 1'b0;
// 	$stop;
// end
endmodule
