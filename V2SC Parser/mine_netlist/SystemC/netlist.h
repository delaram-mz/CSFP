#include "NAND2_X1.h"
#include "NOR2_X1.h"
#include "INV1_X1.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <map>


extern std::map<int, gates*> module_map;
SC_MODULE(mine_netlist)
{
	std::map<int, gates*> module_map;
	sc_in <fs_logic> a, b, c, d, e;
	sc_out <fs_logic> y1, y2, y3;
	sc_signal <fs_logic> _00_, _01_, _02_, _03_, _04_, _05_, _06_, _07_, _08_, _09_, _10_, _11_, _12_, _13_, _14_, _15_, _16_, _17_, _18_, _19_, _20_, _21_;
	sc_in<sc_logic> endSim; 
	sc_in<sc_logic> newTV; 
	sc_uint<32> counter; 

	std::vector<std::vector<int>> ALL_DET; 
	std::vector<std::vector<int>> RX_FAULTS; 
	int TVnum =0 ; 
	int tot_det = 0; 
	int det = 0; 

	int numOfGates;
	int totalObservedCombs;
	double GIC_Coverage;

	NAND2_X1* _22_Gate1;
	INV1_X1* _23_Gate2;
	INV1_X1* _24_Gate3;
	NOR2_X1* _25_Gate4;
	NAND2_X1* _26_Gate5;
	NOR2_X1* _27_Gate6;
	NAND2_X1* _28_Gate7;
	NOR2_X1* _29_Gate8;
	INV1_X1* _30_Gate9;

	SC_CTOR(mine_netlist)
	{
		numOfGates = 9;

		_22_Gate1 = new NAND2_X1("_22__instance1");
		_22_Gate1->id = 1;
		_22_Gate1->A1(_18_);
		_22_Gate1->A2(_08_);
		_22_Gate1->A1_branch_FAULTS({{6, 3}});
		_22_Gate1->A2_branch_FAULTS({{6, 1}});
		_22_Gate1->ZN(_21_);
		_22_Gate1->faults=21;
		module_map[1] = _22_Gate1;

		_23_Gate2 = new INV1_X1("_23__instance2");
		_23_Gate2->id = 2;
		_23_Gate2->A(_19_);
		_23_Gate2->ZN(_10_);
		_23_Gate2->faults=12;
		module_map[2] = _23_Gate2;

		_24_Gate3 = new INV1_X1("_24__instance3");
		_24_Gate3->id = 3;
		_24_Gate3->A(_20_);
		_24_Gate3->ZN(_11_);
		_24_Gate3->faults=12;
		module_map[3] = _24_Gate3;

		_25_Gate4 = new NOR2_X1("_25__instance4");
		_25_Gate4->id = 4;
		_25_Gate4->A1(_11_);
		_25_Gate4->A2(_10_);
		_25_Gate4->A1_branch_FAULTS({{7, 2}});
		_25_Gate4->A2_branch_FAULTS({{7, 0}});
		_25_Gate4->ZN(_12_);
		_25_Gate4->faults=26;
		module_map[4] = _25_Gate4;

		_26_Gate5 = new NAND2_X1("_26__instance5");
		_26_Gate5->id = 5;
		_26_Gate5->A1(_12_);
		_26_Gate5->A2(_21_);
		_26_Gate5->ZN(_09_);
		_26_Gate5->faults=48;
		module_map[5] = _26_Gate5;

		_27_Gate6 = new NOR2_X1("_27__instance6");
		_27_Gate6->id = 6;
		_27_Gate6->A1(_18_);
		_27_Gate6->A2(_08_);
		_27_Gate6->A1_branch_FAULTS({{1, 2}});
		_27_Gate6->A2_branch_FAULTS({{1, 0}});
		_27_Gate6->ZN(_15_);
		_27_Gate6->faults=42;
		module_map[6] = _27_Gate6;

		_28_Gate7 = new NAND2_X1("_28__instance7");
		_28_Gate7->id = 7;
		_28_Gate7->A1(_11_);
		_28_Gate7->A2(_10_);
		_28_Gate7->A1_branch_FAULTS({{4, 3}});
		_28_Gate7->A2_branch_FAULTS({{4, 1}});
		_28_Gate7->ZN(_17_);
		_28_Gate7->faults=37;
		module_map[7] = _28_Gate7;

		_29_Gate8 = new NOR2_X1("_29__instance8");
		_29_Gate8->id = 8;
		_29_Gate8->A1(_17_);
		_29_Gate8->A2(_15_);
		_29_Gate8->ZN(_13_);
		_29_Gate8->faults=48;
		module_map[8] = _29_Gate8;

		_30_Gate9 = new INV1_X1("_30__instance9");
		_30_Gate9->id = 9;
		_30_Gate9->A(_14_);
		_30_Gate9->ZN(_16_);
		_30_Gate9->faults=12;
		module_map[9] = _30_Gate9;

		cout << "all gates are instantiated " << numOfGates << "\n";
		SC_THREAD(assignments);
		sensitive << b << c << d << a << _13_ << _09_ << e << _16_;
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
