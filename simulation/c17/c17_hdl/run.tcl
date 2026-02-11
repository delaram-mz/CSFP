# Auto-generated ModelSim project script
# Project: c17_hdl
# Top: SerialFS_TB
# VHDL standard: 2008

set TOP SerialFS_TB

# Source directories (absolute paths)
set SRC_DIRS [list     {/home/fmohammadzad/CSFP/simulation/c17/src} \n
]

# Create/open project
file mkdir "/home/fmohammadzad/CSFP/simulation/c17/c17_hdl"
vlib work
vmap work work
project new . simulation work modelsim.ini 0
project open simulation

# Add HDL files from directories
foreach dir $SRC_DIRS {
    if {[file isdirectory $dir]} {
        foreach f [glob -nocomplain "$dir/*.{v,sv,vhd,vhdl}"] {
            project addfile $f
        }
    } else {
        puts "Warning: directory $dir does not exist"
    }
}

# Compile all files
project calculateorder
project compileall

do mydo.do SerialFS_TB

# # Run simulation
# vsim work.$TOP
# add wave -r /*
# run -all
quit
