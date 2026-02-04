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


	c432_netlist_TB* TOP = new c432_netlist_TB("netlistSimulationTB_instance");

	// sc_trace_file* VCDFile;
	// VCDFile = sc_create_vcd_trace_file("netlistSimulation1");
	// sc_trace(VCDFile, TOP->UUT->N1,   "N1");
	// sc_trace(VCDFile, TOP->UUT->N102, "N102");
	// sc_trace(VCDFile, TOP->UUT->N105, "N105");
	// sc_trace(VCDFile, TOP->UUT->N108, "N108");
	// sc_trace(VCDFile, TOP->UUT->N11,  "N11");
	// sc_trace(VCDFile, TOP->UUT->newTV,  "newTV");


	// sc_trace(VCDFile, TOP->UUT->_447__Gate1->A1,  "N1_447_Gate1->A1");
	// sc_trace(VCDFile, TOP->UUT->_447__Gate1->A2,  "N1_447_Gate1->A2");
	// sc_trace(VCDFile, TOP->UUT->_447__Gate1->ZN,  "N1_447_Gate1->ZN");


	// sc_trace(VCDFile, TOP->UUT->N223,   "N223");
	// sc_trace(VCDFile, TOP->UUT->N431,   "N431");
	// sc_trace(VCDFile, TOP->UUT->N329,   "N329");
	// sc_trace(VCDFile, TOP->UUT->N370,   "N370");
	// sc_trace(VCDFile, TOP->UUT->N421,   "N421");
	// sc_trace(VCDFile, TOP->UUT->N430,   "N430");
	// sc_trace(VCDFile, TOP->UUT->N432,   "N432");

	// sc_trace(VCDFile, TOP->UUT->N1, "N1");
	// sc_trace(VCDFile, TOP->UUT->N102, "N102");
	// sc_trace(VCDFile, TOP->UUT->N105, "N105");
	// sc_trace(VCDFile, TOP->UUT->N108, "N108");
	// sc_trace(VCDFile, TOP->UUT->N11, "N11");
	// sc_trace(VCDFile, TOP->UUT->N112, "N112");
	// sc_trace(VCDFile, TOP->UUT->N115, "N115");

	// sc_trace(VCDFile, TOP->UUT->_292_, "_292_");
	// sc_trace(VCDFile, TOP->UUT->_289_, "_289_");
	// sc_trace(VCDFile, TOP->UUT->_293_, "_293_");

	// sc_trace(VCDFile, TOP->UUT->_329_, "_329_");
	// sc_trace(VCDFile, TOP->UUT->_306_, "_306_");
	// sc_trace(VCDFile, TOP->UUT->_330_, "_330_");





	sc_start(40000000, SC_NS);

	//Restore the original cout stream buffer
	std::cout.rdbuf(original_cout_buf);
	// Close the output file
	output_file.close();
	return 0;
}