#include "netlist.h"
#include <fstream>

SC_MODULE(s344_netlist_TB)
{

	sc_signal <sc_logic> testData1, testData2, testData3, testData4, testData5, testData6, testData7, testData8, testData9, testData10, testData11, testData12;
	sc_signal <sc_logic> testRes1, testRes2, testRes3, testRes4, testRes5, testRes6, testRes7, testRes8, testRes9, testRes10, testRes11;

	sc_signal<sc_logic> reset, clock, end, newTV;
	s344_netlist* UUT;

	std::vector<std::string> testVecs;
	SC_CTOR(s344_netlist_TB)
	{

		testVecs = read_testPtr ("testPatterns.txt");
		UUT = new s344_netlist("s344_netlist_instance");
		UUT->A0(testData1);
		UUT->A1(testData2);
		UUT->A2(testData3);
		UUT->A3(testData4);
		UUT->B0(testData5);
		UUT->B1(testData6);
		UUT->B2(testData7);
		UUT->B3(testData8);
		UUT->CK(testData9);
		UUT->GND(testData10);
		UUT->START(testData11);
		UUT->VDD(testData12);
		UUT->CNTVCO2(testRes1);
		UUT->CNTVCON2(testRes2);
		UUT->P0(testRes3);
		UUT->P1(testRes4);
		UUT->P2(testRes5);
		UUT->P3(testRes6);
		UUT->P4(testRes7);
		UUT->P5(testRes8);
		UUT->P6(testRes9);
		UUT->P7(testRes10);
		UUT->READY(testRes11);
		UUT->endSim(end);
		UUT->newTV(newTV);

		SC_THREAD(testPtr);
		SC_THREAD(endOfSim);
	}

	void endOfSim();
	void testPtr();
	std::vector<std::string> read_testPtr(std::string filename);
};
