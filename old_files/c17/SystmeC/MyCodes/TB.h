#include "netlist.h"
SC_MODULE(c17_netlist_TB)
{

	sc_signal <sc_logic> testData1, testData2, testData3, testData4, testData5;
	sc_signal <sc_logic> testRes1, testRes2;

	// double inptr;

	//sc_signal<sc_logic> reset, clock;
	// sprocketRate = sc_time(102, SC_NS);
	c17_netlist* UUT;

	SC_CTOR(c17_netlist_TB)
	{

		//inptr = 0.00;

		UUT = new c17_netlist("_instance");
		UUT->N1(testData1);
		UUT->N2(testData2);
		UUT->N3(testData3);
		UUT->N6(testData4);
		UUT->N7(testData5);
		UUT->N22(testRes1);
		UUT->N23(testRes2);

		//SC_THREAD(clockGeneration);
		//SC_THREAD(resetAssertion);
		SC_THREAD(testData1Waveform);
		SC_THREAD(testData2Waveform);
		SC_THREAD(testData3Waveform);
		SC_THREAD(testData4Waveform);
		SC_THREAD(testData5Waveform);

	}
	//void clockGeneration();
	//void resetAssertion();
	void testData1Waveform();
	void testData2Waveform();
	void testData3Waveform();
	void testData4Waveform();
	void testData5Waveform();
};
