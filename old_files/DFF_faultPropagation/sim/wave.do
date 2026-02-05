onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /TB/DUT/DUT/A
add wave -noupdate /TB/DUT/DUT/B
add wave -noupdate /TB/DUT/DUT/C
add wave -noupdate /TB/DUT/DUT/clk
add wave -noupdate /TB/DUT/DUT/D
add wave -noupdate /TB/DUT/DUT/Si
add wave -noupdate /TB/DUT/DUT/So
add wave -noupdate /TB/DUT/DUT/w1
add wave -noupdate /TB/DUT/DUT/w3
add wave -noupdate /TB/DUT/DUT/w4
add wave -noupdate /TB/DUT/DUT/w5
add wave -noupdate /TB/DUT/DUT/Y0
add wave -noupdate /TB/DUT/DUT/Y1
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {19753274 ps} 0}
quietly wave cursor active 1
configure wave -namecolwidth 112
configure wave -valuecolwidth 40
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
configure wave -timelineunits us
update
WaveRestoreZoom {19751683 ps} {19776228 ps}
