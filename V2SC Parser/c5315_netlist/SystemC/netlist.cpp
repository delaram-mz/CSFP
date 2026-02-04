#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");

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
	totalObservedCombs = 0;
	for ( int i=1; i< numOfGates+1; i++){
		totalObservedCombs += module_map[i]->numOfObservedCombs ;
	}
	cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	cout << "GIC Coverage = " << GIC_Coverage << "\n";

}

void c5315_netlist::faultCollection()
{
	if (sc_time_stamp().to_double()>0 ){
		std::vector<std::vector<int>> RX_FAULTS;
		if(N1066.read().faulty){
			for (int i=0; i<N1066.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1066.read().FAULTS[i]);
			}
		}

		if(N1137.read().faulty){
			for (int i=0; i<N1137.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1137.read().FAULTS[i]);
			}
		}

		if(N1138.read().faulty){
			for (int i=0; i<N1138.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1138.read().FAULTS[i]);
			}
		}

		if(N1139.read().faulty){
			for (int i=0; i<N1139.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1139.read().FAULTS[i]);
			}
		}

		if(N1140.read().faulty){
			for (int i=0; i<N1140.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1140.read().FAULTS[i]);
			}
		}

		if(N1141.read().faulty){
			for (int i=0; i<N1141.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1141.read().FAULTS[i]);
			}
		}

		if(N1142.read().faulty){
			for (int i=0; i<N1142.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1142.read().FAULTS[i]);
			}
		}

		if(N1143.read().faulty){
			for (int i=0; i<N1143.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1143.read().FAULTS[i]);
			}
		}

		if(N1144.read().faulty){
			for (int i=0; i<N1144.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1144.read().FAULTS[i]);
			}
		}

		if(N1145.read().faulty){
			for (int i=0; i<N1145.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1145.read().FAULTS[i]);
			}
		}

		if(N1147.read().faulty){
			for (int i=0; i<N1147.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1147.read().FAULTS[i]);
			}
		}

		if(N1152.read().faulty){
			for (int i=0; i<N1152.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1152.read().FAULTS[i]);
			}
		}

		if(N1153.read().faulty){
			for (int i=0; i<N1153.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1153.read().FAULTS[i]);
			}
		}

		if(N1154.read().faulty){
			for (int i=0; i<N1154.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1154.read().FAULTS[i]);
			}
		}

		if(N1155.read().faulty){
			for (int i=0; i<N1155.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1155.read().FAULTS[i]);
			}
		}

		if(N1972.read().faulty){
			for (int i=0; i<N1972.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1972.read().FAULTS[i]);
			}
		}

		if(N2054.read().faulty){
			for (int i=0; i<N2054.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2054.read().FAULTS[i]);
			}
		}

		if(N2060.read().faulty){
			for (int i=0; i<N2060.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2060.read().FAULTS[i]);
			}
		}

		if(N2061.read().faulty){
			for (int i=0; i<N2061.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2061.read().FAULTS[i]);
			}
		}

		if(N2139.read().faulty){
			for (int i=0; i<N2139.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2139.read().FAULTS[i]);
			}
		}

		if(N2142.read().faulty){
			for (int i=0; i<N2142.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2142.read().FAULTS[i]);
			}
		}

		if(N2309.read().faulty){
			for (int i=0; i<N2309.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2309.read().FAULTS[i]);
			}
		}

		if(N2387.read().faulty){
			for (int i=0; i<N2387.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2387.read().FAULTS[i]);
			}
		}

		if(N2527.read().faulty){
			for (int i=0; i<N2527.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2527.read().FAULTS[i]);
			}
		}

		if(N2584.read().faulty){
			for (int i=0; i<N2584.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2584.read().FAULTS[i]);
			}
		}

		if(N2590.read().faulty){
			for (int i=0; i<N2590.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2590.read().FAULTS[i]);
			}
		}

		if(N2623.read().faulty){
			for (int i=0; i<N2623.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2623.read().FAULTS[i]);
			}
		}

		if(N3357.read().faulty){
			for (int i=0; i<N3357.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3357.read().FAULTS[i]);
			}
		}

		if(N3358.read().faulty){
			for (int i=0; i<N3358.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3358.read().FAULTS[i]);
			}
		}

		if(N3359.read().faulty){
			for (int i=0; i<N3359.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3359.read().FAULTS[i]);
			}
		}

		if(N3360.read().faulty){
			for (int i=0; i<N3360.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3360.read().FAULTS[i]);
			}
		}

		if(N3604.read().faulty){
			for (int i=0; i<N3604.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3604.read().FAULTS[i]);
			}
		}

		if(N3613.read().faulty){
			for (int i=0; i<N3613.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3613.read().FAULTS[i]);
			}
		}

		if(N4272.read().faulty){
			for (int i=0; i<N4272.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4272.read().FAULTS[i]);
			}
		}

		if(N4275.read().faulty){
			for (int i=0; i<N4275.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4275.read().FAULTS[i]);
			}
		}

		if(N4278.read().faulty){
			for (int i=0; i<N4278.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4278.read().FAULTS[i]);
			}
		}

		if(N4279.read().faulty){
			for (int i=0; i<N4279.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4279.read().FAULTS[i]);
			}
		}

		if(N4737.read().faulty){
			for (int i=0; i<N4737.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4737.read().FAULTS[i]);
			}
		}

		if(N4738.read().faulty){
			for (int i=0; i<N4738.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4738.read().FAULTS[i]);
			}
		}

		if(N4739.read().faulty){
			for (int i=0; i<N4739.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4739.read().FAULTS[i]);
			}
		}

		if(N4740.read().faulty){
			for (int i=0; i<N4740.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N4740.read().FAULTS[i]);
			}
		}

		if(N5240.read().faulty){
			for (int i=0; i<N5240.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5240.read().FAULTS[i]);
			}
		}

		if(N5388.read().faulty){
			for (int i=0; i<N5388.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N5388.read().FAULTS[i]);
			}
		}

		if(N6641.read().faulty){
			for (int i=0; i<N6641.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6641.read().FAULTS[i]);
			}
		}

		if(N6643.read().faulty){
			for (int i=0; i<N6643.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6643.read().FAULTS[i]);
			}
		}

		if(N6646.read().faulty){
			for (int i=0; i<N6646.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6646.read().FAULTS[i]);
			}
		}

		if(N6648.read().faulty){
			for (int i=0; i<N6648.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6648.read().FAULTS[i]);
			}
		}

		if(N6716.read().faulty){
			for (int i=0; i<N6716.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6716.read().FAULTS[i]);
			}
		}

		if(N6877.read().faulty){
			for (int i=0; i<N6877.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6877.read().FAULTS[i]);
			}
		}

		if(N6924.read().faulty){
			for (int i=0; i<N6924.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6924.read().FAULTS[i]);
			}
		}

		if(N6925.read().faulty){
			for (int i=0; i<N6925.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6925.read().FAULTS[i]);
			}
		}

		if(N6926.read().faulty){
			for (int i=0; i<N6926.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6926.read().FAULTS[i]);
			}
		}

		if(N6927.read().faulty){
			for (int i=0; i<N6927.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N6927.read().FAULTS[i]);
			}
		}

		if(N7015.read().faulty){
			for (int i=0; i<N7015.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7015.read().FAULTS[i]);
			}
		}

		if(N709.read().faulty){
			for (int i=0; i<N709.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N709.read().FAULTS[i]);
			}
		}

		if(N7363.read().faulty){
			for (int i=0; i<N7363.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7363.read().FAULTS[i]);
			}
		}

		if(N7365.read().faulty){
			for (int i=0; i<N7365.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7365.read().FAULTS[i]);
			}
		}

		if(N7432.read().faulty){
			for (int i=0; i<N7432.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7432.read().FAULTS[i]);
			}
		}

		if(N7449.read().faulty){
			for (int i=0; i<N7449.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7449.read().FAULTS[i]);
			}
		}

		if(N7465.read().faulty){
			for (int i=0; i<N7465.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7465.read().FAULTS[i]);
			}
		}

		if(N7466.read().faulty){
			for (int i=0; i<N7466.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7466.read().FAULTS[i]);
			}
		}

		if(N7467.read().faulty){
			for (int i=0; i<N7467.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7467.read().FAULTS[i]);
			}
		}

		if(N7469.read().faulty){
			for (int i=0; i<N7469.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7469.read().FAULTS[i]);
			}
		}

		if(N7470.read().faulty){
			for (int i=0; i<N7470.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7470.read().FAULTS[i]);
			}
		}

		if(N7471.read().faulty){
			for (int i=0; i<N7471.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7471.read().FAULTS[i]);
			}
		}

		if(N7472.read().faulty){
			for (int i=0; i<N7472.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7472.read().FAULTS[i]);
			}
		}

		if(N7473.read().faulty){
			for (int i=0; i<N7473.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7473.read().FAULTS[i]);
			}
		}

		if(N7474.read().faulty){
			for (int i=0; i<N7474.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7474.read().FAULTS[i]);
			}
		}

		if(N7476.read().faulty){
			for (int i=0; i<N7476.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7476.read().FAULTS[i]);
			}
		}

		if(N7503.read().faulty){
			for (int i=0; i<N7503.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7503.read().FAULTS[i]);
			}
		}

		if(N7504.read().faulty){
			for (int i=0; i<N7504.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7504.read().FAULTS[i]);
			}
		}

		if(N7506.read().faulty){
			for (int i=0; i<N7506.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7506.read().FAULTS[i]);
			}
		}

		if(N7511.read().faulty){
			for (int i=0; i<N7511.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7511.read().FAULTS[i]);
			}
		}

		if(N7515.read().faulty){
			for (int i=0; i<N7515.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7515.read().FAULTS[i]);
			}
		}

		if(N7516.read().faulty){
			for (int i=0; i<N7516.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7516.read().FAULTS[i]);
			}
		}

		if(N7517.read().faulty){
			for (int i=0; i<N7517.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7517.read().FAULTS[i]);
			}
		}

		if(N7518.read().faulty){
			for (int i=0; i<N7518.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7518.read().FAULTS[i]);
			}
		}

		if(N7519.read().faulty){
			for (int i=0; i<N7519.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7519.read().FAULTS[i]);
			}
		}

		if(N7520.read().faulty){
			for (int i=0; i<N7520.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7520.read().FAULTS[i]);
			}
		}

		if(N7521.read().faulty){
			for (int i=0; i<N7521.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7521.read().FAULTS[i]);
			}
		}

		if(N7522.read().faulty){
			for (int i=0; i<N7522.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7522.read().FAULTS[i]);
			}
		}

		if(N7600.read().faulty){
			for (int i=0; i<N7600.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7600.read().FAULTS[i]);
			}
		}

		if(N7601.read().faulty){
			for (int i=0; i<N7601.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7601.read().FAULTS[i]);
			}
		}

		if(N7602.read().faulty){
			for (int i=0; i<N7602.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7602.read().FAULTS[i]);
			}
		}

		if(N7603.read().faulty){
			for (int i=0; i<N7603.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7603.read().FAULTS[i]);
			}
		}

		if(N7604.read().faulty){
			for (int i=0; i<N7604.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7604.read().FAULTS[i]);
			}
		}

		if(N7605.read().faulty){
			for (int i=0; i<N7605.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7605.read().FAULTS[i]);
			}
		}

		if(N7606.read().faulty){
			for (int i=0; i<N7606.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7606.read().FAULTS[i]);
			}
		}

		if(N7607.read().faulty){
			for (int i=0; i<N7607.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7607.read().FAULTS[i]);
			}
		}

		if(N7626.read().faulty){
			for (int i=0; i<N7626.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7626.read().FAULTS[i]);
			}
		}

		if(N7698.read().faulty){
			for (int i=0; i<N7698.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7698.read().FAULTS[i]);
			}
		}

		if(N7699.read().faulty){
			for (int i=0; i<N7699.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7699.read().FAULTS[i]);
			}
		}

		if(N7700.read().faulty){
			for (int i=0; i<N7700.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7700.read().FAULTS[i]);
			}
		}

		if(N7701.read().faulty){
			for (int i=0; i<N7701.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7701.read().FAULTS[i]);
			}
		}

		if(N7702.read().faulty){
			for (int i=0; i<N7702.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7702.read().FAULTS[i]);
			}
		}

		if(N7703.read().faulty){
			for (int i=0; i<N7703.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7703.read().FAULTS[i]);
			}
		}

		if(N7704.read().faulty){
			for (int i=0; i<N7704.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7704.read().FAULTS[i]);
			}
		}

		if(N7705.read().faulty){
			for (int i=0; i<N7705.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7705.read().FAULTS[i]);
			}
		}

		if(N7706.read().faulty){
			for (int i=0; i<N7706.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7706.read().FAULTS[i]);
			}
		}

		if(N7707.read().faulty){
			for (int i=0; i<N7707.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7707.read().FAULTS[i]);
			}
		}

		if(N7735.read().faulty){
			for (int i=0; i<N7735.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7735.read().FAULTS[i]);
			}
		}

		if(N7736.read().faulty){
			for (int i=0; i<N7736.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7736.read().FAULTS[i]);
			}
		}

		if(N7737.read().faulty){
			for (int i=0; i<N7737.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7737.read().FAULTS[i]);
			}
		}

		if(N7738.read().faulty){
			for (int i=0; i<N7738.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7738.read().FAULTS[i]);
			}
		}

		if(N7739.read().faulty){
			for (int i=0; i<N7739.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7739.read().FAULTS[i]);
			}
		}

		if(N7740.read().faulty){
			for (int i=0; i<N7740.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7740.read().FAULTS[i]);
			}
		}

		if(N7741.read().faulty){
			for (int i=0; i<N7741.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7741.read().FAULTS[i]);
			}
		}

		if(N7742.read().faulty){
			for (int i=0; i<N7742.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7742.read().FAULTS[i]);
			}
		}

		if(N7754.read().faulty){
			for (int i=0; i<N7754.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7754.read().FAULTS[i]);
			}
		}

		if(N7755.read().faulty){
			for (int i=0; i<N7755.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7755.read().FAULTS[i]);
			}
		}

		if(N7756.read().faulty){
			for (int i=0; i<N7756.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7756.read().FAULTS[i]);
			}
		}

		if(N7757.read().faulty){
			for (int i=0; i<N7757.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7757.read().FAULTS[i]);
			}
		}

		if(N7758.read().faulty){
			for (int i=0; i<N7758.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7758.read().FAULTS[i]);
			}
		}

		if(N7759.read().faulty){
			for (int i=0; i<N7759.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7759.read().FAULTS[i]);
			}
		}

		if(N7760.read().faulty){
			for (int i=0; i<N7760.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7760.read().FAULTS[i]);
			}
		}

		if(N7761.read().faulty){
			for (int i=0; i<N7761.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N7761.read().FAULTS[i]);
			}
		}

		if(N8075.read().faulty){
			for (int i=0; i<N8075.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N8075.read().FAULTS[i]);
			}
		}

		if(N8076.read().faulty){
			for (int i=0; i<N8076.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N8076.read().FAULTS[i]);
			}
		}

		if(N8123.read().faulty){
			for (int i=0; i<N8123.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N8123.read().FAULTS[i]);
			}
		}

		if(N8124.read().faulty){
			for (int i=0; i<N8124.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N8124.read().FAULTS[i]);
			}
		}

		if(N8127.read().faulty){
			for (int i=0; i<N8127.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N8127.read().FAULTS[i]);
			}
		}

		if(N8128.read().faulty){
			for (int i=0; i<N8128.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N8128.read().FAULTS[i]);
			}
		}

		if(N816.read().faulty){
			for (int i=0; i<N816.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N816.read().FAULTS[i]);
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
