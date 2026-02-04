#include "TB.h"

void s820_netlist_scanInserted_TB::testPtr()
{
	while (true)
	{
		NbarT.write(false);
		newTV.write(SC_LOGIC_0);
		wait(0, SC_NS);
		testData1.write({SC_LOGIC_0, false, {}});
		testData2.write({SC_LOGIC_0, false, {}});
		testData3.write({SC_LOGIC_0, false, {}});
		testData4.write({SC_LOGIC_0, false, {}});
		testData5.write({SC_LOGIC_0, false, {}});
		testData6.write({SC_LOGIC_0, false, {}});
		testData7.write({SC_LOGIC_0, false, {}});
		testData8.write({SC_LOGIC_0, false, {}});
		testData9.write({SC_LOGIC_0, false, {}});
		testData10.write({SC_LOGIC_0, false, {}});
		testData11.write({SC_LOGIC_0, false, {}});
		testData12.write({SC_LOGIC_0, false, {}});
		testData13.write({SC_LOGIC_0, false, {}});
		testData14.write({SC_LOGIC_0, false, {}});
		testData15.write({SC_LOGIC_0, false, {}});
		testData16.write({SC_LOGIC_0, false, {}});
		testData17.write({SC_LOGIC_0, false, {}});
		testData18.write({SC_LOGIC_0, false, {}});
		testData19.write({SC_LOGIC_0, false, {}});
		testData20.write({SC_LOGIC_0, false, {}});
		testData21.write({SC_LOGIC_0, false, {}});
		testData22.write({SC_LOGIC_0, false, {}});
		wait(100, SC_NS);
		for (int testVecidx = 0; testVecidx < testVecs.size(); testVecidx++)
			{
			if (testVecs[testVecidx][0] == '0')
				testData1.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][0] == '1')
				testData1.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][1] == '0')
				testData2.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][1] == '1')
				testData2.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][2] == '0')
				testData3.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][2] == '1')
				testData3.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][3] == '0')
				testData4.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][3] == '1')
				testData4.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][4] == '0')
				testData5.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][4] == '1')
				testData5.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][5] == '0')
				testData6.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][5] == '1')
				testData6.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][6] == '0')
				testData7.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][6] == '1')
				testData7.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][7] == '0')
				testData8.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][7] == '1')
				testData8.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][8] == '0')
				testData9.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][8] == '1')
				testData9.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][9] == '0')
				testData10.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][9] == '1')
				testData10.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][10] == '0')
				testData11.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][10] == '1')
				testData11.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][11] == '0')
				testData12.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][11] == '1')
				testData12.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][12] == '0')
				testData13.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][12] == '1')
				testData13.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][13] == '0')
				testData14.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][13] == '1')
				testData14.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][14] == '0')
				testData15.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][14] == '1')
				testData15.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][15] == '0')
				testData16.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][15] == '1')
				testData16.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][16] == '0')
				testData17.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][16] == '1')
				testData17.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][17] == '0')
				testData18.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][17] == '1')
				testData18.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][18] == '0')
				testData19.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][18] == '1')
				testData19.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][19] == '0')
				testData20.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][19] == '1')
				testData20.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][20] == '0')
				testData21.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][20] == '1')
				testData21.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][21] == '0')
				testData22.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][21] == '1')
				testData22.write({SC_LOGIC_1, false, {}});

		NbarT.write(true);
		wait(1, SC_NS);
		newTV.write(SC_LOGIC_1);
		wait(100, SC_NS);
		newTV.write(SC_LOGIC_0);
		wait(100, SC_NS);
		}
		wait();
	}
}
std::vector<std::string> s820_netlist_scanInserted_TB::read_testPtr(std::string filename)
{
	std::vector<std::string> selected_testVec;
	std::ifstream file(filename);
	if (!file.is_open()) {
		std::cerr << "Error opening file!" << std::endl;	
	}
	std::string line;
	std::vector<std::string> lines;
	while (std::getline (file, line))
	{
		lines.push_back(line);
	}
	return lines;
}
void s820_netlist_scanInserted_TB::endOfSim()
{
	while (true)
{
		end.write(SC_LOGIC_0);
		wait(3900000, SC_NS);
		end.write(SC_LOGIC_1);
		wait(15000, SC_NS);
		wait();
	}
}