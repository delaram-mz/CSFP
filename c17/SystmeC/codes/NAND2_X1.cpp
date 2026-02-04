/***********************************************************************************************************
* File:				NAND2_X1.cpp
* Author:			Katayoon B, Zain N

* Description:		This file includes the NAND gate implementation
* Created on:       2023

* Last modified by: Katayoon B
* Last modified on: 02/2024

Modification:
************************************************************************************************************/

// ATTENTION!!!!! : change all 'log' to 'cout'

#include "NAND2_X1.h"

NAND2_X1_params NAND2_X1::params;

void NAND2_X1::evl()
{
	double outDelay(0);
	double pwrRejVal(0);
	double timRejVal(0);
	int expIndx;
	outrTrans = 0;
	outfTrans = 0;
	totNetCap = 0;
	//log.debug_state = DEBUG_ENABLE; //// can we make it general outside the powerutil function?////
	while (true)
	{	
		gateSCins[0] = A1;
		gateSCins[1] = A2;
		
		if (sc_time_stamp().to_double() > 0) {
			double wirecap = wireCapEst(params.base_capacitance, fanoutNum[gateIdentifier], params.fanout_length);
			// ATTENTION!!!!! : additional capacitance:
			totNetCap = load_c + outputCap[gateIdentifier] + 2.0869; // outputCap[gateIdentifier] 
			cout<< "************************************************-------Gate capacitance-------************************************\n";
			cout<< "Gate number__" << gateIdentifier << "__:   Gate capacitance:    " << totNetCap << "    Wire capacitance:     " << wirecap <<"\n";
			cout<< "*******************************************************************************************************************\n";

			// ATTENTION!!!!! : change for appropriate functionality A1, A2, A3, ...B1,  
			if (A1.event()) {   
				A1fTr = A1.read().fv;
				A1rTr = A1.read().rv;
				
				exprVec = fillExpVec(gateSCins, params.numInp, 0);
				expIndx = inpExprMatch(params.numInp, params.numExpr, exprVec, *params.inpExprs);
				// fresh values from tech file
				// ATTENTION!!!!! : Inverting gates: !; non-inverting : no ! check line by line
				outrTrans = outTimingLUT(params.inpPolar[expIndx], expIndx, true, totNetCap, A1fTr, A1rTr,
					params.fall_transition_A1_index2, params.fall_transition_A1_index1, params.fall_transition, params.rise_transition);
				outfTrans = outTimingLUT(params.inpPolar[expIndx], expIndx, false, totNetCap, A1fTr, A1rTr,
					params.fall_transition_A1_index2, params.fall_transition_A1_index1, params.fall_transition, params.rise_transition);
				outDelay = (outTimingLUT(params.inpPolar[expIndx], expIndx, !inpRof[expIndx], totNetCap, A1fTr, A1rTr, 
					params.fall_transition_A1_index2, params.fall_transition_A1_index1, params.fall_delay, params.rise_delay));
				

				cout<< "*****************-------A1 Reports @time___ " << sc_time_stamp() << "____:-------*****************\n";
				cout<< "Gate number____" << gateIdentifier << "____\n";
				cout<< "Logic Value____" << A1.read().lv << "____\n";
				cout<< "Fall transition____" << A1fTr << "____\n";
				cout<< "Rise transition____" << A1rTr << "____\n";
				cout<< "Input expression vector____{" << exprVec[0] << "," << exprVec[1] << "}____\n";
				cout<< "Input expression index____" << expIndx << "____\n";
				cout<< "Output rise transition____" << outrTrans << "____\n";
				cout<< "Output fall transition____" << outfTrans << "____\n";
				cout<< "Output delay____" << outDelay << "____\n";
				cout<< "*******************************************************************************************************\n";

			}
			else if (A2.event()) {
				A2fTr = A2.read().fv;
				A2rTr = A2.read().rv;
				
				exprVec = fillExpVec(gateSCins, params.numInp, 1);
				expIndx = inpExprMatch(params.numInp, params.numExpr, exprVec, *params.inpExprs);

				// ATTENTION!!!!! : Inverting gates: !; non-inverting : no ! check line by line
				outrTrans = outTimingLUT(params.inpPolar[expIndx], expIndx, true, totNetCap, A2fTr, A2rTr,
					params.fall_transition_A1_index2, params.fall_transition_A1_index1, params.fall_transition, params.rise_transition);
				outfTrans = outTimingLUT(params.inpPolar[expIndx], expIndx, false, totNetCap, A2fTr, A2rTr,
					params.fall_transition_A1_index2, params.fall_transition_A1_index1, params.fall_transition, params.rise_transition);
				outDelay = (outTimingLUT(params.inpPolar[expIndx], expIndx, !inpRof[expIndx], totNetCap, A2fTr, A2rTr, 
					params.fall_transition_A1_index2, params.fall_transition_A1_index1, params.fall_delay, params.rise_delay));

				

				cout<< "*****************-------A2 Reports @time___ " << sc_time_stamp() << "____:-------*****************\n";
				cout<< "Gate number____" << gateIdentifier << "____\n";
				cout<< "Logic Value____" << A2.read().lv << "____\n";
				cout<< "Fall transition____" << A2fTr << "____\n";
				cout<< "Rise transition____" << A2rTr << "____\n";
				cout<< "Input expression vector____{" << exprVec[0] << "," << exprVec[1] << "}____\n";
				cout<< "Input expression index____" << expIndx << "____\n";
				cout<< "Output rise transition____" << outrTrans << "____\n";
				cout<< "Output fall transition____" << outfTrans << "____\n";
				cout<< "Output delay____" << outDelay << "____\n";
				cout<< "*******************************************************************************************************\n";
			}


			// ATTENTION!!!!! insert following code; "1000"
			outAgedDelay();
			outDelay = ((delTimeOut/1000.0) + outDelay)*1000.0; // NS
			cout<< "Output delay AGED ____" << outDelay << "____\n";
			outrTrans = (outrTrans + (delTrnsOut)/1000); // NS
			outfTrans = (outfTrans + (delTrnsOut)/1000); // NS
			////////////////////////////////////////////////
			pwrRejVal = 1000*(outrTrans + outfTrans)/6.0;
			timRejVal = 1000*(outfTrans + outrTrans)/4.0;
			if (expIndx != -1) {
				pwrRejOffsetVal = outDelay - pwrRejVal;
				timRejOffsetVal = outDelay - timRejVal;
				// ATTENTION!!!!! : check wit SC_LOGIC_01
				if ((A1.read().lv == SC_LOGIC_1) && (A2.read().lv == SC_LOGIC_1)) {
					tmpOutVal = SC_LOGIC_0;
				}
				else tmpOutVal = SC_LOGIC_1;
				pwrRej.notify(pwrRejVal, SC_NS);
				timRej.notify(timRejVal, SC_NS);
			}
		}
		wait();
	}
}

