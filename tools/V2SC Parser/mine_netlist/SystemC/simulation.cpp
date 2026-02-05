#include "TB.h"
#include <iostream>
#include <fstream> 

int sc_main(int argc, char** argv)
{
	mine_netlist_TB* TOP = new mine_netlist_TB("netlistSimulationTB_instance");
	sc_start(400000, SC_NS);
	return 0;
}