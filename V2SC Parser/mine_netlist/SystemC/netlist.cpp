#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");

void mine_netlist::assignments()
{
	while (true)
	{
		_08_.write(a);
		_18_.write(b);
		_19_.write(c);
		_20_.write(d);
		y1.write(_09_);
		y2.write(_13_);
		_14_.write(e);
		y3.write(_16_);

		wait();
	}
}

void mine_netlist::GIC_Coverage_Calculator()
{
	totalObservedCombs = 0;
	for ( int i=1; i< numOfGates+1; i++){
		totalObservedCombs += module_map[i]->numOfObservedCombs ;
	}
	cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	cout << "GIC Coverage = " << GIC_Coverage << "\n";

}

void mine_netlist::faultCollection()
{
	if (sc_time_stamp().to_double()>0 ){
		std::vector<std::vector<int>> RX_FAULTS;
		if(y1.read().faulty){
			for (int i=0; i<y1.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(y1.read().FAULTS[i]);
			}
		}

		if(y2.read().faulty){
			for (int i=0; i<y2.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(y2.read().FAULTS[i]);
			}
		}

		if(y3.read().faulty){
			for (int i=0; i<y3.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(y3.read().FAULTS[i]);
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
