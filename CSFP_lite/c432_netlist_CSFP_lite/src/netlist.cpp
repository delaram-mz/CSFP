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
	// totalObservedCombs = 0;
	// for ( int i=1; i< numOfGates+1; i++){ // reading from all gates not DFFs
	// 	totalObservedCombs += module_map[i]->numOfObservedCombs ;
	// }
	

	// if (newTV==SC_LOGIC_1 && newTV.event()){
	// 	GIC_Coverage = totalObservedCombs/(950.0);
	// 	if(GIC_logFile.is_open())
	// 	{
	// 		GIC_logFile << "New TV!! GIC Coverage = " << GIC_Coverage << "\n";
	// 	}

	// }
	// else if (endSim==SC_LOGIC_1 && endSim.event()){
	// 	cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	// 	cout << "END OF SIM=> Total Possible Combs = " << 950.0 << "\n";
	// 	GIC_Coverage = totalObservedCombs/(950.0);
	// 	cout << "GIC Coverage = " << GIC_Coverage << "\n";
	// }
}


void c432_netlist::faultCollection()
{
	

	if ((sc_time_stamp().to_double()>0 ) && NbarT){
		// if(N223.event()){
		std::vector<std::vector<int>> RX_FAULTS;
		// cout << " ============================>"<<sc_time_stamp().to_double()<<"\n";
		// cout << "$$$$$$$$$$$$	N76	" << N76.read().logicVal <<endl;
		// cout << "$$$$$$$$$$$$	_398_	" << _398_.read().logicVal <<endl;
		// cout << "$$$$$$$$$$$$	_168_	" << _168_.read().logicVal <<endl;
		
		if(N223.read().faulty){
				RX_FAULTS.insert(RX_FAULTS.end(), N223.read().FAULTS.begin(), N223.read().FAULTS.end());

				// cout << " =============> Collecting in port N223\n";
				// cout << " =============> Fault originated from id : " << N223.read().id << endl;
				// for (std::vector<std::vector<int> >::size_type i=0; i<N223.read().FAULTS.size(); i++){
				// 	RX_FAULTS.push_back(N223.read().FAULTS[i]);
				// 	// cout << N223.read().FAULTS[i][0] << ",  "<<N223.read().FAULTS[i][1] <<endl;
				// }

			// }
		}
		
		// if(N329.event()){
			if(N329.read().faulty){
				RX_FAULTS.insert(RX_FAULTS.end(), N329.read().FAULTS.begin(), N329.read().FAULTS.end());

				// cout << " =============> Collecting in port N329\n";
				// cout << " =============> Fault originated from id : " << N329.read().id << endl;
				// for (std::vector<std::vector<int> >::size_type i=0; i<N329.read().FAULTS.size(); i++){
				// 	RX_FAULTS.push_back(N329.read().FAULTS[i]);
				// 	// cout << N329.read().FAULTS[i][0] << ",  "<<N329.read().FAULTS[i][1] <<endl;
				// }
			}
		// }

		// if(N370.event()){
			if(N370.read().faulty){
				RX_FAULTS.insert(RX_FAULTS.end(), N370.read().FAULTS.begin(), N370.read().FAULTS.end());

				// cout << " =============> Collecting in port N370\n";
				// cout << " =============> Fault originated from id : " << N370.read().id << endl;
				// for (std::vector<std::vector<int> >::size_type i=0; i<N370.read().FAULTS.size(); i++){
				// 	RX_FAULTS.push_back(N370.read().FAULTS[i]);
				// 	// cout << N370.read().FAULTS[i][0] << ",  "<<N370.read().FAULTS[i][1] <<endl;
				// }
			}
		// }

		// if(N421.event()){
			if(N421.read().faulty){
				RX_FAULTS.insert(RX_FAULTS.end(), N421.read().FAULTS.begin(), N421.read().FAULTS.end());

				// cout << " =============> Collecting in port N421\n";
				// cout << " =============> Fault originated from id : " << N421.read().id << endl;
				// for (std::vector<std::vector<int> >::size_type i=0; i<N421.read().FAULTS.size(); i++){
				// 	RX_FAULTS.push_back(N421.read().FAULTS[i]);
				// 	// cout << N421.read().FAULTS[i][0] << ",  "<<N421.read().FAULTS[i][1] <<endl;
				// }
			}
		// }

		// if(N430.event()){
			if(N430.read().faulty){
				RX_FAULTS.insert(RX_FAULTS.end(), N430.read().FAULTS.begin(), N430.read().FAULTS.end());

				// cout << " =============> Collecting in port N430\n";
				// cout << " =============> Fault originated from id : " << N430.read().id << endl;
				// for (std::vector<std::vector<int> >::size_type i=0; i<N430.read().FAULTS.size(); i++){
				// 	RX_FAULTS.push_back(N430.read().FAULTS[i]);
				// 	// cout << N430.read().FAULTS[i][0] << ",  "<<N430.read().FAULTS[i][1] <<endl;
				// }
			}
		// }

		// if(N431.event()){
			if(N431.read().faulty){
				RX_FAULTS.insert(RX_FAULTS.end(), N431.read().FAULTS.begin(), N431.read().FAULTS.end());

				// cout << " =============> Collecting in port N431\n";
				// cout << " =============> Fault originated from id : " << N431.read() << endl;
				// for (std::vector<std::vector<int> >::size_type i=0; i<N431.read().FAULTS.size(); i++){
				// 	RX_FAULTS.push_back(N431.read().FAULTS[i]);
				// 	// cout << N431.read().FAULTS[i][0] << ",  "<<N431.read().FAULTS[i][1] <<endl;
				// }
			}
		// }

		// if(N432.event()){
			if(N432.read().faulty){
				RX_FAULTS.insert(RX_FAULTS.end(), N432.read().FAULTS.begin(), N432.read().FAULTS.end());

				// cout << " =============> Collecting in port N432\n";
				// cout << " =============> Fault originated from id : " << N432.read().id << endl;
				// for (std::vector<std::vector<int> >::size_type i=0; i<N432.read().FAULTS.size(); i++){
				// 	RX_FAULTS.push_back(N432.read().FAULTS[i]);
				// 	// cout << N432.read().FAULTS[i][0] << ",  "<<N432.read().FAULTS[i][1] <<endl;
				// }
			}
		// }	

		// for (std::vector<std::vector<int> >::size_type i=0; i<RX_FAULTS.size(); i++){
		// 	cout << "#### RX FAULTS idx "<<i<<" = "<<RX_FAULTS[i][0] <<", "<<RX_FAULTS[i][1] <<endl;
		// }
		//remove duplicates
		std::sort(RX_FAULTS.begin(), RX_FAULTS.end());
    	RX_FAULTS.erase(std::unique(RX_FAULTS.begin(), RX_FAULTS.end()), RX_FAULTS.end());

		// for (std::vector<std::vector<int> >::size_type i=0; i<RX_FAULTS.size(); i++){
		// 	cout << "#### RX FAULTS dupErased idx "<<i<<" = "<<RX_FAULTS[i][0] <<", "<<RX_FAULTS[i][1] <<endl;

		// }

		det =0;
		for (std::vector<std::vector<int> >::size_type j=0; j< RX_FAULTS.size(); j++){
			if (!(std::find(ALL_DET.begin(), ALL_DET.end(), RX_FAULTS[j]) != ALL_DET.end())) 
			{
				// cout << "$$$$$$$$$$ NOTIFYING : "<<RX_FAULTS[j][0] << endl;
				module_map[RX_FAULTS[j][0]]->faultIdx = RX_FAULTS[j][1];
				module_map[RX_FAULTS[j][0]]->fault_Detected.notify();
				ALL_DET.push_back(RX_FAULTS[j]);
				det +=1;
				// if((TVnum == 0) || (TVnum == 1) || (TVnum == 2)){
				// 	cout << "gate ID: "<< 446+RX_FAULTS[j][0] ;
				// 	if(RX_FAULTS[j][1] == 0)
				// 			cout<< ".B s@1" << endl;
				// 	else if(RX_FAULTS[j][1] == 1)
				// 			cout<< ".B s@0" << endl;
				// 	else if(RX_FAULTS[j][1] == 2)
				// 			cout<< ".A s@1" << endl;
				// 	else if(RX_FAULTS[j][1] == 3)
				// 			cout<< ".A s@0" << endl;
				// 	else if(RX_FAULTS[j][1] == 4)
				// 			cout<< ".Y s@1" << endl;
				// 	else if(RX_FAULTS[j][1] == 5)
				// 			cout<< ".Y s@0" << endl;	
				// }
			}


		}

		
		TVnum+=1;
		// cout << "detected faults by TV = " << TVnum <<" is :" <<det <<endl;
		tot_det += det;
		// cout << "detected untill now = " << tot_det<<endl;
		COV = (ALL_DET.size())/606.0;
		// cout << "  Coverage untill now = " << (ALL_DET.size())/606.0<<endl;	
	}
}

