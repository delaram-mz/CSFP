#include "NAND2_X1.h"
#include "NOR2_X1.h"
#include "INV1_X1.h"
// #include "POUT1_X1.h"
// #include "PIN1_X1.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <map>


extern std::map<int, gates*> module_map;
SC_MODULE(c17)
{
	std::map<int, gates*> module_map;
	sc_in <fs_logic> N1, N2, N3, N6, N7;
	sc_out <fs_logic> N22, N23;
	sc_signal <fs_logic> _0_, _1_, _2_, _3_;
	sc_in<sc_logic> endSim; 
	sc_in<sc_logic> newTV; 
	sc_in<bool> NbarT;
	sc_uint<32> counter; 

	std::vector<std::vector<int>> ALL_DET; 
	std::vector<std::vector<int>> RX_FAULTS; 
	int TVnum =0 ; 
	int tot_det = 0; 
	int det = 0; 

	int numOfGates;
	int totalObservedCombs;
	double GIC_Coverage;

	NAND2_X1* _4_Gate1;
	NAND2_X1* _5_Gate2;
	NAND2_X1* _6_Gate3;
	NAND2_X1* _7_Gate4;
	NAND2_X1* _8_Gate5;
	NAND2_X1* _9_Gate6;

	SC_CTOR(c17)
	{
		numOfGates = 6;

		_4_Gate1 = new NAND2_X1("_4__instance1");
		_4_Gate1->id = 1;
		_4_Gate1->A1(N6);
		_4_Gate1->A2(N3);
		_4_Gate1->ZN(_2_);
		_4_Gate1->NbarT(NbarT);
		_4_Gate1->faults=26;
		module_map[1] = _4_Gate1;

		_5_Gate2 = new NAND2_X1("_5__instance2");
		_5_Gate2->id = 2;
		_5_Gate2->A1(N2);
		_5_Gate2->A2(_2_);
		_5_Gate2->A2_branch_FAULTS = {{3, 1}};
		_5_Gate2->ZN(_3_);
		_5_Gate2->NbarT(NbarT);
		_5_Gate2->faults=26;
		module_map[2] = _5_Gate2;

		_6_Gate3 = new NAND2_X1("_6__instance3");
		_6_Gate3->id = 3;
		_6_Gate3->A1(N7);
		_6_Gate3->A2(_2_);
		_6_Gate3->A2_branch_FAULTS = {{2, 1}};
		_6_Gate3->ZN(_0_);
		_6_Gate3->NbarT(NbarT);
		_6_Gate3->faults=26;
		module_map[3] = _6_Gate3;

		_7_Gate4 = new NAND2_X1("_7__instance4");
		_7_Gate4->id = 4;
		_7_Gate4->A1(_3_);
		_7_Gate4->A2(_0_);
		_7_Gate4->A1_branch_FAULTS = {{6, 3}};
		_7_Gate4->ZN(N23);
		_7_Gate4->NbarT(NbarT);
		_7_Gate4->faults=26;
		module_map[4] = _7_Gate4;

		_8_Gate5 = new NAND2_X1("_8__instance5");
		_8_Gate5->id = 5;
		_8_Gate5->A1(N3);
		_8_Gate5->A2(N1);
		_8_Gate5->ZN(_1_);
		_8_Gate5->NbarT(NbarT);
		_8_Gate5->faults=26;
		module_map[5] = _8_Gate5;

		_9_Gate6 = new NAND2_X1("_9__instance6");
		_9_Gate6->id = 6;
		_9_Gate6->A1(_3_);
		_9_Gate6->A2(_1_);
		_9_Gate6->A1_branch_FAULTS = {{4, 3}};
		_9_Gate6->ZN(N22);
		_9_Gate6->NbarT(NbarT);
		_9_Gate6->faults=26;
		module_map[6] = _9_Gate6;

		cout << "all gates are instantiated " << numOfGates << "\n";
		SC_THREAD(assignments);
		sensitive;
		SC_METHOD(GIC_Coverage_Calculator);
		sensitive << endSim<< newTV;

		SC_METHOD(faultCollection);
		sensitive << newTV.neg();

	}
	void ini();
	void assignments();
	void GIC_Coverage_Calculator();
	void faultCollection();

};
