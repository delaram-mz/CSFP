/*************************************************************************************************
* File:				GATES_X1.h
* Author:			Katayoon B, Zain N

* Description:		This is base class for all the library cells gate models containing all the common variables and methods
* Created on:       2023

* Last modified by: Katayoon B
* Last modified on: 02/2024

Modification:
*-Debug function is added
*************************************************************************************************/

#pragma once
#include <systemc.h>
#include "powerUtils.h"


extern double outputCap[1408]; ///////Future Changes:  1408 should change to number of gates in the netlist///////////
extern int fanoutNum[1408];
extern double powerVector[1408];
extern mutex incFanout[1408];
extern double totalpower;
extern sc_signal <sc_logic> timeSprocket;



class GATES_X1 
{
public:
	double totNetCap;
	double outrTrans;
	double outfTrans;
	int* exprVec{ 0 };					
	int gateIdentifier;
	sc_event_queue trsRejDly;
	sc_core::sc_fifo<sc_logic> trsRejVal;
	//debug log;

	sc_signal <sc_logic> outPwrRej, outTimRej;
	sc_logic tmpOutVal;
	int tmpExpVal;
	int tmprfVal;
	int expVal;


	sc_event pwrRej, timRej;
	sc_event_queue pwrRejOffset, timRejOffset;
	sc_core::sc_fifo <sc_logic> pwrRejOutFIFO, timRejOutFIFO;
	double pwrRejOffsetVal, timRejOffsetVal;
	ofstream out;
};