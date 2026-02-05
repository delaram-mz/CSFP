#include "TB.h"
#include <iostream>
#include <fstream> 
#include <chrono>


int sc_main(int argc, char** argv)
{
	// sc_set_time_resolution(1, SC_FS);
	//Save the original stream buffer for cout
	std::streambuf* original_cout_buf = std::cout.rdbuf();
	//Open the output file for writing
	std::ofstream output_file("output.txt");
	
	//Redirect cout to the output file
	std::cout.rdbuf(output_file.rdbuf());


	c432_netlist_TB* TOP = new c432_netlist_TB("netlistSimulationTB_instance");
	// sc_trace_file* VCDFile;
	// VCDFile = sc_create_vcd_trace_file("netlistSimulation1");
	// sc_trace(VCDFile, TOP->UUT->N86,   "N86");
	// sc_trace(VCDFile, TOP->UUT->_382_, "_382_");
	// sc_trace(VCDFile, TOP->UUT->_198_, "_198_");
	// sc_trace(VCDFile, TOP->UUT->_262_, "_262_");
	// sc_trace(VCDFile, TOP->UUT->_263_,  "_263_");
	// sc_trace(VCDFile, TOP->UUT->_264_,  "_264_");
	// sc_trace(VCDFile, TOP->UUT->_277_,  "_277_");
	// sc_trace(VCDFile, TOP->UUT->_278_,  "_278_");
	// sc_trace(VCDFile, TOP->UUT->_205_,  "_205_");
	// sc_trace(VCDFile, TOP->UUT->N370,  "N370");
	// sc_trace(VCDFile, TOP->UUT->newTV,  "newTV");


auto start = std::chrono::high_resolution_clock::now();

	sc_start();

	cout << TOP->UUT->COV <<endl;

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