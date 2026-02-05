#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");
std::ofstream FLT_logFile("FLT_logFile.txt");
void s1238_netlist_scanInserted::assignments()
{
	while (true)
	{
		G503.write(_0792_);
		G504.write(_0953_);
		G505.write(_0563_);
		G508.write(_0678_);
		G510.write(_0691_);
		G512.write(_0712_);
		_0782_.write(G37);
		_0950_.write(G30);
		_0956_.write(G31);
		_0968_.write(G46);
		_0374_.write(G36);
		_0387_.write(G35);
		_0399_.write(G32);
		G518.write(_0454_);
		_0460_.write(G34);
		G502.write(_0477_);
		G506.write(_0482_);
		G507.write(_0487_);
		G509.write(_0491_);
		G513.write(_0496_);
		G514.write(_0501_);
		G515.write(_0507_);
		G516.write(_0516_);
		G517.write(_0524_);
		G519.write(_0539_);
		_0541_.write(G41);
		G511.write(_0545_);
		_0581_.write(G43);
		_0594_.write(G38);
		_0604_.write(G44);
		_0643_.write(G42);
		_0658_.write(G33);
		_0667_.write(G29);
		_0686_.write(G39);
		_0708_.write(G40);

		wait();
	}
}

void s1238_netlist_scanInserted::GIC_Coverage_Calculator()
{
	// totalObservedCombs = 0;
	// for ( int i=1; i< numOfGates+1; i++){
	// 	totalObservedCombs += module_map[i]->numOfObservedCombs ;
	// }
	// cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	// cout << "GIC Coverage = " << GIC_Coverage << "\n";

}

