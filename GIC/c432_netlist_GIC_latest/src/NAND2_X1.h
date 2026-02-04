#include "gates.h"

class NAND2_X1: public gates
{
public:
	int id;
    sc_in< sc_logic> A1; 
    sc_in< sc_logic> A2; 
    sc_out< sc_logic> ZN;

	std::vector<sc_lv<2>> possibleCombs{4};  // vector of 4 elements
	std::vector<sc_lv<2>> observedCombs{4};
	sc_lv<2> curr_lv;
	sc_lv<2> prev_lv;


    SC_CTOR(NAND2_X1): id(0) {
		possibleCombs.resize(4);
	    observedCombs.resize(4);
		possibleCombs[0] = "00";
		possibleCombs[1] = "01";
		possibleCombs[2] = "10";
		possibleCombs[3] = "11";

        SC_METHOD(eval);
        sensitive << A1 << A2;
		SC_THREAD(GIC);
		sensitive << A1 << A2;
    }
    void eval();
	void GIC();
};

