#include "netlist.h"
#include <fstream>

SC_MODULE(mine_netlist_TB)
{

	sc_signal <fs_logic> testData1, testData2, testData3, testData4, testData5;
	sc_signal <fs_logic> testRes1, testRes2, testRes3;

	sc_signal<sc_logic> reset, clock, end, newTV;
	mine_netlist* UUT;

	std::vector<std::string> testVecs;
	SC_CTOR(mine_netlist_TB)
	{

		testVecs = read_testPtr ("testPatterns.txt");
		UUT = new mine_netlist("mine_netlist_instance");
		UUT->a(testData1);
		UUT->b(testData2);
		UUT->c(testData3);
		UUT->d(testData4);
		UUT->e(testData5);
		UUT->y1(testRes1);
		UUT->y2(testRes2);
		UUT->y3(testRes3);
		UUT->endSim(end);
		UUT->newTV(newTV);

		SC_THREAD(testPtr);
		SC_THREAD(endOfSim);
	}

	void endOfSim();
	void testPtr();
	std::vector<std::string> read_testPtr(std::string filename);
};
