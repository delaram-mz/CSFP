#!/usr/bin/env python3
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parents[1]

VERILOG_DIR = ROOT / "benchmarks/verilog"
SYNTH_DIR   = ROOT / "benchmarks/synth"

RUN_YOSYS = ROOT / "tools/yosys/run_yosys.py"
RUN_FAULT = ROOT / "tools/faultlist/faultlist_generator.py"

def run_cmd(cmd, log_file=None):
    print("[CMD]", " ".join(map(str, cmd)))
    if log_file:
        with open(log_file, "w") as f:
            subprocess.run(cmd, stdout=f, stderr=subprocess.STDOUT, check=True)
    else:
        subprocess.run(cmd, check=True)

def run_benchmark(bench):
    print(f"\n=== Running benchmark: {bench} ===")

    out_dir = SYNTH_DIR / bench
    out_dir.mkdir(parents=True, exist_ok=True)

    netlist = out_dir / f"{bench}_netlist.v"
    faultlist = out_dir / f"{bench}_faults.txt"
    yosys_log = out_dir / "yosys.log"

    # 1️⃣ Synthesis
    run_cmd(
        ["python3", RUN_YOSYS, bench],
        log_file=yosys_log
    )

    if not netlist.exists():
        raise RuntimeError(f"Netlist not generated for {bench}")

    # 2️⃣ Fault list generation
    run_cmd([
        "python3",
        RUN_FAULT,
        netlist,
        faultlist
    ])

    print(f"[OK] {bench} completed")

def main():
    if len(sys.argv) == 2:
        benches = [sys.argv[1]]
    else:
        benches = [d.name for d in VERILOG_DIR.iterdir() if d.is_dir()]

    for bench in sorted(benches):
        run_benchmark(bench)

if __name__ == "__main__":
    main()
