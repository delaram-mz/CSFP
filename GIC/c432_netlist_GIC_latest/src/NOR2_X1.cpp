#include "NOR2_X1.h"

// // Initialize the static counter (define it outside the class)
// sc_uint<32> NOR2_X1::counter = 0;
// sc_uint<32> NOR2_X1::get_next_id() 
// {
//     return counter++;
// }


void NOR2_X1::GIC(void){
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
			curr_lv[0] = A1->read();
			curr_lv[1] = A2->read();
			if (curr_lv != prev_lv)
			{
				if (std::find(observedCombs.begin(), observedCombs.end(), curr_lv) == observedCombs.end()) 
				{	// if the current value hasn't been oserved before
					for (int i=0; i<4; i++)
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
			// cout << "****************************** Gate : "<<id<< " of type NOR ******************************\n";
			// cout << "\n====> gate num: "<< id << " reporting a toggle at:" << sc_time_stamp().to_double() <<"\n";
		}
		prev_lv = curr_lv;
		wait();
	};
}

void NOR2_X1::eval(void){
	if((A1.read() == SC_LOGIC_0) && (A2.read() == SC_LOGIC_0))
		ZN->write(SC_LOGIC_1);
	else
		ZN->write(SC_LOGIC_0);
};
