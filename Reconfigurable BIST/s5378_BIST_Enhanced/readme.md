*** This version capabilities *** Version_2


# Runs two modes of BIST:
    1- Normal Mode: Simply runs a bIST with an initial seed
    2- Enhanced Mode: Runs the BIST but reseeds (bit flipping) the LFSR in between test sessions
        * the bits to flip are dertermined in a vector obtained from the systemC program
    
# The bit Flipping is done in the Testbench <requires_HW_solution>

# The bits to flip must be stored in a Mem wheras in this version there is a vector fiiled in TB


