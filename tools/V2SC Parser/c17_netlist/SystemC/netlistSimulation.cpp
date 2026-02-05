#include "netlistSimulationTB.h"

int sc_main(int argc, char** argv)
{
	powerGatesNetlistTB* TOP = new powerGatesNetlistTB("netlistSimulationTB_instance");
	clock_t start, end;
	start = clock();
	sc_start(400000, SC_NS);
	end = clock();
	double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
	cout << "Time taken by program is : " << fixed << time_taken;
	cout << " sec " << endl;
	return 0;
}