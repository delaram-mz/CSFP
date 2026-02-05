#include "netlist.h"
#include <fstream>

SC_MODULE(custom_circuit_netlist_scanInserted_TB)
{

	sc_signal <fs_logic> testData1, testData2, testData3, testData4, testData5, testData6, testData7, testData8;
	sc_signal <fs_logic> testRes1, testRes2, testRes3;

	sc_signal<sc_logic> reset, clock, end, newTV;
	custom_circuit_netlist_scanInserted* UUT;

	sc_signal<bool> NbarT;
	std::vector<std::string> testVecs;
	SC_CTOR(custom_circuit_netlist_scanInserted_TB)
	{

		testVecs = read_testPtr ("testPatterns.txt");
		UUT = new custom_circuit_netlist_scanInserted("custom_circuit_netlist_scanInserted_instance");
		UUT->rst(testData1);
		UUT->Si(testData2);
		UUT->PbarS(testData3);
		UUT->A(testData4);
		UUT->B(testData5);
		UUT->C(testData6);
		UUT->D(testData7);
		UUT->clk(testData8);
		UUT->So(testRes1);
		UUT->Y0(testRes2);
		UUT->Y1(testRes3);
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
