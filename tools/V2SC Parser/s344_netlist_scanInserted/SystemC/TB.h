#include "netlist.h"
#include <fstream>

SC_MODULE(s344_netlist_scanInserted_TB)
{

	sc_signal <fs_logic> testData1, testData2, testData3, testData4, testData5, testData6, testData7, testData8, testData9, testData10, testData11, testData12, testData13;
	sc_signal <fs_logic> testRes1, testRes2, testRes3, testRes4, testRes5, testRes6, testRes7, testRes8, testRes9, testRes10, testRes11, testRes12;

	sc_signal<sc_logic> reset, clock, end, newTV;
	s344_netlist_scanInserted* UUT;

	sc_signal<bool> NbarT;
	std::vector<std::string> testVecs;
	SC_CTOR(s344_netlist_scanInserted_TB)
	{

		testVecs = read_testPtr ("testPatterns.txt");
		UUT = new s344_netlist_scanInserted("s344_netlist_scanInserted_instance");
		UUT->rst(testData1);
		UUT->Si(testData2);
		UUT->PbarS(testData3);
		UUT->A0(testData4);
		UUT->A1(testData5);
		UUT->A2(testData6);
		UUT->A3(testData7);
		UUT->B0(testData8);
		UUT->B1(testData9);
		UUT->B2(testData10);
		UUT->B3(testData11);
		UUT->CK(testData12);
		UUT->START(testData13);
		UUT->So(testRes1);
		UUT->CNTVCO2(testRes2);
		UUT->CNTVCON2(testRes3);
		UUT->P0(testRes4);
		UUT->P1(testRes5);
		UUT->P2(testRes6);
		UUT->P3(testRes7);
		UUT->P4(testRes8);
		UUT->P5(testRes9);
		UUT->P6(testRes10);
		UUT->P7(testRes11);
		UUT->READY(testRes12);
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
