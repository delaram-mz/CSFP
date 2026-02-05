#!/usr/bin/env bash
set -e

# Absolute path to project root
ROOT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")/.." && pwd)"

BENCH_DIR="$ROOT_DIR/benchmarks/verilog"

for bench_path in "$BENCH_DIR"/*; do
    bench="$(basename "$bench_path")"

    echo "=============================="
    echo " Running benchmark: $bench"
    echo "=============================="

    python3 "$ROOT_DIR/tools/run_flow.py" "$bench"
done