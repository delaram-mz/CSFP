#include "netlist.h"
#include <fstream>

SC_MODULE(c3540_netlist_TB)
{

	sc_signal <fs_logic> testData1, testData2, testData3, testData4, testData5, testData6, testData7, testData8, testData9, testData10, testData11, testData12, testData13, testData14, testData15, testData16, testData17, testData18, testData19, testData20, testData21, testData22, testData23, testData24, testData25, testData26, testData27, testData28, testData29, testData30, testData31, testData32, testData33, testData34, testData35, testData36, testData37, testData38, testData39, testData40, testData41, testData42, testData43, testData44, testData45, testData46, testData47, testData48, testData49, testData50;
	sc_signal <fs_logic> testRes1, testRes2, testRes3, testRes4, testRes5, testRes6, testRes7, testRes8, testRes9, testRes10, testRes11, testRes12, testRes13, testRes14, testRes15, testRes16, testRes17, testRes18, testRes19, testRes20, testRes21, testRes22;

	sc_signal<sc_logic> reset, clock, end, newTV;
	c3540_netlist* UUT;

	sc_signal<bool> NbarT;
	std::vector<std::string> testVecs;
	SC_CTOR(c3540_netlist_TB)
	{

		testVecs = read_testPtr ("testPatterns.txt");
		UUT = new c3540_netlist("c3540_netlist_instance");
		UUT->N1(testData1);
		UUT->N107(testData2);
		UUT->N116(testData3);
		UUT->N124(testData4);
		UUT->N125(testData5);
		UUT->N128(testData6);
		UUT->N13(testData7);
		UUT->N132(testData8);
		UUT->N137(testData9);
		UUT->N143(testData10);
		UUT->N150(testData11);
		UUT->N159(testData12);
		UUT->N169(testData13);
		UUT->N179(testData14);
		UUT->N190(testData15);
		UUT->N20(testData16);
		UUT->N200(testData17);
		UUT->N213(testData18);
		UUT->N222(testData19);
		UUT->N223(testData20);
		UUT->N226(testData21);
		UUT->N232(testData22);
		UUT->N238(testData23);
		UUT->N244(testData24);
		UUT->N250(testData25);
		UUT->N257(testData26);
		UUT->N264(testData27);
		UUT->N270(testData28);
		UUT->N274(testData29);
		UUT->N283(testData30);
		UUT->N294(testData31);
		UUT->N303(testData32);
		UUT->N311(testData33);
		UUT->N317(testData34);
		UUT->N322(testData35);
		UUT->N326(testData36);
		UUT->N329(testData37);
		UUT->N33(testData38);
		UUT->N330(testData39);
		UUT->N343(testData40);
		UUT->N349(testData41);
		UUT->N350(testData42);
		UUT->N41(testData43);
		UUT->N45(testData44);
		UUT->N50(testData45);
		UUT->N58(testData46);
		UUT->N68(testData47);
		UUT->N77(testData48);
		UUT->N87(testData49);
		UUT->N97(testData50);
		UUT->N1713(testRes1);
		UUT->N1947(testRes2);
		UUT->N3195(testRes3);
		UUT->N3833(testRes4);
		UUT->N3987(testRes5);
		UUT->N4028(testRes6);
		UUT->N4145(testRes7);
		UUT->N4589(testRes8);
		UUT->N4667(testRes9);
		UUT->N4815(testRes10);
		UUT->N4944(testRes11);
		UUT->N5002(testRes12);
		UUT->N5045(testRes13);
		UUT->N5047(testRes14);
		UUT->N5078(testRes15);
		UUT->N5102(testRes16);
		UUT->N5120(testRes17);
		UUT->N5121(testRes18);
		UUT->N5192(testRes19);
		UUT->N5231(testRes20);
		UUT->N5360(testRes21);
		UUT->N5361(testRes22);
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
