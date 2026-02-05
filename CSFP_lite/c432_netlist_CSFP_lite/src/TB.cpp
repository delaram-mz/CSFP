#include "TB.h"

void c432_netlist_TB::testPtr()
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
		
		wait(1, SC_NS);
		
		for (std::vector<std::vector<int> >::size_type testVecidx = 0; testVecidx < testVecs.size(); testVecidx++)
			{
					// apply_lv(testVecs[testVecidx]);

				
			// newTV.write(SC_LOGIC_0);
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

		NbarT.write(true);
		newTV.write(SC_LOGIC_1);
		wait(1, SC_NS);
		

		// wait(1, SC_NS);
		newTV.write(SC_LOGIC_0);
		wait(0, SC_NS);
		}
		wait();
	}
}
std::vector<std::string> c432_netlist_TB::read_testPtr(std::string filename)
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
void c432_netlist_TB::endOfSim()
{
	while (true)
{
		end.write(SC_LOGIC_0);
		// wait(39000000, SC_NS);
		// end.write(SC_LOGIC_1);
		// wait(1500, SC_NS);
		wait();
	}
}

// void c432_netlist_TB::apply_lv(const sc_lv<36>& lv) {

// testData1.write({lv[0], false, {}});
// testData2.write({lv[1], false, {}});
// testData3.write({lv[2], false, {}});
// testData4.write({lv[3], false, {}});
// testData5.write({lv[4], false, {}});
// testData6.write({lv[5], false, {}});
// testData7.write({lv[6], false, {}});
// testData8.write({lv[7], false, {}});
// testData9.write({lv[8], false, {}});
// testData10.write({lv[9], false, {}});
// testData11.write({lv[10], false, {}});
// testData12.write({lv[11], false, {}});
// testData13.write({lv[12], false, {}});
// testData14.write({lv[13], false, {}});
// testData15.write({lv[14], false, {}});
// testData16.write({lv[15], false, {}});
// testData17.write({lv[16], false, {}});
// testData18.write({lv[17], false, {}});
// testData19.write({lv[18], false, {}});
// testData20.write({lv[19], false, {}});
// testData21.write({lv[20], false, {}});
// testData22.write({lv[21], false, {}});
// testData23.write({lv[22], false, {}});
// testData24.write({lv[23], false, {}});
// testData25.write({lv[24], false, {}});
// testData26.write({lv[25], false, {}});
// testData27.write({lv[26], false, {}});
// testData28.write({lv[27], false, {}});
// testData29.write({lv[28], false, {}});
// testData30.write({lv[29], false, {}});
// testData31.write({lv[30], false, {}});
// testData32.write({lv[31], false, {}});
// testData33.write({lv[32], false, {}});
// testData34.write({lv[33], false, {}});
// testData35.write({lv[34], false, {}});
// testData36.write({lv[35], false, {}});

// };