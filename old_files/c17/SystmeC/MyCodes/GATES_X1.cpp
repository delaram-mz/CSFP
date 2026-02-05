/*************************************************************************************************
* File:				GATES_X1.cpp
* Author:			Katayoon B, Zain N

* Description:		This is base class implementation for all the library cells gate models containing all the common variables and methods
* Created on:       2023

* Last modified by: Katayoon B
* Last modified on: 02/2024

Modification:      ----
*************************************************************************************************/


#include "GATES_X1.h"

 double outputCap[1408];  ///////Future Changes:  1408 should change to number of gates in the netlist///////////
 int fanoutNum[1408];
 double powerVector[1408];
 mutex incFanout[1408];
 double totalpower;
 sc_signal <sc_logic> timeSprocket;

