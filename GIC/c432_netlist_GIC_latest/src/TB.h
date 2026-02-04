#include "netlist.h"
#include <fstream>
#define SC_DISABLE_COPY_CHECK   // only if you need
#include <systemc>


SC_MODULE(c432_netlist_TB)
{

	sc_signal <sc_logic> testData1, testData2, testData3, testData4, testData5, testData6, testData7, testData8, testData9, testData10, testData11, testData12, testData13, testData14, testData15, testData16, testData17, testData18, testData19, testData20, testData21, testData22, testData23, testData24, testData25, testData26, testData27, testData28, testData29, testData30, testData31, testData32, testData33, testData34, testData35, testData36;
	sc_signal <sc_logic> testRes1, testRes2, testRes3, testRes4, testRes5, testRes6, testRes7;

	sc_signal<sc_logic> end, newTV;
	c432_netlist* UUT;


	std::vector<std::string> testVecs;
	SC_CTOR(c432_netlist_TB)
	{
		
		testVecs = read_testPtr ("testPatterns150.txt");
		UUT = new c432_netlist("c432_netlist_instance");
		UUT->N1(testData1);
		UUT->N4(testData2);
		UUT->N8(testData3);
		UUT->N11(testData4);
		UUT->N14(testData5);
		UUT->N17(testData6);
		UUT->N21(testData7);
		UUT->N24(testData8);
		UUT->N27(testData9);
		UUT->N30(testData10);
		UUT->N34(testData11);
		UUT->N37(testData12);
		UUT->N40(testData13);
		UUT->N43(testData14);
		UUT->N47(testData15);
		UUT->N50(testData16);
		UUT->N53(testData17);
		UUT->N56(testData18);
		UUT->N60(testData19);
		UUT->N63(testData20);
		UUT->N66(testData21);
		UUT->N69(testData22);
		UUT->N73(testData23);
		UUT->N76(testData24);
		UUT->N79(testData25);
		UUT->N82(testData26);
		UUT->N86(testData27);
		UUT->N89(testData28);
		UUT->N92(testData29);
		UUT->N95(testData30);
		UUT->N99(testData31);
		UUT->N102(testData32);
		UUT->N105(testData33);
		UUT->N108(testData34);
		UUT->N112(testData35);
		UUT->N115(testData36);
		UUT->N223(testRes1);
		UUT->N329(testRes2);
		UUT->N370(testRes3);
		UUT->N421(testRes4);
		UUT->N430(testRes5);
		UUT->N431(testRes6);
		UUT->N432(testRes7);
		UUT->endSim(end);
		UUT->newTV(newTV);

		std::cerr << "After instantiation" << std::endl;	


		SC_THREAD(testPtr);
		SC_THREAD(endOfSim);
	}

	void testPtr();
	void endOfSim();
	std::vector<std::string> read_testPtr(std::string filename);
};
