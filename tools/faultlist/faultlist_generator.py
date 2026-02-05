#!/usr/bin/env python3
import sys
import re

# -------------------------------
# Collapsed fault models
# -------------------------------
FAULT_MODELS = {
    "NAND": lambda inst: [
        f"s@0 {inst}.A",
        f"s@0 {inst}.B",
        f"s@1 {inst}.Y",
    ],
    "NOR": lambda inst: [
        f"s@1 {inst}.A",
        f"s@1 {inst}.B",
        f"s@0 {inst}.Y",
    ],
    "NOT": lambda inst: [
        f"s@0 {inst}.A",
        f"s@1 {inst}.A",
    ],
}

# Matches:
#   NAND _4_ (
GATE_DECL_RE = re.compile(r'\s*(NAND|NOR|NOT)\s+(\S+)\s*\(')

def parse_verilog_netlist(path):
    gates = []

    with open(path) as f:
        lines = list(f)

    i = 0
    while i < len(lines):
        line = lines[i]

        m = GATE_DECL_RE.match(line)
        if not m:
            i += 1
            continue

        gate_type, inst_name = m.groups()
        gates.append((gate_type.upper(), inst_name))

        # Skip until end of gate instantiation
        while i < len(lines) and ");" not in lines[i]:
            i += 1
        i += 1

    return gates

def generate_collapsed_faults(gates):
    faults = []
    for gate_type, inst in gates:
        if gate_type not in FAULT_MODELS:
            continue
        faults.extend(FAULT_MODELS[gate_type](inst))
    return sorted(set(faults))

# -------------------------------
# Main
# -------------------------------
if __name__ == "__main__":
    if len(sys.argv) != 3:
        print("Usage: collapsed_faultlist.py <netlist.v> <faultlist.txt>")
        sys.exit(1)

    netlist = sys.argv[1]
    outfile = sys.argv[2]

    gates = parse_verilog_netlist(netlist)
    faults = generate_collapsed_faults(gates)

    with open(outfile, "w") as f:
        for fault in faults:
            f.write(fault + "\n")

    print(f"[OK] Found {len(gates)} gates")
    print(f"[OK] Generated {len(faults)} collapsed stuck-at faults")
