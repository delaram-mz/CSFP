
# Prior to synthesis
    a. remove <VDD> and <GND> ports from the netlist
    b. insert simple <dff> module description (instead of the PMOS, NMOS one)


# 1- Synthesize with <Yosys> to *mycells.lib*
    a. read_verilog benchmark.v
    b. synth -auto-top
    c. dfflibmap -liberty mycells.lib
    d. abc -liberty mycells.lib
    e. write_verilog -noattr benchmark_netlist.v
##    => results in: *benchmark_netlist.v*

# 2- Scan Chain Insertion via <SC_Inserter.ipynb>
    a. replace dff with scan flip-flops
    b. include "rst, Si, So, PbarS" to module ports: 
        input rst;
        input Si;
        output So;
        input PbarS;
    c. Using the <SC_Inserter.ipynb> insert the scan chain
##    => results in: *benchmark_netlist_scanInserted.v*

# 3- testable Benchmark
    a. set the PI_size, PO_size and other parameters
    b. instance the scan inserted benchmark and connect DUT_In and DUT_OUT

ff