// void c432_netlist::Notifying()
// {
	

// 		for (std::vector<std::vector<int> >::size_type i=0; i<RX_FAULTS.size(); i++){
// 			cout << "#### RX FAULTS idx "<<i<<" = "<<RX_FAULTS[i][0] <<", "<<RX_FAULTS[i][1] <<endl;
// 		}
// 		//remove duplicates
// 		std::sort(RX_FAULTS.begin(), RX_FAULTS.end());
//     	RX_FAULTS.erase(std::unique(RX_FAULTS.begin(), RX_FAULTS.end()), RX_FAULTS.end());

// 		for (std::vector<std::vector<int> >::size_type i=0; i<RX_FAULTS.size(); i++){
// 			cout << "#### RX FAULTS dupErased idx "<<i<<" = "<<RX_FAULTS[i][0] <<", "<<RX_FAULTS[i][1] <<endl;

// 		}

// 		//Notifying and removing
// 		while (!RX_FAULTS.empty()) {
// 			if (!(std::find(ALL_DET.begin(), ALL_DET.end(), RX_FAULTS.front()) != ALL_DET.end())) {
// 				// not already detected
// 				cout << "$$$$$$$$$$ NOTIFYING : "<<RX_FAULTS.front()[0] << endl;
// 				module_map[RX_FAULTS.front()[0]]->faultIdx = RX_FAULTS.front()[1];
// 				module_map[RX_FAULTS.front()[0]]->fault_Detected.notify();
// 				ALL_DET.push_back(RX_FAULTS.front());
// 				det +=1;
// 			}
// 			RX_FAULTS.erase(RX_FAULTS.begin());
//     	}

// 		cout << "$$$$$$$$$$$$$$$$$$$ det : " << det << endl;	
// }