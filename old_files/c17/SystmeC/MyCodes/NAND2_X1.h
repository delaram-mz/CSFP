/***********************************************************************************************************
* File:				NAND2_X1.h
* Author:			Katayoon B, Zain N

* Description:		This file includes the NAND gate definition
* Created on:       2023

* Last modified by: Katayoon B
* Last modified on: 02/2024

Modification:
************************************************************************************************************/



#include <systemc.h>
#include <math.h>
#include "GATES_X1.h"
#include "powerNAND2_X1GateParams.h"

class NAND2_X1: public sc_module, GATES_X1
{
public:
	sc_in<tr_logic> A1, A2;
	sc_out<tr_logic> ZN;
	double A1rTr, A2rTr,ZNrTr;
	double A1fTr, A2fTr,ZNfTr; /// comma needed
	double A1Toggle, A2Toggle;
	int A1Fanin, A2Fanin;
	static NAND2_X1_params params;
	double outrTrans;
	double outfTrans;
	double inpTglCnt[params.numExpr];
	double outTglCnt[params.numExpr];
	sc_signal <tr_logic> gateSCins[params.numInp];
	bool inpRof[params.numExpr];
	double A1rfToggle[2];
	double A2rfToggle[2];
	// ATTENTION!!!!! : replace these
	double** inpTgl = new double*[params.numExpr];
	double** ZNToggle = new double*[params.numExpr];

	// ATTENTION!!!!! : insert the following
	double VDD;
	double load_c;
	double aged_time;
	double input_transTime_A1;
	double input_transTime_A2;
	double delTimeOut;
	double delTrnsOut;
	double delayedOutrTrans;
	bool fall_input1_event, fall_input2_event;
	sc_logic current_val;
	sc_event findAlfa;
	// ATTENTION!!!!! : change 2 to numOf inputs
	bool inpCapProcessed[2];

	ofstream out;
	SC_CTOR(NAND2_X1) : 
	A1Toggle(0), A2Toggle(0)
	{
		gateIdentifier = numberOfGates++;
		VDD = 1.1;
		// ATTENTION!!!!! : insert this
		for (int i = 0; i < params.numExpr; i++) {
    		inpTgl[i] = new double[params.numInp];
			ZNToggle[i] = new double[params.numInp];
		}	

	out.open("power_report.txt");
		SC_THREAD(inz);
		SC_THREAD(evl);
			sensitive << A1 << A2;
		// ATTENTION!!!!! : comment out the unwanted threads
		/*SC_THREAD(pwrRejTH);
			sensitive << pwrRej;
		dont_initialize();*/
		/*SC_THREAD(pwrRejOffsetTH);
			sensitive << pwrRejOffset;
		dont_initialize();*/
		SC_THREAD(timRejTH);
			sensitive << timRej;
		dont_initialize();
		SC_THREAD(timRejOffsetTH);
			sensitive << timRejOffset;//---->timRejOffset
		dont_initialize();
		SC_THREAD(tglInp);
			sensitive << A1 << A2;
			dont_initialize();
			// ATTENTION!!!!! : add findAlfa
		SC_THREAD(outEvlTgl)
			sensitive << outPwrRej << outTimRej << A1 << A2 << findAlfa;
			dont_initialize();
		/*SC_THREAD(pwr)
			sensitive << timeSprocket.posedge_event();*/
		SC_THREAD(gfi)
			dont_initialize();
			sensitive << A1 << A2;

	}
	void inz();
	void evl();
	void pwrRejTH(); void pwrRejOffsetTH();
	void timRejTH(); void timRejOffsetTH();
	void tglInp();
	void outEvlTgl();
	void pwr();
	void gfi();
	// insert following
	// void outAgedDelay();
	// double agedTimingDelay(double slew_inp1, double slew_inp2, double alfa1, double alfa2, double time, double load);
	// double agedTimingTrans(double slew_inp1, double slew_inp2, double alfa1, double alfa2, double time, double load);
	// double delVthCalc(double Vgs, double T, double t, double alpha, double A, double T0, double Ea, double E0, double t1, double zeta1);
};