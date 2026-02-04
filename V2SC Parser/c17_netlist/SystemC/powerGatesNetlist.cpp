#include "powerGatesNetlist.h"

void powerGatesNetlist::ini()
{

}

void powerGatesNetlist::setupSim()
{
	while (true)
	{
		for (int i = 0; i < numOfGates; i++){
			notifyAlfaCalc_15_(_15__Gate1);
			notifyAlfaCalc_16_(_16__Gate2);
			notifyAlfaCalc_17_(_17__Gate3);
			notifyAlfaCalc_18_(_18__Gate4);
			notifyAlfaCalc_19_(_19__Gate5);
			notifyAlfaCalc_20_(_20__Gate6);
		}
		wait();
	}
}

void powerGatesNetlist::notifyAlfaCalcNAND(NAND_X1 *gate)
{
	if (gate->ZN.read().alfa == -1){
		gate->findAlfa.notify();
		wait(0, SC_NS);
		cout << "CHECK ALFA ZN gate " << gate->ZN.read().gateNumOut << " " << gate->ZN.read().alfa << "\n";
	}
}
