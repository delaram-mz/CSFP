/***********************************************************************************************************
* File:				powerUtils.cpp
* Author:			Katayoon B, Zain N

* Description:		This file includes all the utility function required for power and timing like
					looking up in library tables and Wire models
* Created on:       2023

* Last modified by: Katayoon B
* Last modified on: 02/2024

Modification:
************************************************************************************************************/

#include "powerUtils.h"


double getIntpVal(double colVal, double rowVal, double* colIndx, double* rowIndx, double* valTable)
{

	int iCol(0), iRow(0);

	int pCol(0), pRow(0);

	double crVal00(0), crVal01(0), crVal10(0), crVal11(0);
	while ((colVal > *(colIndx + iCol)) && iCol < 7) {
		iCol = iCol + 1;
	}


	while ((rowVal > *(rowIndx + iRow)) && iRow < 7) iRow = iRow + 1;

	//debug log;
	// log.debug_state = DEBUG_DISABLE; //// can we make it general outside the powerutil function?////

	pCol = iCol == 0 ? iCol : iCol - 1;
	pRow = iRow == 0 ? iRow : iRow - 1;


	crVal00 = *(valTable + pRow * 7 + pCol);
	crVal01 = *(valTable + pRow * 7 + iCol);
	crVal10 = *(valTable + iRow * 7 + pCol);
	crVal11 = *(valTable + iRow * 7 + iCol);

	cout<< "************************************************-------Looking up the table-------************************************\n";
	cout<< "***-------crVal00 is:   " << crVal00 << "-------***\n";
	cout<< "***-------crVal01 is:   " << crVal01 << "-------***\n";
	cout<< "***-------crVal10 is:   " << crVal10 << "-------***\n";
	cout<< "***-------crVal11 is:   " << crVal11 << "-------***\n";


	double slope1 = (rowVal - *(rowIndx + pRow)) / (*(rowIndx + iRow) - *(rowIndx + pRow));
	double temp1 = (slope1 * (crVal10 - crVal00)) + crVal00;

	double temp2 = (slope1 * (crVal11 - crVal01)) + crVal01;

	double slope2 = (colVal - *(colIndx + pCol)) / (*(colIndx + iCol) - *(colIndx + pCol));
	double temp3 = (slope2 * (temp2 - temp1)) + temp1;

	double temp4 = (slope2 * (crVal01 - crVal00)) + crVal00;
	double interout = (iCol == 0 && iRow == 0) ? crVal00 : iCol == 0 ? temp1 : iRow == 0 ? temp4 : temp3;

	cout<< "***-----Final LUT is:   " << interout << "-------***\n";
	cout<< "**********************************************************************************************************************\n";
	return interout;

}

int inpExprMatch(int nInp, int nExpr, int* exprVec, int* exprTab)
{
	//debug log;
	int matchAt = -1;
	for (int i = 0; i < nExpr; i++) {
		int nMatch = 0;
		for (int j = 0; j < nInp; j++) {
			if (*(exprTab + nInp * i + j) == *(exprVec + j) | *(exprTab + nInp * i + j) == 0){
				nMatch++;
			}
		}
		if (nMatch == nInp) matchAt = i;
	}
	return matchAt;
}



double outTimingLUT(int polarity, int exprIndx, bool rofTr, double cap,
	double InpfTr, double InprTr, double* colIndx, double* rowIndx, double  fallTable[][7][7],
	double riseTable[][7][7])

{

	cout << "what the hell\n";
	cout << InpfTr <<" " << InprTr << " " << polarity << " " << rofTr << " " << exprIndx <<"\n";
	double outrfTrans;
	if (exprIndx == -1) return -1;
	if (polarity == 0){
		if (rofTr == false)
			outrfTrans = getIntpVal(cap, InpfTr, colIndx, rowIndx, *fallTable[exprIndx]);
		else
			outrfTrans = getIntpVal(cap, InprTr, colIndx, rowIndx, *riseTable[exprIndx]);
	}
	else if (polarity == 1){
		if (rofTr == false)
			outrfTrans = getIntpVal(cap, InprTr, colIndx, rowIndx, *fallTable[exprIndx]);
		else
			outrfTrans = getIntpVal(cap, InpfTr, colIndx, rowIndx, *riseTable[exprIndx]);
	}

	cout<<"HELPPPPPP: rofTr: "<<rofTr<<"  polarity: "<<polarity<<" InprTr: "<<InprTr<<" InpfTr: "<<InpfTr<<" colIndx: "<<colIndx<<" rowIndx: "<<rowIndx<<"\n";
	return outrfTrans;
}


