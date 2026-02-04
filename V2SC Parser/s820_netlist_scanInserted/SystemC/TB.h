#include "netlist.h"
#include <fstream>

SC_MODULE(s820_netlist_scanInserted_TB)
{

	sc_signal <fs_logic> testData1, testData2, testData3, testData4, testData5, testData6, testData7, testData8, testData9, testData10, testData11, testData12, testData13, testData14, testData15, testData16, testData17, testData18, testData19, testData20, testData21, testData22;
	sc_signal <fs_logic> testRes1, testRes2, testRes3, testRes4, testRes5, testRes6, testRes7, testRes8, testRes9, testRes10, testRes11, testRes12, testRes13, testRes14, testRes15, testRes16, testRes17, testRes18, testRes19, testRes20;

	sc_signal<sc_logic> reset, clock, end, newTV;
	s820_netlist_scanInserted* UUT;

	sc_signal<bool> NbarT;
	std::vector<std::string> testVecs;
	SC_CTOR(s820_netlist_scanInserted_TB)
	{

		testVecs = read_testPtr ("testPatterns.txt");
		UUT = new s820_netlist_scanInserted("s820_netlist_scanInserted_instance");
		UUT->rst(testData1);
		UUT->Si(testData2);
		UUT->PbarS(testData3);
		UUT->CK(testData4);
		UUT->G0(testData5);
		UUT->G1(testData6);
		UUT->G10(testData7);
		UUT->G11(testData8);
		UUT->G12(testData9);
		UUT->G13(testData10);
		UUT->G14(testData11);
		UUT->G15(testData12);
		UUT->G16(testData13);
		UUT->G18(testData14);
		UUT->G2(testData15);
		UUT->G3(testData16);
		UUT->G4(testData17);
		UUT->G5(testData18);
		UUT->G6(testData19);
		UUT->G7(testData20);
		UUT->G8(testData21);
		UUT->G9(testData22);
		UUT->So(testRes1);
		UUT->G288(testRes2);
		UUT->G290(testRes3);
		UUT->G292(testRes4);
		UUT->G296(testRes5);
		UUT->G298(testRes6);
		UUT->G300(testRes7);
		UUT->G302(testRes8);
		UUT->G310(testRes9);
		UUT->G312(testRes10);
		UUT->G315(testRes11);
		UUT->G322(testRes12);
		UUT->G325(testRes13);
		UUT->G327(testRes14);
		UUT->G43(testRes15);
		UUT->G45(testRes16);
		UUT->G47(testRes17);
		UUT->G49(testRes18);
		UUT->G53(testRes19);
		UUT->G55(testRes20);
		UUT->endSim(end);
		UUT->newTV(newTV);
		UUT->NbarT(NbarT);

		SC_THREAD(testPtr);
		SC_THREAD(endOfSim);
	}

	void endOfSim();
	void testPtr();
	std::vector<std::string> read_testPtr(std::string filename);
};
