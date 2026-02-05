#include "netlist.h"
#include <fstream>

SC_MODULE(s1238_netlist_scanInserted_TB)
{

	sc_signal <fs_logic> testData1, testData2, testData3, testData4, testData5, testData6, testData7, testData8, testData9, testData10, testData11, testData12, testData13, testData14, testData15, testData16, testData17, testData18;
	sc_signal <fs_logic> testRes1, testRes2, testRes3, testRes4, testRes5, testRes6, testRes7, testRes8, testRes9, testRes10, testRes11, testRes12, testRes13, testRes14, testRes15;

	sc_signal<sc_logic> reset, clock, end, newTV;
	s1238_netlist_scanInserted* UUT;

	sc_signal<bool> NbarT;
	std::vector<std::string> testVecs;
	SC_CTOR(s1238_netlist_scanInserted_TB)
	{

		testVecs = read_testPtr ("testPatterns.txt");
		UUT = new s1238_netlist_scanInserted("s1238_netlist_scanInserted_instance");
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
		UUT->G2(testData11);
		UUT->G3(testData12);
		UUT->G4(testData13);
		UUT->G5(testData14);
		UUT->G6(testData15);
		UUT->G7(testData16);
		UUT->G8(testData17);
		UUT->G9(testData18);
		UUT->So(testRes1);
		UUT->G45(testRes2);
		UUT->G530(testRes3);
		UUT->G532(testRes4);
		UUT->G535(testRes5);
		UUT->G537(testRes6);
		UUT->G539(testRes7);
		UUT->G542(testRes8);
		UUT->G546(testRes9);
		UUT->G547(testRes10);
		UUT->G548(testRes11);
		UUT->G549(testRes12);
		UUT->G550(testRes13);
		UUT->G551(testRes14);
		UUT->G552(testRes15);
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
