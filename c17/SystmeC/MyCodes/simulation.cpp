#include "TB.h"

#include <iostream>
#include <fstream> // For file stream operations


int sc_main(int argc, char** argv)
{
	//Save the original stream buffer for cout
	 std::streambuf* original_cout_buf = std::cout.rdbuf();
	 //Open the output file for writing
	 std::ofstream output_file("output.txt");
	 //Redirect cout to the output file
	 std::cout.rdbuf(output_file.rdbuf());


	c17_netlist_TB* TOP = new c17_netlist_TB("c17_netlist_TB_instance");
	
	sc_trace_file* VCDFile;
	VCDFile = sc_create_vcd_trace_file("netlistSimulation1");
	/*sc_trace(VCDFile, TOP->UUT->N115, "N115");
	sc_trace(VCDFile, TOP->UUT->N432, "N432");
	sc_trace(VCDFile, TOP->UUT->NAND2_Gate63->A1, "NAND2_63_A1");
	sc_trace(VCDFile, TOP->UUT->NAND2_Gate63->A2, "NAND2_63_A2");
	sc_trace(VCDFile, TOP->UUT->NAND2_Gate63->ZN, "NAND2_63_ZN");

	sc_trace(VCDFile, TOP->UUT->NOR2_Gate97->A1, "NOR2_97_A1");
	sc_trace(VCDFile, TOP->UUT->NOR2_Gate97->A2, "NOR2_97_A2");
	sc_trace(VCDFile, TOP->UUT->NOR2_Gate97->ZN, "NOR2_97_ZN");

	sc_trace(VCDFile, TOP->UUT->NAND4_Gate79->A1, "NAND4_79_A1");
	sc_trace(VCDFile, TOP->UUT->NAND4_Gate79->A2, "NAND4_79_A2");
	sc_trace(VCDFile, TOP->UUT->NAND4_Gate79->A3, "NAND4_79_A3");
	sc_trace(VCDFile, TOP->UUT->NAND4_Gate79->A4, "NAND4_79_A4");
	sc_trace(VCDFile, TOP->UUT->NAND4_Gate79->ZN, "NAND4_79_ZN");*/

	//clock_t start, end;
	//start = clock();
	sc_start(4000, SC_NS);
	//end = clock();
	//double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	//cout << "Time taken by program is : " << fixed << time_taken;
	//cout << " sec " << endl;

		//Restore the original cout stream buffer
	 std::cout.rdbuf(original_cout_buf);
	 // Close the output file
	 output_file.close();
	return 0;
}