#include "systemc.h"

class fs_logic {

public:
	sc_logic logicVal;
    bool faulty;
	std::vector<std::vector<int>> FAULTS;
	
	fs_logic(sc_logic _logicVal = sc_logic_0, bool _faulty = false, std::vector<std::vector<int>> _FAULTS={}) {
		
        logicVal = _logicVal;
        faulty = _faulty;
		FAULTS = _FAULTS;
	}

	inline bool operator == (const fs_logic& rhs) const {
		return (rhs.logicVal == logicVal && rhs.faulty == faulty && rhs.FAULTS == FAULTS );
    }

	inline fs_logic& operator = (const fs_logic& rhs) {
		logicVal = rhs.logicVal;
        faulty = rhs.faulty;
		FAULTS = rhs.FAULTS;

		return *this;
	}

	inline friend void sc_trace(sc_trace_file* tf, const fs_logic& v,
		const std::string& NAME) {
		sc_trace(tf, v.logicVal, NAME + ".logicVal");
		sc_trace(tf, v.faulty, NAME + ".faulty");
	}

	inline friend ostream& operator << (ostream& os, fs_logic const& v) {
		os << "(" << v.logicVal << "," << std::boolalpha << v.faulty << ")";
        return os;
	}

};