#include "netlist.h"
#include <cmath>
// std::ofstream GIC_logFile("GIC_logFile.txt");

void c5315_netlist::assignments()
{
	while (true)
	{
		N2891.write(N2623);
		N6466.write(N6716);
		N6724.write(N6877);
		N7394.write(N7474);
		N7397.write(N7476);
		N7431.write(N7432);

		wait();
	}
}

void c5315_netlist::GIC_Coverage_Calculator()
{
	// totalObservedCombs = 0;
	// for ( int i=1; i< numOfGates+1; i++){
	// 	totalObservedCombs += module_map[i]->numOfObservedCombs ;
	// }
	// cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	// cout << "GIC Coverage = " << GIC_Coverage << "\n";

}

void c5315_netlist::faultCollection()
{
	if (sc_time_stamp().to_double()>0 ){
		std::vector<std::vector<int>> RX_FAULTS;
		if(N1066.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1066.read().FAULTS.begin(), N1066.read().FAULTS.end());
			
		}

		if(N1137.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1137.read().FAULTS.begin(), N1137.read().FAULTS.end());
			
		}

		if(N1138.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1138.read().FAULTS.begin(), N1138.read().FAULTS.end());
			
		}

		if(N1139.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1139.read().FAULTS.begin(), N1139.read().FAULTS.end());
			
		}

		if(N1140.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1140.read().FAULTS.begin(), N1140.read().FAULTS.end());
			
		}

		if(N1141.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1141.read().FAULTS.begin(), N1141.read().FAULTS.end());
			
		}

		if(N1142.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1142.read().FAULTS.begin(), N1142.read().FAULTS.end());
			
		}

		if(N1143.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1143.read().FAULTS.begin(), N1143.read().FAULTS.end());
			
		}

		if(N1144.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1144.read().FAULTS.begin(), N1144.read().FAULTS.end());
			
		}

		if(N1145.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1145.read().FAULTS.begin(), N1145.read().FAULTS.end());
			
		}

		if(N1147.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1147.read().FAULTS.begin(), N1147.read().FAULTS.end());
			
		}

		if(N1152.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1152.read().FAULTS.begin(), N1152.read().FAULTS.end());
			
		}

		if(N1153.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1153.read().FAULTS.begin(), N1153.read().FAULTS.end());
			
		}

		if(N1154.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1154.read().FAULTS.begin(), N1154.read().FAULTS.end());
			
		}

		if(N1155.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1155.read().FAULTS.begin(), N1155.read().FAULTS.end());
			
		}

		if(N1972.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N1972.read().FAULTS.begin(), N1972.read().FAULTS.end());
			
		}

		if(N2054.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N2054.read().FAULTS.begin(), N2054.read().FAULTS.end());
			
		}

		if(N2060.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N2060.read().FAULTS.begin(), N2060.read().FAULTS.end());
			
		}

		if(N2061.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N2061.read().FAULTS.begin(), N2061.read().FAULTS.end());
			
		}

		if(N2139.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N2139.read().FAULTS.begin(), N2139.read().FAULTS.end());
			
		}

		if(N2142.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N2142.read().FAULTS.begin(), N2142.read().FAULTS.end());
			
		}

		if(N2309.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N2309.read().FAULTS.begin(), N2309.read().FAULTS.end());
			
		}

		if(N2387.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N2387.read().FAULTS.begin(), N2387.read().FAULTS.end());
			
		}

		if(N2527.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N2527.read().FAULTS.begin(), N2527.read().FAULTS.end());
			
		}

		if(N2584.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N2584.read().FAULTS.begin(), N2584.read().FAULTS.end());
			
		}

		if(N2590.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N2590.read().FAULTS.begin(), N2590.read().FAULTS.end());
			
		}

		if(N2623.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N2623.read().FAULTS.begin(), N2623.read().FAULTS.end());
			
		}

		if(N3357.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N3357.read().FAULTS.begin(), N3357.read().FAULTS.end());
			
		}

		if(N3358.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N3358.read().FAULTS.begin(), N3358.read().FAULTS.end());
			
		}

		if(N3359.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N3359.read().FAULTS.begin(), N3359.read().FAULTS.end());
			
		}

		if(N3360.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N3360.read().FAULTS.begin(), N3360.read().FAULTS.end());
			
		}

		if(N3604.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N3604.read().FAULTS.begin(), N3604.read().FAULTS.end());
			
		}

		if(N3613.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N3613.read().FAULTS.begin(), N3613.read().FAULTS.end());
			
		}

		if(N4272.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N4272.read().FAULTS.begin(), N4272.read().FAULTS.end());
			
		}

		if(N4275.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N4275.read().FAULTS.begin(), N4275.read().FAULTS.end());
			
		}

		if(N4278.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N4278.read().FAULTS.begin(), N4278.read().FAULTS.end());
			
		}

		if(N4279.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N4279.read().FAULTS.begin(), N4279.read().FAULTS.end());
			
		}

		if(N4737.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N4737.read().FAULTS.begin(), N4737.read().FAULTS.end());
			
		}

		if(N4738.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N4738.read().FAULTS.begin(), N4738.read().FAULTS.end());
			
		}

		if(N4739.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N4739.read().FAULTS.begin(), N4739.read().FAULTS.end());
			
		}

		if(N4740.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N4740.read().FAULTS.begin(), N4740.read().FAULTS.end());
			
		}

		if(N5240.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N5240.read().FAULTS.begin(), N5240.read().FAULTS.end());
			
		}

		if(N5388.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N5388.read().FAULTS.begin(), N5388.read().FAULTS.end());
			
		}

		if(N6641.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N6641.read().FAULTS.begin(), N6641.read().FAULTS.end());
			
		}

		if(N6643.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N6643.read().FAULTS.begin(), N6643.read().FAULTS.end());
			
		}

		if(N6646.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N6646.read().FAULTS.begin(), N6646.read().FAULTS.end());
			
		}

		if(N6648.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N6648.read().FAULTS.begin(), N6648.read().FAULTS.end());
			
		}

		if(N6716.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N6716.read().FAULTS.begin(), N6716.read().FAULTS.end());
			
		}

		if(N6877.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N6877.read().FAULTS.begin(), N6877.read().FAULTS.end());
			
		}

		if(N6924.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N6924.read().FAULTS.begin(), N6924.read().FAULTS.end());
			
		}

		if(N6925.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N6925.read().FAULTS.begin(), N6925.read().FAULTS.end());
			
		}

		if(N6926.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N6926.read().FAULTS.begin(), N6926.read().FAULTS.end());
			
		}

		if(N6927.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N6927.read().FAULTS.begin(), N6927.read().FAULTS.end());
			
		}

		if(N7015.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7015.read().FAULTS.begin(), N7015.read().FAULTS.end());
			
		}

		if(N709.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N709.read().FAULTS.begin(), N709.read().FAULTS.end());
			
		}

		if(N7363.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7363.read().FAULTS.begin(), N7363.read().FAULTS.end());
			
		}

		if(N7365.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7365.read().FAULTS.begin(), N7365.read().FAULTS.end());
			
		}

		if(N7432.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7432.read().FAULTS.begin(), N7432.read().FAULTS.end());
			
		}

		if(N7449.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7449.read().FAULTS.begin(), N7449.read().FAULTS.end());
			
		}

		if(N7465.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7465.read().FAULTS.begin(), N7465.read().FAULTS.end());
			
		}

		if(N7466.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7466.read().FAULTS.begin(), N7466.read().FAULTS.end());
			
		}

		if(N7467.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7467.read().FAULTS.begin(), N7467.read().FAULTS.end());
			
		}

		if(N7469.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7469.read().FAULTS.begin(), N7469.read().FAULTS.end());
			
		}

		if(N7470.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7470.read().FAULTS.begin(), N7470.read().FAULTS.end());
			
		}

		if(N7471.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7471.read().FAULTS.begin(), N7471.read().FAULTS.end());
			
		}

		if(N7472.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7472.read().FAULTS.begin(), N7472.read().FAULTS.end());
			
		}

		if(N7473.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7473.read().FAULTS.begin(), N7473.read().FAULTS.end());
			
		}

		if(N7474.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7474.read().FAULTS.begin(), N7474.read().FAULTS.end());
			
		}

		if(N7476.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7476.read().FAULTS.begin(), N7476.read().FAULTS.end());
			
		}

		if(N7503.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7503.read().FAULTS.begin(), N7503.read().FAULTS.end());
			
		}

		if(N7504.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7504.read().FAULTS.begin(), N7504.read().FAULTS.end());
			
		}

		if(N7506.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7506.read().FAULTS.begin(), N7506.read().FAULTS.end());
			
		}

		if(N7511.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7511.read().FAULTS.begin(), N7511.read().FAULTS.end());
			
		}

		if(N7515.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7515.read().FAULTS.begin(), N7515.read().FAULTS.end());
			
		}

		if(N7516.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7516.read().FAULTS.begin(), N7516.read().FAULTS.end());
			
		}

		if(N7517.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7517.read().FAULTS.begin(), N7517.read().FAULTS.end());
			
		}

		if(N7518.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7518.read().FAULTS.begin(), N7518.read().FAULTS.end());
			
		}

		if(N7519.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7519.read().FAULTS.begin(), N7519.read().FAULTS.end());
			
		}

		if(N7520.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7520.read().FAULTS.begin(), N7520.read().FAULTS.end());
			
		}

		if(N7521.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7521.read().FAULTS.begin(), N7521.read().FAULTS.end());
			
		}

		if(N7522.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7522.read().FAULTS.begin(), N7522.read().FAULTS.end());
			
		}

		if(N7600.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7600.read().FAULTS.begin(), N7600.read().FAULTS.end());
			
		}

		if(N7601.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7601.read().FAULTS.begin(), N7601.read().FAULTS.end());
			
		}

		if(N7602.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7602.read().FAULTS.begin(), N7602.read().FAULTS.end());
			
		}

		if(N7603.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7603.read().FAULTS.begin(), N7603.read().FAULTS.end());
			
		}

		if(N7604.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7604.read().FAULTS.begin(), N7604.read().FAULTS.end());
			
		}

		if(N7605.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7605.read().FAULTS.begin(), N7605.read().FAULTS.end());
			
		}

		if(N7606.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7606.read().FAULTS.begin(), N7606.read().FAULTS.end());
			
		}

		if(N7607.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7607.read().FAULTS.begin(), N7607.read().FAULTS.end());
			
		}

		if(N7626.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7626.read().FAULTS.begin(), N7626.read().FAULTS.end());
			
		}

		if(N7698.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7698.read().FAULTS.begin(), N7698.read().FAULTS.end());
			
		}

		if(N7699.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7699.read().FAULTS.begin(), N7699.read().FAULTS.end());
			
		}

		if(N7700.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7700.read().FAULTS.begin(), N7700.read().FAULTS.end());
			
		}

		if(N7701.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7701.read().FAULTS.begin(), N7701.read().FAULTS.end());
			
		}

		if(N7702.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7702.read().FAULTS.begin(), N7702.read().FAULTS.end());
			
		}

		if(N7703.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7703.read().FAULTS.begin(), N7703.read().FAULTS.end());
			
		}

		if(N7704.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7704.read().FAULTS.begin(), N7704.read().FAULTS.end());
			
		}

		if(N7705.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7705.read().FAULTS.begin(), N7705.read().FAULTS.end());
			
		}

		if(N7706.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7706.read().FAULTS.begin(), N7706.read().FAULTS.end());
			
		}

		if(N7707.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7707.read().FAULTS.begin(), N7707.read().FAULTS.end());
			
		}

		if(N7735.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7735.read().FAULTS.begin(), N7735.read().FAULTS.end());
			
		}

		if(N7736.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7736.read().FAULTS.begin(), N7736.read().FAULTS.end());
			
		}

		if(N7737.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7737.read().FAULTS.begin(), N7737.read().FAULTS.end());
			
		}

		if(N7738.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7738.read().FAULTS.begin(), N7738.read().FAULTS.end());
			
		}

		if(N7739.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7739.read().FAULTS.begin(), N7739.read().FAULTS.end());
			
		}

		if(N7740.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7740.read().FAULTS.begin(), N7740.read().FAULTS.end());
			
		}

		if(N7741.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7741.read().FAULTS.begin(), N7741.read().FAULTS.end());
			
		}

		if(N7742.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7742.read().FAULTS.begin(), N7742.read().FAULTS.end());
			
		}

		if(N7754.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7754.read().FAULTS.begin(), N7754.read().FAULTS.end());
			
		}

		if(N7755.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7755.read().FAULTS.begin(), N7755.read().FAULTS.end());
			
		}

		if(N7756.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7756.read().FAULTS.begin(), N7756.read().FAULTS.end());
			
		}

		if(N7757.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7757.read().FAULTS.begin(), N7757.read().FAULTS.end());
			
		}

		if(N7758.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7758.read().FAULTS.begin(), N7758.read().FAULTS.end());
			
		}

		if(N7759.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7759.read().FAULTS.begin(), N7759.read().FAULTS.end());
			
		}

		if(N7760.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7760.read().FAULTS.begin(), N7760.read().FAULTS.end());
			
		}

		if(N7761.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N7761.read().FAULTS.begin(), N7761.read().FAULTS.end());
			
		}

		if(N8075.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N8075.read().FAULTS.begin(), N8075.read().FAULTS.end());
			
		}

		if(N8076.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N8076.read().FAULTS.begin(), N8076.read().FAULTS.end());
			
		}

		if(N8123.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N8123.read().FAULTS.begin(), N8123.read().FAULTS.end());
			
		}

		if(N8124.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N8124.read().FAULTS.begin(), N8124.read().FAULTS.end());
			
		}

		if(N8127.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N8127.read().FAULTS.begin(), N8127.read().FAULTS.end());
			
		}

		if(N8128.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N8128.read().FAULTS.begin(), N8128.read().FAULTS.end());
			
		}

		if(N816.read().faulty){
			RX_FAULTS.insert(RX_FAULTS.end(), N816.read().FAULTS.begin(), N816.read().FAULTS.end());
			
		}

		std::sort(RX_FAULTS.begin(), RX_FAULTS.end());
		RX_FAULTS.erase(std::unique(RX_FAULTS.begin(), RX_FAULTS.end()), RX_FAULTS.end());

		det = 0;
		for (std::vector<std::vector<int> >::size_type  j=0; j< RX_FAULTS.size(); j++){
			if (!(std::find(ALL_DET.begin(), ALL_DET.end(), RX_FAULTS[j]) != ALL_DET.end())) 
			{
				ALL_DET.push_back(RX_FAULTS[j]);
				
				module_map[RX_FAULTS[j][0]]->faultIdx = RX_FAULTS[j][1];
				module_map[RX_FAULTS[j][0]]->fault_Detected.notify();
				det +=1;
			}
		}

		TVnum+=1;
		// cout << "detected faults by TV = " << TVnum <<" is :" <<det <<endl;
		tot_det += det;
		// cout << "detected untill now = " << tot_det<<endl;
		// cout << "  Coverage untill now = " << tot_det/4404.0<<endl;	
	}
}
