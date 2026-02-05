`timescale 1 ns / 1ns
module SerialFS_TB ();
reg N1, N101, N105, N109, N113, N117, 
	N121, N125, N129, N13, N130, N131, 
	N132, N133, N134, N135, N136, N137, 
	N17, N21, N25, N29, N33, N37, N41, N45, 
	N49, N5, N53, N57, N61, N65, N69, N73, 
	N77, N81, N85, N89, N9, N93, N97;

wire N724_Fout, N725_Fout, N726_Fout, N727_Fout, N728_Fout, N729_Fout, N730_Fout, N731_Fout, N732_Fout, N733_Fout, N734_Fout, N735_Fout, N736_Fout, N737_Fout, N738_Fout, N739_Fout, N740_Fout, N741_Fout, N742_Fout, N743_Fout, N744_Fout, N745_Fout, N746_Fout, N747_Fout, N748_Fout, N749_Fout, N750_Fout, N751_Fout, N752_Fout, N753_Fout, N754_Fout, N755_Fout;
wire N724_Gout, N725_Gout, N726_Gout, N727_Gout, N728_Gout, N729_Gout, N730_Gout, N731_Gout, N732_Gout, N733_Gout, N734_Gout, N735_Gout, N736_Gout, N737_Gout, N738_Gout, N739_Gout, N740_Gout, N741_Gout, N742_Gout, N743_Gout, N744_Gout, N745_Gout, N746_Gout, N747_Gout, N748_Gout, N749_Gout, N750_Gout, N751_Gout, N752_Gout, N753_Gout, N754_Gout, N755_Gout;

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

c499 FUT ( .N1(N1), .N101(N101), .N105(N105), .N109(N109), .N113(N113), .N117(N117), 
	.N121(N121), .N125(N125), .N129(N129), .N13(N13), .N130(N130), .N131(N131), 
	.N132(N132), .N133(N133), .N134(N134), .N135(N135), .N136(N136), .N137(N137), 
	.N17(N17), .N21(N21), .N25(N25), .N29(N29), .N33(N33), .N37(N37), .N41(N41), .N45(N45), 
	.N49(N49), .N5(N5), .N53(N53), .N57(N57), .N61(N61), .N65(N65), .N69(N69), .N73(N73), 
	.N77(N77), .N81(N81), .N85(N85), .N89(N89), .N9(N9), .N93(N93), .N97(N97),
	.N724(N724_Fout), .N725(N725_Fout), .N726(N726_Fout), .N727(N727_Fout), .N728(N728_Fout), .N729(N729_Fout), .N730(N730_Fout), 
	.N731(N731_Fout), .N732(N732_Fout), .N733(N733_Fout), .N734(N734_Fout), .N735(N735_Fout), .N736(N736_Fout), .N737(N737_Fout), 
	.N738(N738_Fout), .N739(N739_Fout), .N740(N740_Fout), .N741(N741_Fout), .N742(N742_Fout), .N743(N743_Fout), .N744(N744_Fout), 
	.N745(N745_Fout), .N746(N746_Fout), .N747(N747_Fout), .N748(N748_Fout), .N749(N749_Fout), .N750(N750_Fout), .N751(N751_Fout), 
	.N752(N752_Fout), .N753(N753_Fout), .N754(N754_Fout), .N755(N755_Fout)
);

c499 GUT ( .N1(N1), .N101(N101), .N105(N105), .N109(N109), .N113(N113), .N117(N117), 
	.N121(N121), .N125(N125), .N129(N129), .N13(N13), .N130(N130), .N131(N131), 
	.N132(N132), .N133(N133), .N134(N134), .N135(N135), .N136(N136), .N137(N137), 
	.N17(N17), .N21(N21), .N25(N25), .N29(N29), .N33(N33), .N37(N37), .N41(N41), .N45(N45), 
	.N49(N49), .N5(N5), .N53(N53), .N57(N57), .N61(N61), .N65(N65), .N69(N69), .N73(N73), 
	.N77(N77), .N81(N81), .N85(N85), .N89(N89), .N9(N9), .N93(N93), .N97(N97),
	.N724(N724_Gout), .N725(N725_Gout), .N726(N726_Gout), .N727(N727_Gout), .N728(N728_Gout), .N729(N729_Gout), .N730(N730_Gout), 
	.N731(N731_Gout), .N732(N732_Gout), .N733(N733_Gout), .N734(N734_Gout), .N735(N735_Gout), .N736(N736_Gout), .N737(N737_Gout), 
	.N738(N738_Gout), .N739(N739_Gout), .N740(N740_Gout), .N741(N741_Gout), .N742(N742_Gout), .N743(N743_Gout), .N744(N744_Gout), 
	.N745(N745_Gout), .N746(N746_Gout), .N747(N747_Gout), .N748(N748_Gout), .N749(N749_Gout), .N750(N750_Gout), .N751(N751_Gout), 
	.N752(N752_Gout), .N753(N753_Gout), .N754(N754_Gout), .N755(N755_Gout)
);


// // Typical Fault Simulation
// initial begin
// 	faultCount = 0;
// 	detectedFault = 0;
// 	// logFile = $fopen("FS_log.txt", "w");
// 	FCFile = $fopen("typicalFS_FC.txt", "w");
// 	faultFile = $fopen("c499_faultlist.flt", "r");
// 	while(!$feof(faultFile))begin//Outer loop : Faults
// 		detected = 1'b0;
// 		status = $fscanf(faultFile,"s@%b\n  %s", stuckAtVal, wireName);
// 		faultInjection = 1'b1;
// 		#20;
// 		faultCount = faultCount + 1;
// 		testFile = $fopen("testPatterns.txt", "r");//Test set File
// 		while((!$feof(testFile))&(detected == 0)) begin //Inner Loop : TVs
// 			status = $fscanf(testFile,"%b\n", testVector);
// 			{N1, N101, N105, N109, N113, N117, N121, N125, N129, N13, N130, N131, N132, N133, N134, N135, N136, N137, N17, N21, N25, N29, N33, N37, N41, N45, N49, N5, N53, N57, N61, N65, N69, N73, N77, N81, N85, N89, N9, N93, N97} = testVector;
// 			#90;
// 			if ( {N724_Gout, N725_Gout, N726_Gout, N727_Gout, N728_Gout, N729_Gout, N730_Gout, N731_Gout, N732_Gout, N733_Gout, N734_Gout, N735_Gout, N736_Gout, N737_Gout, N738_Gout, N739_Gout, N740_Gout, N741_Gout, N742_Gout, N743_Gout, N744_Gout, N745_Gout, N746_Gout, N747_Gout, N748_Gout, N749_Gout, N750_Gout, N751_Gout, N752_Gout, N753_Gout, N754_Gout, N755_Gout} != {N724_Fout, N725_Fout, N726_Fout, N727_Fout, N728_Fout, N729_Fout, N730_Fout, N731_Fout, N732_Fout, N733_Fout, N734_Fout, N735_Fout, N736_Fout, N737_Fout, N738_Fout, N739_Fout, N740_Fout, N741_Fout, N742_Fout, N743_Fout, N744_Fout, N745_Fout, N746_Fout, N747_Fout, N748_Fout, N749_Fout, N750_Fout, N751_Fout, N752_Fout, N753_Fout, N754_Fout, N755_Fout}) begin
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


// // Partial Fault Simulation
// initial begin

// 	faultCount = 0;
// 	detectedFault = 0;
// 	logFile = $fopen("FS_log.txt", "w");
// 	FCFile = $fopen("FC_curve.txt", "w");
// 	TVnum = 0;
// 	// faultFile = $fopen("c17_faultlist.flt", "w");//create a file for faults
// 	// $FaultCollapsing(SerialFS_TB.FUT, "c7552.flt");//using a pli function generate collpsed faults
// 	// $fclose(faultFile);
// 	$fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
// 	for (i = 1; i < 35; i = i + 1) begin
// 		faultFile = $fopen("c1908_faultlist.flt", "r");
// 		faultCount = 0;
// 		detectedFault = 0;
// 		while( !$feof(faultFile))begin//Outer loop : Faults
// 			TVnum = 0;
// 			detected = 1'b0;
// 			// status = $fscanf(faultFile,"%s s@%b\n", wireName, stuckAtVal);
// 			status = $fscanf(faultFile,"s@%b\n  %s", stuckAtVal, wireName);

// 			// $fwrite(logFile, "Net to be faulty => %s to %b \n", wireName, stuckAtVal);
// 			faultInjection = 1'b1;
// 			faultCount = faultCount + 1;
// 		// 	$InjectFault ( wireName , stuckAtVal);
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
// 				end//if
// 				TVnum = TVnum +1;
// 			end //while eof test
// 			$fclose(testFile);
// 			faultInjection = 1'b0;
// 			#90;
// 		end//while eof faults
// 		$display("Test set size = %d\n Collapsed Faults = %d\n Detected Faults = %d\n", i, faultCount ,detectedFault );
// 		$display("coverage = %f\n", detectedFault/faultCount);
// 		$fwrite(FCFile, "Test set Size = %d;	Fault Coverage : %f \n", i, detectedFault/faultCount);
// 		$fclose(faultFile);
// 	end	
// 	$fclose(logFile);
// 	// $display("Collapsed Faults = %d\n , Detected Faults = %d\n", faultCount ,detectedFault );
// 	// $display("coverage = %f\n", detectedFault/faultCount);
// 	// $fwrite(FCFile, "Fault Coverage %f \n", detectedFault/faultCount);
// 	stopSimulation = 1'b0;
// 	$stop;
// end // end of initial





// Enhanced Partial Fault Simulation with Fault Dropping
initial begin
	// logFile = $fopen("FS_log.txt", "w");
	FCFile = $fopen("EnhancedPartialFS_FC.txt", "w");
	TVnum = 0;
	faultCount = 4276;
	detectedFault = 0;
	i = 0;
	TVnum = 0;
	// $fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
	testFile = $fopen("testPatterns250.txt", "r");//Test set File
	while(!$feof(testFile)&&(i<250)) begin
		status = $fscanf(testFile,"%b\n", testVector);
		// $fwrite(logFile, "Test Vector number %d is:  %b \n",i, testVector);
		if (i==0) begin
			faultFile = $fopen("c499_faultlist.flt", "r");
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
			#20;
			{N1, N101, N105, N109, N113, N117, N121, N125, N129, N13, N130, N131, N132, N133, N134, N135, N136, N137, N17, N21, N25, N29, N33, N37, N41, N45, N49, N5, N53, N57, N61, N65, N69, N73, N77, N81, N85, N89, N9, N93, N97} = testVector;
			#90;
			if ( {N724_Gout, N725_Gout, N726_Gout, N727_Gout, N728_Gout, N729_Gout, N730_Gout, N731_Gout, N732_Gout, N733_Gout, N734_Gout, N735_Gout, N736_Gout, N737_Gout, N738_Gout, N739_Gout, N740_Gout, N741_Gout, N742_Gout, N743_Gout, N744_Gout, N745_Gout, N746_Gout, N747_Gout, N748_Gout, N749_Gout, N750_Gout, N751_Gout, N752_Gout, N753_Gout, N754_Gout, N755_Gout} != {N724_Fout, N725_Fout, N726_Fout, N727_Fout, N728_Fout, N729_Fout, N730_Fout, N731_Fout, N732_Fout, N733_Fout, N734_Fout, N735_Fout, N736_Fout, N737_Fout, N738_Fout, N739_Fout, N740_Fout, N741_Fout, N742_Fout, N743_Fout, N744_Fout, N745_Fout, N746_Fout, N747_Fout, N748_Fout, N749_Fout, N750_Fout, N751_Fout, N752_Fout, N753_Fout, N754_Fout, N755_Fout}) 
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
			#20;
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
