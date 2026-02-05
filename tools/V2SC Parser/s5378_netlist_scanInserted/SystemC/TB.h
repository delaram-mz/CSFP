#include "netlist.h"
#include <fstream>

SC_MODULE(s5378_netlist_scanInserted_TB)
{

	sc_signal <sc_logic> testData1, testData2, testData3, testData4, testData5, testData6, testData7, testData8, testData9, testData10, testData11, testData12, testData13, testData14, testData15, testData16, testData17, testData18, testData19, testData20, testData21, testData22, testData23, testData24, testData25, testData26, testData27, testData28, testData29, testData30, testData31, testData32, testData33, testData34, testData35, testData36, testData37, testData38, testData39;
	sc_signal <sc_logic> testRes1, testRes2, testRes3, testRes4, testRes5, testRes6, testRes7, testRes8, testRes9, testRes10, testRes11, testRes12, testRes13, testRes14, testRes15, testRes16, testRes17, testRes18, testRes19, testRes20, testRes21, testRes22, testRes23, testRes24, testRes25, testRes26, testRes27, testRes28, testRes29, testRes30, testRes31, testRes32, testRes33, testRes34, testRes35, testRes36, testRes37, testRes38, testRes39, testRes40, testRes41, testRes42, testRes43, testRes44, testRes45, testRes46, testRes47, testRes48, testRes49, testRes50;

	sc_signal<sc_logic> reset, clock, end, newTV;
	s5378_netlist_scanInserted* UUT;

	std::vector<std::string> testVecs;
	SC_CTOR(s5378_netlist_scanInserted_TB)
	{

		testVecs = read_testPtr ("testPatterns.txt");
		UUT = new s5378_netlist_scanInserted("s5378_netlist_scanInserted_instance");
		UUT->rst(testData1);
		UUT->Si(testData2);
		UUT->PbarS(testData3);
		UUT->CK(testData4);
		UUT->n3065gat(testData5);
		UUT->n3066gat(testData6);
		UUT->n3067gat(testData7);
		UUT->n3068gat(testData8);
		UUT->n3069gat(testData9);
		UUT->n3070gat(testData10);
		UUT->n3071gat(testData11);
		UUT->n3072gat(testData12);
		UUT->n3073gat(testData13);
		UUT->n3074gat(testData14);
		UUT->n3075gat(testData15);
		UUT->n3076gat(testData16);
		UUT->n3077gat(testData17);
		UUT->n3078gat(testData18);
		UUT->n3079gat(testData19);
		UUT->n3080gat(testData20);
		UUT->n3081gat(testData21);
		UUT->n3082gat(testData22);
		UUT->n3083gat(testData23);
		UUT->n3084gat(testData24);
		UUT->n3085gat(testData25);
		UUT->n3086gat(testData26);
		UUT->n3087gat(testData27);
		UUT->n3088gat(testData28);
		UUT->n3089gat(testData29);
		UUT->n3090gat(testData30);
		UUT->n3091gat(testData31);
		UUT->n3092gat(testData32);
		UUT->n3093gat(testData33);
		UUT->n3094gat(testData34);
		UUT->n3095gat(testData35);
		UUT->n3097gat(testData36);
		UUT->n3098gat(testData37);
		UUT->n3099gat(testData38);
		UUT->n3100gat(testData39);
		UUT->So(testRes1);
		UUT->n3104gat(testRes2);
		UUT->n3105gat(testRes3);
		UUT->n3106gat(testRes4);
		UUT->n3107gat(testRes5);
		UUT->n3108gat(testRes6);
		UUT->n3109gat(testRes7);
		UUT->n3110gat(testRes8);
		UUT->n3111gat(testRes9);
		UUT->n3112gat(testRes10);
		UUT->n3113gat(testRes11);
		UUT->n3114gat(testRes12);
		UUT->n3115gat(testRes13);
		UUT->n3116gat(testRes14);
		UUT->n3117gat(testRes15);
		UUT->n3118gat(testRes16);
		UUT->n3119gat(testRes17);
		UUT->n3120gat(testRes18);
		UUT->n3121gat(testRes19);
		UUT->n3122gat(testRes20);
		UUT->n3123gat(testRes21);
		UUT->n3124gat(testRes22);
		UUT->n3125gat(testRes23);
		UUT->n3126gat(testRes24);
		UUT->n3127gat(testRes25);
		UUT->n3128gat(testRes26);
		UUT->n3129gat(testRes27);
		UUT->n3130gat(testRes28);
		UUT->n3131gat(testRes29);
		UUT->n3132gat(testRes30);
		UUT->n3133gat(testRes31);
		UUT->n3134gat(testRes32);
		UUT->n3135gat(testRes33);
		UUT->n3136gat(testRes34);
		UUT->n3137gat(testRes35);
		UUT->n3138gat(testRes36);
		UUT->n3139gat(testRes37);
		UUT->n3140gat(testRes38);
		UUT->n3141gat(testRes39);
		UUT->n3142gat(testRes40);
		UUT->n3143gat(testRes41);
		UUT->n3144gat(testRes42);
		UUT->n3145gat(testRes43);
		UUT->n3146gat(testRes44);
		UUT->n3147gat(testRes45);
		UUT->n3148gat(testRes46);
		UUT->n3149gat(testRes47);
		UUT->n3150gat(testRes48);
		UUT->n3151gat(testRes49);
		UUT->n3152gat(testRes50);
		UUT->endSim(end);
		UUT->newTV(newTV);

		SC_THREAD(testPtr);
		SC_THREAD(endOfSim);
	}

	void endOfSim();
	void testPtr();
	std::vector<std::string> read_testPtr(std::string filename);
};
