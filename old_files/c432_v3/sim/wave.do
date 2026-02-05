onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /SerialFS_TB/detected
add wave -noupdate /SerialFS_TB/detectedFault
add wave -noupdate /SerialFS_TB/faultCount
add wave -noupdate /SerialFS_TB/faultInjection
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {208683 ns} 0}
quietly wave cursor active 1
configure wave -namecolwidth 173
configure wave -valuecolwidth 143
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
WaveRestoreZoom {14998 ns} {15143 ns}
