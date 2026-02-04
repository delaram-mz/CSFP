#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");


void c1355_netlist::assignments()
{
	while (true)
	{
		N1292.write(N1324);
		N1293.write(N1325);
		N1294.write(N1326);
		N1295.write(N1327);
		N1296.write(N1328);
		N1297.write(N1329);
		N1298.write(N1330);
		N1299.write(N1331);
		N1300.write(N1332);
		N1301.write(N1333);
		N1302.write(N1334);
		N1303.write(N1335);
		N1304.write(N1336);
		N1305.write(N1337);
		N1306.write(N1338);
		N1307.write(N1339);
		N1308.write(N1340);
		N1309.write(N1341);
		N1310.write(N1342);
		N1311.write(N1343);
		N1312.write(N1344);
		N1313.write(N1345);
		N1314.write(N1346);
		N1315.write(N1347);
		N1316.write(N1348);
		N1317.write(N1349);
		N1318.write(N1350);
		N1319.write(N1351);
		N1320.write(N1352);
		N1321.write(N1353);
		N1322.write(N1354);
		N1323.write(N1355);

		wait();
	}
}

void c1355_netlist::GIC_Coverage_Calculator()
{
	// totalObservedCombs = 0;
	// for ( int i=1; i< numOfGates+1; i++){
	// 	totalObservedCombs += module_map[i]->numOfObservedCombs ;
	// }
	// cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	// cout << "GIC Coverage = " << GIC_Coverage << "\n";

}

