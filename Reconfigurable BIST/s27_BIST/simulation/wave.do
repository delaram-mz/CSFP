onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -divider TB
add wave -noupdate /TB/clk
add wave -noupdate /TB/NbarT
add wave -noupdate /TB/rst
add wave -noupdate -divider {DUT Normal Mode}
add wave -noupdate /TB/DUT/normalPI
add wave -noupdate /TB/DUT/normalPO
add wave -noupdate -divider {DUT Test Mode}
add wave -noupdate /TB/DUT/testPI
add wave -noupdate /TB/DUT/Si_sig
add wave -noupdate /TB/DUT/testPO
add wave -noupdate -divider Signatures
add wave -noupdate /TB/DUT/MISR_Out
add wave -noupdate /TB/DUT/So_sig
add wave -noupdate /TB/DUT/done
add wave -noupdate -divider PRPG
add wave -noupdate /TB/DUT/PRPG_inst/d_out
add wave -noupdate /TB/DUT/PRPG_inst/rst
add wave -noupdate /TB/DUT/PRPG_inst/en
add wave -noupdate -divider SRSG
add wave -noupdate /TB/DUT/SRSG_inst/Sout
add wave -noupdate /TB/DUT/SRSG_inst/rst
add wave -noupdate /TB/DUT/SRSG_inst/en
add wave -noupdate -divider MISR
add wave -noupdate /TB/DUT/MISR_inst/d_in
add wave -noupdate /TB/DUT/MISR_inst/d_out
add wave -noupdate /TB/DUT/MISR_inst/rst
add wave -noupdate /TB/DUT/MISR_inst/en
add wave -noupdate -divider SISA
add wave -noupdate /TB/DUT/SISA_inst/Sin
add wave -noupdate /TB/DUT/SISA_inst/data
add wave -noupdate /TB/DUT/SISA_inst/rst
add wave -noupdate /TB/DUT/SISA_inst/en
add wave -noupdate -divider CTRL
add wave -noupdate /TB/DUT/CTRL_inst/pstate
add wave -noupdate /TB/DUT/CTRL_inst/nstate
add wave -noupdate /TB/DUT/CTRL_inst/runLBIST
add wave -noupdate /TB/DUT/CTRL_inst/done
add wave -noupdate /TB/DUT/CTRL_inst/shiftSize
add wave -noupdate -radix unsigned /TB/DUT/CTRL_inst/SC_cnt_out
add wave -noupdate /TB/DUT/CTRL_inst/SC_eq
add wave -noupdate /TB/DUT/CTRL_inst/numOfCycles
add wave -noupdate -radix unsigned /TB/DUT/CTRL_inst/TC_cnt_out
add wave -noupdate /TB/DUT/CTRL_inst/TC_eq
add wave -noupdate /TB/DUT/CTRL_inst/numOfRounds
add wave -noupdate -radix unsigned /TB/DUT/CTRL_inst/TR_cnt_out
add wave -noupdate /TB/DUT/CTRL_inst/TR_eq
add wave -noupdate /TB/DUT/CTRL_inst/MISR_En
add wave -noupdate /TB/DUT/CTRL_inst/SRSG_En
add wave -noupdate /TB/DUT/CTRL_inst/PRPG_En
add wave -noupdate /TB/DUT/CTRL_inst/SISA_En
add wave -noupdate /TB/done_sig
add wave -noupdate /TB/fail
add wave -noupdate /TB/DUT/sigOut
add wave -noupdate /TB/DUT/goldenSig
add wave -noupdate /TB/DUT/CTRL_inst/sigAddr
add wave -noupdate /TB/wireName
add wave -noupdate /TB/stuckAtVal
add wave -noupdate /TB/faultInjection
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {17885000 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 150
configure wave -valuecolwidth 100
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
WaveRestoreZoom {12584324 ps} {24099839 ps}
