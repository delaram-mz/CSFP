#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");

void s344_netlist_scanInserted::assignments()
{
	while (true)
	{
		_050_.write(ACVQN3);
		_122_.write(ACVQN2);
		_131_.write(ACVQN1);
		_138_.write(ACVQN0);
		_165_.write(MRVQN3);
		_052_.write(MRVQN2);
		_072_.write(MRVQN1);
		_090_.write(MRVQN0);
		_109_.write(CNTVCO0);
		_121_.write(CT2);
		_123_.write(CT1);
		_129_.write(AX0);
		_130_.write(AX1);
		ACVG1VD1.write(_132_);
		_133_.write(AX2);
		ACVG2VD1.write(_135_);
		_136_.write(AX3);
		ACVG4VD1.write(_142_);
		ACVG3VD1.write(_146_);
		CNTVG3VD.write(_147_);
		CNTVG2VD.write(_152_);
		CNTVG1VD.write(_154_);
		MRVG4VD.write(_161_);
		MRVG3VD.write(_168_);
		MRVG2VD.write(_174_);
		MRVG1VD.write(_180_);
		AM3.write(_185_);
		AM2.write(_189_);
		AM1.write(_193_);
		AM0.write(_197_);

		wait();
	}
}

void s344_netlist_scanInserted::GIC_Coverage_Calculator()
{
	totalObservedCombs = 0;
	for ( int i=1; i< numOfGates+1; i++){
		totalObservedCombs += module_map[i]->numOfObservedCombs ;
	}
	cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	cout << "GIC Coverage = " << GIC_Coverage << "\n";

}

void s344_netlist_scanInserted::faultCollection()
{
	if (sc_time_stamp().to_double()>0 ){
		std::vector<std::vector<int>> RX_FAULTS;
		if(So.read().faulty){
			for (int i=0; i<So.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(So.read().FAULTS[i]);
			}
		}

		if(CNTVCO2.read().faulty){
			for (int i=0; i<CNTVCO2.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(CNTVCO2.read().FAULTS[i]);
			}
		}

		if(CNTVCON2.read().faulty){
			for (int i=0; i<CNTVCON2.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(CNTVCON2.read().FAULTS[i]);
			}
		}

		if(P0.read().faulty){
			for (int i=0; i<P0.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(P0.read().FAULTS[i]);
			}
		}

		if(P1.read().faulty){
			for (int i=0; i<P1.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(P1.read().FAULTS[i]);
			}
		}

		if(P2.read().faulty){
			for (int i=0; i<P2.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(P2.read().FAULTS[i]);
			}
		}

		if(P3.read().faulty){
			for (int i=0; i<P3.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(P3.read().FAULTS[i]);
			}
		}

		if(P4.read().faulty){
			for (int i=0; i<P4.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(P4.read().FAULTS[i]);
			}
		}

		if(P5.read().faulty){
			for (int i=0; i<P5.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(P5.read().FAULTS[i]);
			}
		}

		if(P6.read().faulty){
			for (int i=0; i<P6.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(P6.read().FAULTS[i]);
			}
		}

		if(P7.read().faulty){
			for (int i=0; i<P7.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(P7.read().FAULTS[i]);
			}
		}

		if(READY.read().faulty){
			for (int i=0; i<READY.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(READY.read().FAULTS[i]);
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
