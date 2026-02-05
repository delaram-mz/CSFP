// #include "Utils.h"

#include "gates.h"

class POUT1_X1: public gates
{
public:
	int id;
    sc_in<fs_logic> A; 
    sc_out<fs_logic> ZN;
	sc_lv<1> curr_lv;
	sc_in<bool> NbarT;



	bool AF;

    sc_logic ZN_temp_lv;
    bool ZN_temp_faulty;
	int ZN_temp_id;
	std::vector<std::vector<int>> A_FAULTS;
	std::vector<std::vector<int>> ZN_temp_FAULTS;
	std::vector<int> temp;
	std::vector<std::vector<int>> A1_branch_FAULTS;

	sc_lv<4> faults;

    SC_CTOR(POUT1_X1): id(0) {

		SC_THREAD(eval);
		sensitive << A <<NbarT;
		// SC_THREAD(Detected);
		// sensitive << fault_Detected;
    }
	void eval();
};
