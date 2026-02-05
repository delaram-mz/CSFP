#include "netlist.h"
#include <fstream>

SC_MODULE(c499_netlist_TB)
{

	sc_signal <sc_logic> testData1, testData2, testData3, testData4, testData5, testData6, testData7, testData8, testData9, testData10, testData11, testData12, testData13, testData14, testData15, testData16, testData17, testData18, testData19, testData20, testData21, testData22, testData23, testData24, testData25, testData26, testData27, testData28, testData29, testData30, testData31, testData32, testData33, testData34, testData35, testData36, testData37, testData38, testData39, testData40, testData41;
	sc_signal <sc_logic> testRes1, testRes2, testRes3, testRes4, testRes5, testRes6, testRes7, testRes8, testRes9, testRes10, testRes11, testRes12, testRes13, testRes14, testRes15, testRes16, testRes17, testRes18, testRes19, testRes20, testRes21, testRes22, testRes23, testRes24, testRes25, testRes26, testRes27, testRes28, testRes29, testRes30, testRes31, testRes32;

	sc_signal<sc_logic> reset, clock, end, newTV;
	c499_netlist* UUT;

	std::vector<std::string> testVecs;
	SC_CTOR(c499_netlist_TB)
	{

		testVecs = read_testPtr ("testPatterns.txt");
		UUT = new c499_netlist("c499_netlist_instance");
		UUT->N1(testData1);
		UUT->N101(testData2);
		UUT->N105(testData3);
		UUT->N109(testData4);
		UUT->N113(testData5);
		UUT->N117(testData6);
		UUT->N121(testData7);
		UUT->N125(testData8);
		UUT->N129(testData9);
		UUT->N13(testData10);
		UUT->N130(testData11);
		UUT->N131(testData12);
		UUT->N132(testData13);
		UUT->N133(testData14);
		UUT->N134(testData15);
		UUT->N135(testData16);
		UUT->N136(testData17);
		UUT->N137(testData18);
		UUT->N17(testData19);
		UUT->N21(testData20);
		UUT->N25(testData21);
		UUT->N29(testData22);
		UUT->N33(testData23);
		UUT->N37(testData24);
		UUT->N41(testData25);
		UUT->N45(testData26);
		UUT->N49(testData27);
		UUT->N5(testData28);
		UUT->N53(testData29);
		UUT->N57(testData30);
		UUT->N61(testData31);
		UUT->N65(testData32);
		UUT->N69(testData33);
		UUT->N73(testData34);
		UUT->N77(testData35);
		UUT->N81(testData36);
		UUT->N85(testData37);
		UUT->N89(testData38);
		UUT->N9(testData39);
		UUT->N93(testData40);
		UUT->N97(testData41);
		UUT->N724(testRes1);
		UUT->N725(testRes2);
		UUT->N726(testRes3);
		UUT->N727(testRes4);
		UUT->N728(testRes5);
		UUT->N729(testRes6);
		UUT->N730(testRes7);
		UUT->N731(testRes8);
		UUT->N732(testRes9);
		UUT->N733(testRes10);
		UUT->N734(testRes11);
		UUT->N735(testRes12);
		UUT->N736(testRes13);
		UUT->N737(testRes14);
		UUT->N738(testRes15);
		UUT->N739(testRes16);
		UUT->N740(testRes17);
		UUT->N741(testRes18);
		UUT->N742(testRes19);
		UUT->N743(testRes20);
		UUT->N744(testRes21);
		UUT->N745(testRes22);
		UUT->N746(testRes23);
		UUT->N747(testRes24);
		UUT->N748(testRes25);
		UUT->N749(testRes26);
		UUT->N750(testRes27);
		UUT->N751(testRes28);
		UUT->N752(testRes29);
		UUT->N753(testRes30);
		UUT->N754(testRes31);
		UUT->N755(testRes32);
		UUT->endSim(end);
		UUT->newTV(newTV);

		SC_THREAD(testPtr);
		SC_THREAD(endOfSim);
	}

	void endOfSim();
	void testPtr();
	std::vector<std::string> read_testPtr(std::string filename);
};
