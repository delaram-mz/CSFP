#include "NAND2_X1.h"
#include "NOR2_X1.h"
#include "INV1_X1.h"
#include "POUT1_X1.h"
#include "PIN1_X1.h"
#include "component_library.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <map>


extern std::map<int, gates*> module_map;
SC_MODULE(custom_circuit_netlist_scanInserted)
{
	std::map<int, gates*> module_map;
	sc_in <sc_logic> clk, rst;
	sc_in <fs_logic> Si, PbarS, A, B, C, D;
	sc_out <fs_logic> So, Y0, Y1;
	sc_signal <fs_logic> _00_, _01_, _02_, _03_, _04_, _05_, _06_, _07_, _08_, _09_, _10_, _11_, _12_, _13_, w1, w3, w4, w5;
	sc_in<sc_logic> endSim; 
	sc_in<sc_logic> newTV; 
	sc_in<bool> fpMode;
	sc_in<sc_logic> LFSR_en;
	sc_signal <sc_logic> sc_logic_1_signal, sc_logic_0_signal;
	sc_signal <fs_logic> fs_logic_1_signal, fs_logic_0_signal;
	sc_in<int> flipIdx;
	sc_out<int> selectedIdx;
	sc_vector<sc_signal<double>> contributions{"contributions", 35};
	std::vector<double> FC_contributions;
	std::vector<std::vector<int>> ALL_DET_base; 
	std::vector<std::vector<int>> ALL_DET; 
	std::vector<std::vector<int>> RX_FAULTS; 
	int TVnum =0 ; 
	int tot_det = 0; 
	int det = 0; 

	int numOfGates;
	int totalObservedCombs;
	double GIC_Coverage;

	NAND2_X1* _14_Gate1;
	NAND2_X1* _15_Gate2;
	NAND2_X1* _16_Gate3;
	NAND2_X1* _17_Gate4;
	NAND2_X1* _18_Gate5;
	dff* DFF_0Gate6;
	dff* DFF_1Gate7;
	POUT1_X1* _90000_Gate8;
	PIN1_X1* _70000_Gate9;
	PIN1_X1* _70001_Gate10;
	PIN1_X1* _70002_Gate11;
	PIN1_X1* _70003_Gate12;
	POUT1_X1* _90001_Gate13;
	POUT1_X1* _90002_Gate14;

	SC_CTOR(custom_circuit_netlist_scanInserted)
	{
		numOfGates = 14;

		_14_Gate1 = new NAND2_X1("_14__instance1");
		_14_Gate1->id = 1;
		_14_Gate1->A1(_04_);
		_14_Gate1->A2(_03_);
		_14_Gate1->CP(takeCP);
		_14_Gate1->ldCP(loadCP);
		_14_Gate1->NbarT(fpMode);
		_14_Gate1->ZN(_09_);
		_14_Gate1->faults=16;
		module_map[1] = _14_Gate1;

		_15_Gate2 = new NAND2_X1("_15__instance2");
		_15_Gate2->id = 2;
		_15_Gate2->A1(_09_);
		_15_Gate2->A2(_11_);
		_15_Gate2->CP(takeCP);
		_15_Gate2->ldCP(loadCP);
		_15_Gate2->NbarT(fpMode);
		_15_Gate2->ZN(_07_);
		_15_Gate2->faults=16;
		module_map[2] = _15_Gate2;

		_16_Gate3 = new NAND2_X1("_16__instance3");
		_16_Gate3->id = 3;
		_16_Gate3->A1(_07_);
		_16_Gate3->A2(_10_);
		_16_Gate3->CP(takeCP);
		_16_Gate3->ldCP(loadCP);
		_16_Gate3->NbarT(fpMode);
		_16_Gate3->ZN(_12_);
		_16_Gate3->faults=0;
		module_map[3] = _16_Gate3;

		_17_Gate4 = new NAND2_X1("_17__instance4");
		_17_Gate4->id = 4;
		_17_Gate4->A1(_07_);
		_17_Gate4->A2(_13_);
		_17_Gate4->CP(takeCP);
		_17_Gate4->ldCP(loadCP);
		_17_Gate4->NbarT(fpMode);
		_17_Gate4->ZN(_08_);
		_17_Gate4->faults=16;
		module_map[4] = _17_Gate4;

		_18_Gate5 = new NAND2_X1("_18__instance5");
		_18_Gate5->id = 5;
		_18_Gate5->A1(_08_);
		_18_Gate5->A2(_05_);
		_18_Gate5->CP(takeCP);
		_18_Gate5->ldCP(loadCP);
		_18_Gate5->NbarT(fpMode);
		_18_Gate5->ZN(_06_);
		_18_Gate5->faults=1;
		module_map[5] = _18_Gate5;

		DFF_0_Gate6 = new DFF("DFF_0_instance6");
		DFF_0_Gate6->id = 6;
		DFF_0_Gate6->C(clk);
		DFF_0_Gate6->CE(sc_logic_1_signal);
		DFF_0_Gate6->CLR(rst);
		DFF_0_Gate6->D(w1);
		DFF_0_Gate6->NbarT(PbarS);
		DFF_0_Gate6->PRE(sc_logic_0_signal);
		DFF_0_Gate6->Si(Si);
		DFF_0_Gate6->global_reset(sc_logic_0_signal);
		DFF_0_Gate6->CP(takeCP);
		DFF_0_Gate6->ldCP(loadCP);
		DFF_0_Gate6->fpMode(fpMode);
		DFF_0_Gate6->Q(w5);
		DFF_0_Gate6->faults=3;
		module_map[6] = DFF_0_Gate6;

		DFF_1_Gate7 = new DFF("DFF_1_instance7");
		DFF_1_Gate7->id = 7;
		DFF_1_Gate7->C(clk);
		DFF_1_Gate7->CE(sc_logic_1_signal);
		DFF_1_Gate7->CLR(rst);
		DFF_1_Gate7->D(w3);
		DFF_1_Gate7->NbarT(PbarS);
		DFF_1_Gate7->PRE(sc_logic_0_signal);
		DFF_1_Gate7->Si(w5);
		DFF_1_Gate7->global_reset(sc_logic_0_signal);
		DFF_1_Gate7->CP(takeCP);
		DFF_1_Gate7->ldCP(loadCP);
		DFF_1_Gate7->fpMode(fpMode);
		DFF_1_Gate7->Q(w4);
		DFF_1_Gate7->faults=1;
		module_map[7] = DFF_1_Gate7;

		_90000_Gate8 = new POUT1_X1("_90000__instance8");
		_90000_Gate8->id = 8;
		_90000_Gate8->A(w5);
		_90000_Gate8->NbarT(fpMode);
		_90000_Gate8->ZN(Y0);
		_90000_Gate8->faults=12;
		module_map[8] = _90000_Gate8;

		_70000_Gate9 = new PIN1_X1("_70000__instance9");
		_70000_Gate9->id = 9;
		_70000_Gate9->A(B);
		_70000_Gate9->NbarT(fpMode);
		_70000_Gate9->ZN(_03_);
		_70000_Gate9->faults=1;
		module_map[9] = _70000_Gate9;

		_70001_Gate10 = new PIN1_X1("_70001__instance10");
		_70001_Gate10->id = 10;
		_70001_Gate10->A(A);
		_70001_Gate10->NbarT(fpMode);
		_70001_Gate10->ZN(_04_);
		_70001_Gate10->faults=1;
		module_map[10] = _70001_Gate10;

		_70002_Gate11 = new PIN1_X1("_70002__instance11");
		_70002_Gate11->id = 11;
		_70002_Gate11->A(D);
		_70002_Gate11->NbarT(fpMode);
		_70002_Gate11->ZN(_10_);
		_70002_Gate11->faults=3;
		module_map[11] = _70002_Gate11;

		_70003_Gate12 = new PIN1_X1("_70003__instance12");
		_70003_Gate12->id = 12;
		_70003_Gate12->A(C);
		_70003_Gate12->NbarT(fpMode);
		_70003_Gate12->ZN(_11_);
		_70003_Gate12->faults=1;
		module_map[12] = _70003_Gate12;

		_90001_Gate13 = new POUT1_X1("_90001__instance13");
		_90001_Gate13->id = 13;
		_90001_Gate13->A(_06_);
		_90001_Gate13->NbarT(fpMode);
		_90001_Gate13->ZN(Y1);
		_90001_Gate13->faults=12;
		module_map[13] = _90001_Gate13;

		_90002_Gate14 = new POUT1_X1("_90002__instance14");
		_90002_Gate14->id = 14;
		_90002_Gate14->A(w4);
		_90002_Gate14->NbarT(fpMode);
		_90002_Gate14->ZN(So);
		_90002_Gate14->faults=0;
		module_map[14] = _90002_Gate14;

		cout << "all gates are instantiated " << numOfGates << "\n";
		SC_THREAD(assignments);
		sensitive << _12_ << w5 << _09_ << w4;
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