void NAND2_X1::pwrRejTH()
{
	while (1) {
		pwrRejOutFIFO.write(tmpOutVal);
		pwrRejOffset.notify(pwrRejOffsetVal, SC_NS);
		wait();
	}
}

void NAND2_X1::pwrRejOffsetTH()
{
	sc_logic pwroutVal;
	while (1) {
		pwrRejOutFIFO.read(pwroutVal);
		outPwrRej = pwroutVal;
		wait();
	}
}

void NAND2_X1::timRejTH()
{
	while (1) {
		timRejOutFIFO.write(tmpOutVal);
		timRejOffset.notify((timRejOffsetVal), SC_NS);
		cout<<"@@@-------------------------timRejOffsetVal: "<<timRejOffsetVal<<"\n";
		cout<<"@@@-------------------------delTimeOut: "<<delTimeOut<<"\n";
		wait();
	}
}

// ATTENTION!!!!! : insert function
void NAND2_X1::outAgedDelay() {


	cout<<"%%%%%%%%%%%%% START %%%%%%%%%%%%%%%%%"<<"\n";
	if (true) { //!outPwrRej.event() &&  !outTimRej.event()
		if ((A1.read().lv) == SC_LOGIC_0 && A1.event()){
			// falling event 
			fall_input1_event = true;
			input_transTime_A1 = A1.read().fv;
			cout<<"@@@-------------------------A1.read().fv:"<<A1.read().fv<< " Reports @time___ " << sc_time_stamp()<<"   slew: "<< input_transTime_A1<<"\n";
		}
		else {
			input_transTime_A1 = 0; 
			fall_input1_event = false;
			cout<<"@@@-------------------------NO A1 transition "<< "Reports @time___ " << sc_time_stamp()<<"\n";
		}
	
		if ((A2.read().lv) == SC_LOGIC_0 && A2.event()){
			// falling event 
			fall_input2_event = true;
			input_transTime_A2 = A2.read().fv;
			cout<<"@@@-------------------------A2.read().fv: "<<A2.read().fv<< " Reports @time___ " << sc_time_stamp()<<"   slew: "<< input_transTime_A2<<"\n";
		}
		else {
			input_transTime_A2 = 0; 
			fall_input2_event = false;
			cout<<"@@@-------------------------NO A2 transition "<< "Reports @time___ " << sc_time_stamp()<<"\n";
		}
	}
	// ATTENTION!!!!! : based on functionality
	if ((fall_input1_event && (A2.read().lv == SC_LOGIC_1)) ||
		(fall_input2_event && (A1.read().lv == SC_LOGIC_1)) ||
		(fall_input1_event && fall_input2_event))
	{
		cout<<"@@@-------------------------Reports @time___ " << sc_time_stamp()<<"\n";
		cout<<"@@@-------------------------input events: "<< fall_input1_event <<", "<< fall_input2_event << "\n";
		delTrnsOut = agedTimingTrans(input_transTime_A1, input_transTime_A2, A1.read().alfa, A2.read().alfa, aged_time, totNetCap);	
		delayedOutrTrans = delTrnsOut + outrTrans;
		cout<<"@@@-------------------------outrTrans : " << outrTrans << "\n";	
		cout<<"@@@-------------------------delTrnsOut : " << delTrnsOut << "\n";	
		cout<<"@@@-------------------------delayedOutrTrans : " << delayedOutrTrans << "\n";
		cout<<"@@@-------------------------DESIRED delta transition time is : " << delTrnsOut << "\n";	
		delTimeOut = agedTimingDelay(input_transTime_A1, input_transTime_A2, A1.read().alfa, A2.read().alfa, aged_time, totNetCap);
		// cout<<"@@@-------------------------VDD: " << VDD << "\n";
		cout<<"@@@-------------------------DESIRED delta delay time is : " << delTimeOut << "\n";
			
	}
	else
	{
		delTimeOut = 0;
		delTrnsOut = 0;
		delayedOutrTrans = 0;
		cout<<"@@@-------------------------No effect on delay"<<"\n";
	}
	cout<<"%%%%%%%%%%%%% END %%%%%%%%%%%%%%%%%"<<"\n";	


}

