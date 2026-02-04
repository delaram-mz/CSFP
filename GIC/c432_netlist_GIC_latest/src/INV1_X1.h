// #include "Utils.h"

#include "gates.h"

class INV1_X1: public gates
{
public:
	int id;
    sc_in<sc_logic> A; 
    sc_out<sc_logic> ZN;

	// sc_uint<32> instance_id;
	sc_vector<sc_lv<1>> possibleCombs{"constant_vector", 2};
 	sc_vector<sc_lv<1>> observedCombs{"observedCombs", 2};
	sc_lv<1> curr_lv;
	sc_lv<1> prev_lv;
	
	// Static counter to keep track of IDs
    // static sc_uint<32> counter;
    SC_CTOR(INV1_X1): id(0) {
		possibleCombs[0] = "0";
		possibleCombs[1] = "1";
		// instance_id = get_next_id();
        SC_METHOD(eval);
        sensitive << A;
		SC_THREAD(GIC);
		sensitive << A;
    }
    // sc_uint<32> get_next_id();
    void eval();
	void GIC();
};
