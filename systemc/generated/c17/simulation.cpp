#include "TB.h"
#include <iostream>
#include <fstream> 

int sc_main(int argc, char** argv)
{
	c17_TB* TOP = new c17_TB("netlistSimulationTB_instance");
	sc_start(40000, SC_NS);
	return 0;
}