void NAND2_X1::timRejOffsetTH()
{
	sc_logic timoutVal;
	//int tmpexp;
	while (1) {
		timRejOutFIFO.read(timoutVal);
		outTimRej = timoutVal;
		wait();
	}
}
// ATTENTION!!!!! : ????????
void NAND2_X1::tglInp()
{
	while (true) {
		
		int exprIndx;
		int rfIndx;
		if (sc_time_stamp().to_double() > 0) {
				if (A1.event()) {
				exprVec = fillExpVec(gateSCins, params.numInp, 0);
				exprIndx = inpExprMatch(params.numInp, params.numExpr, exprVec, *params.inpExprs);
				tmpExpVal = exprIndx;
				if (A1.read().lv == SC_LOGIC_1) { inpRof[exprIndx] = true; rfIndx = 1; }
				else { inpRof[exprIndx] = false; rfIndx = 0; }
				tmprfVal = rfIndx;
				inpTgl[exprIndx][rfIndx] = ++A1rfToggle[rfIndx];
			}
			else if (A2.event()) {
				exprVec = fillExpVec(gateSCins, params.numInp, 1);
				exprIndx = inpExprMatch(params.numInp, params.numExpr, exprVec, *params.inpExprs);
				tmpExpVal = exprIndx;
				if (A2.read().lv == SC_LOGIC_1) { inpRof[exprIndx] = true; rfIndx = 1; }
				else { inpRof[exprIndx] = false; rfIndx = 0; }
				tmprfVal = rfIndx;
				inpTgl[exprIndx][rfIndx] = ++A2rfToggle[rfIndx];
			}
		}
		wait();
	}
}

