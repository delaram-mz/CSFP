#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");

void c17_netlist::assignments()
{
	while (true)
	{
		_04_.write(N2);
		_08_.write(N3);
		_09_.write(N1);
		_10_.write(N6);
		N22.write(_11_);
		_12_.write(N7);
		N23.write(_05_);

		wait();
	}
}

void c17_netlist::GIC_Coverage_Calculator()
{
	totalObservedCombs = 0;
	for ( int i=1; i< numOfGates+1; i++){
		totalObservedCombs += module_map[i]->numOfObservedCombs ;
	}
	if (newTV==SC_LOGIC_1 && newTV.event()){
		GIC_Coverage = totalObservedCombs/(24.0);
		if(GIC_logFile.is_open())
		{
			GIC_logFile << "New TV!! GIC Coverage = " << GIC_Coverage << "\n";
		}

	}
	else if (endSim==SC_LOGIC_1 && endSim.event()){
		cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
		cout << "END OF SIM=> Total Possible Combs = " << 24.0 << "\n";
		GIC_Coverage = totalObservedCombs/(24.0);
		cout << "GIC Coverage = " << GIC_Coverage << "\n";
	}

}

void c17_netlist::faultCollection()
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
				det +=1;
			}
		}


		TVnum+=1;
		cout << "detected faults by TV = " << TVnum <<" is :" <<det <<endl;
		if((TVnum == 1) || (TVnum == 2)){
			for (int k=0 ; k<ALL_DET.size(); k++){
				cout << "gate ID: "<< 14+ALL_DET[k][0] ;
				if(ALL_DET[k][1] == 0)
						cout<< ".B s@1" << endl;
				else if(ALL_DET[k][1] == 1)
						cout<< ".B s@0" << endl;
				else if(ALL_DET[k][1] == 2)
						cout<< ".A s@1" << endl;
				else if(ALL_DET[k][1] == 3)
						cout<< ".A s@0" << endl;
				else if(ALL_DET[k][1] == 4)
						cout<< ".Y s@1" << endl;
				else if(ALL_DET[k][1] == 5)
						cout<< ".Y s@0" << endl;
				
			}
		}
		tot_det += det;
		cout << "detected untill now = " << tot_det<<endl;
		cout << "  Coverage untill now = " << (ALL_DET.size())/15.0<<endl;	
	}
}
