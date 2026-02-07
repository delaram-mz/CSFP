onerror {resume}
quietly WaveActivateNextPane {} 0
add wave -noupdate /SerialFS_TB/N1
add wave -noupdate /SerialFS_TB/N2
add wave -noupdate /SerialFS_TB/N3
add wave -noupdate /SerialFS_TB/N6
add wave -noupdate /SerialFS_TB/N7
add wave -noupdate /SerialFS_TB/N22_Fout
add wave -noupdate /SerialFS_TB/N23_Fout
add wave -noupdate /SerialFS_TB/N22_Gout
add wave -noupdate /SerialFS_TB/N23_Gout
add wave -noupdate /SerialFS_TB/detected
add wave -noupdate /SerialFS_TB/logFile
add wave -noupdate /SerialFS_TB/testFile
add wave -noupdate /SerialFS_TB/faultFile
add wave -noupdate /SerialFS_TB/status
add wave -noupdate /SerialFS_TB/FCFile
add wave -noupdate /SerialFS_TB/faultsF
add wave -noupdate /SerialFS_TB/newfaultFile
add wave -noupdate /SerialFS_TB/i
add wave -noupdate /SerialFS_TB/faultCount
add wave -noupdate /SerialFS_TB/detectedFault
add wave -noupdate /SerialFS_TB/TVnum
add wave -noupdate /SerialFS_TB/testVector
add wave -noupdate /SerialFS_TB/wireName
add wave -noupdate /SerialFS_TB/wireName_prev
add wave -noupdate /SerialFS_TB/faultsPath
add wave -noupdate /SerialFS_TB/newfaultsPath
add wave -noupdate /SerialFS_TB/readIdx
add wave -noupdate /SerialFS_TB/writeIdx
add wave -noupdate /SerialFS_TB/stuckAtVal
add wave -noupdate /SerialFS_TB/stuckAtVal_prev
add wave -noupdate /SerialFS_TB/stopSimulation
add wave -noupdate /SerialFS_TB/faultInjection
TreeUpdate [SetDefaultTree]
WaveRestoreCursors {{Cursor 1} {238 ns} 0}
quietly wave cursor active 1
configure wave -namecolwidth 150
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
WaveRestoreZoom {0 ns} {1 us}
