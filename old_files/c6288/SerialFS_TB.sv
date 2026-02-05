`timescale 1 ns / 1ns
module SerialFS_TB ();
reg  N1, N103, N120, N137, N154, N171, N18, N188, N205,
	 N222, N239, N256, N273, N290, N307, N324, N341, 
	 N35, N358, N375, N392, N409, N426, N443, N460, 
	 N477, N494, N511, N52, N528, N69, N86;

wire N1581_Fout, N1901_Fout, N2223_Fout, N2548_Fout, 
N2877_Fout, N3211_Fout, N3552_Fout, N3895_Fout, 
N4241_Fout, N4591_Fout, N4946_Fout, N5308_Fout, 
N545_Fout, N5672_Fout, N5971_Fout, N6123_Fout, 
N6150_Fout, N6160_Fout, N6170_Fout, N6180_Fout, 
N6190_Fout, N6200_Fout, N6210_Fout, N6220_Fout, 
N6230_Fout, N6240_Fout, N6250_Fout, N6260_Fout, 
N6270_Fout, N6280_Fout, N6287_Fout, N6288_Fout;

wire N1581_Gout, N1901_Gout, N2223_Gout, N2548_Gout, 
N2877_Gout, N3211_Gout, N3552_Gout, N3895_Gout, 
N4241_Gout, N4591_Gout, N4946_Gout, N5308_Gout, 
N545_Gout, N5672_Gout, N5971_Gout, N6123_Gout, 
N6150_Gout, N6160_Gout, N6170_Gout, N6180_Gout, 
N6190_Gout, N6200_Gout, N6210_Gout, N6220_Gout, 
N6230_Gout, N6240_Gout, N6250_Gout, N6260_Gout, 
N6270_Gout, N6280_Gout, N6287_Gout, N6288_Gout;


reg detected;
integer logFile, testFile, faultFile, status, FCFile, faultsF, newfaultFile;
integer i;
real faultCount, detectedFault, TVnum;//number of collapsed faults // number of detected faults
reg[31:0] testVector;// applied test vector
// reg [8*20:1] wireName;// name of the current faulty wire
string wireName, wireName_prev;
string faultsPath, newfaultsPath, readIdx, writeIdx;


reg stuckAtVal, stuckAtVal_prev;
reg stopSimulation = 1'b0;
reg faultInjection = 1'b0;
c6288 FUT (.N1(N1), .N103(N103), .N120(N120), .N137(N137), .N154(N154), .N171(N171), .N18(N18), .N188(N188), .N205(N205),
	 .N222(N222), .N239(N239), .N256(N256), .N273(N273), .N290(N290), .N307(N307), .N324(N324), .N341(N341), 
	 .N35(N35), .N358(N358), .N375(N375), .N392(N392), .N409(N409), .N426(N426), .N443(N443), .N460(N460), 
	 .N477(N477), .N494(N494), .N511(N511), .N52(N52), .N528(N528), .N69(N69), .N86(N86), 
	.N1581(N1581_Fout), .N1901(N1901_Fout), .N2223(N2223_Fout), .N2548(N2548_Fout), 
	.N2877(N2877_Fout), .N3211(N3211_Fout), .N3552(N3552_Fout), .N3895(N3895_Fout), 
	.N4241(N4241_Fout), .N4591(N4591_Fout), .N4946(N4946_Fout), .N5308(N5308_Fout), 
	.N545(N545_Fout), .N5672(N5672_Fout), .N5971(N5971_Fout), .N6123(N6123_Fout), 
	.N6150(N6150_Fout), .N6160(N6160_Fout), .N6170(N6170_Fout), .N6180(N6180_Fout), 
	.N6190(N6190_Fout), .N6200(N6200_Fout), .N6210(N6210_Fout), .N6220(N6220_Fout), 
	.N6230(N6230_Fout), .N6240(N6240_Fout), .N6250(N6250_Fout), .N6260(N6260_Fout), 
	.N6270(N6270_Fout), .N6280(N6280_Fout), .N6287(N6287_Fout), .N6288(N6288_Fout));

c6288 GUT (.N1(N1), .N103(N103), .N120(N120), .N137(N137), .N154(N154), .N171(N171), .N18(N18), .N188(N188), .N205(N205),
	 .N222(N222), .N239(N239), .N256(N256), .N273(N273), .N290(N290), .N307(N307), .N324(N324), .N341(N341), 
	 .N35(N35), .N358(N358), .N375(N375), .N392(N392), .N409(N409), .N426(N426), .N443(N443), .N460(N460), 
	 .N477(N477), .N494(N494), .N511(N511), .N52(N52), .N528(N528), .N69(N69), .N86(N86), 
	.N1581(N1581_Gout), .N1901(N1901_Gout), .N2223(N2223_Gout), .N2548(N2548_Gout), 
	.N2877(N2877_Gout), .N3211(N3211_Gout), .N3552(N3552_Gout), .N3895(N3895_Gout), 
	.N4241(N4241_Gout), .N4591(N4591_Gout), .N4946(N4946_Gout), .N5308(N5308_Gout), 
	.N545(N545_Gout), .N5672(N5672_Gout), .N5971(N5971_Gout), .N6123(N6123_Gout), 
	.N6150(N6150_Gout), .N6160(N6160_Gout), .N6170(N6170_Gout), .N6180(N6180_Gout), 
	.N6190(N6190_Gout), .N6200(N6200_Gout), .N6210(N6210_Gout), .N6220(N6220_Gout), 
	.N6230(N6230_Gout), .N6240(N6240_Gout), .N6250(N6250_Gout), .N6260(N6260_Gout), 
	.N6270(N6270_Gout), .N6280(N6280_Gout), .N6287(N6287_Gout), .N6288(N6288_Gout));

// Enhanced Partial Fault Simulation with Fault Dropping
initial begin
	{N1, N103, N120, N137, N154, N171, N18, N188, N205,
	 N222, N239, N256, N273, N290, N307, N324, N341, 
	 N35, N358, N375, N392, N409, N426, N443, N460, 
	 N477, N494, N511, N52, N528, N69, N86} = 0;
	logFile = $fopen("FS_log.txt", "w");
	FCFile = $fopen("EnhancedPartialFS_FC.txt", "w");

	TVnum = 0;
	faultCount = 11216;
	detectedFault = 0;
	i = 0;
	TVnum = 0;
	$fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
	testFile = $fopen("testPatterns200.txt", "r");//Test set File
	while(!$feof(testFile)) begin
		status = $fscanf(testFile,"%b\n", testVector);
		$fwrite(logFile, "Test Vector number %d is:  %b \n",i, testVector);
		if (i==0) begin
			faultFile = $fopen("c6288_faultlist.flt", "r");
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
				#2;
				{N1, N103, N120, N137, N154, N171, N18, N188, N205,
				N222, N239, N256, N273, N290, N307, N324, N341, 
				N35, N358, N375, N392, N409, N426, N443, N460, 
				N477, N494, N511, N52, N528, N69, N86} = testVector;
				#2;
				faultInjection = 1'b1;
				#90;
				if ( {N1581_Fout, N1901_Fout, N2223_Fout, N2548_Fout, N2877_Fout, N3211_Fout, N3552_Fout, N3895_Fout, N4241_Fout, N4591_Fout, N4946_Fout, N5308_Fout, N545_Fout, N5672_Fout, N5971_Fout, N6123_Fout, N6150_Fout, N6160_Fout, N6170_Fout, N6180_Fout, N6190_Fout, N6200_Fout, N6210_Fout, N6220_Fout, N6230_Fout, N6240_Fout, N6250_Fout, N6260_Fout, N6270_Fout, N6280_Fout, N6287_Fout, N6288_Fout} != {N1581_Gout, N1901_Gout, N2223_Gout, N2548_Gout, N2877_Gout, N3211_Gout, N3552_Gout, N3895_Gout, N4241_Gout, N4591_Gout, N4946_Gout, N5308_Gout, N545_Gout, N5672_Gout, N5971_Gout, N6123_Gout, N6150_Gout, N6160_Gout, N6170_Gout, N6180_Gout, N6190_Gout, N6200_Gout, N6210_Gout, N6220_Gout, N6230_Gout, N6240_Gout, N6250_Gout, N6260_Gout, N6270_Gout, N6280_Gout, N6287_Gout, N6288_Gout}) 
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
// 				faultFile = $fopen("c6288_faultlist.flt", "r");
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
// 	faultFile = $fopen("c6288_faultlist.flt", "r");


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
