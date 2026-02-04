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


// Enhanced Partial Fault Simulation with Fault Dropping
initial begin
	{N1, N101, N105, N109, N113, N117, N121, N125, N129, N13, N130, N131, N132, N133, N134, N135, N136, N137, N17, N21, N25, N29, N33, N37, N41, N45, N49, N5, N53, N57, N61, N65, N69, N73, N77, N81, N85, N89, N9, N93, N97} = 0;
	logFile = $fopen("FS_log.txt", "w");
	FCFile = $fopen("EnhancedPartialFS_FC.txt", "w");
	TVnum = 0;
	faultCount = 1575;
	detectedFault = 0;
	i = 0;
	TVnum = 0;
	$fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
	testFile = $fopen("testPatterns250.txt", "r");//Test set File
	while(!$feof(testFile)&&(i<250)) begin
		status = $fscanf(testFile,"%b\n", testVector);
		$fwrite(logFile, "Test Vector number %d is:  %b \n",i, testVector);
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
			#2;
			{N1, N101, N105, N109, N113, N117, N121, N125, N129, N13, N130, N131, N132, N133, N134, N135, N136, N137, N17, N21, N25, N29, N33, N37, N41, N45, N49, N5, N53, N57, N61, N65, N69, N73, N77, N81, N85, N89, N9, N93, N97} = testVector;
			#2;
			faultInjection = 1'b1;
			#90;
			if ( {N724_Gout, N725_Gout, N726_Gout, N727_Gout, N728_Gout, N729_Gout, N730_Gout, N731_Gout, N732_Gout, N733_Gout, N734_Gout, N735_Gout, N736_Gout, N737_Gout, N738_Gout, N739_Gout, N740_Gout, N741_Gout, N742_Gout, N743_Gout, N744_Gout, N745_Gout, N746_Gout, N747_Gout, N748_Gout, N749_Gout, N750_Gout, N751_Gout, N752_Gout, N753_Gout, N754_Gout, N755_Gout} != {N724_Fout, N725_Fout, N726_Fout, N727_Fout, N728_Fout, N729_Fout, N730_Fout, N731_Fout, N732_Fout, N733_Fout, N734_Fout, N735_Fout, N736_Fout, N737_Fout, N738_Fout, N739_Fout, N740_Fout, N741_Fout, N742_Fout, N743_Fout, N744_Fout, N745_Fout, N746_Fout, N747_Fout, N748_Fout, N749_Fout, N750_Fout, N751_Fout, N752_Fout, N753_Fout, N754_Fout, N755_Fout}) 
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

endmodule
