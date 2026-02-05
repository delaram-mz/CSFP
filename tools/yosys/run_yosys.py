#!/usr/bin/env python3
import argparse
import cmd
import subprocess
from pathlib import Path
import sys

PROJECT_ROOT = Path(__file__).resolve().parents[2]

BENCH_VERILOG = PROJECT_ROOT / "benchmarks/verilog"
YOSYS_SCRIPT  = PROJECT_ROOT / "benchmarks/yosys/synth.ys"
SYNTH_DIR     = PROJECT_ROOT / "benchmarks/synth"
LIBERTY       = PROJECT_ROOT / "benchmarks/yosys/mycells.lib"


def run_yosys(bench_name):
    in_v = BENCH_VERILOG / bench_name / f"{bench_name}.v"
    out_dir = SYNTH_DIR / bench_name

    if not in_v.exists():
        print(f"[ERROR] Verilog file not found: {in_v}")
        sys.exit(1)

    out_dir.mkdir(parents=True, exist_ok=True)

    cmd = [
        "yosys",
        "-p", f"""
            read_verilog -sv {in_v};
            chparam -set hide_name 0 [all_cells];
            read_liberty -lib {LIBERTY};

            hierarchy -top {bench_name};
            proc;
            opt;
            synth -top {bench_name};

            dfflibmap -liberty {LIBERTY};
            abc -liberty {LIBERTY};

            opt_clean;
            stat > {out_dir}/report.txt
            write_verilog -noattr {out_dir}/{bench_name}_netlist.v
            write_json {out_dir}/{bench_name}.json
        """
    ]

    print("[INFO] Running Yosys:")
    print(" ".join(map(str, cmd)))

    result = subprocess.run(cmd, capture_output=True, text=True)

    # Save yosys log
    log_file = out_dir / "yosys.log"
    log_file.write_text(result.stdout + result.stderr)

    if result.returncode != 0:
        print("[ERROR] Yosys failed. See log:")
        print(log_file)
        sys.exit(result.returncode)

    print(f"[OK] Synthesis completed: {bench_name}")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="Run Yosys synthesis")
    parser.add_argument("benchmark", help="Benchmark name (without .v)")
    args = parser.parse_args()

    run_yosys(args.benchmark)
