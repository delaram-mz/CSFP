#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");

void c2670_netlist::assignments()
{
	while (true)
	{
		N1034.write(N1277);
		N1591.write(N1726);
		N1612.write(N2010);
		N1615.write(N2012);
		N1619.write(N2014);
		N1624.write(N2016);
		N1628.write(N2018);
		N1631.write(N2020);
		N1634.write(N2022);
		N1848.write(N2010);
		N1852.write(N2012);
		N1856.write(N2014);
		N1863.write(N2016);
		N1870.write(N2018);
		N1875.write(N2020);
		N1880.write(N2022);
		N1897.write(N1816);
		N2135.write(N1821);
		N2141.write(N1819);
		N2175.write(N1818);
		N2194.write(N1820);
		N2234.write(N1817);
		N2235.write(N1816);
		N2266.write(N2387);
		N2269.write(N2389);
		N2367.write(N2014);
		N2437.write(N1821);
		N2443.write(N1819);
		N2460.write(N1819);
		N2475.write(N1821);
		N2481.write(N1821);
		N2521.write(N2643);
		N2617.write(N2010);
		N2620.write(N2012);
		N2628.write(N2010);
		N2630.write(N2010);
		N2645.write(N2012);
		N2655.write(N2010);
		N2656.write(N2012);
		N2695.write(N2018);
		N2696.write(N2016);
		N2697.write(N2022);
		N2698.write(N2020);
		N2699.write(N2018);
		N2700.write(N2016);
		N2701.write(N2022);
		N2702.write(N2020);
		N2817.write(N2925);
		N2931.write(N3038);
		N3600.write(N3671);
		N3780.write(N3803);
		N3790.write(N3809);
		N3840.write(N3851);
		N3843.write(N3851);
		N3877.write(N3881);

		wait();
	}
}

void c2670_netlist::GIC_Coverage_Calculator()
{
	totalObservedCombs = 0;
	for ( int i=1; i< numOfGates+1; i++){
		totalObservedCombs += module_map[i]->numOfObservedCombs ;
	}
	cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	cout << "GIC Coverage = " << GIC_Coverage << "\n";

}

