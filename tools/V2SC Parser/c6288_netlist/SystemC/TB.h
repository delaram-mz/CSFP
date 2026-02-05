#include "netlist.h"
#include <fstream>

SC_MODULE(c6288_netlist_TB)
{

	sc_signal <fs_logic> testData1, testData2, testData3, testData4, testData5, testData6, testData7, testData8, testData9, testData10, testData11, testData12, testData13, testData14, testData15, testData16, testData17, testData18, testData19, testData20, testData21, testData22, testData23, testData24, testData25, testData26, testData27, testData28, testData29, testData30, testData31, testData32;
	sc_signal <fs_logic> testRes1, testRes2, testRes3, testRes4, testRes5, testRes6, testRes7, testRes8, testRes9, testRes10, testRes11, testRes12, testRes13, testRes14, testRes15, testRes16, testRes17, testRes18, testRes19, testRes20, testRes21, testRes22, testRes23, testRes24, testRes25, testRes26, testRes27, testRes28, testRes29, testRes30, testRes31, testRes32;

	sc_signal<sc_logic> reset, clock, end, newTV;
	c6288_netlist* UUT;

	sc_signal<bool> NbarT;
	std::vector<std::string> testVecs;
	SC_CTOR(c6288_netlist_TB)
	{

		testVecs = read_testPtr ("testPatterns.txt");
		UUT = new c6288_netlist("c6288_netlist_instance");
		UUT->N1(testData1);
		UUT->N103(testData2);
		UUT->N120(testData3);
		UUT->N137(testData4);
		UUT->N154(testData5);
		UUT->N171(testData6);
		UUT->N18(testData7);
		UUT->N188(testData8);
		UUT->N205(testData9);
		UUT->N222(testData10);
		UUT->N239(testData11);
		UUT->N256(testData12);
		UUT->N273(testData13);
		UUT->N290(testData14);
		UUT->N307(testData15);
		UUT->N324(testData16);
		UUT->N341(testData17);
		UUT->N35(testData18);
		UUT->N358(testData19);
		UUT->N375(testData20);
		UUT->N392(testData21);
		UUT->N409(testData22);
		UUT->N426(testData23);
		UUT->N443(testData24);
		UUT->N460(testData25);
		UUT->N477(testData26);
		UUT->N494(testData27);
		UUT->N511(testData28);
		UUT->N52(testData29);
		UUT->N528(testData30);
		UUT->N69(testData31);
		UUT->N86(testData32);
		UUT->N1581(testRes1);
		UUT->N1901(testRes2);
		UUT->N2223(testRes3);
		UUT->N2548(testRes4);
		UUT->N2877(testRes5);
		UUT->N3211(testRes6);
		UUT->N3552(testRes7);
		UUT->N3895(testRes8);
		UUT->N4241(testRes9);
		UUT->N4591(testRes10);
		UUT->N4946(testRes11);
		UUT->N5308(testRes12);
		UUT->N545(testRes13);
		UUT->N5672(testRes14);
		UUT->N5971(testRes15);
		UUT->N6123(testRes16);
		UUT->N6150(testRes17);
		UUT->N6160(testRes18);
		UUT->N6170(testRes19);
		UUT->N6180(testRes20);
		UUT->N6190(testRes21);
		UUT->N6200(testRes22);
		UUT->N6210(testRes23);
		UUT->N6220(testRes24);
		UUT->N6230(testRes25);
		UUT->N6240(testRes26);
		UUT->N6250(testRes27);
		UUT->N6260(testRes28);
		UUT->N6270(testRes29);
		UUT->N6280(testRes30);
		UUT->N6287(testRes31);
		UUT->N6288(testRes32);
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
