#include "INV1_X1.h"

// Initialize the static counter (define it outside the class)
// sc_uint<32> INV1_X1::counter = 0;
// sc_uint<32> INV1_X1::get_next_id() 
// {
//     return counter++;
// }


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
			
			curr_lv[0] = A->read();
			if (curr_lv != prev_lv)
			{
				if (std::find(observedCombs.begin(), observedCombs.end(), curr_lv) == observedCombs.end()) 
				{	// if the current value hasn't been oserved before
					for (int i=0; i<2; i++)
					{	// find the empty place in vector
						if(observedCombs[i] == "XX")
							{
								observedCombs[i] = curr_lv;
								numOfObservedCombs +=1;
								break;
							}
					}
				}
			}
			// cout << "****************************** Gate : "<<id<< " ******************************\n";
			// cout << "\n====> gate num: "<< id << " reporting a toggle at:" << sc_time_stamp().to_double() <<"\n";
		}
		prev_lv = curr_lv;
		wait();
	};
}

void INV1_X1::eval(void){
	if(A.read() == SC_LOGIC_0)
		ZN->write(SC_LOGIC_1);
	else
		ZN->write(SC_LOGIC_0);
};

