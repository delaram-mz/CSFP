#include "TB.h"
#include <iostream>
#include <fstream> 
#include <chrono>

int sc_main(int argc, char** argv)
{
	sc_set_time_resolution(1, SC_FS);
	
	//Save the original stream buffer for cout
	std::streambuf* original_cout_buf = std::cout.rdbuf();
	//Open the output file for writing
	std::ofstream output_file("output.txt");
	
	//Redirect cout to the output file
	std::cout.rdbuf(output_file.rdbuf());


	c1908_netlist_TB* TOP = new c1908_netlist_TB("netlistSimulationTB_instance");

auto start = std::chrono::high_resolution_clock::now();

	sc_start();

		// End measuring real time
auto end = std::chrono::high_resolution_clock::now();
std::chrono::duration<double> elapsed = end - start;

// Log the simulation time
std::cout << "Simulation time: " << sc_time_stamp() << std::endl;
std::cout << "Real time elapsed: " << elapsed.count() << " seconds" << std::endl;



	//Restore the original cout stream buffer
	std::cout.rdbuf(original_cout_buf);
	// Close the output file
	output_file.close();
	return 0;
}