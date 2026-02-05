// #include "Utils.h"
#include "gates.h"

class NAND2_X1: public gates
{
public:
	int id;
    sc_in< fs_logic> A1; 
    sc_in< fs_logic> A2; 
    sc_out< fs_logic> ZN;
	sc_in<bool> NbarT;

	sc_uint<32> instance_id;
	sc_vector<sc_lv<2>> possibleCombs{"constant_vector", 4};
 	sc_vector<sc_lv<2>> observedCombs{"observedCombs", 4};
	sc_lv<2> curr_lv;
	sc_lv<2> prev_lv;
	sc_signal<sc_logic> prevZN;
	// int numOfObservedCombs=0;
    bool A1F, A2F;
    
    sc_logic ZN_temp_lv;
    bool ZN_temp_faulty;
	int ZN_temp_id;
	std::vector<std::vector<int>> ZN_temp_FAULTS;
	std::vector<int> temp;

	// incoming information
	std::vector<std::vector<int>> A1_FAULTS;
	std::vector<std::vector<int>> A2_FAULTS;
	std::vector<std::vector<int>> A1_branch_FAULTS;
	std::vector<std::vector<int>> A2_branch_FAULTS;

	sc_lv<6> faults;

	// Static counter to keep track of IDs
    SC_CTOR(NAND2_X1): id(0) {
		// fault_Detected.resize(4);
		possibleCombs[0] = "00";
		possibleCombs[1] = "01";
		possibleCombs[2] = "10";
		possibleCombs[3] = "11";

        // SC_METHOD(eval);
        // sensitive << A1 << A2;
		SC_THREAD(FP);
		sensitive << A1 << A2 << NbarT;
		SC_THREAD(Detected);
		sensitive << fault_Detected;
    }
	void FP();
    // void eval();
	void Detected();
};
