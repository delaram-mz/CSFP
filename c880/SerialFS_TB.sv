`timescale 1 ns / 1ns
module SerialFS_TB ();
reg N1, N101, N106, N111, N116, N121, N126, N13, 
 N130, N135, N138, N143, N146, N149, N152, N153, 
 N156, N159, N165, N17, N171, N177, N183, N189, 
 N195, N201, N207, N210, N219, N228, N237, N246, 
 N255, N259, N26, N260, N261, N267, N268, N29, 
 N36, N42, N51, N55, N59, N68, N72, N73, N74, 
 N75, N8, N80, N85, N86, N87, N88, N89, N90, N91, N96;

wire N388_Fout, N389_Fout, N390_Fout, N391_Fout, N418_Fout, N419_Fout, N420_Fout, N421_Fout, N422_Fout, N423_Fout, N446_Fout, N447_Fout, N448_Fout, N449_Fout, N450_Fout, N767_Fout, N768_Fout, N850_Fout, N863_Fout, N864_Fout, N865_Fout, N866_Fout, N874_Fout, N878_Fout, N879_Fout, N880_Fout;
wire N388_Gout, N389_Gout, N390_Gout, N391_Gout, N418_Gout, N419_Gout, N420_Gout, N421_Gout, N422_Gout, N423_Gout, N446_Gout, N447_Gout, N448_Gout, N449_Gout, N450_Gout, N767_Gout, N768_Gout, N850_Gout, N863_Gout, N864_Gout, N865_Gout, N866_Gout, N874_Gout, N878_Gout, N879_Gout, N880_Gout;

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

c880 FUT ( 
	.N1(N1), .N101(N101), .N106(N106), .N111(N111), .N116(N116), .N121(N121), .N126(N126), .N13(N13), 
 .N130(N130), .N135(N135), .N138(N138), .N143(N143), .N146(N146), .N149(N149), .N152(N152), .N153(N153), 
 .N156(N156), .N159(N159), .N165(N165), .N17(N17), .N171(N171), .N177(N177), .N183(N183), .N189(N189), 
 .N195(N195), .N201(N201), .N207(N207), .N210(N210), .N219(N219), .N228(N228), .N237(N237), .N246(N246), 
 .N255(N255), .N259(N259), .N26(N26), .N260(N260), .N261(N261), .N267(N267), .N268(N268), .N29(N29), 
 .N36(N36), .N42(N42), .N51(N51), .N55(N55), .N59(N59), .N68(N68), .N72(N72), .N73(N73), .N74(N74), 
 .N75(N75), .N8(N8), .N80(N80), .N85(N85), .N86(N86), .N87(N87), .N88(N88), .N89(N89), .N90(N90), .N91(N91), .N96(N96),
	.N388(N388_Fout), .N389(N389_Fout), .N390(N390_Fout), .N391(N391_Fout), .N418(N418_Fout), 
	.N419(N419_Fout), .N420(N420_Fout), .N421(N421_Fout), .N422(N422_Fout), .N423(N423_Fout), 
	.N446(N446_Fout), .N447(N447_Fout), .N448(N448_Fout), .N449(N449_Fout), .N450(N450_Fout), 
	.N767(N767_Fout), .N768(N768_Fout), .N850(N850_Fout), .N863(N863_Fout), .N864(N864_Fout), 
	.N865(N865_Fout), .N866(N866_Fout), .N874(N874_Fout), .N878(N878_Fout), .N879(N879_Fout), 
	.N880(N880_Fout)
);

c880 GUT ( .N1(N1), .N101(N101), .N106(N106), .N111(N111), .N116(N116), .N121(N121), .N126(N126), .N13(N13), 
 .N130(N130), .N135(N135), .N138(N138), .N143(N143), .N146(N146), .N149(N149), .N152(N152), .N153(N153), 
 .N156(N156), .N159(N159), .N165(N165), .N17(N17), .N171(N171), .N177(N177), .N183(N183), .N189(N189), 
 .N195(N195), .N201(N201), .N207(N207), .N210(N210), .N219(N219), .N228(N228), .N237(N237), .N246(N246), 
 .N255(N255), .N259(N259), .N26(N26), .N260(N260), .N261(N261), .N267(N267), .N268(N268), .N29(N29), 
 .N36(N36), .N42(N42), .N51(N51), .N55(N55), .N59(N59), .N68(N68), .N72(N72), .N73(N73), .N74(N74), 
 .N75(N75), .N8(N8), .N80(N80), .N85(N85), .N86(N86), .N87(N87), .N88(N88), .N89(N89), .N90(N90), .N91(N91), .N96(N96),
	.N388(N388_Gout), .N389(N389_Gout), .N390(N390_Gout), .N391(N391_Gout), .N418(N418_Gout), 
	.N419(N419_Gout), .N420(N420_Gout), .N421(N421_Gout), .N422(N422_Gout), .N423(N423_Gout), 
	.N446(N446_Gout), .N447(N447_Gout), .N448(N448_Gout), .N449(N449_Gout), .N450(N450_Gout), 
	.N767(N767_Gout), .N768(N768_Gout), .N850(N850_Gout), .N863(N863_Gout), .N864(N864_Gout), 
	.N865(N865_Gout), .N866(N866_Gout), .N874(N874_Gout), .N878(N878_Gout), .N879(N879_Gout), 
	.N880(N880_Gout)
);


// // Typical Fault Simulation
// initial begin
// 	faultCount = 0;
// 	detectedFault = 0;
// 	// logFile = $fopen("FS_log.txt", "w");
// 	FCFile = $fopen("typicalFS_FC.txt", "w");
// 	faultFile = $fopen("c880_faultlist.flt", "r");
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
	faultCount = 2492;
	detectedFault = 0;
	i = 0;
	TVnum = 0;
	// $fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
	testFile = $fopen("testPatterns300.txt", "r");//Test set File
	while(!$feof(testFile)&&(i<300)) begin
		status = $fscanf(testFile,"%b\n", testVector);
		// $fwrite(logFile, "Test Vector number %d is:  %b \n",i, testVector);
		if (i==0) begin
			faultFile = $fopen("c880_faultlist.flt", "r");
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
			if(status != -1) begin
				faultInjection = 1'b1;
				#2;
				{N1, N101, N106, N111, N116, N121, N126, N13, N130, N135, N138, N143, N146, N149, N152, N153, N156, N159, N165, N17, N171, N177, N183, N189, N195, N201, N207, N210, N219, N228, N237, N246, N255, N259, N26, N260, N261, N267, N268, N29, N36, N42, N51, N55, N59, N68, N72, N73, N74, N75, N8, N80, N85, N86, N87, N88, N89, N90, N91, N96} = testVector;
				#9;
				if ( {N388_Fout, N389_Fout, N390_Fout, N391_Fout, N418_Fout, N419_Fout, N420_Fout, N421_Fout, N422_Fout, N423_Fout, N446_Fout, N447_Fout, N448_Fout, N449_Fout, N450_Fout, N767_Fout, N768_Fout, N850_Fout, N863_Fout, N864_Fout, N865_Fout, N866_Fout, N874_Fout, N878_Fout, N879_Fout, N880_Fout} != {N388_Gout, N389_Gout, N390_Gout, N391_Gout, N418_Gout, N419_Gout, N420_Gout, N421_Gout, N422_Gout, N423_Gout, N446_Gout, N447_Gout, N448_Gout, N449_Gout, N450_Gout, N767_Gout, N768_Gout, N850_Gout, N863_Gout, N864_Gout, N865_Gout, N866_Gout, N874_Gout, N878_Gout, N879_Gout, N880_Gout}) 
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
