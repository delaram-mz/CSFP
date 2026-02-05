#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");

void c432_netlist::assignments()
{
	while (true)
	{
		N203.write(N223);
		N213.write(N223);
		N309.write(N329);
		N319.write(N329);
		N360.write(N370);
		_154_.write(N108);
		_270_.write(N102);
		_376_.write(N82);
		_398_.write(N76);
		_422_.write(N95);
		_155_.write(N89);
		_202_.write(N4);
		_224_.write(N1);
		_245_.write(N17);
		_271_.write(N11);
		_301_.write(N30);
		_322_.write(N43);
		_343_.write(N37);
		_353_.write(N24);
		_372_.write(N56);
		_373_.write(N69);
		_374_.write(N63);
		_375_.write(N50);
		_378_.write(N112);
		_382_.write(N86);
		_387_.write(N99);
		_395_.write(N8);
		_402_.write(N21);
		_409_.write(N34);
		_414_.write(N47);
		_420_.write(N60);
		_427_.write(N73);
		_436_.write(N115);
		_441_.write(N92);
		_156_.write(N105);
		_162_.write(N14);
		_167_.write(N27);
		_176_.write(N40);
		_182_.write(N53);
		_190_.write(N66);
		_196_.write(N79);

		wait();
	}
}

void c432_netlist::GIC_Coverage_Calculator()
{
	totalObservedCombs = 0;
	for ( int i=1; i< numOfGates+1; i++){
		totalObservedCombs += module_map[i]->numOfObservedCombs ;
	}
	cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	cout << "GIC Coverage = " << GIC_Coverage << "\n";

}

void c432_netlist::faultCollection()
{
	if (sc_time_stamp().to_double()>0 ){
		std::vector<std::vector<int>> RX_FAULTS;
		if(N223.read().faulty){
			for (int i=0; i<N223.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N223.read().FAULTS[i]);
			}
		}

		if(N329.read().faulty){
			for (int i=0; i<N329.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N329.read().FAULTS[i]);
			}
		}

		if(N370.read().faulty){
			for (int i=0; i<N370.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N370.read().FAULTS[i]);
			}
		}

		if(N421.read().faulty){
			for (int i=0; i<N421.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N421.read().FAULTS[i]);
			}
		}

		if(N430.read().faulty){
			for (int i=0; i<N430.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N430.read().FAULTS[i]);
			}
		}

		if(N431.read().faulty){
			for (int i=0; i<N431.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N431.read().FAULTS[i]);
			}
		}

		if(N432.read().faulty){
			for (int i=0; i<N432.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N432.read().FAULTS[i]);
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
