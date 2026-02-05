/***********************************************************************************************************
* File:				powerUtils.h
* Author:			Katayoon B, Zain N

* Description:		This file includes all the utility function required for power and timing like
					looking up in library tables and Wire models
* Created on:       2023

* Last modified by: Katayoon B
* Last modified on: 02/2024

Modification:
************************************************************************************************************/



#include "systemc.h"
#include <string>
#include <iomanip>
#include <mutex>
//#include "Debug.h"

using namespace std;

static int numberOfGates = 0;

//------Data Structure "tr_logic" inherited from sc_signal and will be used for gates inputs/outputs------//
//lv---> logic Value
//fv---> fall value
//rv---> rise value
//gateNumOut---> Gate ID

class tr_logic {
public:
	sc_logic lv;
	double fv;
	double rv;
	// double alfa;
	int gateNumOut; // Gate number at its output

	// constructor
	tr_logic(sc_logic _lv = sc_logic_0, double _fv = 0.0, double _rv = 0.0, int _gateNumOut = -1) {
		lv = _lv;
		fv = _fv;
		rv = _rv;
		// alfa = _alfa;
		gateNumOut = _gateNumOut;
	}

	inline bool operator == (const tr_logic& rhs) const {
		return (rhs.lv == lv && rhs.fv == fv && rhs.rv == rv && rhs.gateNumOut == gateNumOut);
	}

	inline tr_logic& operator = (const tr_logic& rhs) {
		lv = rhs.lv;
		fv = rhs.fv;
		rv = rhs.rv;
		// alfa = rhs.alfa;
		gateNumOut = rhs.gateNumOut;
		return *this;
	}

	// inline tr_logic& operator <= (double a) {
	// 	alfa = a;
	// 	return *this;
	// }

	inline friend void sc_trace(sc_trace_file* tf, const tr_logic& v,
		const std::string& NAME) {
		sc_trace(tf, v.lv, NAME + ".lv");
		sc_trace(tf, v.fv, NAME + ".fv");
		sc_trace(tf, v.rv, NAME + ".rv");
		sc_trace(tf, v.gateNumOut, NAME + ".gateNumOut");
	}

	inline friend ostream& operator << (ostream& os, tr_logic const& v) {
		os << "(" << v.lv << "," << std::boolalpha << v.fv << "," << std::boolalpha << v.rv << ", " << std::boolalpha << v.gateNumOut << ")";
		return os;
	}

};

void init();
double getIntpVal(double, double, double*, double*, double*);

int inpExprMatch(int nInp, int nExpr, int* exprVec, int* exprTab);

double* outFRTransLUT(int polarity, int* InpExprs, int TgtInp, int NumInpts, int ExprNUM, double cap, double InpfTr,
	double InprTr, double* colIndx, double* rowIndx, double  fallTable[2][7][7], double riseTable[2][7][7], double* outrfTrans);

int diffBit(sc_logic bitVal);

int*  fillExpVec(sc_signal<tr_logic>* inpPorts, int NumIps, int IpId);

double outTimingLUT(int polarity, int exprIndx, bool rofTr, double cap, double InpfTr, double InprTr, double* colIndx,
	double* rowIndx, double  fallTable[][7][7], double riseTable[][7][7]);

double* outTranLUT(int polarity, int exprIndx, bool rofTr, double cap, double InpfTr, double InprTr, double* colIndx,
	double* rowIndx, double  fallTable[][7][7], double riseTable[][7][7], double* outrfTrans);

double outPowerLUT(double** inpTog, bool*polarity, bool*inpRof, int ExprNUM, int NumIps, double** outTog, double cap, double InpfTr, double InprTr,
	double* colIndx, double* rowIndx, double  fallTable[][7][7], double riseTable[][7][7]);

double wireCapEst(double bseCap, int fanNum, double* lngTab);