double outPowerLUT(double** inpTog, bool*polarity, bool*inpRof, int ExprNUM, int NumIps, double** outTog, double cap, double InpfTr, double InprTr,
	double* colIndx, double* rowIndx, double  fallTable[][7][7], double riseTable[][7][7])

{
	double internalpower(0);
	double totalInpTog(0);
	double** outpower = new double*[ExprNUM];
	for (int i = 0; i < ExprNUM; i++) {
		outpower[i] = new double[NumIps];
	}	
	for (int j = 0; j < ExprNUM; j++){ //2 represents rise/fall
		for (int i = 0; i < NumIps; i++) {
			totalInpTog = totalInpTog + inpTog[j][i];
		}
	}

	if (totalInpTog == 0) {
		return 0;
	}

	for (int i = 0; i < ExprNUM; i++) {
		if (polarity[i] == false)
		{
			outpower[i][1] = getIntpVal(cap, InprTr, colIndx, rowIndx, *riseTable[i]) * (inpTog[i][1] / totalInpTog) * outTog[i][1];
			outpower[i][0] = (getIntpVal(cap, InpfTr, colIndx, rowIndx, *fallTable[i]) - (0.5*cap *1.21)) * (inpTog[i][0] / totalInpTog) * outTog[i][0];
		}
		else if (polarity[i] == true)
		{
			outpower[i][0] = (getIntpVal(cap, InprTr, colIndx, rowIndx, *fallTable[i]) - (0.5*cap *1.21))  * (inpTog[i][1] / totalInpTog)  * outTog[i][0];
			outpower[i][1] = getIntpVal(cap, InpfTr, colIndx, rowIndx, *riseTable[i]) * (inpTog[i][0] / totalInpTog) * outTog[i][1];
		}

	}
	//debug log;
	//log.debug_state = DEBUG_DISABLE;
	cout<< "************************************************------Expression Powers-------****************************************\n";
	cout<< "***-------output power for expr__0__fall equals to:   " << outpower[0][0] << "-------***\n";
	cout<< "***-------output power for expr__0__rise equals to:   " << outpower[0][1] << "-------***\n";
	cout<< "***-------output power for expr__1__fall equals to:   " << outpower[1][0] << "-------***\n";
	cout<< "***-------output power for expr__1__rise equals to:   " << outpower[1][1] << "-------***\n";
	cout<< "**********************************************************************************************************************\n";




	for (int i = 0; i < ExprNUM; i++) {
		internalpower = internalpower + outpower[i][0] + outpower[i][1];
	}

	return internalpower;
}



int diffBit(sc_logic bitVal) {
	return (bitVal == SC_LOGIC_1) ? 1 : -1;
}


int*  fillExpVec(sc_signal<tr_logic>* inpPorts, int NumIps, int IpId){
	sc_logic inplvs[10];     ///How to get number of inputs////
	static int exprVal[10];  ///This would be a global and permnent objest, use when want to access the value outside the function///
	int* part = new int[NumIps];

	for (int i = 0; i < NumIps; i++){
		inplvs[i] = inpPorts[i].read().lv;
	}

	for (int i = 0; i < NumIps; i++) {
		if (i == IpId)  exprVal[i] = 2;
		else exprVal[i] = diffBit(inpPorts[i].read().lv);
	}
	for (int i = 0; i < NumIps; ++i) {
        part[i] = exprVal[i];
    }
	return part;
}

double wireCapEst(double bseCap, int fanNum, double* lngTab){
	double wireCap;
	if (fanNum == 0)
		wireCap = (bseCap)*  (*(lngTab + fanNum));
	else
		wireCap = (bseCap)* (*(lngTab + fanNum - 1));
	return wireCap;
}