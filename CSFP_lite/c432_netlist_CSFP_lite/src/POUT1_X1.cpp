#include "POUT1_X1.h"

void POUT1_X1::eval(void){
	while (true)
	{
		if (sc_time_stamp().to_double() == 0)
		{
		}
		else if ((sc_time_stamp().to_double() > 0))
		{
			
            AF = A->read().faulty;
			curr_lv[0] = A->read().logicVal;

			// checking for reconvergant FO 
			A_FAULTS=A.read().FAULTS;
			std::vector<std::vector<int>> input_temp_FAULTS;

			if(AF){ //checking to propagate A fault
				input_temp_FAULTS.insert(input_temp_FAULTS.end(), A_FAULTS.begin(), A_FAULTS.end());
			}

			while (!ZN_temp_FAULTS.empty()) {
				ZN_temp_FAULTS.erase(ZN_temp_FAULTS.begin()); // clear vector
			}
			ZN_temp_id = id;

			//for to find gates own faults that can propagate
			switch(curr_lv.to_uint()){
				case 0:
					if(faults[0]==1)//A@1 --> Activated :  Norm=1, faulty=0; Propagation
					{
						temp ={id,0};
						ZN_temp_FAULTS.push_back(temp);
					}
					if (A1_branch_FAULTS.size()!=0){
						for(std::vector<std::vector<int> >::size_type  k=0; k<A1_branch_FAULTS.size(); k++){
							if((A1_branch_FAULTS[k][1]==0) || (A1_branch_FAULTS[k][1]==2))
								ZN_temp_FAULTS.push_back(A1_branch_FAULTS[k]);
						}
					}
					if(faults[2]==1)//ZN@1 --> Activated :  Norm=1, faulty=0; Propagation
					{// cout<<"Propagate gates own fault\n";
						temp ={id,2};
						ZN_temp_FAULTS.push_back(temp);
					}
				break;

				case 1:
					if(faults[1]==1)//A@0 --> Activated :  Norm=0, faulty=1; Propagation
					{
						temp ={id,1};
						ZN_temp_FAULTS.push_back(temp);
					}
					if (A1_branch_FAULTS.size()!=0){
						for(std::vector<std::vector<int> >::size_type  k=0; k<A1_branch_FAULTS.size(); k++){
							if((A1_branch_FAULTS[k][1]==1) || (A1_branch_FAULTS[k][1]==3))
								ZN_temp_FAULTS.push_back(A1_branch_FAULTS[k]);
						}
					}
					if(faults[3]==1)//ZN@0 --> Activated :  Norm=1, faulty=0; Propagation
					{
						temp ={id,3};
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

		if (NbarT){
			if(A.read().logicVal == SC_LOGIC_0)
				ZN->write({SC_LOGIC_0, ZN_temp_faulty, ZN_temp_FAULTS});
			else
				ZN->write({SC_LOGIC_1, ZN_temp_faulty, ZN_temp_FAULTS});
		} 
		else{
			if(A.read().logicVal == SC_LOGIC_0)
				ZN->write({SC_LOGIC_0, false, {}});
			else
				ZN->write({SC_LOGIC_1, false, {}});
		} 

		wait();
	};
}
