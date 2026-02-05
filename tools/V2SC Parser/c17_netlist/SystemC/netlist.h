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
SC_MODULE(c17_netlist)
{
	std::map<int, gates*> module_map;
	sc_in <fs_logic> N1, N2, N3, N6, N7;
	sc_out <fs_logic> N22, N23;
	sc_signal <fs_logic> _00_, _01_, _02_, _03_, _04_, _05_, _06_, _07_, _08_, _09_, _10_, _11_, _12_, _13_, _14_;
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

	NAND2_X1* _15_Gate1;
	NAND2_X1* _16_Gate2;
	NAND2_X1* _17_Gate3;
	NAND2_X1* _18_Gate4;
	NAND2_X1* _19_Gate5;
	NAND2_X1* _20_Gate6;

	SC_CTOR(c17_netlist)
	{
		numOfGates = 6;

		_15_Gate1 = new NAND2_X1("_15__instance1");
		_15_Gate1->id = 1;
		_15_Gate1->A1(_09_);
		_15_Gate1->A2(_08_);
		_15_Gate1->A2_branch_FAULTS({{2, 0}});
		_15_Gate1->ZN(_13_);
		_15_Gate1->faults=16;
		module_map[1] = _15_Gate1;

		_16_Gate2 = new NAND2_X1("_16__instance2");
		_16_Gate2->id = 2;
		_16_Gate2->A1(_10_);
		_16_Gate2->A2(_08_);
		_16_Gate2->ZN(_14_);
		_16_Gate2->faults=49;
		module_map[2] = _16_Gate2;

		_17_Gate3 = new NAND2_X1("_17__instance3");
		_17_Gate3->id = 3;
		_17_Gate3->A1(_14_);
		_17_Gate3->A2(_04_);
		_17_Gate3->A1_branch_FAULTS({{5, 2}});
		_17_Gate3->ZN(_06_);
		_17_Gate3->faults=52;
		module_map[3] = _17_Gate3;

		_18_Gate4 = new NAND2_X1("_18__instance4");
		_18_Gate4->id = 4;
		_18_Gate4->A1(_06_);
		_18_Gate4->A2(_13_);
		_18_Gate4->A1_branch_FAULTS({{6, 0}});
		_18_Gate4->ZN(_11_);
		_18_Gate4->faults=52;
		module_map[4] = _18_Gate4;

		_19_Gate5 = new NAND2_X1("_19__instance5");
		_19_Gate5->id = 5;
		_19_Gate5->A1(_14_);
		_19_Gate5->A2(_12_);
		_19_Gate5->A1_branch_FAULTS({{3, 2}});
		_19_Gate5->ZN(_07_);
		_19_Gate5->faults=20;
		module_map[5] = _19_Gate5;

		_20_Gate6 = new NAND2_X1("_20__instance6");
		_20_Gate6->id = 6;
		_20_Gate6->A1(_07_);
		_20_Gate6->A2(_06_);
		_20_Gate6->A2_branch_FAULTS({{4, 2}});
		_20_Gate6->ZN(_05_);
		_20_Gate6->faults=49;
		module_map[6] = _20_Gate6;

		cout << "all gates are instantiated " << numOfGates << "\n";
		SC_THREAD(assignments);
		sensitive << _11_ << N3 << N6 << N7 << _05_ << N1 << N2;
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
