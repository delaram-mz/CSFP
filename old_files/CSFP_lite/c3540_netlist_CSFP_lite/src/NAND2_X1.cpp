#include "NAND2_X1.h"
#include <set>
#include <algorithm>

// Initialize the static counter (define it outside the class)
sc_uint<32> NAND2_X1::counter = 0;
sc_uint<32> NAND2_X1::get_next_id() 
{
    return counter++;
}


void NAND2_X1::FP(void){
	while (true)
	{
		if (sc_time_stamp().to_double() == 0)
		{
			// initializing the observedComb vector at time 0
			observedCombs[0] = "XX";
			observedCombs[1] = "XX";
			observedCombs[2] = "XX";
			observedCombs[3] = "XX";
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

			// cout << "Commons ... "<<id<<"\n";
			// for (int j = 0; j < common_elements.size(); j++){
			// 	if(common_elements[j][0] == 240){
			// 	cout <<"Reconvergence: "<< common_elements[j][0] << ",  "<<common_elements[j][1]<<endl;
			// 	}
			// }


			// cout << "INCOMING ... "<<id<<"\n";
			// for (int j = 0; j < A1_FAULTS.size(); j++){
			// 	if(A1_FAULTS[j][0] == 240){
			// 		cout <<"Fault on A1: "<< A1_FAULTS[j][0] << ",  "<<A1_FAULTS[j][1]<<endl;
			// 	}
			// }

			// for (int j = 0; j < A2_FAULTS.size(); j++){
			// 	if(A2_FAULTS[j][0] == 240){
			// 		cout <<"Fault on A2: "<< A2_FAULTS[j][0] << ",  "<<A2_FAULTS[j][1]<<endl;
			// 	}
			// }
				

			if (curr_lv != prev_lv) 
			{
				if (std::find(observedCombs.begin(), observedCombs.end(), curr_lv) == observedCombs.end()) 
				{
					for (int i=0; i<4; i++)
					{
						if(observedCombs[i] == "XX")
						{
							observedCombs[i] = curr_lv;
							numOfObservedCombs +=1;
							break;
						}
					}
				}
			}

			// cout << "****************************** Gate : "<<id<< " of type NAND ******************************\n";
			// cout << "\n====> gate num: "<< id << " reporting a toggle at:" << sc_time_stamp().to_double() <<"\n";
			// cout << "faults : " << faults << endl;
			// cout << "A1F : " << A1->read().faulty<<endl;
			// cout << "A2F : " << A2->read().faulty<<endl;
			// if(A1F || A2F){
			// cout << "^^^^^^^^^^ CHECKEING for RECONVERGENT FANOUTS!!"<<endl;
			// 	for (int p=0; p<A1_FAULTS.size(); p++){
			// 		cout <<"^^^^^ A1 Fault ["<<p<<"] : "<<A1_FAULTS[p][1]<<",  "<<A1_FAULTS[p][0]<<endl; 
			// 	}
			// 	for (int p=0; p<A2_FAULTS.size(); p++){
			// 		cout <<"^^^^^ A2 Fault ["<<p<<"] : "<<A2_FAULTS[p][1]<<",  "<<A2_FAULTS[p][0]<<endl; 
			// 	}
			// }

			if(A1F){ //checking to propagate A1 fault
				if(A1.read().logicVal == SC_LOGIC_1) //faultied : 0
				{
					if(A2.read().logicVal == SC_LOGIC_1)//fault propagates
					{
						// ZN_temp_lv = SC_LOGIC_0;
						A1_O_masked = false;
						input_temp_FAULTS.insert(input_temp_FAULTS.end(), A1_FAULTS.begin(), A1_FAULTS.end());
					}
					else{ // faults is blocked
						// ZN_temp_lv = SC_LOGIC_1;
						A1_O_masked = true;
					}
				}
				else if (A1.read().logicVal == SC_LOGIC_0) //faultied : 1 
				{
					if(A2.read().logicVal == SC_LOGIC_1)//fault propagates
					{
						// cout<<"Propagate A1 input fault\n";
						// ZN_temp_lv = SC_LOGIC_1;
						A1_O_masked = false;
						input_temp_FAULTS.insert(input_temp_FAULTS.end(), A1_FAULTS.begin(), A1_FAULTS.end());
					}
					else{ // faults is blocked 
						// cout<<"A1 fault is blocked\n";
						// ZN_temp_lv = SC_LOGIC_1;
						A1_O_masked = true;
					}
				}
			}
			if(A2F){ //checking to propagate A2 fault
				// cout<<"A2 faulty input\n";
				if(A2.read().logicVal == SC_LOGIC_1) //faultied : 0
				{
					if(A1.read().logicVal == SC_LOGIC_1)//fault propagates
					{
						// ZN_temp_lv = SC_LOGIC_0;
						A2_O_masked = false;
						input_temp_FAULTS.insert(input_temp_FAULTS.end(), A2_FAULTS.begin(), A2_FAULTS.end());
					}
					else{ // faults is blocked : notify the prev gate
						// ZN_temp_lv = SC_LOGIC_1;
						A2_O_masked = true;
					}
				}
				if (A2.read().logicVal == SC_LOGIC_0) //faultied : 1 
				{
					if(A1.read().logicVal == SC_LOGIC_1)//fault propagates
					{
						// ZN_temp_lv = SC_LOGIC_1;
						A2_O_masked = false;
						input_temp_FAULTS.insert(input_temp_FAULTS.end(), A2_FAULTS.begin(), A2_FAULTS.end());
					}
					else{ // faults is blocked : notify the prev gate
						// ZN_temp_lv = SC_LOGIC_1;
						A2_O_masked = true;
					}
				}
			}// either both events are masked or there was no incoming faulty signal
					
			ZN_temp_id = id;
			while (!ZN_temp_FAULTS.empty()) {
				//erase the ones propagated with previous TV
				ZN_temp_FAULTS.erase(ZN_temp_FAULTS.begin());
			}

			//for to find gates own faults that can propagate
			if (curr_lv == "00"){
				// ZN_temp_lv = SC_LOGIC_1;
				if(faults[5]==1)//ZN@0 --> Activated :  Norm=1, faulty=0; Propagation
				{
					ownFault = true;
					temp ={id,5};
					ZN_temp_FAULTS.push_back(temp);
				}
				// //reconvergent
				ZN_temp_FAULTS.insert(ZN_temp_FAULTS.end(), common_elements.begin(), common_elements.end());

			}

			else if (curr_lv == "01"){
				// ZN_temp_lv = SC_LOGIC_1;
				if(faults[0]==1)//A2@1 --> Activated :  Norm=1, faulty=0; Propagation
				{
					ownFault = true;
					temp ={id,0};
					ZN_temp_FAULTS.push_back(temp);
						if( std::find(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), temp) != input_temp_FAULTS.end()){
							// input_temp_FAULTS.erase(std::remove(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), common_elements[t]), input_temp_FAULTS.end());
							// cout << "ERASE!!\n";
						}
				}
				if (A2_branch_FAULTS.size()!=0){
					for(int k=0; k<A2_branch_FAULTS.size(); k++){
						if((A2_branch_FAULTS[k][1]==0) || (A2_branch_FAULTS[k][1]==2))
							ZN_temp_FAULTS.push_back(A2_branch_FAULTS[k]);
					}
				}
				if(faults[5]==1)//ZN@0 --> Activated :  Norm=1, faulty=0; Propagation
				{
					ownFault = true;
					temp ={id,5};
					ZN_temp_FAULTS.push_back(temp);
				}

				// remove reconvergent	
				for(int t=0; t<common_elements.size(); t++){
					if( std::find(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), common_elements[t]) != input_temp_FAULTS.end()){
						input_temp_FAULTS.erase(std::remove(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), common_elements[t]), input_temp_FAULTS.end());
						// cout << "ERASE!!\n";
					}
					if( std::find(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end(), common_elements[t]) != ZN_temp_FAULTS.end()){
						ZN_temp_FAULTS.erase(std::remove(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end(), common_elements[t]), ZN_temp_FAULTS.end());
						// cout << "ERASE!!\n";
					}
				}

			}

			else if (curr_lv == "10"){
				// ZN_temp_lv = SC_LOGIC_1;
				if(faults[2]==1)//A1@1 --> Activated :  Norm=1, faulty=0; Propagation
				{
					ownFault = true;
					temp ={id,2};
					ZN_temp_FAULTS.push_back(temp);
						if( std::find(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), temp) != input_temp_FAULTS.end()){
							// input_temp_FAULTS.erase(std::remove(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), common_elements[t]), input_temp_FAULTS.end());
							// cout << "ERASE!!\n";
						}
				}
				if (A1_branch_FAULTS.size()!=0){
					for(int k=0; k<A1_branch_FAULTS.size(); k++){
						if((A1_branch_FAULTS[k][1]==2) || (A1_branch_FAULTS[k][1]==0))
							ZN_temp_FAULTS.push_back(A1_branch_FAULTS[k]);
					}
				}

				if(faults[5]==1)//ZN@0 --> Activated :  Norm=1, faulty=0; Propagation
				{
					ownFault = true;
					temp ={id,5};
					ZN_temp_FAULTS.push_back(temp);
				}

				// remove reconvergent	
				for(int t=0; t<common_elements.size(); t++){
					if( std::find(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), common_elements[t]) != input_temp_FAULTS.end()){
						input_temp_FAULTS.erase(std::remove(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), common_elements[t]), input_temp_FAULTS.end());
						// cout << "ERASE!!\n";
					}
					if( std::find(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end(), common_elements[t]) != ZN_temp_FAULTS.end()){
						ZN_temp_FAULTS.erase(std::remove(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end(), common_elements[t]), ZN_temp_FAULTS.end());
						// cout << "ERASE!!\n";
					}
				}

			}

			else if (curr_lv == "11"){
				// ZN_temp_lv = SC_LOGIC_0;
				if(faults[3]==1)//A1@0 --> Activated :  Norm=0, faulty=1; Propagation
				{
					ownFault = true;
					temp ={id,3};
					ZN_temp_FAULTS.push_back(temp);
						if( std::find(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), temp) != input_temp_FAULTS.end()){
							// input_temp_FAULTS.erase(std::remove(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), common_elements[t]), input_temp_FAULTS.end());
							// cout << "ERASE!!\n";
						}
					
				}
				if (A1_branch_FAULTS.size()!=0){
					for(int k=0; k<A1_branch_FAULTS.size(); k++){
						if((A1_branch_FAULTS[k][1]==3) || (A1_branch_FAULTS[k][1]==1))
							ZN_temp_FAULTS.push_back(A1_branch_FAULTS[k]);
					}
				}
				if(faults[1]==1)//A2@0 -- Activated :  Norm=0, faulty=1; Propagation
				{
					ownFault = true;
					temp ={id,1};
					ZN_temp_FAULTS.push_back(temp);
						if( std::find(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), temp) != input_temp_FAULTS.end()){
							// input_temp_FAULTS.erase(std::remove(input_temp_FAULTS.begin(), input_temp_FAULTS.end(), common_elements[t]), input_temp_FAULTS.end());
							// cout << "ERASE!!\n";
						}
				}
				if (A2_branch_FAULTS.size()!=0){
					for(int k=0; k<A2_branch_FAULTS.size(); k++){
						if((A2_branch_FAULTS[k][1]==1) || (A2_branch_FAULTS[k][1]==3))
							ZN_temp_FAULTS.push_back(A2_branch_FAULTS[k]);
					}
				}
				if((faults[1]==0) && (faults[3]==0))
				{
					ownFault = false;
				}
				if(faults[4]==1)//ZN@1 --> Activated :  Norm=1, faulty=0; Propagation
				{
					ownFault = true;
					temp ={id,4};
					ZN_temp_FAULTS.push_back(temp);
				}
			}

			
			// SPECIAL CASE:
			if (curr_lv == "10"){
				// for (int j = 0; j < A1.size(); j++){
				// 	if((A1_FAULTS[j][0] == id) && (A1_FAULTS[j][1] == 2)){ //B@0
				// 		ZN_temp_FAULTS.erase(std::remove(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end(), A1_FAULTS[j]), ZN_temp_FAULTS.end());
				// 	}
				// }

				for (int j = 0; j < A2_FAULTS.size(); j++){
					if((A2_FAULTS[j][0] == id) && (A2_FAULTS[j][1] == 2)){ //A@1
						ZN_temp_FAULTS.erase(std::remove(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end(), A2_FAULTS[j]), ZN_temp_FAULTS.end());
					}
				}

			}
			if (curr_lv == "01"){
				for (int j = 0; j < A1_FAULTS.size(); j++){
					if((A1_FAULTS[j][0] == id) && (A1_FAULTS[j][1] == 0)){ //B@1
						ZN_temp_FAULTS.erase(std::remove(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end(), A1_FAULTS[j]), ZN_temp_FAULTS.end());
					}
				}

				// for (int j = 0; j < A2_FAULTS.size(); j++){
				// 	if((A2_FAULTS[j][0] == id) && (A2_FAULTS[j][1] == 2)){ //A@0
				// 		ZN_temp_FAULTS.erase(std::remove(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end(), A2_FAULTS[j]), ZN_temp_FAULTS.end());
				// 	}
				// }

			}
		

			

			ZN_temp_FAULTS.insert(ZN_temp_FAULTS.end(), input_temp_FAULTS.begin(), input_temp_FAULTS.end());
			
			std::sort(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end());
			ZN_temp_FAULTS.erase(std::unique(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end()), ZN_temp_FAULTS.end());

			if(ZN_temp_FAULTS.size() > 0){
				ZN_temp_faulty = true;
				// if (id == 240){
					// cout << "****************************** Gate NAND : "<<id<< " ******************************\n";
					// cout<< "curr_val A1 : "<<A1.read().logicVal<<endl;
					// cout<< "curr_val A2 : "<<A2.read().logicVal<<endl;				
					// for(int k=0; k<ZN_temp_FAULTS.size(); k++){
					// 	if(ZN_temp_FAULTS[k][0] == 240){
					// 	cout << " *** FAULTS["<<k<<"] = "<<ZN_temp_FAULTS[k][0] <<",  "<< ZN_temp_FAULTS[k][1]<<endl;
					// 	}
					// }
					// cout << "****************************** *********************************\n\n\n";
			}
			else{
				ZN_temp_faulty = false;
			}
		}

		prev_lv = curr_lv;

		// if(NbarT)
		// 	ZN->write({ZN_temp_lv, ZN_temp_faulty, ZN_temp_FAULTS});
		// else{
		// 	if(A1.read().logicVal == SC_LOGIC_1 && A2.read().logicVal == SC_LOGIC_1)
		// 		ZN->write({SC_LOGIC_0, false, {}});
		// 	else
		// 		ZN->write({SC_LOGIC_1, false, {}});
		// }

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

// void NAND2_X1::eval(void){


		
//     };

void NAND2_X1::Detected(void){
		
	while(true){	
		wait(fault_Detected);
		// if (faults == "0000") cout <<"I AM RECIEVING AN EVENT WHEN I SHOULDN'T BE!\n";
		// cout << "@@@@@@@@@@@@ Gate : "<<id<< " @@@@@@@@@@\n";
		// cout << faultIdx <<endl;
		// cout << "@@@ Fault successfully reached PO\n";
		faults[faultIdx] = 0; //remove fault from list
		// ownFault = false;
		// cout << "@@@ It was our own fault, removing from list : "<<faultIdx<<"\n";
		// numOfObservedCombs +=1;
		// cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n";
		wait();
	}
};


