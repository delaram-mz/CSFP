#include "netlistSimulationTB.h"
void powerGatesNetlistTB::clockGeneration()
{
	while (true)
	{
		wait(17, SC_NS);
		clock = SC_LOGIC_0;
		wait(17, SC_NS);
		clock = SC_LOGIC_1;
	}
}
void powerGatesNetlistTB::resetAssertion()
{
	while (true)
	{
		wait(37, SC_NS);
		reset = SC_LOGIC_0;
		wait(59, SC_NS);
		reset = SC_LOGIC_1;
		wait(59, SC_NS);
		reset = SC_LOGIC_0;
		wait();
	}
}void powerGatesNetlistTB::testData1Waveform()
{
	while (true)
{
		testData1.write({ SC_LOGIC_0, inptr , inptr , 0.5 });
		wait(1000, SC_NS);
		testData1.write({ SC_LOGIC_1, inptr , inptr , 0.5 });
		wait(15000, SC_NS);
		wait();
	}
}
void powerGatesNetlistTB::testData2Waveform()
{
	while (true)
{
		testData2.write({ SC_LOGIC_0, inptr , inptr , 0.5 });
		wait(1000, SC_NS);
		testData2.write({ SC_LOGIC_1, inptr , inptr , 0.5 });
		wait(15000, SC_NS);
		wait();
	}
}
void powerGatesNetlistTB::testData3Waveform()
{
	while (true)
{
		testData3.write({ SC_LOGIC_0, inptr , inptr , 0.5 });
		wait(1000, SC_NS);
		testData3.write({ SC_LOGIC_1, inptr , inptr , 0.5 });
		wait(15000, SC_NS);
		wait();
	}
}
void powerGatesNetlistTB::testData4Waveform()
{
	while (true)
{
		testData4.write({ SC_LOGIC_0, inptr , inptr , 0.5 });
		wait(1000, SC_NS);
		testData4.write({ SC_LOGIC_1, inptr , inptr , 0.5 });
		wait(15000, SC_NS);
		wait();
	}
}
void powerGatesNetlistTB::testData5Waveform()
{
	while (true)
{
		testData5.write({ SC_LOGIC_0, inptr , inptr , 0.5 });
		wait(1000, SC_NS);
		testData5.write({ SC_LOGIC_1, inptr , inptr , 0.5 });
		wait(15000, SC_NS);
		wait();
	}
}