void c2670_netlist::faultCollection()
{
	if (sc_time_stamp().to_double()>0 ){
		std::vector<std::vector<int>> RX_FAULTS;
		if(N1026.read().faulty){
			for (int i=0; i<N1026.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1026.read().FAULTS[i]);
			}
		}

		if(N1028.read().faulty){
			for (int i=0; i<N1028.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1028.read().FAULTS[i]);
			}
		}

		if(N1029.read().faulty){
			for (int i=0; i<N1029.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1029.read().FAULTS[i]);
			}
		}

		if(N1269.read().faulty){
			for (int i=0; i<N1269.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1269.read().FAULTS[i]);
			}
		}

		if(N1277.read().faulty){
			for (int i=0; i<N1277.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1277.read().FAULTS[i]);
			}
		}

		if(N143_O.read().faulty){
			for (int i=0; i<N143_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N143_O.read().FAULTS[i]);
			}
		}

		if(N1448.read().faulty){
			for (int i=0; i<N1448.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1448.read().FAULTS[i]);
			}
		}

		if(N144_O.read().faulty){
			for (int i=0; i<N144_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N144_O.read().FAULTS[i]);
			}
		}

		if(N145_O.read().faulty){
			for (int i=0; i<N145_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N145_O.read().FAULTS[i]);
			}
		}

		if(N146_O.read().faulty){
			for (int i=0; i<N146_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N146_O.read().FAULTS[i]);
			}
		}

		if(N147_O.read().faulty){
			for (int i=0; i<N147_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N147_O.read().FAULTS[i]);
			}
		}

		if(N148_O.read().faulty){
			for (int i=0; i<N148_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N148_O.read().FAULTS[i]);
			}
		}

		if(N149_O.read().faulty){
			for (int i=0; i<N149_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N149_O.read().FAULTS[i]);
			}
		}

		if(N150_O.read().faulty){
			for (int i=0; i<N150_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N150_O.read().FAULTS[i]);
			}
		}

		if(N151_O.read().faulty){
			for (int i=0; i<N151_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N151_O.read().FAULTS[i]);
			}
		}

		if(N152_O.read().faulty){
			for (int i=0; i<N152_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N152_O.read().FAULTS[i]);
			}
		}

		if(N153_O.read().faulty){
			for (int i=0; i<N153_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N153_O.read().FAULTS[i]);
			}
		}

		if(N154_O.read().faulty){
			for (int i=0; i<N154_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N154_O.read().FAULTS[i]);
			}
		}

		if(N155_O.read().faulty){
			for (int i=0; i<N155_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N155_O.read().FAULTS[i]);
			}
		}

		if(N156_O.read().faulty){
			for (int i=0; i<N156_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N156_O.read().FAULTS[i]);
			}
		}

		if(N157_O.read().faulty){
			for (int i=0; i<N157_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N157_O.read().FAULTS[i]);
			}
		}

		if(N158_O.read().faulty){
			for (int i=0; i<N158_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N158_O.read().FAULTS[i]);
			}
		}

		if(N159_O.read().faulty){
			for (int i=0; i<N159_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N159_O.read().FAULTS[i]);
			}
		}

		if(N160_O.read().faulty){
			for (int i=0; i<N160_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N160_O.read().FAULTS[i]);
			}
		}

		if(N161_O.read().faulty){
			for (int i=0; i<N161_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N161_O.read().FAULTS[i]);
			}
		}

		if(N162_O.read().faulty){
			for (int i=0; i<N162_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N162_O.read().FAULTS[i]);
			}
		}

		if(N163_O.read().faulty){
			for (int i=0; i<N163_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N163_O.read().FAULTS[i]);
			}
		}

		if(N164_O.read().faulty){
			for (int i=0; i<N164_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N164_O.read().FAULTS[i]);
			}
		}

		if(N165_O.read().faulty){
			for (int i=0; i<N165_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N165_O.read().FAULTS[i]);
			}
		}

		if(N166_O.read().faulty){
			for (int i=0; i<N166_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N166_O.read().FAULTS[i]);
			}
		}

		if(N167_O.read().faulty){
			for (int i=0; i<N167_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N167_O.read().FAULTS[i]);
			}
		}

		if(N168_O.read().faulty){
			for (int i=0; i<N168_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N168_O.read().FAULTS[i]);
			}
		}

		if(N169_O.read().faulty){
			for (int i=0; i<N169_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N169_O.read().FAULTS[i]);
			}
		}

		if(N170_O.read().faulty){
			for (int i=0; i<N170_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N170_O.read().FAULTS[i]);
			}
		}

		if(N171_O.read().faulty){
			for (int i=0; i<N171_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N171_O.read().FAULTS[i]);
			}
		}

		if(N1726.read().faulty){
			for (int i=0; i<N1726.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1726.read().FAULTS[i]);
			}
		}

		if(N172_O.read().faulty){
			for (int i=0; i<N172_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N172_O.read().FAULTS[i]);
			}
		}

		if(N173_O.read().faulty){
			for (int i=0; i<N173_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N173_O.read().FAULTS[i]);
			}
		}

		if(N174_O.read().faulty){
			for (int i=0; i<N174_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N174_O.read().FAULTS[i]);
			}
		}

		if(N175_O.read().faulty){
			for (int i=0; i<N175_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N175_O.read().FAULTS[i]);
			}
		}

		if(N176_O.read().faulty){
			for (int i=0; i<N176_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N176_O.read().FAULTS[i]);
			}
		}

		if(N177_O.read().faulty){
			for (int i=0; i<N177_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N177_O.read().FAULTS[i]);
			}
		}

		if(N178_O.read().faulty){
			for (int i=0; i<N178_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N178_O.read().FAULTS[i]);
			}
		}

		if(N179_O.read().faulty){
			for (int i=0; i<N179_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N179_O.read().FAULTS[i]);
			}
		}

		if(N180_O.read().faulty){
			for (int i=0; i<N180_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N180_O.read().FAULTS[i]);
			}
		}

		if(N1816.read().faulty){
			for (int i=0; i<N1816.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1816.read().FAULTS[i]);
			}
		}

		if(N1817.read().faulty){
			for (int i=0; i<N1817.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1817.read().FAULTS[i]);
			}
		}

		if(N1818.read().faulty){
			for (int i=0; i<N1818.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1818.read().FAULTS[i]);
			}
		}

		if(N1819.read().faulty){
			for (int i=0; i<N1819.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1819.read().FAULTS[i]);
			}
		}

		if(N181_O.read().faulty){
			for (int i=0; i<N181_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N181_O.read().FAULTS[i]);
			}
		}

		if(N1820.read().faulty){
			for (int i=0; i<N1820.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1820.read().FAULTS[i]);
			}
		}

		if(N1821.read().faulty){
			for (int i=0; i<N1821.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1821.read().FAULTS[i]);
			}
		}

		if(N182_O.read().faulty){
			for (int i=0; i<N182_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N182_O.read().FAULTS[i]);
			}
		}

		if(N183_O.read().faulty){
			for (int i=0; i<N183_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N183_O.read().FAULTS[i]);
			}
		}

		if(N184_O.read().faulty){
			for (int i=0; i<N184_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N184_O.read().FAULTS[i]);
			}
		}

		if(N185_O.read().faulty){
			for (int i=0; i<N185_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N185_O.read().FAULTS[i]);
			}
		}

		if(N186_O.read().faulty){
			for (int i=0; i<N186_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N186_O.read().FAULTS[i]);
			}
		}

		if(N187_O.read().faulty){
			for (int i=0; i<N187_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N187_O.read().FAULTS[i]);
			}
		}

		if(N188_O.read().faulty){
			for (int i=0; i<N188_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N188_O.read().FAULTS[i]);
			}
		}

		if(N189_O.read().faulty){
			for (int i=0; i<N189_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N189_O.read().FAULTS[i]);
			}
		}

		if(N190_O.read().faulty){
			for (int i=0; i<N190_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N190_O.read().FAULTS[i]);
			}
		}

		if(N191_O.read().faulty){
			for (int i=0; i<N191_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N191_O.read().FAULTS[i]);
			}
		}

		if(N192_O.read().faulty){
			for (int i=0; i<N192_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N192_O.read().FAULTS[i]);
			}
		}

		if(N193_O.read().faulty){
			for (int i=0; i<N193_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N193_O.read().FAULTS[i]);
			}
		}

		if(N194_O.read().faulty){
			for (int i=0; i<N194_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N194_O.read().FAULTS[i]);
			}
		}

		if(N195_O.read().faulty){
			for (int i=0; i<N195_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N195_O.read().FAULTS[i]);
			}
		}

		if(N1969.read().faulty){
			for (int i=0; i<N1969.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1969.read().FAULTS[i]);
			}
		}

		if(N196_O.read().faulty){
			for (int i=0; i<N196_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N196_O.read().FAULTS[i]);
			}
		}

		if(N1970.read().faulty){
			for (int i=0; i<N1970.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1970.read().FAULTS[i]);
			}
		}

		if(N1971.read().faulty){
			for (int i=0; i<N1971.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N1971.read().FAULTS[i]);
			}
		}

		if(N197_O.read().faulty){
			for (int i=0; i<N197_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N197_O.read().FAULTS[i]);
			}
		}

		if(N198_O.read().faulty){
			for (int i=0; i<N198_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N198_O.read().FAULTS[i]);
			}
		}

		if(N199_O.read().faulty){
			for (int i=0; i<N199_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N199_O.read().FAULTS[i]);
			}
		}

		if(N200_O.read().faulty){
			for (int i=0; i<N200_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N200_O.read().FAULTS[i]);
			}
		}

		if(N2010.read().faulty){
			for (int i=0; i<N2010.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2010.read().FAULTS[i]);
			}
		}

		if(N2012.read().faulty){
			for (int i=0; i<N2012.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2012.read().FAULTS[i]);
			}
		}

		if(N2014.read().faulty){
			for (int i=0; i<N2014.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2014.read().FAULTS[i]);
			}
		}

		if(N2016.read().faulty){
			for (int i=0; i<N2016.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2016.read().FAULTS[i]);
			}
		}

		if(N2018.read().faulty){
			for (int i=0; i<N2018.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2018.read().FAULTS[i]);
			}
		}

		if(N201_O.read().faulty){
			for (int i=0; i<N201_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N201_O.read().FAULTS[i]);
			}
		}

		if(N2020.read().faulty){
			for (int i=0; i<N2020.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2020.read().FAULTS[i]);
			}
		}

		if(N2022.read().faulty){
			for (int i=0; i<N2022.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2022.read().FAULTS[i]);
			}
		}

		if(N202_O.read().faulty){
			for (int i=0; i<N202_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N202_O.read().FAULTS[i]);
			}
		}

		if(N203_O.read().faulty){
			for (int i=0; i<N203_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N203_O.read().FAULTS[i]);
			}
		}

		if(N204_O.read().faulty){
			for (int i=0; i<N204_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N204_O.read().FAULTS[i]);
			}
		}

		if(N205_O.read().faulty){
			for (int i=0; i<N205_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N205_O.read().FAULTS[i]);
			}
		}

		if(N206_O.read().faulty){
			for (int i=0; i<N206_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N206_O.read().FAULTS[i]);
			}
		}

		if(N207_O.read().faulty){
			for (int i=0; i<N207_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N207_O.read().FAULTS[i]);
			}
		}

		if(N208_O.read().faulty){
			for (int i=0; i<N208_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N208_O.read().FAULTS[i]);
			}
		}

		if(N209_O.read().faulty){
			for (int i=0; i<N209_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N209_O.read().FAULTS[i]);
			}
		}

		if(N210_O.read().faulty){
			for (int i=0; i<N210_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N210_O.read().FAULTS[i]);
			}
		}

		if(N211_O.read().faulty){
			for (int i=0; i<N211_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N211_O.read().FAULTS[i]);
			}
		}

		if(N212_O.read().faulty){
			for (int i=0; i<N212_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N212_O.read().FAULTS[i]);
			}
		}

		if(N213_O.read().faulty){
			for (int i=0; i<N213_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N213_O.read().FAULTS[i]);
			}
		}

		if(N214_O.read().faulty){
			for (int i=0; i<N214_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N214_O.read().FAULTS[i]);
			}
		}

		if(N215_O.read().faulty){
			for (int i=0; i<N215_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N215_O.read().FAULTS[i]);
			}
		}

		if(N216_O.read().faulty){
			for (int i=0; i<N216_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N216_O.read().FAULTS[i]);
			}
		}

		if(N217_O.read().faulty){
			for (int i=0; i<N217_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N217_O.read().FAULTS[i]);
			}
		}

		if(N218_O.read().faulty){
			for (int i=0; i<N218_O.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N218_O.read().FAULTS[i]);
			}
		}

		if(N2387.read().faulty){
			for (int i=0; i<N2387.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2387.read().FAULTS[i]);
			}
		}

		if(N2388.read().faulty){
			for (int i=0; i<N2388.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2388.read().FAULTS[i]);
			}
		}

		if(N2389.read().faulty){
			for (int i=0; i<N2389.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2389.read().FAULTS[i]);
			}
		}

		if(N2390.read().faulty){
			for (int i=0; i<N2390.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2390.read().FAULTS[i]);
			}
		}

		if(N2496.read().faulty){
			for (int i=0; i<N2496.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2496.read().FAULTS[i]);
			}
		}

		if(N2643.read().faulty){
			for (int i=0; i<N2643.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2643.read().FAULTS[i]);
			}
		}

		if(N2644.read().faulty){
			for (int i=0; i<N2644.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2644.read().FAULTS[i]);
			}
		}

		if(N2891.read().faulty){
			for (int i=0; i<N2891.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2891.read().FAULTS[i]);
			}
		}

		if(N2925.read().faulty){
			for (int i=0; i<N2925.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2925.read().FAULTS[i]);
			}
		}

		if(N2970.read().faulty){
			for (int i=0; i<N2970.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2970.read().FAULTS[i]);
			}
		}

		if(N2971.read().faulty){
			for (int i=0; i<N2971.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N2971.read().FAULTS[i]);
			}
		}

		if(N3038.read().faulty){
			for (int i=0; i<N3038.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3038.read().FAULTS[i]);
			}
		}

		if(N3079.read().faulty){
			for (int i=0; i<N3079.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3079.read().FAULTS[i]);
			}
		}

		if(N3546.read().faulty){
			for (int i=0; i<N3546.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3546.read().FAULTS[i]);
			}
		}

		if(N3671.read().faulty){
			for (int i=0; i<N3671.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3671.read().FAULTS[i]);
			}
		}

		if(N3803.read().faulty){
			for (int i=0; i<N3803.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3803.read().FAULTS[i]);
			}
		}

		if(N3804.read().faulty){
			for (int i=0; i<N3804.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3804.read().FAULTS[i]);
			}
		}

		if(N3809.read().faulty){
			for (int i=0; i<N3809.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3809.read().FAULTS[i]);
			}
		}

		if(N3851.read().faulty){
			for (int i=0; i<N3851.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3851.read().FAULTS[i]);
			}
		}

		if(N3875.read().faulty){
			for (int i=0; i<N3875.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3875.read().FAULTS[i]);
			}
		}

		if(N3881.read().faulty){
			for (int i=0; i<N3881.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3881.read().FAULTS[i]);
			}
		}

		if(N3882.read().faulty){
			for (int i=0; i<N3882.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N3882.read().FAULTS[i]);
			}
		}

		if(N398.read().faulty){
			for (int i=0; i<N398.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N398.read().FAULTS[i]);
			}
		}

		if(N400.read().faulty){
			for (int i=0; i<N400.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N400.read().FAULTS[i]);
			}
		}

		if(N401.read().faulty){
			for (int i=0; i<N401.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N401.read().FAULTS[i]);
			}
		}

		if(N419.read().faulty){
			for (int i=0; i<N419.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N419.read().FAULTS[i]);
			}
		}

		if(N420.read().faulty){
			for (int i=0; i<N420.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N420.read().FAULTS[i]);
			}
		}

		if(N456.read().faulty){
			for (int i=0; i<N456.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N456.read().FAULTS[i]);
			}
		}

		if(N457.read().faulty){
			for (int i=0; i<N457.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N457.read().FAULTS[i]);
			}
		}

		if(N458.read().faulty){
			for (int i=0; i<N458.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N458.read().FAULTS[i]);
			}
		}

		if(N487.read().faulty){
			for (int i=0; i<N487.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N487.read().FAULTS[i]);
			}
		}

		if(N488.read().faulty){
			for (int i=0; i<N488.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N488.read().FAULTS[i]);
			}
		}

		if(N489.read().faulty){
			for (int i=0; i<N489.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N489.read().FAULTS[i]);
			}
		}

		if(N490.read().faulty){
			for (int i=0; i<N490.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N490.read().FAULTS[i]);
			}
		}

		if(N491.read().faulty){
			for (int i=0; i<N491.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N491.read().FAULTS[i]);
			}
		}

		if(N492.read().faulty){
			for (int i=0; i<N492.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N492.read().FAULTS[i]);
			}
		}

		if(N493.read().faulty){
			for (int i=0; i<N493.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N493.read().FAULTS[i]);
			}
		}

		if(N494.read().faulty){
			for (int i=0; i<N494.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N494.read().FAULTS[i]);
			}
		}

		if(N792.read().faulty){
			for (int i=0; i<N792.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N792.read().FAULTS[i]);
			}
		}

		if(N799.read().faulty){
			for (int i=0; i<N799.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N799.read().FAULTS[i]);
			}
		}

		if(N805.read().faulty){
			for (int i=0; i<N805.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N805.read().FAULTS[i]);
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
