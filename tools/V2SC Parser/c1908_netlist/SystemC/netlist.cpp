#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");

void c1908_netlist::assignments()
{
	while (true)
	{
		N1001.write(N25);
		N1002.write(N16);
		N1003.write(N22);
		N1004.write(N7);
		N1005.write(N28);
		N1006.write(N43);
		N1007.write(N34);
		N1008.write(N19);
		N1009.write(N28);
		N1148.write(N1);
		N1149.write(N1);
		N1151.write(N13);
		N1152.write(N13);
		N1153.write(N28);
		N1154.write(N28);
		N1156.write(N31);
		N1161.write(N46);
		N1205.write(N4);
		N1207.write(N4);
		N1209.write(N16);
		N1211.write(N16);
		N1213.write(N43);
		N1215.write(N43);
		N1217.write(N25);
		N1219.write(N25);
		N1220.write(N34);
		N1222.write(N31);
		N1223.write(N34);
		N1225.write(N40);
		N1228.write(N40);
		N1238.write(N40);
		N1240.write(N46);
		N1241.write(N40);
		N257.write(N69);
		N260.write(N69);
		N283.write(N94);
		N297.write(N94);
		N303.write(N99);
		N316.write(N104);
		N326.write(N104);
		N331.write(N104);
		N343.write(N1);
		N346.write(N4);
		N349.write(N7);
		N352.write(N10);
		N355.write(N13);
		N358.write(N16);
		N361.write(N19);
		N364.write(N22);
		N367.write(N25);
		N370.write(N28);
		N373.write(N31);
		N376.write(N34);
		N379.write(N37);
		N382.write(N40);
		N385.write(N43);
		N388.write(N46);
		N888.write(N10);
		N889.write(N22);
		N890.write(N25);
		N891.write(N40);
		N892.write(N1);
		N894.write(N10);
		N895.write(N37);
		N913.write(N76);
		N914.write(N76);
		N915.write(N79);
		N916.write(N79);
		N917.write(N82);
		N918.write(N82);
		N919.write(N85);
		N920.write(N85);
		N938.write(N7);
		N942.write(N7);
		N946.write(N19);
		N950.write(N19);
		N954.write(N46);
		N958.write(N46);
		N968.write(N37);
		N972.write(N37);
		N976.write(N10);
		N980.write(N10);
		N984.write(N1);
		N988.write(N13);
		N989.write(N22);
		N990.write(N4);
		N992.write(N43);
		N993.write(N31);
		N997.write(N25);
		_0231_.write(N1);
		_0358_.write(N53);
		_0575_.write(N94);
		_0668_.write(N72);
		_0818_.write(N28);
		_0232_.write(N46);
		_0244_.write(N43);
		_0280_.write(N25);
		_0305_.write(N104);
		_0331_.write(N63);
		_0369_.write(N7);
		_0380_.write(N4);
		_0412_.write(N19);
		_0424_.write(N16);
		_0450_.write(N13);
		_0483_.write(N22);
		_0494_.write(N10);
		_0555_.write(N49);
		_0603_.write(N60);
		_0622_.write(N69);
		_0649_.write(N37);
		_0659_.write(N34);
		_0678_.write(N31);
		_0707_.write(N40);
		_0727_.write(N66);
		_0777_.write(N76);
		_0814_.write(N56);
		_0827_.write(N79);
		_0234_.write(N85);
		_0248_.write(N82);
		_0254_.write(N88);
		_0259_.write(N99);
		_0294_.write(N91);

		wait();
	}
}

void c1908_netlist::GIC_Coverage_Calculator()
{
	// totalObservedCombs = 0;
	// for ( int i=1; i< numOfGates+1; i++){
	// 	totalObservedCombs += module_map[i]->numOfObservedCombs ;
	// }
	// cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	// cout << "GIC Coverage = " << GIC_Coverage << "\n";

}

void c1908_netlist::faultCollection()
{
	if (sc_time_stamp().to_double()>0 ){
		std::vector<std::vector<int>> RX_FAULTS;
		if(N2753.read().faulty){
			for (int i=0; i<N2753.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2753.read().FAULTS[i]);
			}
		}

		if(N2754.read().faulty){
			for (int i=0; i<N2754.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2754.read().FAULTS[i]);
			}
		}

		if(N2755.read().faulty){
			for (int i=0; i<N2755.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2755.read().FAULTS[i]);
			}
		}

		if(N2756.read().faulty){
			for (int i=0; i<N2756.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2756.read().FAULTS[i]);
			}
		}

		if(N2762.read().faulty){
			for (int i=0; i<N2762.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2762.read().FAULTS[i]);
			}
		}

		if(N2767.read().faulty){
			for (int i=0; i<N2767.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2767.read().FAULTS[i]);
			}
		}

		if(N2768.read().faulty){
			for (int i=0; i<N2768.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2768.read().FAULTS[i]);
			}
		}

		if(N2779.read().faulty){
			for (int i=0; i<N2779.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2779.read().FAULTS[i]);
			}
		}

		if(N2780.read().faulty){
			for (int i=0; i<N2780.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2780.read().FAULTS[i]);
			}
		}

		if(N2781.read().faulty){
			for (int i=0; i<N2781.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2781.read().FAULTS[i]);
			}
		}

		if(N2782.read().faulty){
			for (int i=0; i<N2782.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2782.read().FAULTS[i]);
			}
		}

		if(N2783.read().faulty){
			for (int i=0; i<N2783.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2783.read().FAULTS[i]);
			}
		}

		if(N2784.read().faulty){
			for (int i=0; i<N2784.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2784.read().FAULTS[i]);
			}
		}

		if(N2785.read().faulty){
			for (int i=0; i<N2785.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2785.read().FAULTS[i]);
			}
		}

		if(N2786.read().faulty){
			for (int i=0; i<N2786.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2786.read().FAULTS[i]);
			}
		}

		if(N2787.read().faulty){
			for (int i=0; i<N2787.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2787.read().FAULTS[i]);
			}
		}

		if(N2811.read().faulty){
			for (int i=0; i<N2811.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2811.read().FAULTS[i]);
			}
		}

		if(N2886.read().faulty){
			for (int i=0; i<N2886.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2886.read().FAULTS[i]);
			}
		}

		if(N2887.read().faulty){
			for (int i=0; i<N2887.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2887.read().FAULTS[i]);
			}
		}

		if(N2888.read().faulty){
			for (int i=0; i<N2888.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2888.read().FAULTS[i]);
			}
		}

		if(N2889.read().faulty){
			for (int i=0; i<N2889.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2889.read().FAULTS[i]);
			}
		}

		if(N2890.read().faulty){
			for (int i=0; i<N2890.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2890.read().FAULTS[i]);
			}
		}

		if(N2891.read().faulty){
			for (int i=0; i<N2891.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2891.read().FAULTS[i]);
			}
		}

		if(N2892.read().faulty){
			for (int i=0; i<N2892.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2892.read().FAULTS[i]);
			}
		}

		if(N2899.read().faulty){
			for (int i=0; i<N2899.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2899.read().FAULTS[i]);
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
		cout << "  Coverage untill now = " << tot_det/1530.0<<endl;	
	}
}
