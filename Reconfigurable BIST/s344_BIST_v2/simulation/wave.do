onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate -radix hexadecimal /BIST_TB/DUT/clk
add wave -noupdate -radix hexadecimal /BIST_TB/DUT/compare
add wave -noupdate -radix hexadecimal /BIST_TB/DUT/done
add wave -noupdate -radix hexadecimal /BIST_TB/DUT/fail
add wave -noupdate -radix hexadecimal /BIST_TB/DUT/flipped_seed
add wave -noupdate -radix hexadecimal /BIST_TB/DUT/addr_groupVal
add wave -noupdate -radix hexadecimal /BIST_TB/DUT/flippingVal
add wave -noupdate -radix hexadecimal /BIST_TB/DUT/goldenSig
add wave -noupdate -radix hexadecimal /BIST_TB/DUT/groupVal
add wave -noupdate -radix hexadecimal /BIST_TB/DUT/local_fail
add wave -noupdate -radix hexadecimal /BIST_TB/DUT/mode
add wave -noupdate -radix hexadecimal /BIST_TB/DUT/NbarT
add wave -noupdate -radix hexadecimal /BIST_TB/DUT/seed_ld
add wave -noupdate -radix hexadecimal /BIST_TB/DUT/session
add wave -noupdate /BIST_TB/DUT/CTRL_inst/group_eq
add wave -noupdate /BIST_TB/DUT/CTRL_inst/group_cnt_en
add wave -noupdate /BIST_TB/DUT/CTRL_inst/group_cnt_out
add wave -noupdate /BIST_TB/DUT/CTRL_inst/group_cnt_rst
add wave -noupdate /BIST_TB/DUT/CTRL_inst/group
add wave -noupdate /BIST_TB/DUT/CTRL_inst/pstate
add wave -noupdate /BIST_TB/DUT/CTRL_inst/sigAddr
add wave -noupdate /BIST_TB/faultCount
add wave -noupdate /BIST_TB/faultInjection
add wave -noupdate /BIST_TB/faultsPath
add wave -noupdate /BIST_TB/rst
add wave -noupdate /BIST_TB/session
add wave -noupdate /BIST_TB/status
add wave -noupdate /BIST_TB/writeIdx
add wave -noupdate /BIST_TB/wireName
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {2142061 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 299
configure wave -valuecolwidth 100
configure wave -justifyvalue left
configure wave -signalnamewidth 0
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
WaveRestoreZoom {130293838 ps} {329305588 ps}
