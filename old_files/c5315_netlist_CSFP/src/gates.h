
#pragma once
#include <systemc.h>
#include "Utils.h"
#include <vector>

class gates  : public sc_module 
{
public:
    sc_event fault_Detected;
	int faultIdx;
    int numOfObservedCombs=0;
    // bool NbarT;
	// std::vector<sc_core::sc_event> fault_Detected;
		// fault_Detected.resize(4);
	
	

	// SC_HAS_PROCESS(gates);

    // gates(sc_core::sc_module_name name) : sc_core::sc_module(name) {

    //     fault_Detected.resize(4); // Example with 3 events
    // }

};