void s1238_netlist_scanInserted::faultCollection()
{
	if (sc_time_stamp().to_double()>0 ){

		if (rst == SC_LOGIC_1 && rst.event()){
			// while (!RX_FAULTS.empty()) {
			// 	RX_FAULTS.erase(RX_FAULTS.begin()); // clear vector
			// }
			RX_FAULTS.clear();
		}
		else if ( clk == SC_LOGIC_0 && clk.event() ){
		// else if ( newTV == SC_LOGIC_0 && newTV.event() ){

			if(So.read().faulty){
				for (int i=0; i<So.read().FAULTS.size(); i++){
					RX_FAULTS.push_back(So.read().FAULTS[i]);
				}
			}

			if(G45.read().faulty){
				for (int i=0; i<G45.read().FAULTS.size(); i++){
					RX_FAULTS.push_back(G45.read().FAULTS[i]);
				}
			}

			if(G530.read().faulty){
				for (int i=0; i<G530.read().FAULTS.size(); i++){
					RX_FAULTS.push_back(G530.read().FAULTS[i]);
				}
			}

			if(G532.read().faulty){
				for (int i=0; i<G532.read().FAULTS.size(); i++){
					RX_FAULTS.push_back(G532.read().FAULTS[i]);
				}
			}

			if(G535.read().faulty){
				for (int i=0; i<G535.read().FAULTS.size(); i++){
					RX_FAULTS.push_back(G535.read().FAULTS[i]);
				}
			}

			if(G537.read().faulty){
				for (int i=0; i<G537.read().FAULTS.size(); i++){
					RX_FAULTS.push_back(G537.read().FAULTS[i]);
				}
			}

			if(G539.read().faulty){
				for (int i=0; i<G539.read().FAULTS.size(); i++){
					RX_FAULTS.push_back(G539.read().FAULTS[i]);
				}
			}

			if(G542.read().faulty){
				for (int i=0; i<G542.read().FAULTS.size(); i++){
					RX_FAULTS.push_back(G542.read().FAULTS[i]);
				}
			}

			if(G546.read().faulty){
				for (int i=0; i<G546.read().FAULTS.size(); i++){
					RX_FAULTS.push_back(G546.read().FAULTS[i]);
				}
			}

			if(G547.read().faulty){
				for (int i=0; i<G547.read().FAULTS.size(); i++){
					RX_FAULTS.push_back(G547.read().FAULTS[i]);
				}
			}

			if(G548.read().faulty){
				for (int i=0; i<G548.read().FAULTS.size(); i++){
					RX_FAULTS.push_back(G548.read().FAULTS[i]);
				}
			}

			if(G549.read().faulty){
				for (int i=0; i<G549.read().FAULTS.size(); i++){
					RX_FAULTS.push_back(G549.read().FAULTS[i]);
				}
			}

			if(G550.read().faulty){
				for (int i=0; i<G550.read().FAULTS.size(); i++){
					RX_FAULTS.push_back(G550.read().FAULTS[i]);
				}
			}

			if(G551.read().faulty){
				for (int i=0; i<G551.read().FAULTS.size(); i++){
					RX_FAULTS.push_back(G551.read().FAULTS[i]);
				}
			}

			if(G552.read().faulty){
				for (int i=0; i<G552.read().FAULTS.size(); i++){
					RX_FAULTS.push_back(G552.read().FAULTS[i]);
				}
			}
		}

		else if (newTV == SC_LOGIC_0 && newTV.event()) {
			if(RX_FAULTS.size()>0){
				// erase duplicate ones
				std::sort(RX_FAULTS.begin(), RX_FAULTS.end());
				RX_FAULTS.erase(std::unique(RX_FAULTS.begin(), RX_FAULTS.end()), RX_FAULTS.end());
				// cout << "num of RX faults with this new TV : "<< RX_FAULTS.size() <<endl;
			}
			det =0;
			if(RX_FAULTS.size()>0){
				// cout << " WE HERE !!"<<endl;
				// add the detected faults to ALL_DET which represents all detected by a round of flipped seed
				for (int j=0; j< RX_FAULTS.size(); j++){
					if (!(std::find(ALL_DET.begin(), ALL_DET.end(), RX_FAULTS[j]) != ALL_DET.end())) 
					{
						// cout << "detected Fault: "<< RX_FAULTS[j][0] <<",  "<<RX_FAULTS[j][1]<<endl;
						// // cout << "$$$$$$$$$$ NOTIFYING : "<<RX_FAULTS[j][0] << endl;
						// module_map[RX_FAULTS[j][0]]->faultIdx = RX_FAULTS[j][1];
						// module_map[RX_FAULTS[j][0]]->fault_Detected.notify();
						ALL_DET.push_back(RX_FAULTS[j]);
						// if((TVnum == 0) || (TVnum == 1) || (TVnum == 2) || (TVnum == 3)){
						// 	cout << "gate ID: "<< 529+RX_FAULTS[j][0] ;
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

						det +=1;
					}
				}
				// cout << "New TV, Num of new detected faults:" << det<< endl; 
				// cout << "New TV, Num of all detected faults:" << ALL_DET.size() << endl << endl; 
			// }
				while (!RX_FAULTS.empty()) {
					RX_FAULTS.erase(RX_FAULTS.begin()); // clear vector
				}
			}
		}

		
	if ( takeCP == SC_LOGIC_1 && takeCP.event()){
		// totalDet_base = tot_det;
			shadowChain[0] = G228.read().logicVal;
			shadowChain[1] = G39.read().logicVal;
			shadowChain[2] = G40.read().logicVal;
			shadowChain[3] = G41.read().logicVal;
			shadowChain[4] = G42.read().logicVal;
		cout << "************* taking a FC checkpoint"<< endl;
		while (!ALL_DET_base.empty()) {
				ALL_DET_base.erase(ALL_DET_base.begin()); // clear vector
			}
		for (int k=0; k< ALL_DET.size(); k++){
			// cout << "Detected fault: "<< ALL_DET[k][0] << ", "<< ALL_DET[k][1] << endl;
			ALL_DET_base.push_back(ALL_DET[k]);
		}



		while (!RX_FAULTS.empty()) {
					RX_FAULTS.erase(RX_FAULTS.begin()); // clear vector
				}

		cout << " Num of base detected faults = " << ALL_DET_base.size() << endl;
		cout << " Coverage Base = " << ALL_DET_base.size()/(1202.0) << endl;
	}

	if ( loadCP == SC_LOGIC_1 && loadCP.event()){
		// totalDet_base = tot_det;
		cout << "************* loading a FC checkpoint"<< endl;
		while (!ALL_DET.empty()) {
				ALL_DET.erase(ALL_DET.begin()); // clear vector
			}
		for (int k=0; k< ALL_DET_base.size(); k++){
			// cout << "Detected fault: "<< ALL_DET[k][0] << ", "<< ALL_DET[k][1] << endl;
			ALL_DET.push_back(ALL_DET_base[k]);
		}	
		cout << " Num of Recovered base detected faults = " << ALL_DET.size() << endl;

	}




	if (endSim==SC_LOGIC_1 && endSim.event()){
		// FC_contributions.insert(FC_contributions.begin() + flipIdx, (ALL_DET.size()));
		// if(flipIdx == 50){
			FC_contributions.insert(FC_contributions.begin() + flipIdx, (ALL_DET.size() - ALL_DET_base.size()));
		// }

		// FC_contributions[flipIdx] = (ALL_DET.size() - ALL_DET_base.size());
		if(flipIdx == 18){
			cout << "contribution of No Flipping is = " <<(ALL_DET.size() - ALL_DET_base.size()) << endl;
		}else{
			cout << "contribution of Flip Index "<<flipIdx<<" is = " <<(ALL_DET.size() - ALL_DET_base.size()) << endl;
		}
		if(flipIdx == 18){
			cout << "****** FC Contribution vector ******\n";
			for (int i =0; i< FC_contributions.size(); i++)
				cout << "******       "<<"idx = "<<i<<"	"<<FC_contributions[i] << "       ******\n";
			
			double max_value = FC_contributions[0];
			int FC_maxIdx = 0;
			for (int i = 1; i < FC_contributions.size(); ++i) {
				if (FC_contributions[i] >= max_value) {
				max_value = FC_contributions[i];
				FC_maxIdx = i;
				}
			}
			selectedIdx = FC_maxIdx;
			cout << "max val: " << max_value << " max Idx : "<< FC_maxIdx <<  endl;
			FC_contributions.clear();
		}

	}


		// std::sort(RX_FAULTS.begin(), RX_FAULTS.end());
		// RX_FAULTS.erase(std::unique(RX_FAULTS.begin(), RX_FAULTS.end()), RX_FAULTS.end());

		// det = 0;
		// for (int j=0; j< RX_FAULTS.size(); j++){
		// 	if (!(std::find(ALL_DET.begin(), ALL_DET.end(), RX_FAULTS[j]) != ALL_DET.end())) 
		// 	{
		// 		ALL_DET.push_back(RX_FAULTS[j]);
		// 		det +=1;
		// 	}
		// }

		// TVnum+=1;
		// cout << "detected faults by TV = " << TVnum <<" is :" <<det <<endl;
		// tot_det += det;
		// cout << "detected untill now = " << tot_det<<endl;
		// cout << "  Coverage untill now = " << tot_det/1190.0<<endl;	
	}
}
