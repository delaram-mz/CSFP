#include "netlist.h"
#include <fstream>

SC_MODULE(c17_TB)
{

	sc_signal <fs_logic> testData1, testData2, testData3, testData4, testData5;
	sc_signal <fs_logic> testRes1, testRes2;

	sc_signal<sc_logic> reset, clock, end, newTV;
	c17* UUT;

	sc_signal<bool> NbarT;
	std::vector<std::string> testVecs;
	SC_CTOR(c17_TB)
	{

		testVecs = read_testPtr ("/home/fmohammadzad/CSFP/systemc/generated/c17/testPatterns.txt");
		UUT = new c17("c17_instance");
		UUT->N1(testData1);
		UUT->N2(testData2);
		UUT->N3(testData3);
		UUT->N6(testData4);
		UUT->N7(testData5);
		UUT->N22(testRes1);
		UUT->N23(testRes2);
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