void NAND2_X1::outEvlTgl()
{
	while (true) {
		if (sc_time_stamp().to_double() == 0) {
			if((A1.read().gateNumOut == -1) || (A2.read().gateNumOut == -1)) {
				ZN->write({ SC_LOGIC_1, 0.01, 0.01, ZN.read().alfa, gateIdentifier });
			}
			// ATTENTION!!!!! : find alfa
			wait(findAlfa);
			if (ZN.read().alfa == -1){
				if ((A1.read().alfa != -1) && (A2.read().alfa != -1)){
					// ATTENTION!!!!! : change this : (1 - A1.read().alfa) * (1 - A2.read().alfa) for each gate
					ZN.write({ ZN.read().lv, ZN.read().fv, ZN.read().rv, (1.0 - A1.read().alfa) * (1.0 - A2.read().alfa), -1 });
					cout << "========================== NAND2 ==========================\n";

				}
				else{
					//cout << "========================== gate " << gateIdentifier << " hasn't been reached\n";
				}
			}
		}
		else if (sc_time_stamp().to_double() > 0) {
			if ((outTimRej.event())){
				++ZNToggle[tmpExpVal][tmprfVal];
				cout<<"@@@-------------------------TRANSITION ON THE FLY gate output num: " <<gateIdentifier<<"   "<<outTimRej.read()<<"\n";
				cout<<"@@@-------------------------TRANSITION ON THE FLY"<<" Reports @time___ " << sc_time_stamp()<<"\n";
				cout<<"@@@-------------------------TRANSITION ON THE FLY outfTrans: "<< outfTrans<<"\n";
				cout<<"@@@-------------------------TRANSITION ON THE FLY outrTrans: "<< outrTrans<<"\n";
				ZN->write({ outTimRej, outfTrans, outrTrans, ZN.read().alfa, gateIdentifier });
			}
		}
		wait();
	}
}

void NAND2_X1::pwr()
{
	while (true) {
			{
				double internalPwr;
				double outChgPwr;
				double totOutTglCnt(0);
				double toggtemp(0);

				cout<< "**********************-------Input/output Togling Report @timesprocket___ " << sc_time_stamp() << "____:-------*****************\n";
				for (int i = 0; i < params.numExpr; i++) {
						cout<< "Toggle for Expression___" << i << "____fall_____Equals:" << inpTgl[i][0]<<" \n";
						cout<< "Toggle for Expression___" << i << "____rise_____Equals:" << inpTgl[i][1] << " \n";
				}

				if (sc_time_stamp().to_double() > 0) {
					// ATTENTION!!!!! : mind for adding this : params.numInp
					internalPwr = outPowerLUT(inpTgl, params.inpPolar, inpRof, params.numExpr, params.numInp, ZNToggle, totNetCap, outfTrans, outrTrans,
						params.fall_transition_A1_index2, params.fall_transition_A1_index1, params.fall_power, params.rise_power);

					for (int i = 0; i < params.numExpr; i++) {
						totOutTglCnt = totOutTglCnt + ZNToggle[i][0] + ZNToggle[i][1];
					}

						cout<< "Total output toggle Equals:" << totOutTglCnt << " \n";

					outChgPwr = totOutTglCnt * totNetCap* 1.21;
					powerVector[gateIdentifier] = internalPwr + outChgPwr;

						cout<< "Total output toggle Equals:" << totOutTglCnt << " \n";

					for (int i = 0; i < params.numInp; i++) {
						inpCapProcessed[i] = 0;
					}
					A1Toggle = 0;
					A2Toggle = 0;
					for (int j = 0; j < params.numExpr; j++) {
						for (int i = 0; i < 2; i++) {
							ZNToggle[j][i] = 0;
						}
					}

					for (int i = 0; i < params.numExpr; i++) {
						inpTglCnt[i] = 0;;
					}
					for (int j = 0; j < params.numExpr; j++) {
						for (int i = 0; i < 2; i++) {
							inpTgl[j][i] = 0;
						}
					}

					for (int i = 0; i < 2; i++) {
						A1rfToggle[i] = 0;
						A2rfToggle[i] = 0;
					}
				}
				wait();
			}
	}
} // missing brackets

