#include "netlist.h"
#include <fstream>

SC_MODULE(c1355_netlist_TB)
{

	sc_signal <fs_logic> testData1, testData2, testData3, testData4, testData5, testData6, testData7, testData8, testData9, testData10, testData11, testData12, testData13, testData14, testData15, testData16, testData17, testData18, testData19, testData20, testData21, testData22, testData23, testData24, testData25, testData26, testData27, testData28, testData29, testData30, testData31, testData32, testData33, testData34, testData35, testData36, testData37, testData38, testData39, testData40, testData41;
	sc_signal <fs_logic> testRes1, testRes2, testRes3, testRes4, testRes5, testRes6, testRes7, testRes8, testRes9, testRes10, testRes11, testRes12, testRes13, testRes14, testRes15, testRes16, testRes17, testRes18, testRes19, testRes20, testRes21, testRes22, testRes23, testRes24, testRes25, testRes26, testRes27, testRes28, testRes29, testRes30, testRes31, testRes32;

	sc_signal<sc_logic> reset, clock, end, newTV;
	c1355_netlist* UUT;

	sc_signal<bool> NbarT;
	std::vector<std::string> testVecs;
	SC_CTOR(c1355_netlist_TB)
	{

		testVecs = read_testPtr ("testPatterns.txt");
		UUT = new c1355_netlist("c1355_netlist_instance");
		UUT->N1(testData1);
		UUT->N106(testData2);
		UUT->N113(testData3);
		UUT->N120(testData4);
		UUT->N127(testData5);
		UUT->N134(testData6);
		UUT->N141(testData7);
		UUT->N148(testData8);
		UUT->N15(testData9);
		UUT->N155(testData10);
		UUT->N162(testData11);
		UUT->N169(testData12);
		UUT->N176(testData13);
		UUT->N183(testData14);
		UUT->N190(testData15);
		UUT->N197(testData16);
		UUT->N204(testData17);
		UUT->N211(testData18);
		UUT->N218(testData19);
		UUT->N22(testData20);
		UUT->N225(testData21);
		UUT->N226(testData22);
		UUT->N227(testData23);
		UUT->N228(testData24);
		UUT->N229(testData25);
		UUT->N230(testData26);
		UUT->N231(testData27);
		UUT->N232(testData28);
		UUT->N233(testData29);
		UUT->N29(testData30);
		UUT->N36(testData31);
		UUT->N43(testData32);
		UUT->N50(testData33);
		UUT->N57(testData34);
		UUT->N64(testData35);
		UUT->N71(testData36);
		UUT->N78(testData37);
		UUT->N8(testData38);
		UUT->N85(testData39);
		UUT->N92(testData40);
		UUT->N99(testData41);
		UUT->N1324(testRes1);
		UUT->N1325(testRes2);
		UUT->N1326(testRes3);
		UUT->N1327(testRes4);
		UUT->N1328(testRes5);
		UUT->N1329(testRes6);
		UUT->N1330(testRes7);
		UUT->N1331(testRes8);
		UUT->N1332(testRes9);
		UUT->N1333(testRes10);
		UUT->N1334(testRes11);
		UUT->N1335(testRes12);
		UUT->N1336(testRes13);
		UUT->N1337(testRes14);
		UUT->N1338(testRes15);
		UUT->N1339(testRes16);
		UUT->N1340(testRes17);
		UUT->N1341(testRes18);
		UUT->N1342(testRes19);
		UUT->N1343(testRes20);
		UUT->N1344(testRes21);
		UUT->N1345(testRes22);
		UUT->N1346(testRes23);
		UUT->N1347(testRes24);
		UUT->N1348(testRes25);
		UUT->N1349(testRes26);
		UUT->N1350(testRes27);
		UUT->N1351(testRes28);
		UUT->N1352(testRes29);
		UUT->N1353(testRes30);
		UUT->N1354(testRes31);
		UUT->N1355(testRes32);
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
