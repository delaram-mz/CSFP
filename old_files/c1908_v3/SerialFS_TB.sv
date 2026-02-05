`timescale 1 ns / 1ns
module SerialFS_TB ();
reg  N1, N10, N104, N13, N16, N19, N22, N25,
 N28, N31, N34, N37, N4, N40, N43, N46, N49, 
 N53, N56, N60, N63, N66, N69, N7, N72, N76, 
 N79, N82, N85, N88, N91, N94, N99;

wire N2753_Fout, N2754_Fout, N2755_Fout, N2756_Fout, N2762_Fout, N2767_Fout, N2768_Fout, N2779_Fout, N2780_Fout, N2781_Fout, N2782_Fout, N2783_Fout, N2784_Fout, N2785_Fout, N2786_Fout, N2787_Fout, N2811_Fout, N2886_Fout, N2887_Fout, N2888_Fout, N2889_Fout, N2890_Fout, N2891_Fout, N2892_Fout, N2899_Fout;
wire N2753_Gout, N2754_Gout, N2755_Gout, N2756_Gout, N2762_Gout, N2767_Gout, N2768_Gout, N2779_Gout, N2780_Gout, N2781_Gout, N2782_Gout, N2783_Gout, N2784_Gout, N2785_Gout, N2786_Gout, N2787_Gout, N2811_Gout, N2886_Gout, N2887_Gout, N2888_Gout, N2889_Gout, N2890_Gout, N2891_Gout, N2892_Gout, N2899_Gout;

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
c1908 FUT (.N1(N1),  .N10(N10), .N104(N104), .N13(N13), .N16(N16), .N19(N19), .N22(N22), .N25(N25),
		.N28(N28), .N31(N31), .N34(N34), .N37(N37), .N4(N4), .N40(N40), .N43(N43), .N46(N46), .N49(N49), 
		.N53(N53), .N56(N56), .N60(N60), .N63(N63), .N66(N66), .N69(N69), .N7(N7), .N72(N72), .N76(N76), 
		.N79(N79), .N82(N82), .N85(N85), .N88(N88), .N91(N91), .N94(N94), .N99(N99),
		.N2753(N2753_Fout), .N2754(N2754_Fout), .N2755(N2755_Fout), .N2756(N2756_Fout), .N2762(N2762_Fout), .N2767(N2767_Fout), .N2768(N2768_Fout), .N2779(N2779_Fout),
		.N2780(N2780_Fout), .N2781(N2781_Fout), .N2782(N2782_Fout), .N2783(N2783_Fout), .N2784(N2784_Fout), .N2785(N2785_Fout), .N2786(N2786_Fout), .N2787(N2787_Fout),
		.N2811(N2811_Fout), .N2886(N2886_Fout), .N2887(N2887_Fout), .N2888(N2888_Fout), .N2889(N2889_Fout), .N2890(N2890_Fout), .N2891(N2891_Fout), .N2892(N2892_Fout), 
		.N2899(N2899_Fout)
		);

c1908 GUT (.N1(N1),  .N10(N10), .N104(N104), .N13(N13), .N16(N16), .N19(N19), .N22(N22), .N25(N25),
		.N28(N28), .N31(N31), .N34(N34), .N37(N37), .N4(N4), .N40(N40), .N43(N43), .N46(N46), .N49(N49), 
		.N53(N53), .N56(N56), .N60(N60), .N63(N63), .N66(N66), .N69(N69), .N7(N7), .N72(N72), .N76(N76), 
		.N79(N79), .N82(N82), .N85(N85), .N88(N88), .N91(N91), .N94(N94), .N99(N99),
		.N2753(N2753_Gout), .N2754(N2754_Gout), .N2755(N2755_Gout), .N2756(N2756_Gout), .N2762(N2762_Gout), .N2767(N2767_Gout), .N2768(N2768_Gout), .N2779(N2779_Gout),
		.N2780(N2780_Gout), .N2781(N2781_Gout), .N2782(N2782_Gout), .N2783(N2783_Gout), .N2784(N2784_Gout), .N2785(N2785_Gout), .N2786(N2786_Gout), .N2787(N2787_Gout),
		.N2811(N2811_Gout), .N2886(N2886_Gout), .N2887(N2887_Gout), .N2888(N2888_Gout), .N2889(N2889_Gout), .N2890(N2890_Gout), .N2891(N2891_Gout), .N2892(N2892_Gout), 
		.N2899(N2899_Gout)
		);

// Enhanced Partial Fault Simulation with Fault Dropping
initial begin
	{N1, N10, N104, N13, N16, N19, N22, N25, N28, N31, N34, N37, N4, N40, N43, N46, N49, N53, N56, N60, N63, N66, N69, N7, N72, N76, N79, N82, N85, N88, N91, N94, N99} = 0;
	logFile = $fopen("FS_log.txt", "w");
	FCFile = $fopen("EnhancedPartialFS_FC.txt", "w");

	TVnum = 0;
	faultCount = 1530;
	detectedFault = 0;
	i = 0;
	TVnum = 0;
	// $fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
	testFile = $fopen("testPatterns500.txt", "r");//Test set File
	while(!$feof(testFile)) begin
		status = $fscanf(testFile,"%b\n", testVector);
		// $fwrite(logFile, "Test Vector number %d is:  %b \n",i, testVector);
		if (i==0) begin
			faultFile = $fopen("c1908_faultlist.flt", "r");
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
				#1;
				{N1, N10, N104, N13, N16, N19, N22, N25, N28, N31, N34, N37, N4, N40, N43, N46, N49, N53, N56, N60, N63, N66, N69, N7, N72, N76, N79, N82, N85, N88, N91, N94, N99} = testVector;
				#1;
				faultInjection = 1'b1;
				#1;
				if ( {N2753_Gout, N2754_Gout, N2755_Gout, N2756_Gout, N2762_Gout, N2767_Gout, N2768_Gout, N2779_Gout, N2780_Gout, N2781_Gout, N2782_Gout, N2783_Gout, N2784_Gout, N2785_Gout, N2786_Gout, N2787_Gout, N2811_Gout, N2886_Gout, N2887_Gout, N2888_Gout, N2889_Gout, N2890_Gout, N2891_Gout, N2892_Gout, N2899_Gout} != {N2753_Fout, N2754_Fout, N2755_Fout, N2756_Fout, N2762_Fout, N2767_Fout, N2768_Fout, N2779_Fout, N2780_Fout, N2781_Fout, N2782_Fout, N2783_Fout, N2784_Fout, N2785_Fout, N2786_Fout, N2787_Fout, N2811_Fout, N2886_Fout, N2887_Fout, N2888_Fout, N2889_Fout, N2890_Fout, N2891_Fout, N2892_Fout, N2899_Fout}) 
				begin
					detected = 1'b1;//in case of mismatch the fault is detected
					detectedFault = detectedFault + 1;//incrementing the number of detected faults
					// $fwrite(logFile, "Detected fault : s@%b  %s\n", stuckAtVal, wireName);
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
				#1;
			end
		end
		$fclose(newfaultFile);
		$fclose(faultFile);
		i = i+1;
		// $display("Test set size = %d\nCollapsed Faults = %d\nDetected Faults = %d\n", i, faultCount ,detectedFault );
		// $display("coverage = %f\n", detectedFault/faultCount);
		// $fwrite(FCFile, "Test set Size = %d;	Fault Coverage : %f \n", i, detectedFault/faultCount);
	end
	$fclose(testFile);
	$fclose(logFile);
	$fwrite(FCFile, "Simulation Time: %t \n", $time);
	$fclose(FCFile);
	// $display("Simulation Done at = %t\n", $time);
	stopSimulation = 1'b1;
	#1;
	$stop;
end




// // Typical Fault Simulation
// initial begin
// 	faultCount = 0;
// 	detectedFault = 0;
// 	// logFile = $fopen("FS_log.txt", "w");
// 	// FCFile = $fopen("typicalFS_FC.txt", "w");
// 	faultFile = $fopen("c1908_faultlist.flt", "r");
// 	while(!$feof(faultFile))begin//Outer loop : Faults
// 		detected = 1'b0;
// 		status = $fscanf(faultFile,"s@%b\n  %s", stuckAtVal, wireName);
// 		faultInjection = 1'b1;
// 		#1;
// 		faultCount = faultCount + 1;
// 		testFile = $fopen("testPatterns500.txt", "r");//Test set File
// 		while((!$feof(testFile))&(detected == 0)) begin //Inner Loop : TVs
// 			status = $fscanf(testFile,"%b\n", testVector);
// 				{N1, N10, N104, N13, N16, N19, N22, N25, N28, N31, N34, N37, N4, N40, N43, N46, N49, N53, N56, N60, N63, N66, N69, N7, N72, N76, N79, N82, N85, N88, N91, N94, N99} = testVector;
// 			#1;
// 				if ( {N2753_Gout, N2754_Gout, N2755_Gout, N2756_Gout, N2762_Gout, N2767_Gout, N2768_Gout, N2779_Gout, N2780_Gout, N2781_Gout, N2782_Gout, N2783_Gout, N2784_Gout, N2785_Gout, N2786_Gout, N2787_Gout, N2811_Gout, N2886_Gout, N2887_Gout, N2888_Gout, N2889_Gout, N2890_Gout, N2891_Gout, N2892_Gout, N2899_Gout} != {N2753_Fout, N2754_Fout, N2755_Fout, N2756_Fout, N2762_Fout, N2767_Fout, N2768_Fout, N2779_Fout, N2780_Fout, N2781_Fout, N2782_Fout, N2783_Fout, N2784_Fout, N2785_Fout, N2786_Fout, N2787_Fout, N2811_Fout, N2886_Fout, N2887_Fout, N2888_Fout, N2889_Fout, N2890_Fout, N2891_Fout, N2892_Fout, N2899_Fout}) 
// 			begin
// 				detected = 1'b1;//in case of mismatch the fault is detected
// 				detectedFault = detectedFault + 1;//incrementing the number of detected faults
// 			end//if
// 		end //while eof test
// 		$fclose(testFile);
// 		faultInjection = 1'b0;
// 		#1;
// 	end//while eof faults
// 	// $fclose(logFile);
// 	$display("Collapsed Faults = %d\n , Detected Faults = %d\n", faultCount ,detectedFault );
// 	$display("coverage = %f\n", detectedFault/faultCount);
// 	// $fwrite(FCFile, "Fault Coverage %f \n", detectedFault/faultCount);
// 	// $fwrite(FCFile, "Simulation Time: %t \n", $time);
// 	// $fclose(FCFile);
// 	stopSimulation = 1'b1;
// 	#10;
// 	$stop;
// end // end of initial

endmodule


















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
// endmodule
