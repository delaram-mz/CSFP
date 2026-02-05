#include "TB.h"

void c3540_netlist_TB::testPtr()
{
	while (true)
	{
		NbarT.write(false);
		newTV.write(SC_LOGIC_0);
		wait(0, SC_FS);
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
		testData23.write({SC_LOGIC_0, false, {}});
		testData24.write({SC_LOGIC_0, false, {}});
		testData25.write({SC_LOGIC_0, false, {}});
		testData26.write({SC_LOGIC_0, false, {}});
		testData27.write({SC_LOGIC_0, false, {}});
		testData28.write({SC_LOGIC_0, false, {}});
		testData29.write({SC_LOGIC_0, false, {}});
		testData30.write({SC_LOGIC_0, false, {}});
		testData31.write({SC_LOGIC_0, false, {}});
		testData32.write({SC_LOGIC_0, false, {}});
		testData33.write({SC_LOGIC_0, false, {}});
		testData34.write({SC_LOGIC_0, false, {}});
		testData35.write({SC_LOGIC_0, false, {}});
		testData36.write({SC_LOGIC_0, false, {}});
		testData37.write({SC_LOGIC_0, false, {}});
		testData38.write({SC_LOGIC_0, false, {}});
		testData39.write({SC_LOGIC_0, false, {}});
		testData40.write({SC_LOGIC_0, false, {}});
		testData41.write({SC_LOGIC_0, false, {}});
		testData42.write({SC_LOGIC_0, false, {}});
		testData43.write({SC_LOGIC_0, false, {}});
		testData44.write({SC_LOGIC_0, false, {}});
		testData45.write({SC_LOGIC_0, false, {}});
		testData46.write({SC_LOGIC_0, false, {}});
		testData47.write({SC_LOGIC_0, false, {}});
		testData48.write({SC_LOGIC_0, false, {}});
		testData49.write({SC_LOGIC_0, false, {}});
		testData50.write({SC_LOGIC_0, false, {}});
		wait(1, SC_FS);
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

			if (testVecs[testVecidx][22] == '0')
				testData23.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][22] == '1')
				testData23.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][23] == '0')
				testData24.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][23] == '1')
				testData24.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][24] == '0')
				testData25.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][24] == '1')
				testData25.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][25] == '0')
				testData26.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][25] == '1')
				testData26.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][26] == '0')
				testData27.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][26] == '1')
				testData27.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][27] == '0')
				testData28.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][27] == '1')
				testData28.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][28] == '0')
				testData29.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][28] == '1')
				testData29.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][29] == '0')
				testData30.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][29] == '1')
				testData30.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][30] == '0')
				testData31.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][30] == '1')
				testData31.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][31] == '0')
				testData32.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][31] == '1')
				testData32.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][32] == '0')
				testData33.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][32] == '1')
				testData33.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][33] == '0')
				testData34.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][33] == '1')
				testData34.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][34] == '0')
				testData35.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][34] == '1')
				testData35.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][35] == '0')
				testData36.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][35] == '1')
				testData36.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][36] == '0')
				testData37.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][36] == '1')
				testData37.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][37] == '0')
				testData38.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][37] == '1')
				testData38.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][38] == '0')
				testData39.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][38] == '1')
				testData39.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][39] == '0')
				testData40.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][39] == '1')
				testData40.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][40] == '0')
				testData41.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][40] == '1')
				testData41.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][41] == '0')
				testData42.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][41] == '1')
				testData42.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][42] == '0')
				testData43.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][42] == '1')
				testData43.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][43] == '0')
				testData44.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][43] == '1')
				testData44.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][44] == '0')
				testData45.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][44] == '1')
				testData45.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][45] == '0')
				testData46.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][45] == '1')
				testData46.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][46] == '0')
				testData47.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][46] == '1')
				testData47.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][47] == '0')
				testData48.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][47] == '1')
				testData48.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][48] == '0')
				testData49.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][48] == '1')
				testData49.write({SC_LOGIC_1, false, {}});

			if (testVecs[testVecidx][49] == '0')
				testData50.write({SC_LOGIC_0, false, {}});
			else if (testVecs[testVecidx][49] == '1')
				testData50.write({SC_LOGIC_1, false, {}});

		NbarT.write(true);
		newTV.write(SC_LOGIC_1);
		wait(1, SC_FS);
		newTV.write(SC_LOGIC_0);
		wait(0, SC_FS);
		}
		wait();
	}
}
std::vector<std::string> c3540_netlist_TB::read_testPtr(std::string filename)
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
void c3540_netlist_TB::endOfSim()
{
	while (true)
{
		end.write(SC_LOGIC_0);
		// wait(3900000, SC_FS);
		// end.write(SC_LOGIC_1);
		// wait(15000, SC_FS);
		wait();
	}
}