*** Steps to Perform Fault Estimation ***

# 1- Synthesize with <Yosys> to *mycells.lib*
    * in sequential benchmarks change the DFF description form transistor-level to behavioral one
    a. read_verilog benchmark.v
    b. synth -auto-top
    c. dfflibmap -liberty mycells.lib
    d. abc -liberty mycells.lib
    e. write_verilog -noattr benchmark_netlist.v
##    => results in: *benchmark_netlist.v*

# 2- Generate FaultList with <Tetramax> in *centos*
    a. Synopsys     (enables Synopsys tools)
    b. tmax         (launches Tetramax gui)
        i.      read_verilog mycells.v
        ii.     read_verilog benchmark_netlist.v
        iii.    run_build_model
        iv.     run_drc
        v.      set_faults -model stuck
        vi.     add_faults -all
        vii.    export fault list from toolbar: fautls->report faults->export to file

        write_faults c499_fault_collapsed -replace -all -collapsed

# 3- Perform Fault Simulation in *Modelsim*
    a. Modify SerialFS_TB.sv to the current CUT (chane input/output, instance FUT and GUT, ...)
    b. Generate random test patterns via <TPG.ipynb>
        i. set *TestVectorSize* to number of the PIs
        ii. set *testSetSize* as desired
    c. create Modelsim project
        i. place the *faultInjection.tcl*, *faultlist.flt*, *testPatters.txt*, and *mydo.do* at work directory
    d. modelsim command: do mydo.do

# 4- GIC Calculation in *SystemC*
    #a. Using <V2SC_Parser> generate the following files:
        i.      netlist.h
        ii.     netlist.cpp
        iii.    TB.h
        iv.     TB.cpp
        v.      simulation.cpp
    b. Simulate the circuit in systemC along with *testPatters.txt* (recomended: run it on linux)
##    => results in: *GIC_logfile.txt* 

# 5- Partial Fault Simualtion in ModelSim
    a. Similar to <part3> but for a limited number of TVs
##    => results in: *benchmark_fine.csv* : <train_data>   



atalanta-M c1355.pat -P c1355.rep c1355.bench

atalanta-M -S -t c1908.pat -P c1908.rep -U c1908.ud -v c1908.bench





