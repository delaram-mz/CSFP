#******************************************************************************
#	Filename:		faultInjection.tcl
#	Project:		SAYAC Testing 
#   Version:		0.90
#	History:
#	Date:			20 June 2022
#	Last Author: 	Nooshin Nosrati
#   Copyright (C) 2022 University of Tehran
#   This source file may be used and distributed without
#   restriction provided that this copyright statement is not
#   removed from the file and that any derivative work contains
#   the original copyright notice and the associated disclaimer.
#
#******************************************************************************
#	File content description:
#	TCL script for handling fault simulation by the Static method                                 
#******************************************************************************

when -label faultInjectionwhen " faultInjection == 1'b1 and faultInjection'event " { 
	# radix signal sim:/tb_test_hw/uut/U_2/out1 unsigned
	variable faultLoc [exa sim:/$1/wireName]
	puts $faultLoc
	# radix -ascii $faultLoc 
	# puts $faultLoc
	# variable loc [radix $faultLoc -ascii]
	# puts $loc
	# puts [format "%s"  $faultLoc]
	# puts [binary format w $faultLoc]
	# set binaryData "00110101 01011111 00101110 01011001" 
	# set asciiData [binary scan $binaryData c* ascii]
	# puts "ASCII representation: $asciiData"

	variable faultLoc [string trim $faultLoc "{}"]
	variable faultVal [exa sim:/$1/stuckAtVal]
	variable faultVal [string trim $faultVal "{}"]
	
	force -freeze sim:$faultLoc $faultVal
}
when -label faultRemovalwhen " faultInjection == 1'b0 and faultInjection'event " { 
	variable faultLoc [exa sim:/$1/wireName]
	variable faultLoc [string trim $faultLoc "{}"]
	
	noforce sim:$faultLoc
}



