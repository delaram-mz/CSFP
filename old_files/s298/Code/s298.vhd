-- //# 3 inputs
-- //# 6 outputs
-- //# 14 D-type flipflops
-- //# 44 inverters
-- //# 75 gates (31 ANDs + 9 NANDs + 16 ORs + 19 NORs)

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;

ENTITY s298 IS
	PORT (
		GND,VDD,CK,G0,G1,G2 : IN STD_LOGIC;
    G117,G132,G66,G118,G133,G67 : OUT STD_LOGIC
	);
END ENTITY s298;

ARCHITECTURE arch OF s298 IS
  SIGNAL G10,G29,G11,G30,G12,G34,G13,G39,G14,G44,G15,G56,G16,G86,G17,G92,G18,G98,
    G19,G102,G20,G107,G21,G113,G22,G119,G23,G125,G28,G130,G38,G40,G45,G46,G50,
    G51,G54,G55,G59,G60,G64,II155,II158,G76,G82,G87,G91,G93,G96,G99,G103,G108,
    G112,G114,II210,II213,G120,G124,G121,II221,G126,G131,G127,II229,II232,
    II235,II238,G26,G27,G31,G32,G33,G35,G36,G37,G42,G41,G48,G47,G49,G52,G57,
    G61,G58,G65,G62,G63,G74,G75,G88,G89,G90,G94,G95,G100,G105,G104,G110,G109,
    G111,G115,G122,G123,G128,G129,G24,G25,G68,G69,G70,G71,G72,G73,G77,G78,G79,
    G80,G81,G83,G84,G85,G43,G97,G101,G106,G116,G53;


  DFF_0 : ENTITY WORK.dff
  PORT MAP (
    C => CK,
    CE => '1',
    CLD => '0',
    D => G29,
    NbarT => PbarS_sig,
    PRE => '0',
    Q => G10,
    Si => Si_sig,
    global_reset => '0'
  );
  DFF_1 : ENTITY WORK.dff
  PORT MAP (
    C => CK,
    CE => '1',
    CLD => '0',
    D => G30,
    NbarT => PbarS_sig,
    PRE => '0',
    Q => G11,
    Si => G10,
    global_reset => '0'
  );
  DFF_2 : ENTITY WORK.dff
  PORT MAP (
    C => CK,
    CE => '1',
    CLD => '0',
    D => G34,
    NbarT => PbarS_sig,
    PRE => '0',
    Q => G12,
    Si => G11,
    global_reset => '0'
  );
  DFF_3 : ENTITY WORK.dff
  PORT MAP (
    C => CK,
    CE => '1',
    CLD => '0',
    D => G39,
    NbarT => PbarS_sig,
    PRE => '0',
    Q => G13,
    Si => G12,
    global_reset => '0'
  );
  DFF_4 : ENTITY WORK.dff
  PORT MAP (
    C => CK,
    CE => '1',
    CLD => '0',
    D => G44,
    NbarT => PbarS_sig,
    PRE => '0',
    Q => G14,
    Si => G13,
    global_reset => '0'
  );
  DFF_5 : ENTITY WORK.dff
  PORT MAP (
    C => CK,
    CE => '1',
    CLD => '0'G56,
    D => ,
    NbarT => PbarS_sig,
    PRE => '0',
    Q => G15,
    Si => G14,
    global_reset => '0'
  );
  DFF_6 : ENTITY WORK.dff
  PORT MAP (
    C => CK,
    CE => '1',
    CLD => '0',
    D => G86,
    NbarT => PbarS_sig,
    PRE => '0',
    Q => G16,
    Si => G15,
    global_reset => '0'
  );
  DFF_7 : ENTITY WORK.dff
  PORT MAP (
    C => CK,
    CE => '1',
    CLD => '0',
    D => G92,
    NbarT => PbarS_sig,
    PRE => '0',
    Q => G17,
    Si => G16,
    global_reset => '0'
  );
  DFF_8 : ENTITY WORK.dff
  PORT MAP (
    C => CK,
    CE => '1',
    CLD => '0',
    D => G98,
    NbarT => PbarS_sig,
    PRE => '0',
    Q => G18,
    Si => G17,
    global_reset => '0'
  );
  DFF_9 : ENTITY WORK.dff
  PORT MAP (
    C => CK,
    CE => '1',
    CLD => '0',
    D => G102,
    NbarT => PbarS_sig,
    PRE => '0',
    Q => G19,
    Si => G18,
    global_reset => '0'
  );
  DFF_10: ENTITY WORK.dff
  PORT MAP (
    C => CK,
    CE => '1',
    CLD => '0',
    D => G107,
    NbarT => PbarS_sig,
    PRE => '0',
    Q => G20,
    Si => G19,
    global_reset => '0'
  );
  DFF_11: ENTITY WORK.dff
  PORT MAP (
    C => CK,
    CE => '1',
    CLD => '0',
    D => G113,
    NbarT => PbarS_sig,
    PRE => '0',
    Q => G21,
    Si => G20,
    global_reset => '0'
  );
  DFF_12: ENTITY WORK.dff
  PORT MAP (
    C => CK,
    CE => '1',
    CLD => '0',
    D => G119,
    NbarT => PbarS_sig,
    PRE => '0',
    Q => G22,
    Si => G21,
    global_reset => '0'
  );
  DFF_13: ENTITY WORK.dff
  PORT MAP (
    C => CK,
    CE => '1',
    CLD => '0',
    D => G125,
    NbarT => PbarS_sig,
    PRE => '0',
    Q => G23,
    Si => G22,
    global_reset => '0'
  );

  
