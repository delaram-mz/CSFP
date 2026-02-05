#include "TB.h"
#include <iostream>
#include <fstream> 

int sc_main(int argc, char** argv)
{
	//Save the original stream buffer for cout
	std::streambuf* original_cout_buf = std::cout.rdbuf();
	//Open the output file for writing
	std::ofstream output_file("output.txt");
	
	//Redirect cout to the output file
	std::cout.rdbuf(output_file.rdbuf());


	c1355_netlist_TB* TOP = new c1355_netlist_TB("netlistSimulationTB_instance");



	sc_start(40000000, SC_NS);

	//Restore the original cout stream buffer
	std::cout.rdbuf(original_cout_buf);
	// Close the output file
	output_file.close();
	return 0;
}