void c1355_netlist::faultCollection()
{
	if (sc_time_stamp().to_double()>0 ){
		std::vector<std::vector<int>> RX_FAULTS;
		if(N1324.read().faulty){
			for (int i=0; i<N1324.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1324.read().FAULTS[i]);
			}
		}

		if(N1325.read().faulty){
			for (int i=0; i<N1325.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1325.read().FAULTS[i]);
			}
		}

		if(N1326.read().faulty){
			for (int i=0; i<N1326.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1326.read().FAULTS[i]);
			}
		}

		if(N1327.read().faulty){
			for (int i=0; i<N1327.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1327.read().FAULTS[i]);
			}
		}

		if(N1328.read().faulty){
			for (int i=0; i<N1328.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1328.read().FAULTS[i]);
			}
		}

		if(N1329.read().faulty){
			for (int i=0; i<N1329.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1329.read().FAULTS[i]);
			}
		}

		if(N1330.read().faulty){
			for (int i=0; i<N1330.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1330.read().FAULTS[i]);
			}
		}

		if(N1331.read().faulty){
			for (int i=0; i<N1331.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1331.read().FAULTS[i]);
			}
		}

		if(N1332.read().faulty){
			for (int i=0; i<N1332.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1332.read().FAULTS[i]);
			}
		}

		if(N1333.read().faulty){
			for (int i=0; i<N1333.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1333.read().FAULTS[i]);
			}
		}

		if(N1334.read().faulty){
			for (int i=0; i<N1334.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1334.read().FAULTS[i]);
			}
		}

		if(N1335.read().faulty){
			for (int i=0; i<N1335.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1335.read().FAULTS[i]);
			}
		}

		if(N1336.read().faulty){
			for (int i=0; i<N1336.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1336.read().FAULTS[i]);
			}
		}

		if(N1337.read().faulty){
			for (int i=0; i<N1337.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1337.read().FAULTS[i]);
			}
		}

		if(N1338.read().faulty){
			for (int i=0; i<N1338.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1338.read().FAULTS[i]);
			}
		}

		if(N1339.read().faulty){
			for (int i=0; i<N1339.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1339.read().FAULTS[i]);
			}
		}

		if(N1340.read().faulty){
			for (int i=0; i<N1340.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1340.read().FAULTS[i]);
				// cout << "N1340 => Val"<< N1340.read().logicVal<<"Fault: "<< N1340.read().FAULTS[i][0] << ",  "<<N1340.read().FAULTS[i][1] <<endl;
			}
		}

		if(N1341.read().faulty){
			for (int i=0; i<N1341.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1341.read().FAULTS[i]);
			}
		}

		if(N1342.read().faulty){
			for (int i=0; i<N1342.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1342.read().FAULTS[i]);
			}
		}

		if(N1343.read().faulty){
			for (int i=0; i<N1343.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1343.read().FAULTS[i]);
			}
		}

		if(N1344.read().faulty){
			for (int i=0; i<N1344.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1344.read().FAULTS[i]);
			}
		}

		if(N1345.read().faulty){
			for (int i=0; i<N1345.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1345.read().FAULTS[i]);
			}
		}

		if(N1346.read().faulty){
			for (int i=0; i<N1346.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1346.read().FAULTS[i]);
			}
		}

		if(N1347.read().faulty){
			for (int i=0; i<N1347.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1347.read().FAULTS[i]);
			}
		}

		if(N1348.read().faulty){
			for (int i=0; i<N1348.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1348.read().FAULTS[i]);
			}
		}

		if(N1349.read().faulty){
			for (int i=0; i<N1349.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1349.read().FAULTS[i]);
			}
		}

		if(N1350.read().faulty){
			for (int i=0; i<N1350.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1350.read().FAULTS[i]);
			}
		}

		if(N1351.read().faulty){
			for (int i=0; i<N1351.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1351.read().FAULTS[i]);
			}
		}

		if(N1352.read().faulty){
			for (int i=0; i<N1352.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1352.read().FAULTS[i]);
			}
		}

		if(N1353.read().faulty){
			for (int i=0; i<N1353.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1353.read().FAULTS[i]);
			}
		}

		if(N1354.read().faulty){
			for (int i=0; i<N1354.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1354.read().FAULTS[i]);
			}
		}

		if(N1355.read().faulty){
			for (int i=0; i<N1355.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1355.read().FAULTS[i]);
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

				if((TVnum == 0) || (TVnum == 1) || (TVnum == 4)){
					cout << "gate ID: "<< 900+RX_FAULTS[j][0] ;
					if(RX_FAULTS[j][1] == 0)
							cout<< ".B s@1" << endl;
					else if(RX_FAULTS[j][1] == 1)
							cout<< ".B s@0" << endl;
					else if(RX_FAULTS[j][1] == 2)
							cout<< ".A s@1" << endl;
					else if(RX_FAULTS[j][1] == 3)
							cout<< ".A s@0" << endl;
					else if(RX_FAULTS[j][1] == 4)
							cout<< ".Y s@1" << endl;
					else if(RX_FAULTS[j][1] == 5)
							cout<< ".Y s@0" << endl;	
				}
			}
		}

	cout << "gate 1140=>  A: " << _0418_ << "   B: "  << _0336_ << "  Y: " << _0419_ << endl;
	cout << "gate 1541=>  A: " << _0819_ << "   B: "  << _0336_ << "  Y: " << _0820_ << endl;
	cout << "gate 1560=>  A: " << _0835_ << "   B: "  << _0336_ << "  Y: " << _0836_ << endl;
	cout << "gate 1587=>  A: " << _0860_ << "   B: "  << _0336_ << "  Y: " << _0862_ << endl;
	cout << "gate 1503=>  A: " << _0679_ << "   B: "  << _0336_ << "  Y: " << _0783_ << endl;

	// cout << "gate 1140=>  A: " << _418_ << "   B: "  << _336_ << "  Y: " << _419_ << endl;

	// cout << "faults on _740_\n";
	// for (int s=0; s< _0740_.FAULTS.size(); s++){
	// 	cout << _0740_.FAULTS[s][0] << ",  " << _0740_.FAULTS[s][1] <<endl;
	// 	} 


	// cout << "faults on _788_\n";
	// for (int s=0; s< _0788_.FAULTS.size(); s++){
	// 	cout << _0788_.FAULTS[s][0] << ",  " << _0788_.FAULTS[s][1] <<endl;
	// 	} 



	cout<<"OP: "<< N1324<< N1325<< N1326<< N1327<< N1328<< N1329<< N1330<< N1331<< N1332<< N1333<< N1334<< N1335<< N1336<< N1337<< N1338<< N1339<< N1340<< N1341<< N1342<< N1343<< N1344<< N1345<< N1346<< N1347<< N1348<< N1349<< N1350<< N1351<< N1352<< N1353<< N1354<< N1355 << endl;


		TVnum+=1;
		cout << "detected faults by TV = " << TVnum <<" is :" <<det <<endl;
		tot_det += det;
		cout << "detected untill now = " << tot_det<<endl;
		cout << "  Coverage untill now = " << tot_det/1920.0<<endl;	
	}
}
