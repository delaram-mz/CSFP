#include "INV1_X1.h"

// Initialize the static counter (define it outside the class)
sc_uint<32> INV1_X1::counter = 0;
sc_uint<32> INV1_X1::get_next_id() 
{
    return counter++;
}


void INV1_X1::GIC(void){
	while (true)
	{
		if (sc_time_stamp().to_double() == 0)
		{
			// initializing the observedComb vector at time 0
			observedCombs[0] = "X";
			observedCombs[1] = "X";
		}
		else if ((sc_time_stamp().to_double() > 0))
		{
			
			curr_lv[0] = A->read().logicVal;
            AF = A->read().faulty;

			if (curr_lv != prev_lv)
			{
				if (std::find(observedCombs.begin(), observedCombs.end(), curr_lv) == observedCombs.end()) 
				{
					for (int i=0; i<2; i++)
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

			// checking for reconvergant FO 
			A_FAULTS=A.read().FAULTS;
			std::vector<std::vector<int>> input_temp_FAULTS;

			// cout << "****************************** Gate : "<<id<< " ******************************\n";
			// cout << "\n====> gate num: "<< id << " reporting a toggle at:" << sc_time_stamp().to_double() <<"\n";
			// cout << "faults : " << faults << endl;
			// cout << "AF : " << A->read().faulty<<endl;
			// if(AF){
			// cout << "^^^^^^^^^^ CHECKEING for RECONVERGENT FANOUTS!!"<<endl;
			// 	for (int p=0; p<A_FAULTS.size(); p++){
			// 		cout <<"^^^^^ A Fault ["<<p<<"] : "<<A_FAULTS[p][1]<<",  "<<A_FAULTS[p][0]<<endl; 
			// 	}
			// }

			if(AF){ //checking to propagate A fault
				// cout<<"A faulty input\n";
				if(A.read().logicVal == SC_LOGIC_1) //faultied : 0
				{// cout<<"Propagate A input fault\n";
					// ZN_temp_lv = SC_LOGIC_0;
					input_temp_FAULTS.insert(input_temp_FAULTS.end(), A_FAULTS.begin(), A_FAULTS.end());
				}
				else if (A.read().logicVal == SC_LOGIC_0) //faultied : 1 
				{// ZN_temp_lv = SC_LOGIC_1;
					// cout<<"Propagate A input fault\n";
					input_temp_FAULTS.insert(input_temp_FAULTS.end(), A_FAULTS.begin(), A_FAULTS.end());
				}
			}


			while (!ZN_temp_FAULTS.empty()) {
				ZN_temp_FAULTS.erase(ZN_temp_FAULTS.begin()); // clear vector
			}
			ZN_temp_id = id;

			//for to find gates own faults that can propagate
			if (curr_lv == "0"){
				ZN_temp_lv = SC_LOGIC_1;
				if(faults[0]==1)//A@1 --> Activated :  Norm=1, faulty=0; Propagation
				{
					temp ={id,0};
					ZN_temp_FAULTS.push_back(temp);
				}
				if (A1_branch_FAULTS.size()!=0){
					for(int k=0; k<A1_branch_FAULTS.size(); k++){
						if((A1_branch_FAULTS[k][1]==0) || (A1_branch_FAULTS[k][1]==2))
							ZN_temp_FAULTS.push_back(A1_branch_FAULTS[k]);
					}
				}
				if(faults[3]==1)//ZN@0 --> Activated :  Norm=1, faulty=0; Propagation
				{// cout<<"Propagate gates own fault\n";
					ownFault = true;
					temp ={id,3};
					ZN_temp_FAULTS.push_back(temp);
				}
			}

			else if (curr_lv == "1"){
				ZN_temp_lv = SC_LOGIC_0;
				if(faults[1]==1)//A@0 --> Activated :  Norm=0, faulty=1; Propagation
				{
					ownFault = true;
					temp ={id,1};
					ZN_temp_FAULTS.push_back(temp);
				}
				if (A1_branch_FAULTS.size()!=0){
					for(int k=0; k<A1_branch_FAULTS.size(); k++){
						if((A1_branch_FAULTS[k][1]==1) || (A1_branch_FAULTS[k][1]==3))
							ZN_temp_FAULTS.push_back(A1_branch_FAULTS[k]);
					}
				}
				if(faults[2]==1)//ZN@1 --> Activated :  Norm=1, faulty=0; Propagation
				{
					ownFault = true;
					temp ={id,2};
					ZN_temp_FAULTS.push_back(temp);
				}
			}


			ZN_temp_FAULTS.insert(ZN_temp_FAULTS.end(), input_temp_FAULTS.begin(), input_temp_FAULTS.end());
		
			std::sort(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end());
			ZN_temp_FAULTS.erase(std::unique(ZN_temp_FAULTS.begin(), ZN_temp_FAULTS.end()), ZN_temp_FAULTS.end());

			if(ZN_temp_FAULTS.size() > 0){
				ZN_temp_faulty = true;
				// cout << "****************************** Gate NOT : "<<id<< " ******************************\n";
				// cout<< "curr_val : "<<A.read().logicVal<<endl;
				// for(int k=0; k<ZN_temp_FAULTS.size(); k++){
				// 	if(ZN_temp_FAULTS[k][0] == 257){
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

		if(NbarT){
			if(A.read().logicVal == SC_LOGIC_0)
				ZN->write({SC_LOGIC_1, ZN_temp_faulty, ZN_temp_FAULTS});
			else
				ZN->write({SC_LOGIC_0, ZN_temp_faulty, ZN_temp_FAULTS});
		}
		else{
			if(A.read().logicVal == SC_LOGIC_0)
				ZN->write({SC_LOGIC_1, false, {}});
			else
				ZN->write({SC_LOGIC_0, false, {}});
		}

		// if(NbarT)
		// 	ZN->write({ZN_temp_lv, ZN_temp_faulty, ZN_temp_FAULTS});
		// else
		// 	{
		// 	if(A.read().logicVal == SC_LOGIC_0)
		// 		ZN->write({SC_LOGIC_1, false, {}});
		// 	else
		// 		ZN->write({SC_LOGIC_0, false, {}});
		// 	}

		wait();
	};
}

// void INV1_X1::eval(void){

//     };


void INV1_X1::Detected(void){
	while(true){
		// wait(fault_Detected);
		// cout << "@@@@@@@@@@@@ Gate : "<<id<< " @@@@@@@@@@\n";
		// cout << faultIdx <<endl;
		// cout << "OUR FAULT IS DETECTED\n";
		// cout << "Fault successfully reached PO\n";
		// faults[faultIdx] = 0; //remove fault from list
		// ownFault = false;
		// cout << "It was our own fault, removing from list : "<<faultIdx<<"\n";
		// numOfObservedCombs +=1;
		// cout << "@@@@@@@@@@@@ @@@@@@@@@@@@ @@@@@@@@@@\n";
		wait();
	}
};


