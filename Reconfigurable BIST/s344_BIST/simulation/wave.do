onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -divider TB
add wave -noupdate -radix hexadecimal /TB/clk
add wave -noupdate -radix hexadecimal /TB/NbarT
add wave -noupdate -radix hexadecimal /TB/rst
add wave -noupdate -divider {DUT Normal Mode}
add wave -noupdate -radix hexadecimal /TB/DUT/normalPI
add wave -noupdate -radix hexadecimal /TB/DUT/normalPO
add wave -noupdate -divider {DUT Test Mode}
add wave -noupdate -radix hexadecimal /TB/DUT/testPI
add wave -noupdate -radix hexadecimal /TB/DUT/Si_sig
add wave -noupdate -radix hexadecimal /TB/DUT/testPO
add wave -noupdate -divider Signatures
add wave -noupdate -radix hexadecimal /TB/DUT/MISR_Out
add wave -noupdate -radix hexadecimal /TB/DUT/So_sig
add wave -noupdate -radix hexadecimal /TB/DUT/done
add wave -noupdate -radix hexadecimal /TB/DUT/DUT_PI
add wave -noupdate -radix hexadecimal /TB/DUT/DUT_PO
add wave -noupdate -radix unsigned /TB/DUT/CTRL_inst/SC_cnt_out
add wave -noupdate /TB/DUT/DUT/PbarS
add wave -noupdate -divider PRPG
add wave -noupdate -radix hexadecimal /TB/DUT/PRPG_inst/d_out
add wave -noupdate -radix hexadecimal /TB/DUT/PRPG_inst/seed
add wave -noupdate -radix hexadecimal /TB/DUT/PRPG_inst/poly
add wave -noupdate -radix hexadecimal /TB/DUT/PRPG_inst/rst
add wave -noupdate -radix hexadecimal /TB/DUT/PRPG_inst/en
add wave -noupdate -divider SRSG
add wave -noupdate -radix hexadecimal /TB/DUT/SRSG_inst/data
add wave -noupdate -radix hexadecimal /TB/DUT/SRSG_inst/Sout
add wave -noupdate -radix hexadecimal /TB/DUT/SRSG_inst/rst
add wave -noupdate -radix hexadecimal /TB/DUT/SRSG_inst/en
add wave -noupdate -divider MISR
add wave -noupdate -radix hexadecimal /TB/DUT/MISR_inst/d_in
add wave -noupdate -radix hexadecimal /TB/DUT/MISR_inst/d_out
add wave -noupdate -radix hexadecimal /TB/DUT/MISR_inst/en
add wave -noupdate -radix hexadecimal -childformat {{{/TB/DUT/MISR_inst/seed[10]} -radix hexadecimal} {{/TB/DUT/MISR_inst/seed[9]} -radix hexadecimal} {{/TB/DUT/MISR_inst/seed[8]} -radix hexadecimal} {{/TB/DUT/MISR_inst/seed[7]} -radix hexadecimal} {{/TB/DUT/MISR_inst/seed[6]} -radix hexadecimal} {{/TB/DUT/MISR_inst/seed[5]} -radix hexadecimal} {{/TB/DUT/MISR_inst/seed[4]} -radix hexadecimal} {{/TB/DUT/MISR_inst/seed[3]} -radix hexadecimal} {{/TB/DUT/MISR_inst/seed[2]} -radix hexadecimal} {{/TB/DUT/MISR_inst/seed[1]} -radix hexadecimal} {{/TB/DUT/MISR_inst/seed[0]} -radix hexadecimal}} -subitemconfig {{/TB/DUT/MISR_inst/seed[10]} {-height 15 -radix hexadecimal} {/TB/DUT/MISR_inst/seed[9]} {-height 15 -radix hexadecimal} {/TB/DUT/MISR_inst/seed[8]} {-height 15 -radix hexadecimal} {/TB/DUT/MISR_inst/seed[7]} {-height 15 -radix hexadecimal} {/TB/DUT/MISR_inst/seed[6]} {-height 15 -radix hexadecimal} {/TB/DUT/MISR_inst/seed[5]} {-height 15 -radix hexadecimal} {/TB/DUT/MISR_inst/seed[4]} {-height 15 -radix hexadecimal} {/TB/DUT/MISR_inst/seed[3]} {-height 15 -radix hexadecimal} {/TB/DUT/MISR_inst/seed[2]} {-height 15 -radix hexadecimal} {/TB/DUT/MISR_inst/seed[1]} {-height 15 -radix hexadecimal} {/TB/DUT/MISR_inst/seed[0]} {-height 15 -radix hexadecimal}} /TB/DUT/MISR_inst/seed
add wave -noupdate -radix hexadecimal /TB/DUT/MISR_inst/poly
add wave -noupdate -radix hexadecimal /TB/DUT/MISR_inst/rst
add wave -noupdate -divider SISA
add wave -noupdate -radix hexadecimal /TB/DUT/SISA_inst/Sin
add wave -noupdate -radix hexadecimal /TB/DUT/SISA_inst/data
add wave -noupdate -radix hexadecimal /TB/DUT/SISA_inst/rst
add wave -noupdate -radix hexadecimal /TB/DUT/SISA_inst/en
add wave -noupdate -divider CTRL
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/pstate
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/nstate
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/runLBIST
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/done
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/shiftSize
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/SC_eq
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/numOfCycles
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/TC_cnt_out
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/TC_eq
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/numOfRounds
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/TR_cnt_out
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/TR_eq
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/MISR_En
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/SRSG_En
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/PRPG_En
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/SISA_En
add wave -noupdate -radix hexadecimal /TB/done_sig
add wave -noupdate -radix hexadecimal /TB/fail
add wave -noupdate -radix hexadecimal /TB/DUT/sigOut
add wave -noupdate -radix hexadecimal /TB/DUT/goldenSig
add wave -noupdate -radix hexadecimal /TB/DUT/CTRL_inst/sigAddr
add wave -noupdate -radix hexadecimal /TB/wireName
add wave -noupdate -radix hexadecimal /TB/stuckAtVal
add wave -noupdate -radix hexadecimal /TB/faultInjection
add wave -noupdate /TB/DUT/testPO
add wave -noupdate /TB/DUT/CTRL_inst/SC_cnt_en
add wave -noupdate /TB/DUT/CTRL_inst/TC_cnt_en
add wave -noupdate /TB/DUT/CTRL_inst/TR_cnt_en
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {1833246 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 150
configure wave -valuecolwidth 44
configure wave -justifyvalue left
configure wave -signalnamewidth 1
configure wave -snapdistance 10
configure wave -datasetprefix 0
configure wave -rowmargin 4
configure wave -childrowmargin 2
configure wave -gridoffset 0
configure wave -gridperiod 1
configure wave -griddelta 40
configure wave -timeline 0
configure wave -timelineunits ns
update
WaveRestoreZoom {0 ps} {2281666 ps}
