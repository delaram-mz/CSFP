#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");

void c880_netlist::assignments()
{
	while (true)
	{
		N273.write(N390);
		N276.write(N447);
		N290.write(N388);
		N291.write(N389);
		N292.write(N390);
		N297.write(N391);
		N342.write(N418);
		N344.write(N419);
		N351.write(N420);
		N353.write(N421);
		N354.write(N422);
		N356.write(N423);
		N369.write(N268);
		N392.write(N446);
		N393.write(N447);
		N399.write(N447);
		N401.write(N448);
		N402.write(N449);
		N403.write(N450);
		N660.write(N767);
		N661.write(N768);
		N840.write(N850);
		N855.write(N863);
		N856.write(N864);
		N857.write(N865);
		N858.write(N866);
		N870.write(N874);
		N875.write(N878);
		N876.write(N879);
		N877.write(N880);
		_0231_.write(N201);
		_0351_.write(N51);
		_0584_.write(N26);
		_0672_.write(N1);
		N447.write(_0683_);
		_0690_.write(N156);
		_0697_.write(N59);
		_0244_.write(N42);
		_0255_.write(N17);
		_0327_.write(N75);
		_0362_.write(N8);
		_0431_.write(N126);
		_0457_.write(N153);
		_0489_.write(N80);
		_0515_.write(N29);
		_0544_.write(N55);
		_0564_.write(N268);
		_0676_.write(N261);
		_0677_.write(N219);
		_0678_.write(N237);
		_0679_.write(N13);
		_0680_.write(N72);
		_0681_.write(N68);
		_0682_.write(N73);
		_0684_.write(N255);
		_0685_.write(N267);
		_0686_.write(N210);
		_0687_.write(N121);
		_0688_.write(N246);
		_0689_.write(N228);
		N850.write(_0691_);
		_0692_.write(N183);
		_0693_.write(N111);
		_0694_.write(N143);
		_0702_.write(N189);
		_0705_.write(N146);
		_0709_.write(N116);
		_0234_.write(N195);
		_0237_.write(N149);
		_0258_.write(N106);
		N863.write(_0266_);
		_0275_.write(N259);
		N864.write(_0282_);
		_0289_.write(N260);
		N865.write(_0296_);
		_0298_.write(N159);
		_0301_.write(N91);
		_0312_.write(N138);
		_0319_.write(N165);
		_0322_.write(N96);
		_0332_.write(N171);
		_0335_.write(N101);
		_0345_.write(N177);
		_0349_.write(N152);
		N866.write(_0369_);
		N874.write(_0382_);
		N878.write(_0393_);
		N879.write(_0405_);
		N880.write(_0417_);
		_0419_.write(N36);
		N390.write(_0422_);
		N420.write(_0424_);
		N421.write(_0427_);
		N422.write(_0429_);
		N448.write(_0432_);
		_0435_.write(N74);
		N449.write(_0438_);
		_0443_.write(N130);
		_0449_.write(N135);
		N767.write(_0452_);
		_0462_.write(N207);
		N768.write(_0465_);
		N418.write(_0467_);
		N388.write(_0469_);
		N389.write(_0471_);
		_0473_.write(N86);
		_0475_.write(N85);
		N391.write(_0477_);
		N419.write(_0482_);
		_0484_.write(N89);
		_0487_.write(N88);
		_0490_.write(N87);
		N450.write(_0493_);
		_0495_.write(N90);
		N423.write(_0498_);
		N446.write(_0500_);

		wait();
	}
}

void c880_netlist::GIC_Coverage_Calculator()
{
	totalObservedCombs = 0;
	for ( int i=1; i< numOfGates+1; i++){
		totalObservedCombs += module_map[i]->numOfObservedCombs ;
	}
	cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	cout << "GIC Coverage = " << GIC_Coverage << "\n";

}

void c880_netlist::faultCollection()
{
	if (sc_time_stamp().to_double()>0 ){
		std::vector<std::vector<int>> RX_FAULTS;
		if(N388.read().faulty){
			for (int i=0; i<N388.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N388.read().FAULTS[i]);
			}
		}

		if(N389.read().faulty){
			for (int i=0; i<N389.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N389.read().FAULTS[i]);
			}
		}

		if(N390.read().faulty){
			for (int i=0; i<N390.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N390.read().FAULTS[i]);
			}
		}

		if(N391.read().faulty){
			for (int i=0; i<N391.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N391.read().FAULTS[i]);
			}
		}

		if(N418.read().faulty){
			for (int i=0; i<N418.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N418.read().FAULTS[i]);
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

		if(N421.read().faulty){
			for (int i=0; i<N421.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N421.read().FAULTS[i]);
			}
		}

		if(N422.read().faulty){
			for (int i=0; i<N422.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N422.read().FAULTS[i]);
			}
		}

		if(N423.read().faulty){
			for (int i=0; i<N423.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N423.read().FAULTS[i]);
			}
		}

		if(N446.read().faulty){
			for (int i=0; i<N446.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N446.read().FAULTS[i]);
			}
		}

		if(N447.read().faulty){
			for (int i=0; i<N447.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N447.read().FAULTS[i]);
			}
		}

		if(N448.read().faulty){
			for (int i=0; i<N448.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N448.read().FAULTS[i]);
			}
		}

		if(N449.read().faulty){
			for (int i=0; i<N449.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N449.read().FAULTS[i]);
			}
		}

		if(N450.read().faulty){
			for (int i=0; i<N450.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N450.read().FAULTS[i]);
			}
		}

		if(N767.read().faulty){
			for (int i=0; i<N767.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N767.read().FAULTS[i]);
			}
		}

		if(N768.read().faulty){
			for (int i=0; i<N768.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N768.read().FAULTS[i]);
			}
		}

		if(N850.read().faulty){
			for (int i=0; i<N850.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N850.read().FAULTS[i]);
			}
		}

		if(N863.read().faulty){
			for (int i=0; i<N863.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N863.read().FAULTS[i]);
			}
		}

		if(N864.read().faulty){
			for (int i=0; i<N864.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N864.read().FAULTS[i]);
			}
		}

		if(N865.read().faulty){
			for (int i=0; i<N865.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N865.read().FAULTS[i]);
			}
		}

		if(N866.read().faulty){
			for (int i=0; i<N866.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N866.read().FAULTS[i]);
			}
		}

		if(N874.read().faulty){
			for (int i=0; i<N874.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N874.read().FAULTS[i]);
			}
		}

		if(N878.read().faulty){
			for (int i=0; i<N878.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N878.read().FAULTS[i]);
			}
		}

		if(N879.read().faulty){
			for (int i=0; i<N879.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N879.read().FAULTS[i]);
			}
		}

		if(N880.read().faulty){
			for (int i=0; i<N880.read().FAULTS.size(); i++){
				RX_FAULTS.push_back(N880.read().FAULTS[i]);
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
		cout << "  Coverage untill now = " << tot_det/927.0<<endl;	
	}
}
