#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");

void s820_netlist_scanInserted::assignments()
{
	while (true)
	{
		_223_.write(G39);
		_224_.write(G228);
		_422_.write(G42);
		_457_.write(G41);
		_478_.write(G40);
		G90.write(_265_);
		G93.write(_294_);
		G96.write(_313_);
		G99.write(_353_);
		G102.write(_390_);

		wait();
	}
}

void s820_netlist_scanInserted::GIC_Coverage_Calculator()
{
	totalObservedCombs = 0;
	for ( int i=1; i< numOfGates+1; i++){
		totalObservedCombs += module_map[i]->numOfObservedCombs ;
	}
	cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	cout << "GIC Coverage = " << GIC_Coverage << "\n";

}

void s820_netlist_scanInserted::faultCollection()
{
	if (sc_time_stamp().to_double()>0 ){
		std::vector<std::vector<int>> RX_FAULTS;
		if(So.read().faulty){
			for (int i=0; i<So.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(So.read().FAULTS[i]);
			}
		}

		if(G288.read().faulty){
			for (int i=0; i<G288.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G288.read().FAULTS[i]);
			}
		}

		if(G290.read().faulty){
			for (int i=0; i<G290.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G290.read().FAULTS[i]);
			}
		}

		if(G292.read().faulty){
			for (int i=0; i<G292.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G292.read().FAULTS[i]);
			}
		}

		if(G296.read().faulty){
			for (int i=0; i<G296.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G296.read().FAULTS[i]);
			}
		}

		if(G298.read().faulty){
			for (int i=0; i<G298.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G298.read().FAULTS[i]);
			}
		}

		if(G300.read().faulty){
			for (int i=0; i<G300.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G300.read().FAULTS[i]);
			}
		}

		if(G302.read().faulty){
			for (int i=0; i<G302.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G302.read().FAULTS[i]);
			}
		}

		if(G310.read().faulty){
			for (int i=0; i<G310.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G310.read().FAULTS[i]);
			}
		}

		if(G312.read().faulty){
			for (int i=0; i<G312.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G312.read().FAULTS[i]);
			}
		}

		if(G315.read().faulty){
			for (int i=0; i<G315.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G315.read().FAULTS[i]);
			}
		}

		if(G322.read().faulty){
			for (int i=0; i<G322.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G322.read().FAULTS[i]);
			}
		}

		if(G325.read().faulty){
			for (int i=0; i<G325.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G325.read().FAULTS[i]);
			}
		}

		if(G327.read().faulty){
			for (int i=0; i<G327.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G327.read().FAULTS[i]);
			}
		}

		if(G43.read().faulty){
			for (int i=0; i<G43.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G43.read().FAULTS[i]);
			}
		}

		if(G45.read().faulty){
			for (int i=0; i<G45.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G45.read().FAULTS[i]);
			}
		}

		if(G47.read().faulty){
			for (int i=0; i<G47.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G47.read().FAULTS[i]);
			}
		}

		if(G49.read().faulty){
			for (int i=0; i<G49.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G49.read().FAULTS[i]);
			}
		}

		if(G53.read().faulty){
			for (int i=0; i<G53.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G53.read().FAULTS[i]);
			}
		}

		if(G55.read().faulty){
			for (int i=0; i<G55.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(G55.read().FAULTS[i]);
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
