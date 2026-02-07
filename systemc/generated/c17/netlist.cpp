#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");

void c17::assignments()
{
	while (true)
	{

		wait();
	}
}

void c17::GIC_Coverage_Calculator()
{
	totalObservedCombs = 0;
	for ( int i=1; i< numOfGates+1; i++){
		totalObservedCombs += module_map[i]->numOfObservedCombs ;
	}
	cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	cout << "GIC Coverage = " << GIC_Coverage << "\n";

}

void c17::faultCollection()
{
	if (sc_time_stamp().to_double()>0 ){
		std::vector<std::vector<int>> RX_FAULTS;
		if(N22.read().faulty){
			for (int i=0; i<N22.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N22.read().FAULTS[i]);
			}
		}

		if(N23.read().faulty){
			for (int i=0; i<N23.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N23.read().FAULTS[i]);
			}
		}

		std::sort(RX_FAULTS.begin(), RX_FAULTS.end());
		RX_FAULTS.erase(std::unique(RX_FAULTS.begin(), RX_FAULTS.end()), RX_FAULTS.end());

		det = 0;
		for (int j=0; j< RX_FAULTS.size(); j++){
			if (!(std::find(ALL_DET.begin(), ALL_DET.end(), RX_FAULTS[j]) != ALL_DET.end())) 
			{
				ALL_DET.push_back(RX_FAULTS[j]);
				cout << "Fault detected: " << RX_FAULTS[j][0] << " in gate " << RX_FAULTS[j][1] << "\n";
				det +=1;
			}
		}

		TVnum+=1;
		cout << "detected faults by TV = " << TVnum <<" is :" <<det <<endl;
		tot_det += det;
		cout << "detected untill now = " << tot_det<<endl;
		cout << "  Coverage untill now = " << tot_det/18.0<<endl;	
			if(GIC_logFile.is_open())
		{
			GIC_logFile << "GIC Coverage = " << tot_det/18.0 << "\n";
		}
	}
}
