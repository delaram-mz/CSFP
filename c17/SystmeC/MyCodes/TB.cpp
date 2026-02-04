#include "TB.h"
//void c17_netlist_TB::clockGeneration()
//{
//	while (true)
//	{
//		wait(17, SC_NS);
//		clock = SC_LOGIC_0;
//		wait(17, SC_NS);
//		clock = SC_LOGIC_1;
//	}
//}
//void c17_netlist_TB::resetAssertion()
//{
//	while (true)
//	{
//		wait(37, SC_NS);
//		reset = SC_LOGIC_0;
//		wait(59, SC_NS);
//		reset = SC_LOGIC_1;
//		wait(59, SC_NS);
//		reset = SC_LOGIC_0;
//		wait();
//	}
// }
void c17_netlist_TB::testData1Waveform()
{
	while (true)
{
		testData1.write(SC_LOGIC_0);
		wait(100, SC_NS);
		// testData1.write(SC_LOGIC_1);
		// wait(15000, SC_NS);
		wait();
	}
}
void c17_netlist_TB::testData2Waveform()
{
	while (true)
{
		testData2.write(SC_LOGIC_0);
		wait(100, SC_NS);
		// testData2.write(SC_LOGIC_1);
		// wait(15000, SC_NS);
		wait();
	}
}
void c17_netlist_TB::testData3Waveform()
{
	while (true)
{
		testData3.write(SC_LOGIC_0);
		wait(100, SC_NS);
		// testData3.write(SC_LOGIC_1);
		// wait(15000, SC_NS);
		wait();
	}
}
void c17_netlist_TB::testData4Waveform()
{
	while (true)
{
		testData4.write(SC_LOGIC_0);
		wait(100, SC_NS);
		// testData4.write(SC_LOGIC_1);
		// wait(15000, SC_NS);
		wait();
	}
}
void c17_netlist_TB::testData5Waveform()
{
	while (true)
{
		testData5.write(SC_LOGIC_0);
		wait(100, SC_NS);
		// testData5.write(SC_LOGIC_1);
		// wait(15000, SC_NS);
		wait();
	}
}
