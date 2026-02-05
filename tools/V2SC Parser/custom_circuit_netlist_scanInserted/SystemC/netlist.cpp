#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");

void custom_circuit_netlist_scanInserted::assignments()
{
	while (true)
	{
		w1.write(_09_);
		w3.write(_12_);
		_13_.write(w4);
		_05_.write(w5);

		wait();
	}
}

void custom_circuit_netlist_scanInserted::GIC_Coverage_Calculator()
{
	totalObservedCombs = 0;
	for ( int i=1; i< numOfGates+1; i++){
		totalObservedCombs += module_map[i]->numOfObservedCombs ;
	}
	cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	cout << "GIC Coverage = " << GIC_Coverage << "\n";

}

void custom_circuit_netlist_scanInserted::faultCollection()
{
	if (sc_time_stamp().to_double()>0 ){
		std::vector<std::vector<int>> RX_FAULTS;
		if(So.read().faulty){
			for (int i=0; i<So.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(So.read().FAULTS[i]);
			}
		}

		if(Y0.read().faulty){
			for (int i=0; i<Y0.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(Y0.read().FAULTS[i]);
			}
		}

		if(Y1.read().faulty){
			for (int i=0; i<Y1.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(Y1.read().FAULTS[i]);
			}
		}

		std::sort(RX_FAULTS.begin(), RX_FAULTS.end());
		RX_FAULTS.erase(std::unique(RX_FAULTS.begin(), RX_FAULTS.end()), RX_FAULTS.end());

		det = 0;
		for (int j=0; j< RX_FAULTS.size(); j++){
			if (!(std::find(ALL_DET.begin(), ALL_DET.end(), RX_FAULTS[j]) != ALL_DET.end())) 
			{
				ALL_DET.push_back(RX_FAULTS[j]);
				det +=1;
			}
		}

		TVnum+=1;
		cout << "detected faults by TV = " << TVnum <<" is :" <<det <<endl;
		tot_det += det;
		cout << "detected untill now = " << tot_det<<endl;
		cout << "  Coverage untill now = " << tot_det/1190.0<<endl;	
	}
}