// ATTENTION!!!!! : mind for 0, 1, 2
void NAND2_X1::gfi()
	{
		while (true) {
			A1Fanin = A1.read().gateNumOut;
			A2Fanin = A2.read().gateNumOut;
			
			if (sc_time_stamp().to_double() == 0) {
				if ((A1.read().gateNumOut != -1) && (inpCapProcessed[0] == false)) {
					incFanout[A1Fanin].lock();
					cout << "if1\n";
					cout << A1.read().gateNumOut << "\n";
					cout << params.input_cap[0] << "\n";
					outputCap[A1Fanin] = outputCap[A1Fanin] + params.input_cap[0];
					fanoutNum[A1Fanin] = fanoutNum[A1Fanin] + 1;
					cout << outputCap[A1Fanin] << "\n";
					inpCapProcessed[0] = true;
					incFanout[A1Fanin].unlock();
				}
				if ((A2.read().gateNumOut != -1) && (inpCapProcessed[1] == false)) {
					incFanout[A2Fanin].lock();
					cout << "if2\n";
					cout << A2.read().gateNumOut << "\n";
					cout << params.input_cap[1] << "\n";
					outputCap[A2Fanin] = outputCap[A2Fanin] + params.input_cap[1];
					fanoutNum[A2Fanin] = fanoutNum[A2Fanin] + 1;
					cout << outputCap[A2Fanin] << "\n";
					inpCapProcessed[1] = true;
					incFanout[A2Fanin].unlock();
				}
			}
			wait();
		}
	}


void NAND2_X1::inz()
{
	if (sc_time_stamp().to_double() == 0) {
		A1Fanin = A1.read().gateNumOut;
		A2Fanin = A2.read().gateNumOut;
		
		if((A1.read().gateNumOut == -1) && (A2.read().gateNumOut == -1)) { //missing prantesis
			for (int i = 0; i < params.numInp; i++)  {inpRof[i] = false;}
			for (int i = 0; i < params.numInp; i++)  {inpCapProcessed[i] = false;}
			for (int i = 0; i < 2; i++) { // rise and fall -> 2
				A1rfToggle[i] = 0;
				A2rfToggle[i] = 0;
				for (int j = 0; j < params.numExpr; j++) {
					ZNToggle[i][j] = 0;
					inpTgl[i][j] = 0;
				}
			}
		}
	}
}



// ATTENTION!!!!! : insert all the following functions
double NAND2_X1::agedTimingDelay(double slew_inp1, double slew_inp2, double alfa1, double alfa2, double time, double load)
{
	double agedTime;
	// call to calculate delvth1 and delvth2
	double delvth1, delvth2;
	const double a10=9.999999999999998, a11=1.4166387437654164, a12=9.999999999999998, a20=9.999999999999998, a21=1.5013969653758317, a22=9.999999999999998;


	delvth1 = delVthCalc(-1.1, 298.15, time, alfa1, 0.001078209127649656, 0.08752864463136215, 3.3755470247332993*pow(10,-6), 0.49999999999999994, 0.10562684133460033, 0.38762777582148356);
	delvth2 = delVthCalc(-1.1, 298.15, time, alfa2, 0.0010781248119170268, 0.08770909337943436, 3.368689945436736*pow(10,-6), 0.49999999999999994, 0.10543751266325808, 0.3879880040019268);
	
	agedTime = (a10 + a11*slew_inp1*2.5*1000.0 + a12*load)*delvth1 + (a20 + a21*slew_inp2*2.5*1000.0 + a22*load)*delvth2;
	//                   A1								              A2
	cout<< "@@@--------------agedTimingDelay-----------delvth1 A1 : " << delvth1 << "\n";
	cout<< "@@@--------------agedTimingDelay-----------delvth2 A2 : " << delvth2 << "\n";
	cout<< "@@@--------------agedTimingDelay-----------aged time : " << agedTime << "\n";
	cout<< "@@@--------------agedTimingDelay-----------slew_inp1 : " << slew_inp1 << "\n";
	cout<< "@@@--------------agedTimingDelay-----------slew_inp2 : " << slew_inp2 << "\n";
	cout<< "@@@--------------agedTimingDelay-----------load : " << load << "\n";

	return agedTime; //1.06*
}


