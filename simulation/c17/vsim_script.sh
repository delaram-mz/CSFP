#!/bin/bash

# ---- Arguments ----
PROJECT_NAME=$1
SRC_DIR=$2
TOP_MODULE=$3

## ---- ModelSim paths ----
## Update this if modelsim binary is not in PATH
#MODELSIM_BIN=~/intelFPGA/18.1/modelsim_ase/linuxaloem

# ---- Check arguments ----
if [ -z "$PROJECT_NAME" ] || [ -z "$SRC_DIR" ] || [ -z "$TOP_MODULE" ]; then
  echo "Usage: $0 <project_name> <source_dir> <top_module>"
  exit 1
fi

# ---- Create project directory if not exists ----
mkdir -p $PROJECT_NAME/work
cd $PROJECT_NAME

# ---- Initialize ModelSim project (only if not existing) ----
if [ ! -f "$PROJECT_NAME.mpf" ]; then
  echo "Creating new ModelSim project: $PROJECT_NAME"
  vsim -do "
    project new $PROJECT_NAME;
    project open $PROJECT_NAME;
    project save;
    quit -f;
  " > /dev/null 2>&1
fi

# ---- Compile source files ----
echo "Compiling source files from $SRC_DIR ..."
for file in $SRC_DIR/*; do
  ext="${file##*.}"
  if [ "$ext" = "vhd" ] || [ "$ext" = "vhdl" ]; then
    vcom -work work $file || exit 1
  elif [ "$ext" = "v" ] || [ "$ext" = "sv" ]; then
    vlog -work work $file || exit 1
  fi
done

# ---- Generate DO script for simulation ----
DO_FILE=run_sim.do
cat <<EOF > $DO_FILE
# ModelSim DO file - auto-generated
vcd file $TOP_MODULE.vcd
vcd add -r /*
run -all
vcd flush
quit
EOF

# ---- Run simulation ----
echo "Running simulation for top module: $TOP_MODULE"
vsim -c work.$TOP_MODULE -do $DO_FILE

# ---- Post-simulation message ----
if [ -f "$TOP_MODULE.vcd" ]; then
  echo "Simulation completed successfully."
  echo "Waveform dumped to: $(pwd)/$TOP_MODULE.vcd"
else
  echo "Simulation finished, but no VCD file was generated."
fi