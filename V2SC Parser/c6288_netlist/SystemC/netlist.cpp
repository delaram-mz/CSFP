#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");

void c6288_netlist::assignments()
{
	while (true)
	{
		N6141.write(N6150);

		wait();
	}
}

void c6288_netlist::GIC_Coverage_Calculator()
{
	totalObservedCombs = 0;
	for ( int i=1; i< numOfGates+1; i++){
		totalObservedCombs += module_map[i]->numOfObservedCombs ;
	}
	cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	cout << "GIC Coverage = " << GIC_Coverage << "\n";

}

void c6288_netlist::faultCollection()
{
	if (sc_time_stamp().to_double()>0 ){
		std::vector<std::vector<int>> RX_FAULTS;
		if(N1581.read().faulty){
			for (int i=0; i<N1581.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1581.read().FAULTS[i]);
			}
		}

		if(N1901.read().faulty){
			for (int i=0; i<N1901.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1901.read().FAULTS[i]);
			}
		}

		if(N2223.read().faulty){
			for (int i=0; i<N2223.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2223.read().FAULTS[i]);
			}
		}

		if(N2548.read().faulty){
			for (int i=0; i<N2548.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2548.read().FAULTS[i]);
			}
		}

		if(N2877.read().faulty){
			for (int i=0; i<N2877.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2877.read().FAULTS[i]);
			}
		}

		if(N3211.read().faulty){
			for (int i=0; i<N3211.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3211.read().FAULTS[i]);
			}
		}

		if(N3552.read().faulty){
			for (int i=0; i<N3552.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3552.read().FAULTS[i]);
			}
		}

		if(N3895.read().faulty){
			for (int i=0; i<N3895.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3895.read().FAULTS[i]);
			}
		}

		if(N4241.read().faulty){
			for (int i=0; i<N4241.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4241.read().FAULTS[i]);
			}
		}

		if(N4591.read().faulty){
			for (int i=0; i<N4591.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4591.read().FAULTS[i]);
			}
		}

		if(N4946.read().faulty){
			for (int i=0; i<N4946.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4946.read().FAULTS[i]);
			}
		}

		if(N5308.read().faulty){
			for (int i=0; i<N5308.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5308.read().FAULTS[i]);
			}
		}

		if(N545.read().faulty){
			for (int i=0; i<N545.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N545.read().FAULTS[i]);
			}
		}

		if(N5672.read().faulty){
			for (int i=0; i<N5672.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5672.read().FAULTS[i]);
			}
		}

		if(N5971.read().faulty){
			for (int i=0; i<N5971.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5971.read().FAULTS[i]);
			}
		}

		if(N6123.read().faulty){
			for (int i=0; i<N6123.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6123.read().FAULTS[i]);
			}
		}

		if(N6150.read().faulty){
			for (int i=0; i<N6150.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6150.read().FAULTS[i]);
			}
		}

		if(N6160.read().faulty){
			for (int i=0; i<N6160.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6160.read().FAULTS[i]);
			}
		}

		if(N6170.read().faulty){
			for (int i=0; i<N6170.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6170.read().FAULTS[i]);
			}
		}

		if(N6180.read().faulty){
			for (int i=0; i<N6180.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6180.read().FAULTS[i]);
			}
		}

		if(N6190.read().faulty){
			for (int i=0; i<N6190.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6190.read().FAULTS[i]);
			}
		}

		if(N6200.read().faulty){
			for (int i=0; i<N6200.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6200.read().FAULTS[i]);
			}
		}

		if(N6210.read().faulty){
			for (int i=0; i<N6210.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6210.read().FAULTS[i]);
			}
		}

		if(N6220.read().faulty){
			for (int i=0; i<N6220.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6220.read().FAULTS[i]);
			}
		}

		if(N6230.read().faulty){
			for (int i=0; i<N6230.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6230.read().FAULTS[i]);
			}
		}

		if(N6240.read().faulty){
			for (int i=0; i<N6240.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6240.read().FAULTS[i]);
			}
		}

		if(N6250.read().faulty){
			for (int i=0; i<N6250.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6250.read().FAULTS[i]);
			}
		}

		if(N6260.read().faulty){
			for (int i=0; i<N6260.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6260.read().FAULTS[i]);
			}
		}

		if(N6270.read().faulty){
			for (int i=0; i<N6270.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6270.read().FAULTS[i]);
			}
		}

		if(N6280.read().faulty){
			for (int i=0; i<N6280.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6280.read().FAULTS[i]);
			}
		}

		if(N6287.read().faulty){
			for (int i=0; i<N6287.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6287.read().FAULTS[i]);
			}
		}

		if(N6288.read().faulty){
			for (int i=0; i<N6288.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6288.read().FAULTS[i]);
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
		cout << "  Coverage untill now = " << tot_det/11216.0<<endl;	
	}
}
