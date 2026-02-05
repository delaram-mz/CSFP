repo for the CSFP project

structure is: 
├── CSFP
│   ├── GIC             // sample GIC impelmentation
│   ├── README.md       
│   ├── benchmarks      // combinational benchmarks with synthesis and faultlist results
│   ├── build           // build directory for systemC
│   ├── config.yaml 
│   ├── evaluation      // verilog and sysC modeling comparison
│   ├── old_files       // all the files to be sorted
│   ├── scripts         // automation scripts
│   ├── systemc         // systmeC implementation
│   └── tools           // python files for intermeadite transforms

Flow should be sth like this:
- syntesize netlist using yosys to mycells.lib                                  [done]
- for the synthesized desgin extract the collapsed (to some extent) fault list  [done]
- generate the systemC model, annotating the gates with SFs
    - GIC model
    - CSFP model
- run systemC simulation
- run verilog simulation for evaluation and verification
