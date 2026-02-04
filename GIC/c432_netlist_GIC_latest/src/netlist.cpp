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
		N223.write(_377_);
		_378_.write(N112);
		_382_.write(N86);
		_387_.write(N99);
		_395_.write(N8);
		_402_.write(N21);
		_409_.write(N34);
		_414_.write(N47);
		_420_.write(N60);
		_427_.write(N73);
		N329.write(_433_);
		_436_.write(N115);
		_441_.write(N92);
		_156_.write(N105);
		_162_.write(N14);
		_167_.write(N27);
		_176_.write(N40);
		_182_.write(N53);
		_190_.write(N66);
		_196_.write(N79);
		N370.write(_205_);
		N421.write(_248_);
		N430.write(_253_);
		N431.write(_259_);
		N432.write(_265_);

		wait();
	}
}

void c432_netlist::GIC_Coverage_Calculator()
{
	totalObservedCombs = 0;
	for ( int i=1; i< numOfGates+1; i++){ // reading from all gates
		totalObservedCombs += module_map[i]->numOfObservedCombs ;
	}
	
	if (newTV==SC_LOGIC_1 && newTV.event()){ 
		GIC_Coverage = totalObservedCombs/(950.0);
		if(GIC_logFile.is_open())
		{
			GIC_logFile << "GIC Coverage = " << GIC_Coverage << "\n";
		}
	}
	else if (endSim==SC_LOGIC_1 && endSim.event()){
		cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
		cout << "END OF SIM=> Total Possible Combs = " << 950.0 << "\n";
		GIC_Coverage = totalObservedCombs/(950.0);
		cout << "GIC Coverage = " << GIC_Coverage << "\n";
	}
}

