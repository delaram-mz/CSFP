#include "NAND2_X1.h"
#include <set>
#include <algorithm>
#include <vector>
#include <unordered_set>


void NAND2_X1::FP(void){
	while (true)
	{
		if (sc_time_stamp().to_double() == 0)
		{
			// // initializing the observedComb vector at time 0
			// observedCombs[0] = "XX";
			// observedCombs[1] = "XX";
			// observedCombs[2] = "XX";
			// observedCombs[3] = "XX";
		}
		else if ((sc_time_stamp().to_double() > 0 ))
		{
			
			curr_lv[0] = A1->read().logicVal;
			curr_lv[1] = A2->read().logicVal;
            A1F = A1->read().faulty;
            A2F = A2->read().faulty;
			// checking for reconvergant FO 
			A1_FAULTS=A1.read().FAULTS;
			A2_FAULTS=A2.read().FAULTS;
			std::vector<std::vector<int>> input_temp_FAULTS;

			// Convert vectors to sets
			std::vector<std::vector<int>> tempBr_A1;
			std::vector<std::vector<int>> tempBr_A2;
			tempBr_A1.insert(tempBr_A1.end(), A1_FAULTS.begin(), A1_FAULTS.end());
			tempBr_A1.insert(tempBr_A1.end(), A1_branch_FAULTS.begin(), A1_branch_FAULTS.end());
			std::sort(tempBr_A1.begin(), tempBr_A1.end());
			tempBr_A1.erase(std::unique(tempBr_A1.begin(), tempBr_A1.end()), tempBr_A1.end());


			tempBr_A2.insert(tempBr_A2.end(), A2_FAULTS.begin(), A2_FAULTS.end());
			tempBr_A2.insert(tempBr_A2.end(), A2_branch_FAULTS.begin(), A2_branch_FAULTS.end());
			std::sort(tempBr_A2.begin(), tempBr_A2.end());
			tempBr_A2.erase(std::unique(tempBr_A2.begin(), tempBr_A2.end()), tempBr_A2.end());


			std::set<std::vector<int>> set1(tempBr_A1.begin(), tempBr_A1.end());
			std::set<std::vector<int>> set2(tempBr_A2.begin(), tempBr_A2.end());


			// Find common elements
			std::vector<std::vector<int>> common_elements;
			std::set_intersection(set1.begin(), set1.end(), set2.begin(), set2.end(), std::back_inserter(common_elements));

			std::unordered_set<std::string> comm_set;
			for (const auto& vec : common_elements) {
				comm_set.insert(std::to_string(vec[0]) + "," + std::to_string(vec[1]));
			}
				

			// if (curr_lv != prev_lv) 
			// {
			// 	if (std::find(observedCombs.begin(), observedCombs.end(), curr_lv) == observedCombs.end()) 
			// 	{
			// 		for (int i=0; i<4; i++)
			// 		{
			// 			if(observedCombs[i] == "XX")
			// 			{
			// 				observedCombs[i] = curr_lv;
			// 				numOfObservedCombs +=1;
			// 				break;
			// 			}
			// 		}
			// 	}
			// }


			if(A1F){ //checking to propagate A1 fault
				if (curr_lv == "11" || curr_lv == "10" ){
					input_temp_FAULTS.insert(input_temp_FAULTS.end(), A1_FAULTS.begin(), A1_FAULTS.end());
				}
			}
			if(A2F){ //checking to propagate A2 fault
				if (curr_lv == "11" || curr_lv == "01" ){
					input_temp_FAULTS.insert(input_temp_FAULTS.end(), A2_FAULTS.begin(), A2_FAULTS.end());
				}
			}// either both events are masked or there was no incoming faulty signal
					
			ZN_temp_id = id;
			while (!ZN_temp_FAULTS.empty()) {
				//erase the ones propagated with previous TV
				ZN_temp_FAULTS.erase(ZN_temp_FAULTS.begin());
			}

			
			switch(curr_lv.to_uint())
			{
				case 0:
					if(faults[5]==1)//ZN@0 --> Activated :  Norm=1, faulty=0; Propagation
					{
						temp ={id,5};
						ZN_temp_FAULTS.push_back(temp);
					}
					// //reconvergent
					ZN_temp_FAULTS.insert(ZN_temp_FAULTS.end(), common_elements.begin(), common_elements.end());
				break;
			//-----------------------------------------------------------------------------------------

				case 1:	
					if(faults[0]==1)//A2@1 --> Activated :  Norm=1, faulty=0; Propagation
					{
						temp ={id,0};
						ZN_temp_FAULTS.push_back(temp);
						
					}
					if(faults[5]==1)//ZN@0 --> Activated :  Norm=1, faulty=0; Propagation
					{
						temp ={id,5};
						ZN_temp_FAULTS.push_back(temp);
					}
					if (A2_branch_FAULTS.size()!=0){
						for(std::vector<std::vector<int> >::size_type k=0; k<A2_branch_FAULTS.size(); k++){
							if((A2_branch_FAULTS[k][1]==0) || (A2_branch_FAULTS[k][1]==2))
								ZN_temp_FAULTS.push_back(A2_branch_FAULTS[k]);
						}
					}

					// remove reconvergent
					// Remove elements from input that are in the set
					input_temp_FAULTS.erase(
						std::remove_if(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), [&](const std::vector<int>& elem) {
							std::string key = std::to_string(elem[0]) + "," + std::to_string(elem[1]);
							return comm_set.find(key) != comm_set.end();
						}),
						input_temp_FAULTS.end()
					);

					ZN_temp_FAULTS.erase(
						std::remove_if(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end(), [&](const std::vector<int>& elem) {
							std::string key = std::to_string(elem[0]) + "," + std::to_string(elem[1]);
							return comm_set.find(key) != comm_set.end();
						}),
						ZN_temp_FAULTS.end()
					);

					for (std::vector<std::vector<int> >::size_type j = 0; j < A1_FAULTS.size(); j++){
						if((A1_FAULTS[j][0] == id) && (A1_FAULTS[j][1] == 0)){ //B@1
							ZN_temp_FAULTS.erase(std::remove(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end(), A1_FAULTS[j]), ZN_temp_FAULTS.end());
						}
					}
				break;
			//-----------------------------------------------------------------------------------------


				case 2:
					if(faults[2]==1)//A1@1 --> Activated :  Norm=1, faulty=0; Propagation
					{
						temp ={id,2};
						ZN_temp_FAULTS.push_back(temp);
							if( std::find(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), temp) != input_temp_FAULTS.end()){
								// input_temp_FAULTS.erase(std::remove(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), common_elements[t]), input_temp_FAULTS.end());
								// cout << "ERASE!!\n";
							}
					}
					if(faults[5]==1)//ZN@0 --> Activated :  Norm=1, faulty=0; Propagation
					{
						temp ={id,5};
						ZN_temp_FAULTS.push_back(temp);
					}
					if (A1_branch_FAULTS.size()!=0){
						for(std::vector<std::vector<int> >::size_type  k=0; k<A1_branch_FAULTS.size(); k++){
							if((A1_branch_FAULTS[k][1]==2) || (A1_branch_FAULTS[k][1]==0))
								ZN_temp_FAULTS.push_back(A1_branch_FAULTS[k]);
						}
					}


					// remove reconvergent	
					input_temp_FAULTS.erase(
						std::remove_if(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), [&](const std::vector<int>& elem) {
							std::string key = std::to_string(elem[0]) + "," + std::to_string(elem[1]);
							return comm_set.find(key) != comm_set.end();
						}),
						input_temp_FAULTS.end()
					);

					ZN_temp_FAULTS.erase(
						std::remove_if(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end(), [&](const std::vector<int>& elem) {
							std::string key = std::to_string(elem[0]) + "," + std::to_string(elem[1]);
							return comm_set.find(key) != comm_set.end();
						}),
						ZN_temp_FAULTS.end()
					);

					for (std::vector<std::vector<int> >::size_type j = 0; j < A2_FAULTS.size(); j++){
						if((A2_FAULTS[j][0] == id) && (A2_FAULTS[j][1] == 2)){ //A@1
							ZN_temp_FAULTS.erase(std::remove(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end(), A2_FAULTS[j]), ZN_temp_FAULTS.end());
						}
					}
				break;
			//-----------------------------------------------------------------------------------------

				case 3:
					if(faults[3]==1)//A1@0 --> Activated :  Norm=0, faulty=1; Propagation
					{
						temp ={id,3};
						ZN_temp_FAULTS.push_back(temp);
						
					}
					if (A1_branch_FAULTS.size()!=0){
						for(std::vector<std::vector<int> >::size_type k=0; k<A1_branch_FAULTS.size(); k++){
							if((A1_branch_FAULTS[k][1]==3) || (A1_branch_FAULTS[k][1]==1))
								ZN_temp_FAULTS.push_back(A1_branch_FAULTS[k]);
						}
					}
					if(faults[1]==1)//A2@0 -- Activated :  Norm=0, faulty=1; Propagation
					{
						temp ={id,1};
						ZN_temp_FAULTS.push_back(temp);
					}
					if (A2_branch_FAULTS.size()!=0){
						for(std::vector<std::vector<int> >::size_type k=0; k<A2_branch_FAULTS.size(); k++){
							if((A2_branch_FAULTS[k][1]==1) || (A2_branch_FAULTS[k][1]==3))
								ZN_temp_FAULTS.push_back(A2_branch_FAULTS[k]);
						}
					}

					if(faults[4]==1)//ZN@1 --> Activated :  Norm=1, faulty=0; Propagation
					{
						temp ={id,4};
						ZN_temp_FAULTS.push_back(temp);
					}
				break;
			}

		

			

			ZN_temp_FAULTS.insert(ZN_temp_FAULTS.end(), input_temp_FAULTS.begin(), input_temp_FAULTS.end());
			
			std::sort(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end());
			ZN_temp_FAULTS.erase(std::unique(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end()), ZN_temp_FAULTS.end());

			if(ZN_temp_FAULTS.size() > 0){
				ZN_temp_faulty = true;}
			else{
				ZN_temp_faulty = false;
			}
		}

		prev_lv = curr_lv;
		if(NbarT){
			if((A1.read().logicVal == SC_LOGIC_1) && (A2.read().logicVal == SC_LOGIC_1))
				ZN->write({SC_LOGIC_0, ZN_temp_faulty, ZN_temp_FAULTS});
			else
				ZN->write({SC_LOGIC_1, ZN_temp_faulty, ZN_temp_FAULTS});
		}
		else{
			if((A1.read().logicVal == SC_LOGIC_1) && (A2.read().logicVal == SC_LOGIC_1))
				ZN->write({SC_LOGIC_0, false, {}});
			else
				ZN->write({SC_LOGIC_1, false, {}});
		}


		wait();
	};
}

void NAND2_X1::Detected(void){
		
	while(true){	
		wait(fault_Detected);
		faults[faultIdx] = 0; 
		wait();
	}
};


