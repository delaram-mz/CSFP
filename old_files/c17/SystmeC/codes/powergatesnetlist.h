#include "NAND2_X1.h"
SC_MODULE(powerGatesNetlist)
{
	sc_in <tr_logic> N1, N2, N3, N6, N7;
	sc_out <tr_logic> N22, N23;
	sc_signal <tr_logic> _00_, _01_, _02_, _03_, _04_, _05_, _06_, _07_, _08_, _09_, _10_, _11_, _12_, _13_, _14_;

	int numOfGates;
	double t;
	double outLoad;

	NAND2_X1* _15__Gate1;
	NAND2_X1* _16__Gate2;
	NAND2_X1* _17__Gate3;
	NAND2_X1* _18__Gate4;
	NAND2_X1* _19__Gate5;
	NAND2_X1* _20__Gate6;

	SC_CTOR(powerGatesNetlist)
	{
		// numOfGates = 6;
		// t = 36000000.0;
		// outLoad = 6.8008;

		_15__Gate1 = new NAND2_X1("_15__instance1");
		_15__Gate1->A1(_09_);
		_15__Gate1->A2(_08_);
		_15__Gate1->ZN(_13_);
		// _15__Gate1->load_c = 0;
		// _15__Gate1->aged_time = t;

		_16__Gate2 = new NAND2_X1("_16__instance2");
		_16__Gate2->A1(_10_);
		_16__Gate2->A2(_08_);
		_16__Gate2->ZN(_14_);
		// _16__Gate2->load_c = 0;
		// _16__Gate2->aged_time = t;

		_17__Gate3 = new NAND2_X1("_17__instance3");
		_17__Gate3->A1(_14_);
		_17__Gate3->A2(_04_);
		_17__Gate3->ZN(_06_);
		// _17__Gate3->load_c = 0;
		// _17__Gate3->aged_time = t;

		_18__Gate4 = new NAND2_X1("_18__instance4");
		_18__Gate4->A1(_06_);
		_18__Gate4->A2(_13_);
		_18__Gate4->ZN(_11_);
		// _18__Gate4->load_c = 0;
		// _18__Gate4->aged_time = t;

		_19__Gate5 = new NAND2_X1("_19__instance5");
		_19__Gate5->A1(_14_);
		_19__Gate5->A2(_12_);
		_19__Gate5->ZN(_07_);
		// _19__Gate5->load_c = 0;
		// _19__Gate5->aged_time = t;

		_20__Gate6 = new NAND2_X1("_20__instance6");
		_20__Gate6->A1(_07_);
		_20__Gate6->A2(_06_);
		_20__Gate6->ZN(_05_);
		// _20__Gate6->load_c = 0;
		// _20__Gate6->aged_time = t;

		cout << "all gates are instantiated " << numberOfGates << "\n";
		// SC_THREAD(setupSim);
	}
	void ini();
	// void setupSim();
	// void notifyAlfaCalcNAND(NAND_X1 *gate);

};