notg_0: ENTITY WORK.notg
    PORT MAP (
        in1 => new_datapath_multdivunit_outmdu2_15,
        out1 => S2581
    );


NOT_0: ENTITY WORK.notg
  PORT MAP (
    in1 => G130, 
    out1 => G28
    );
    
NOT_1: ENTITY WORK.notg
  PORT MAP (
    in1 => G10, 
    out1 => G38
    );

NOT_2: ENTITY WORK.notg
  PORT MAP (
    in1 => G13,
    out1 => G40
    
NOT_3: ENTITY WORK.notg
  PORT MAP (
    in1 => G12, 
    out1 => G45
    );
    
NOT_4: ENTITY WORK.notg
  PORT MAP (
    in1 => G11,
    out1 => G46
    );
    
NOT_5: ENTITY WORK.notg
  PORT MAP (
    in1 => G14,
    out1 => G50
    );
  
NOT_6: ENTITY WORK.notg
  PORT MAP (
    in1 => G23, 
    out1 => G51
    );

NOT_7: ENTITY WORK.notg
  PORT MAP (
    in1 => G11,
    out1 => G54
    );

NOT_8: ENTITY WORK.notg
  PORT MAP (
    in1 => G13,
    out1 => G55
    );
    
NOT_9: ENTITY WORK.notg
  PORT MAP (
    in1 => G12, 
    out1 => G59
    );

NOT_10: ENTITY WORK.notg 
  PORT MAP (
    in1 => G22,
    out1 => G60
    );

NOT_11: ENTITY WORK.notg 
  PORT MAP (
    in1 => G15,
    out1 => G64
    );

NOT_12: ENTITY WORK.notg 
  PORT MAP (
      in1 => G16,
      out1 => II155
      );

NOT_12: ENTITY WORK.notg 
  PORT MAP (
      in1 => II155,
      out1 => G66
      );

NOT_14: ENTITY WORK.notg
  PORT MAP (
    in1 => G17,
    out1 => II158
    );

NOT_15: ENTITY WORK.notg
  PORT MAP (
    in1 => II158,
    out1 => G67
    );

NOT_16: ENTITY WORK.notg
  PORT MAP (
    in1 => G10,
    out1 => G76
    );
    
NOT_17: ENTITY WORK.notg
  PORT MAP (
    in1 => G11,
    out1 => G82
    );
    
NOT_18: ENTITY WORK.notg
  PORT MAP (
    in1 => G16,
    out1 => G87
    );
    
NOT_19: ENTITY WORK.notg
  PORT MAP (
    in1 => G12,
    out1 => G91
    );
    
NOT_20: ENTITY WORK.notg
  PORT MAP (
    in1 => G17,
    out1 => G93
    );
    
NOT_21: ENTITY WORK.notg
  PORT MAP (
    in1 => G14,
    out1 => G96
    );
    
NOT_22: ENTITY WORK.notg
  PORT MAP (
    in1 => G18,
    out1 => G99
    );
    
NOT_23: ENTITY WORK.notg 
  PORT MAP (
    in1 => G13,
    out1 => G103
    );
    
NOT_24: ENTITY WORK.notg 
  PORT MAP (
    in1 => G112,
    out1 => G108
    );
    
NOT_25: ENTITY WORK.notg 
  PORT MAP (
    in1 => G21,
    out1 => G114
    );
    
NOT_26: ENTITY WORK.notg 
  PORT MAP (
    in1 => G18,
    out1 => II210
    );
    
NOT_27: ENTITY WORK.notg 
  PORT MAP (
    in1 => II210,
    out1 => G117
    );
    
NOT_28: ENTITY WORK.notg 
  PORT MAP (
    in1 => G19,
    out1 => II213
    );
    
NOT_29: ENTITY WORK.notg 
  PORT MAP (
    in1 => II213,
    out1 => G118
    );
    
NOT_30: ENTITY WORK.notg 
  PORT MAP (
    in1 => G124,
    out1 => G120
    );
    
NOT_31: ENTITY WORK.notg 
  PORT MAP (
    in1 => G22,
    out1 => G121
    );
    
NOT_32: ENTITY WORK.notg 
  PORT MAP (
    in1 => G2,
    out1 => II221
    );
    
NOT_33: ENTITY WORK.notg 
  PORT MAP (
    in1 => II221,
    out1 => G124
    );
    
NOT_34: ENTITY WORK.notg 
  PORT MAP (
    in1 => G131,
    out1 => G126
    );
    
NOT_35: ENTITY WORK.notg 
  PORT MAP (
    in1 => G23,
    out1 => G127
    );
    
NOT_36: ENTITY WORK.notg 
  PORT MAP (
    in1 => G0,
    out1 => II229
    );
    
NOT_37: ENTITY WORK.notg 
  PORT MAP (
    in1 => II229,
    out1 =>G130
    );
    
NOT_38: ENTITY WORK.notg 
  PORT MAP (
    in1 => G1,
    out1 => II232
    );
    
NOT_39: ENTITY WORK.notg 
  PORT MAP (
    in1 => II232,
    out1 => G131
    );
    
NOT_40: ENTITY WORK.notg 
  PORT MAP (
    in1 => G20,
    out1 => II235
    );
    
NOT_41: ENTITY WORK.notg 
  PORT MAP (
    in1 => II235,
    out1 => G132
    );
    
NOT_42: ENTITY WORK.notg 
  PORT MAP (
    in1 => G21,
    out1 => II238
    );
    
NOT_43: ENTITY WORK.notg 
  PORT MAP (
    in1 => II238,
    out1 => G133
    );
  
  and AND2_0(G26,G28,G50);
  and AND2_1(G27,G51,G28);
  and AND3_0(G31,G10,G45,G13);
  and AND2_2(G32,G10,G11);
  and AND2_3(G33,G38,G46);
  and AND3_1(G35,G10,G11,G12);
  and AND2_4(G36,G38,G45);
  and AND2_5(G37,G46,G45);
  and AND2_6(G42,G40,G41);
  and AND4_0(G48,G45,G46,G10,G47);
  and AND3_2(G49,G50,G51,G52);
  and AND4_1(G57,G59,G11,G60,G61);
  and AND2_7(G58,G64,G65);
  and AND4_2(G62,G59,G11,G60,G61);
  and AND2_8(G63,G64,G65);
  and AND3_3(G74,G12,G14,G19);
  and AND3_4(G75,G82,G91,G14);
  and AND2_9(G88,G14,G87);
  and AND2_10(G89,G103,G96);
  and AND2_11(G90,G91,G103);
  and AND2_12(G94,G93,G13);
  and AND2_13(G95,G96,G13);
  and AND3_5(G100,G99,G14,G12);
  and AND3_6(G105,G103,G108,G104);
  and AND2_14(G110,G108,G109);
  and AND2_15(G111,G10,G112);
  and AND2_16(G115,G114,G14);
  and AND2_17(G122,G120,G121);
  and AND2_18(G123,G124,G22);
  and AND2_19(G128,G126,G127);
  and AND2_20(G129,G131,G23);
  or OR4_0(G24,G38,G46,G45,G40);
  or OR3_0(G25,G38,G11,G12);
  or OR4_1(G68,G11,G12,G13,G96);
  or OR2_0(G69,G103,G18);
  or OR2_1(G70,G103,G14);
  or OR3_1(G71,G82,G12,G13);
  or OR2_2(G72,G91,G20);
  or OR2_3(G73,G103,G20);
  or OR4_2(G77,G112,G103,G96,G19);
  or OR2_4(G78,G108,G76);
  or OR2_5(G79,G103,G14);
  or OR2_6(G80,G11,G14);
  or OR2_7(G81,G12,G13);
  or OR4_3(G83,G11,G12,G13,G96);
  or OR3_2(G84,G82,G91,G14);
  or OR3_3(G85,G91,G96,G17);
  nand NAND3_0(G41,G12,G11,G10);
  nand NAND3_1(G43,G24,G25,G28);
  nand NAND4_0(G52,G13,G45,G46,G10);
  nand NAND4_1(G65,G59,G54,G22,G61);
  nand NAND4_2(G97,G83,G84,G85,G108);
  nand NAND4_3(G101,G68,G69,G70,G108);
  nand NAND2_0(G106,G77,G78);
  nand NAND4_4(G109,G71,G72,G73,G14);
  nand NAND4_5(G116,G79,G80,G81,G108);
  nor NOR2_0(G29,G10,G130);
  nor NOR4_0(G30,G31,G32,G33,G130);
  nor NOR4_1(G34,G35,G36,G37,G130);
  nor NOR2_1(G39,G42,G43);
  nor NOR3_0(G44,G48,G49,G53);
  nor NOR2_2(G47,G50,G40);
  nor NOR2_3(G53,G26,G27);
  nor NOR3_1(G56,G57,G58,G130);
  nor NOR2_4(G61,G14,G55);
  nor NOR4_2(G86,G88,G89,G90,G112);
  nor NOR3_2(G92,G94,G95,G97);
  nor NOR2_5(G98,G100,G101);
  nor NOR2_6(G102,G105,G106);
  nor NOR2_7(G104,G74,G75);
  nor NOR2_8(G107,G110,G111);
  nor NOR2_9(G112,G62,G63);
  nor NOR2_10(G113,G115,G116);
  nor NOR3_3(G119,G122,G123,G130);
  nor NOR3_4(G125,G128,G129,G130);

endmodule