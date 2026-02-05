#include "netlist.h"
#include <fstream>

SC_MODULE(c432_netlist)
{

	sc_signal <sc_logic> testData1, testData2, testData3, testData4, testData5, testData6, testData7, testData8, testData9, testData10, testData11, testData12, testData13, testData14, testData15, testData16, testData17, testData18, testData19, testData20, testData21, testData22, testData23, testData24, testData25, testData26, testData27, testData28, testData29, testData30, testData31, testData32, testData33, testData34, testData35, testData36;
	sc_signal <sc_logic> testRes1, testRes2, testRes3, testRes4, testRes5, testRes6, testRes7;

	sc_signal<sc_logic> reset, clock, end;
	c432_netlist* UUT;

	std::vector<std::string> testVecs;
	SC_CTOR(c432_netlist)
	{

		testVecs = read_testPtr ("testPatterns.txt");
		UUT = new c432_netlist("c432_netlist_instance");
		UUT->N1(testData1);
		UUT->N102(testData2);
		UUT->N105(testData3);
		UUT->N108(testData4);
		UUT->N11(testData5);
		UUT->N112(testData6);
		UUT->N115(testData7);
		UUT->N14(testData8);
		UUT->N17(testData9);
		UUT->N21(testData10);
		UUT->N24(testData11);
		UUT->N27(testData12);
		UUT->N30(testData13);
		UUT->N34(testData14);
		UUT->N37(testData15);
		UUT->N4(testData16);
		UUT->N40(testData17);
		UUT->N43(testData18);
		UUT->N47(testData19);
		UUT->N50(testData20);
		UUT->N53(testData21);
		UUT->N56(testData22);
		UUT->N60(testData23);
		UUT->N63(testData24);
		UUT->N66(testData25);
		UUT->N69(testData26);
		UUT->N73(testData27);
		UUT->N76(testData28);
		UUT->N79(testData29);
		UUT->N8(testData30);
		UUT->N82(testData31);
		UUT->N86(testData32);
		UUT->N89(testData33);
		UUT->N92(testData34);
		UUT->N95(testData35);
		UUT->N99(testData36);
		UUT->N223(testRes1);
		UUT->N329(testRes2);
		UUT->N370(testRes3);
		UUT->N421(testRes4);
		UUT->N430(testRes5);
		UUT->N431(testRes6);
		UUT->N432(testRes7);
		UUT->endSim(end);

		SC_THREAD(testPtr);
		SC_THREAD(endOfSim);
	}

	void endOfSim();
	void testPtr();
	std::vector<std::string> read_testPtr(std::string filename);
};
