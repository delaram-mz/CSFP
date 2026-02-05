#include "netlist.h"
#include <fstream>

SC_MODULE(c880_netlist_TB)
{

	sc_signal <fs_logic> testData1, testData2, testData3, testData4, testData5, testData6, testData7, testData8, testData9, testData10, testData11, testData12, testData13, testData14, testData15, testData16, testData17, testData18, testData19, testData20, testData21, testData22, testData23, testData24, testData25, testData26, testData27, testData28, testData29, testData30, testData31, testData32, testData33, testData34, testData35, testData36, testData37, testData38, testData39, testData40, testData41, testData42, testData43, testData44, testData45, testData46, testData47, testData48, testData49, testData50, testData51, testData52, testData53, testData54, testData55, testData56, testData57, testData58, testData59, testData60;
	sc_signal <fs_logic> testRes1, testRes2, testRes3, testRes4, testRes5, testRes6, testRes7, testRes8, testRes9, testRes10, testRes11, testRes12, testRes13, testRes14, testRes15, testRes16, testRes17, testRes18, testRes19, testRes20, testRes21, testRes22, testRes23, testRes24, testRes25, testRes26;

	sc_signal<sc_logic> reset, clock, end, newTV;
	c880_netlist* UUT;

	std::vector<std::string> testVecs;
	SC_CTOR(c880_netlist_TB)
	{

		testVecs = read_testPtr ("testPatterns.txt");
		UUT = new c880_netlist("c880_netlist_instance");
		UUT->N1(testData1);
		UUT->N101(testData2);
		UUT->N106(testData3);
		UUT->N111(testData4);
		UUT->N116(testData5);
		UUT->N121(testData6);
		UUT->N126(testData7);
		UUT->N13(testData8);
		UUT->N130(testData9);
		UUT->N135(testData10);
		UUT->N138(testData11);
		UUT->N143(testData12);
		UUT->N146(testData13);
		UUT->N149(testData14);
		UUT->N152(testData15);
		UUT->N153(testData16);
		UUT->N156(testData17);
		UUT->N159(testData18);
		UUT->N165(testData19);
		UUT->N17(testData20);
		UUT->N171(testData21);
		UUT->N177(testData22);
		UUT->N183(testData23);
		UUT->N189(testData24);
		UUT->N195(testData25);
		UUT->N201(testData26);
		UUT->N207(testData27);
		UUT->N210(testData28);
		UUT->N219(testData29);
		UUT->N228(testData30);
		UUT->N237(testData31);
		UUT->N246(testData32);
		UUT->N255(testData33);
		UUT->N259(testData34);
		UUT->N26(testData35);
		UUT->N260(testData36);
		UUT->N261(testData37);
		UUT->N267(testData38);
		UUT->N268(testData39);
		UUT->N29(testData40);
		UUT->N36(testData41);
		UUT->N42(testData42);
		UUT->N51(testData43);
		UUT->N55(testData44);
		UUT->N59(testData45);
		UUT->N68(testData46);
		UUT->N72(testData47);
		UUT->N73(testData48);
		UUT->N74(testData49);
		UUT->N75(testData50);
		UUT->N8(testData51);
		UUT->N80(testData52);
		UUT->N85(testData53);
		UUT->N86(testData54);
		UUT->N87(testData55);
		UUT->N88(testData56);
		UUT->N89(testData57);
		UUT->N90(testData58);
		UUT->N91(testData59);
		UUT->N96(testData60);
		UUT->N388(testRes1);
		UUT->N389(testRes2);
		UUT->N390(testRes3);
		UUT->N391(testRes4);
		UUT->N418(testRes5);
		UUT->N419(testRes6);
		UUT->N420(testRes7);
		UUT->N421(testRes8);
		UUT->N422(testRes9);
		UUT->N423(testRes10);
		UUT->N446(testRes11);
		UUT->N447(testRes12);
		UUT->N448(testRes13);
		UUT->N449(testRes14);
		UUT->N450(testRes15);
		UUT->N767(testRes16);
		UUT->N768(testRes17);
		UUT->N850(testRes18);
		UUT->N863(testRes19);
		UUT->N864(testRes20);
		UUT->N865(testRes21);
		UUT->N866(testRes22);
		UUT->N874(testRes23);
		UUT->N878(testRes24);
		UUT->N879(testRes25);
		UUT->N880(testRes26);
		UUT->endSim(end);
		UUT->newTV(newTV);

		SC_THREAD(testPtr);
		SC_THREAD(endOfSim);
	}

	void endOfSim();
	void testPtr();
	std::vector<std::string> read_testPtr(std::string filename);
};
