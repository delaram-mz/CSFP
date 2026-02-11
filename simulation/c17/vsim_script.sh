#!/usr/bin/env bash
set -e

####################################
# Usage:
# ./run_sim_project.sh <project_name> <top_module> <src_dir1> [src_dir2 ...] [--gui]
####################################

if [ "$#" -lt 3 ]; then
    echo "Usage:"
    echo "  $0 <project_name> <top_module> <src_dir1> [src_dir2 ...] [--gui]"
    exit 1
fi

# Parameters
PROJECT_NAME="$1"
TOP="$2"
shift 2

MODE="batch"
SRC_DIRS=()

for arg in "$@"; do
    if [ "$arg" == "--gui" ]; then
        MODE="gui"
    else
        SRC_DIRS+=("$arg")
    fi
done

# Absolute paths
ROOT_DIR=$(pwd)
PROJ_DIR="$ROOT_DIR/$PROJECT_NAME"
SIF_FILES_DIR="$ROOT_DIR/sim_files"

TCL_SCRIPT="$PROJ_DIR/run.tcl"

# Reset simulation directory
rm -rf "$PROJ_DIR" && mkdir -p "$PROJ_DIR"

mkdir -p "$PROJ_DIR"

cp "$ROOT_DIR/resources/modelsim.ini" "$PROJ_DIR/"

# copy simulation files to the simulation directory
cp "$SIF_FILES_DIR/c17_faultlist.flt" "$PROJ_DIR/"
cp "$SIF_FILES_DIR/faultInjection.tcl" "$PROJ_DIR/"
cp "$SIF_FILES_DIR/mydo.do" "$PROJ_DIR/"
cp "$SIF_FILES_DIR/testPatterns.txt" "$PROJ_DIR/"

mkdir -p "$PROJ_DIR/faults"


####################################
# Generate TCL script
####################################
cat > "$TCL_SCRIPT" <<EOF
# Auto-generated ModelSim project script
# Project: $PROJECT_NAME
# Top: $TOP
# VHDL standard: 2008

set TOP $TOP

# Source directories (absolute paths)
set SRC_DIRS [list \
$(for d in "${SRC_DIRS[@]}"; do printf "    {%s} \\\n" "$d"; done)
]

# Create/open project
file mkdir "$PROJ_DIR"
vlib work
vmap work work
project new . simulation work modelsim.ini 0
project open simulation

# Add HDL files from directories
foreach dir \$SRC_DIRS {
    if {[file isdirectory \$dir]} {
        foreach f [glob -nocomplain "\$dir/*.{v,sv,vhd,vhdl}"] {
            project addfile \$f
        }
    } else {
        puts "Warning: directory \$dir does not exist"
    }
}

# Compile all files
project calculateorder
project compileall

do mydo.do SerialFS_TB

# # Run simulation
# vsim work.\$TOP
# add wave -r /*
# run -all
quit
EOF

####################################
# Run ModelSim
####################################
cd "$PROJ_DIR"

if [ "$MODE" == "gui" ]; then
    vsim -do run.tcl
else
    vsim -c -do run.tcl
fi
