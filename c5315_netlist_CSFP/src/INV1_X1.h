// #include "Utils.h"

#include "gates.h"

class INV1_X1: public gates
{
public:
	int id;
    sc_in<fs_logic> A; 
    sc_out<fs_logic> ZN;
	sc_in<bool> NbarT;

	sc_uint<32> instance_id;
	sc_vector<sc_lv<1>> possibleCombs{"constant_vector", 2};
 	sc_vector<sc_lv<1>> observedCombs{"observedCombs", 2};
	sc_lv<1> curr_lv;
	sc_lv<1> prev_lv;
	sc_signal<sc_logic> prevZN;
	// int numOfObservedCombs=0;
    bool AF;

    sc_logic ZN_temp_lv;
    bool ZN_temp_faulty;
	int ZN_temp_id;
	std::vector<std::vector<int>> ZN_temp_FAULTS;
	std::vector<int> temp;

	// incoming information
	std::vector<std::vector<int>> A_FAULTS;
	std::vector<std::vector<int>> A1_branch_FAULTS;
	
	bool A_O_masked;
	bool ownFault=false;
	sc_lv<4> faults;

	// Static counter to keep track of IDs
    static sc_uint<32> counter;
    SC_CTOR(INV1_X1): id(0) {
		// fault_Detected.resize(4);
		possibleCombs[0] = "0";
		possibleCombs[1] = "1";
		instance_id = get_next_id();
        // SC_METHOD(eval);
        // sensitive << A;
		SC_THREAD(GIC);
		sensitive << A << NbarT;
		SC_THREAD(Detected);
		sensitive << fault_Detected;
    }
    sc_uint<32> get_next_id();
	void GIC();
    // void eval();
	void Detected();

};
