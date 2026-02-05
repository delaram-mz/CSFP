#define NUMEXPR 2

class NAND2_X1_params
{
public:
	static const int numInp{2};
	static const int numExpr{ NUMEXPR };
	static bool inpPolar[NUMEXPR];
	static double fall_transition_A1_index1[7];
	static double fall_transition_A1_index2[7];
	static double fall_transition[NUMEXPR][7][7];
	static double rise_transition[NUMEXPR][7][7];
	static double fall_power[NUMEXPR][7][7];
	static double rise_power[NUMEXPR][7][7];
	static double fall_delay[NUMEXPR][7][7];
	static double rise_delay[NUMEXPR][7][7];
	static double input_cap[2];
	static double fanout_length[11];
	static double output_cap;
	static double base_capacitance;
	static int inpExprs[numExpr][numInp];
};