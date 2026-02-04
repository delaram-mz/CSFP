#include "systemc.h"

class fs_logic {

public:
	sc_logic lv;
    bool faulty;
	std::vector<std::vector<int>> FAULTS;


	// std::vector<int> id_vec;
	// std::vector<int> Fnum_vec;
	// int id;

	// constructor
	// fs_logic(sc_logic _lv = sc_logic_0, double _fv = 0.0, double _rv = 0.0, int _gateNumOut = -1) {
	// fs_logic(sc_logic _lv = sc_logic_0, bool _faulty = false, int _id=-1, std::vector<int> _id_vec={}, std::vector<int> _Fnum_vec={}) {
	fs_logic(sc_logic _lv = sc_logic_0, bool _faulty = false, std::vector<std::vector<int>> _FAULTS={}) {
		
        lv = _lv;
        faulty = _faulty;
		// id = _id;
		// id_vec = _id_vec;
		// Fnum_vec = _Fnum_vec;
		FAULTS = _FAULTS;
	}

	inline bool operator == (const fs_logic& rhs) const {
		// return (rhs.lv == lv && rhs.fv == fv && rhs.rv == rv && rhs.gateNumOut == gateNumOut);
		// return (rhs.lv == lv && rhs.faulty == faulty && rhs.id == id && rhs.id_vec == id_vec && rhs.Fnum_vec==Fnum_vec);
		return (rhs.lv == lv && rhs.faulty == faulty && rhs.FAULTS == FAULTS );
    }

	inline fs_logic& operator = (const fs_logic& rhs) {
		lv = rhs.lv;
        faulty = rhs.faulty;
		// id = rhs.id;
		// id_vec = rhs.id_vec;
		// Fnum_vec= rhs.Fnum_vec;
		FAULTS = rhs.FAULTS;

		return *this;
	}

	inline friend void sc_trace(sc_trace_file* tf, const fs_logic& v,
		const std::string& NAME) {
		sc_trace(tf, v.lv, NAME + ".lv");
		sc_trace(tf, v.faulty, NAME + ".faulty");
		// sc_trace(tf, v.id, NAME + ".id");

		//no need to trace vectors


		// sc_trace(tf, v.fv, NAME + ".fv");
		// sc_trace(tf, v.rv, NAME + ".rv");
		// sc_trace(tf, v.gateNumOut, NAME + ".gateNumOut");
	}

	inline friend ostream& operator << (ostream& os, fs_logic const& v) {
		// os << "(" << v.lv << "," << std::boolalpha << v.fv << "," << std::boolalpha << v.rv << ", " << std::boolalpha << v.gateNumOut << ")";
		os << "(" << v.lv << "," << std::boolalpha << v.faulty << ")";
		// No need to cout vectors
        return os;
	}

};