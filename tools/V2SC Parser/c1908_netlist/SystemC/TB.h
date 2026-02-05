#include "netlist.h"
#include <fstream>

SC_MODULE(c1908_netlist_TB)
{

	sc_signal <fs_logic> testData1, testData2, testData3, testData4, testData5, testData6, testData7, testData8, testData9, testData10, testData11, testData12, testData13, testData14, testData15, testData16, testData17, testData18, testData19, testData20, testData21, testData22, testData23, testData24, testData25, testData26, testData27, testData28, testData29, testData30, testData31, testData32, testData33;
	sc_signal <fs_logic> testRes1, testRes2, testRes3, testRes4, testRes5, testRes6, testRes7, testRes8, testRes9, testRes10, testRes11, testRes12, testRes13, testRes14, testRes15, testRes16, testRes17, testRes18, testRes19, testRes20, testRes21, testRes22, testRes23, testRes24, testRes25;

	sc_signal<sc_logic> reset, clock, end, newTV;
	c1908_netlist* UUT;

	sc_signal<bool> NbarT;
	std::vector<std::string> testVecs;
	SC_CTOR(c1908_netlist_TB)
	{

		testVecs = read_testPtr ("testPatterns.txt");
		UUT = new c1908_netlist("c1908_netlist_instance");
		UUT->N1(testData1);
		UUT->N10(testData2);
		UUT->N104(testData3);
		UUT->N13(testData4);
		UUT->N16(testData5);
		UUT->N19(testData6);
		UUT->N22(testData7);
		UUT->N25(testData8);
		UUT->N28(testData9);
		UUT->N31(testData10);
		UUT->N34(testData11);
		UUT->N37(testData12);
		UUT->N4(testData13);
		UUT->N40(testData14);
		UUT->N43(testData15);
		UUT->N46(testData16);
		UUT->N49(testData17);
		UUT->N53(testData18);
		UUT->N56(testData19);
		UUT->N60(testData20);
		UUT->N63(testData21);
		UUT->N66(testData22);
		UUT->N69(testData23);
		UUT->N7(testData24);
		UUT->N72(testData25);
		UUT->N76(testData26);
		UUT->N79(testData27);
		UUT->N82(testData28);
		UUT->N85(testData29);
		UUT->N88(testData30);
		UUT->N91(testData31);
		UUT->N94(testData32);
		UUT->N99(testData33);
		UUT->N2753(testRes1);
		UUT->N2754(testRes2);
		UUT->N2755(testRes3);
		UUT->N2756(testRes4);
		UUT->N2762(testRes5);
		UUT->N2767(testRes6);
		UUT->N2768(testRes7);
		UUT->N2779(testRes8);
		UUT->N2780(testRes9);
		UUT->N2781(testRes10);
		UUT->N2782(testRes11);
		UUT->N2783(testRes12);
		UUT->N2784(testRes13);
		UUT->N2785(testRes14);
		UUT->N2786(testRes15);
		UUT->N2787(testRes16);
		UUT->N2811(testRes17);
		UUT->N2886(testRes18);
		UUT->N2887(testRes19);
		UUT->N2888(testRes20);
		UUT->N2889(testRes21);
		UUT->N2890(testRes22);
		UUT->N2891(testRes23);
		UUT->N2892(testRes24);
		UUT->N2899(testRes25);
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
