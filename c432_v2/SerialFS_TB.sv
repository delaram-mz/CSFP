`timescale 1 ns / 1ns
module SerialFS_TB ();
reg  N1,N4,N8,N11,N14,N17,N21,N24,N27,N30,
      N34,N37,N40,N43,N47,N50,N53,N56,N60,N63,
      N66,N69,N73,N76,N79,N82,N86,N89,N92,N95,
      N99,N102,N105,N108,N112,N115;
wire N223_Fout,N329_Fout,N370_Fout,N421_Fout,N430_Fout,N431_Fout,N432_Fout;
wire N223_Gout,N329_Gout,N370_Gout,N421_Gout,N430_Gout,N431_Gout,N432_Gout;

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

c432 FUT (.N1(N1), .N4(N4), .N8(N8), .N11(N11), .N14(N14), .N17(N17), .N21(N21), .N24(N24), .N27(N27), .N30(N30),
		.N34(N34), .N37(N37), .N40(N40), .N43(N43), .N47(N47), .N50(N50), .N53(N53), .N56(N56), .N60(N60), .N63(N63), 
		.N66(N66), .N69(N69), .N73(N73), .N76(N76), .N79(N79), .N82(N82), .N86(N86), .N89(N89), .N92(N92), .N95(N95), 
		.N99(N99), .N102(N102), .N105(N105), .N108(N108), .N112(N112), .N115(N115),
		.N223(N223_Fout),.N329(N329_Fout),.N370(N370_Fout),.N421(N421_Fout),.N430(N430_Fout),.N431(N431_Fout),.N432(N432_Fout)
		);

c432 GUT (.N1(N1), .N4(N4), .N8(N8), .N11(N11), .N14(N14), .N17(N17), .N21(N21), .N24(N24), .N27(N27), .N30(N30),
		.N34(N34), .N37(N37), .N40(N40), .N43(N43), .N47(N47), .N50(N50), .N53(N53), .N56(N56), .N60(N60), .N63(N63), 
		.N66(N66), .N69(N69), .N73(N73), .N76(N76), .N79(N79), .N82(N82), .N86(N86), .N89(N89), .N92(N92), .N95(N95), 
		.N99(N99), .N102(N102), .N105(N105), .N108(N108), .N112(N112), .N115(N115),
		.N223(N223_Gout),.N329(N329_Gout),.N370(N370_Gout),.N421(N421_Gout),.N430(N430_Gout),.N431(N431_Gout),.N432(N432_Gout)
		);


// Enhanced Partial Fault Simulation with Fault Dropping
initial begin
	{N1,N4,N8,N11,N14,N17,N21,N24,N27,N30,N34,N37,N40,N43,N47,N50,N53,N56,N60,N63,N66,N69,N73,N76,N79,N82,N86,N89,N92,N95,N99,N102,N105,N108,N112,N115} = 0;
	logFile = $fopen("FS_log.txt", "w");
	// //FAULT Collapsing with PLI
	// faultFile = $fopen("c7552.flt", "w");//create a file for faults
	// $FaultCollapsing(SerialFS_TB.FUT, "c7552.flt");//using a pli function generate collpsed faults
	// $fclose(faultFile);

	FCFile = $fopen("EnhancedPartialFS_FC.txt", "w");
	TVnum = 0;
	faultCount = 517;
	detectedFault = 0;
	i = 0;
	TVnum = 0;
	$fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
	testFile = $fopen("testPatterns150.txt", "r");//Test set File
	while(!$feof(testFile)&&(i<150)) begin
		if (detectedFault < faultCount) begin
			status = $fscanf(testFile,"%b\n", testVector);
			$fwrite(logFile, "Test Vector number %d is:  %b \n",i, testVector);
			if (i==0) begin
				faultFile = $fopen("c432_faultlist.flt", "r");
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
				{N1,N4,N8,N11,N14,N17,N21,N24,N27,N30,N34,N37,N40,N43,N47,N50,N53,N56,N60,N63,N66,N69,N73,N76,N79,N82,N86,N89,N92,N95,N99,N102,N105,N108,N112,N115} = testVector;
				#2;
				faultInjection = 1'b1;
				#9;
				if ( {N223_Gout,N329_Gout,N370_Gout,N421_Gout,N430_Gout,N431_Gout,N432_Gout} != {N223_Fout,N329_Fout,N370_Fout,N421_Fout,N430_Fout,N431_Fout,N432_Fout})
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