double NAND2_X1::agedTimingTrans(double slew_inp1, double slew_inp2, double alfa1, double alfa2, double time, double load)
{
	double agedTrns;
	// call to calculate delvth1 and delvth2
	double delvth1, delvth2;
	const double b10=9.999999997228121, b11=0.017028446263664725, b12=6.409980065950115, b20=9.999999997228182, b21=0.048578615037307524, b22=0.4726378286345068;

	delvth1 = delVthCalc(-1.1, 298.15, time, alfa1, 0.001078209127649656, 0.08752864463136215, 3.3755470247332993*pow(10,-6), 0.49999999999999994, 0.10562684133460033, 0.38762777582148356);
	delvth2 = delVthCalc(-1.1, 298.15, time, alfa2, 0.0010781248119170268, 0.08770909337943436, 3.368689945436736*pow(10,-6), 0.49999999999999994, 0.10543751266325808, 0.3879880040019268);
	
	// ATTENTION!!!!! : mind for adding load to correct outputs
	agedTrns = (b10 + b11*slew_inp1*2.5*1000.0 + b12*load)*delvth1 + (b20 + b21*slew_inp2*2.5*1000.0 + b22*load)*delvth2;
	//                   A1					             				   A2
	cout<< "@@@--------------agedTimingTrans-----------delvth1 A1 : " << delvth1 << "\n";
	cout<< "@@@--------------agedTimingTrans-----------delvth2 A2 : " << delvth2 << "\n";
	cout<< "@@@--------------agedTimingTrans-----------aged trns : " << agedTrns << "\n";
	cout<< "@@@--------------agedTimingTrans-----------slew_inp1 : " << slew_inp1 << "\n";
	cout<< "@@@--------------agedTimingTrans-----------slew_inp2 : " << slew_inp2 << "\n";
	cout<< "@@@--------------agedTimingTrans-----------load : " << load << "\n";

	return agedTrns;
}



double NAND2_X1::delVthCalc(double Vgs, double T, double t, double alpha, double A, double T0, double Ea, double E0, double t1, double zeta1) {
    double n = 1.0 / 6.0;
    double eps_ox = 8.854e-21 * 3.9; // F/nm
    double tox = 1.85; // nm
    double cox = eps_ox / tox; // F/nm^2
    double vth = 0.423;
    double Eox = -(-Vgs - vth) / tox; // V/nm
    double q = 1.602176634e-19; // C
    double C = T0 * std::exp(-Ea / (8.617e-5 * T));
    double K = 8.0 * std::pow(10, 4); // s^(-1/4) * c^(-0.5) * nm^(-2)
    double Kv = std::pow((q * tox / eps_ox), 3) * std::pow(K, 2) * cox * (-(-Vgs - vth)) * std::sqrt(C) * std::exp(2.0 * Eox / E0);
	
    double delvth_pre = A * std::pow(((std::pow(n, 2) * std::pow(Kv, 2) * alpha * C * t * t1) / (std::pow(zeta1, 2) * std::pow(tox * 1e-9, 2) * (1.0 - alpha))), n);
	// cout<<"&&&&&&&&&&&&&&&&&&&&&  delvth_pre: "<<delvth_pre<<"\n";
    
	return delvth_pre;
}