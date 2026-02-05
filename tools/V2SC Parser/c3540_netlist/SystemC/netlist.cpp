#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");

void c3540_netlist::assignments()
{
	while (true)
	{

		wait();
	}
}

void c3540_netlist::GIC_Coverage_Calculator()
{
	totalObservedCombs = 0;
	for ( int i=1; i< numOfGates+1; i++){
		totalObservedCombs += module_map[i]->numOfObservedCombs ;
	}
	cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	cout << "GIC Coverage = " << GIC_Coverage << "\n";

}

void c3540_netlist::faultCollection()
{
	if (sc_time_stamp().to_double()>0 ){
		std::vector<std::vector<int>> RX_FAULTS;
		if(N1713.read().faulty){
			for (int i=0; i<N1713.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1713.read().FAULTS[i]);
			}
		}

		if(N1947.read().faulty){
			for (int i=0; i<N1947.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1947.read().FAULTS[i]);
			}
		}

		if(N3195.read().faulty){
			for (int i=0; i<N3195.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3195.read().FAULTS[i]);
			}
		}

		if(N3833.read().faulty){
			for (int i=0; i<N3833.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3833.read().FAULTS[i]);
			}
		}

		if(N3987.read().faulty){
			for (int i=0; i<N3987.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3987.read().FAULTS[i]);
			}
		}

		if(N4028.read().faulty){
			for (int i=0; i<N4028.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4028.read().FAULTS[i]);
			}
		}

		if(N4145.read().faulty){
			for (int i=0; i<N4145.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4145.read().FAULTS[i]);
			}
		}

		if(N4589.read().faulty){
			for (int i=0; i<N4589.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4589.read().FAULTS[i]);
			}
		}

		if(N4667.read().faulty){
			for (int i=0; i<N4667.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4667.read().FAULTS[i]);
			}
		}

		if(N4815.read().faulty){
			for (int i=0; i<N4815.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4815.read().FAULTS[i]);
			}
		}

		if(N4944.read().faulty){
			for (int i=0; i<N4944.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4944.read().FAULTS[i]);
			}
		}

		if(N5002.read().faulty){
			for (int i=0; i<N5002.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5002.read().FAULTS[i]);
			}
		}

		if(N5045.read().faulty){
			for (int i=0; i<N5045.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5045.read().FAULTS[i]);
			}
		}

		if(N5047.read().faulty){
			for (int i=0; i<N5047.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5047.read().FAULTS[i]);
			}
		}

		if(N5078.read().faulty){
			for (int i=0; i<N5078.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5078.read().FAULTS[i]);
			}
		}

		if(N5102.read().faulty){
			for (int i=0; i<N5102.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5102.read().FAULTS[i]);
			}
		}

		if(N5120.read().faulty){
			for (int i=0; i<N5120.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5120.read().FAULTS[i]);
			}
		}

		if(N5121.read().faulty){
			for (int i=0; i<N5121.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5121.read().FAULTS[i]);
			}
		}

		if(N5192.read().faulty){
			for (int i=0; i<N5192.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5192.read().FAULTS[i]);
			}
		}

		if(N5231.read().faulty){
			for (int i=0; i<N5231.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5231.read().FAULTS[i]);
			}
		}

		if(N5360.read().faulty){
			for (int i=0; i<N5360.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5360.read().FAULTS[i]);
			}
		}

		if(N5361.read().faulty){
			for (int i=0; i<N5361.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5361.read().FAULTS[i]);
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
