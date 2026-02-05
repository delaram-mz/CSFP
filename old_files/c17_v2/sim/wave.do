onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /SerialFS_TB/GUT/_00_
add wave -noupdate /SerialFS_TB/GUT/_01_
add wave -noupdate /SerialFS_TB/GUT/_02_
add wave -noupdate /SerialFS_TB/GUT/_03_
add wave -noupdate /SerialFS_TB/GUT/_04_
add wave -noupdate /SerialFS_TB/GUT/_05_
add wave -noupdate /SerialFS_TB/GUT/_06_
add wave -noupdate /SerialFS_TB/GUT/_07_
add wave -noupdate /SerialFS_TB/GUT/_08_
add wave -noupdate /SerialFS_TB/GUT/_09_
add wave -noupdate /SerialFS_TB/GUT/_10_
add wave -noupdate /SerialFS_TB/GUT/_11_
add wave -noupdate /SerialFS_TB/GUT/_12_
add wave -noupdate /SerialFS_TB/GUT/_13_
add wave -noupdate /SerialFS_TB/GUT/_14_
add wave -noupdate /SerialFS_TB/GUT/N1
add wave -noupdate /SerialFS_TB/GUT/N2
add wave -noupdate /SerialFS_TB/GUT/N22
add wave -noupdate /SerialFS_TB/GUT/N23
add wave -noupdate /SerialFS_TB/GUT/N3
add wave -noupdate /SerialFS_TB/GUT/N6
add wave -noupdate /SerialFS_TB/GUT/N7
add wave -noupdate /SerialFS_TB/i
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {613 ns} 0}
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
WaveRestoreZoom {0 ns} {1813 ns}
