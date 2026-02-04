// #include "Utils.h"

#include "gates.h"

class NOR2_X1: public gates
{
public:
	int id;
    sc_in< sc_logic> A1; 
    sc_in< sc_logic> A2; 
    sc_out< sc_logic> ZN;

	// sc_uint<32> instance_id;
	sc_vector<sc_lv<2>> possibleCombs{"constant_vector", 4};
 	sc_vector<sc_lv<2>> observedCombs{"observedCombs", 4};
	sc_lv<2> curr_lv;
	sc_lv<2> prev_lv;

	// Static counter to keep track of IDs
    // static sc_uint<32> counter;
    SC_CTOR(NOR2_X1): id(0) {
		possibleCombs[0] = "00";
		possibleCombs[1] = "01";
		possibleCombs[2] = "10";
		possibleCombs[3] = "11";
		// instance_id = get_next_id();
        SC_METHOD(eval);
        sensitive << A1 << A2;
		SC_THREAD(GIC);
		sensitive << A1 << A2;

    }
    // sc_uint<32> get_next_id();
	void GIC();
    void eval();
};
