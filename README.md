repo for the CSFP project

structure is: 
```
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
```

Flow should be sth like this:
- syntesize netlist using yosys to mycells.lib                                  [done]
- for the synthesized desgin extract the collapsed (to some extent) fault list  [done]
- generate the systemC model, annotating the gates with SFs     
    - GIC model                                                                 [done]
    - CSFP model    
- run systemC simulation
- run verilog simulation for evaluation and verification

-- -- 
To run the flow for all the benchmarks:
in the root directory, run: 
```bash
bash scripts/run_all.sh
```

This runs the necessary python scripts for synthesis, fault extraction, and systemC model generation.

The following scripts run sequentially: 
- `tools/yosys/run_yosys.py`: this one calls yosys to synthesize the benchmark to the `mycells.lib` and writes the synthesized netlist into `benchmarks/synth/<benchmark_name>` directory
- `tools/faultlist/faultlist_generator.py`: this one analyzes the genrated netlist and produces the stuck-at faullist into `benchmarks/synth/<benchmark_name>` directory

[TO_FIX]
- we should currently run the `tools/v2sc_comb.ipynb` script manually to generate all the systemC files required for the simulation. 

Having all the files availble in the correct direcory, we proceed to run thesystemC simulation, run the following command:

```bash
cd build 
cmake -G Ninja ../systemc; ninja
./generated/<benchmark_name>/<benchmark_name>_sc    
```
export SYSTEMC_HOME=/usr/local/systemc-3.0.2