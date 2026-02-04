#include "TB.h"
#include <iostream>
#include <fstream> 

int sc_main(int argc, char** argv)
{
	s344_netlist_scanInserted_TB* TOP = new s344_netlist_scanInserted_TB("netlistSimulationTB_instance");
	sc_start(400000, SC_NS);
	return 0;
}