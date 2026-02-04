`timescale 1 ns / 1ns
module SerialFS_TB ();
reg N1, N100, N103, N106, N109, N11, N112, N113, 
N114, N115, N116, N117, N118, N119, N120, N121, 
N122, N123, N126, N127, N128, N129, N130, N131, 
N132, N135, N136, N137, N14, N140, N141, N145, 
N146, N149, N152, N155, N158, N161, N164, N167, 
N17, N170, N173, N176, N179, N182, N185, N188, 
N191, N194, N197, N20, N200, N203, N206, N209, 
N210, N217, N218, N225, N226, N23, N233, N234, 
N24, N241, N242, N245, N248, N25, N251, N254, 
N257, N26, N264, N265, N27, N272, N273, N280, 
N281, N288, N289, N292, N293, N299, N302, N307, 
N308, N31, N315, N316, N323, N324, N331, N332, 
N335, N338, N34, N341, N348, N351, N358, N361, 
N366, N369, N37, N372, N373, N374, N386, N389, 
N4, N40, N400, N411, N422, N43, N435, N446, N457, 
N46, N468, N479, N49, N490, N503, N514, N52, N523, 
N53, N534, N54, N545, N549, N552, N556, N559, N562, 
N566, N571, N574, N577, N580, N583, N588, N591, N592, 
N595, N596, N597, N598, N599, N603, N607, N61, N610, 
N613, N616, N619, N625, N631, N64, N67, N70, N73, N76, 
N79, N80, N81, N82, N83, N86, N87, N88, N91, N94, N97;
 
wire N1066_Fout, N1137_Fout, N1138_Fout, N1139_Fout, 
N1140_Fout, N1141_Fout, N1142_Fout, N1143_Fout, 
N1144_Fout, N1145_Fout, N1147_Fout, N1152_Fout, 
N1153_Fout, N1154_Fout, N1155_Fout, N1972_Fout, 
N2054_Fout, N2060_Fout, N2061_Fout, N2139_Fout, 
N2142_Fout, N2309_Fout, N2387_Fout, N2527_Fout, 
N2584_Fout, N2590_Fout, N2623_Fout, N3357_Fout, 
N3358_Fout, N3359_Fout, N3360_Fout, N3604_Fout, 
N3613_Fout, N4272_Fout, N4275_Fout, N4278_Fout, 
N4279_Fout, N4737_Fout, N4738_Fout, N4739_Fout, 
N4740_Fout, N5240_Fout, N5388_Fout, N6641_Fout, 
N6643_Fout, N6646_Fout, N6648_Fout, N6716_Fout, 
N6877_Fout, N6924_Fout, N6925_Fout, N6926_Fout, 
N6927_Fout, N7015_Fout, N709_Fout, N7363_Fout, 
N7365_Fout, N7432_Fout, N7449_Fout, N7465_Fout, 
N7466_Fout, N7467_Fout, N7469_Fout, N7470_Fout, 
N7471_Fout, N7472_Fout, N7473_Fout, N7474_Fout, 
N7476_Fout, N7503_Fout, N7504_Fout, N7506_Fout, 
N7511_Fout, N7515_Fout, N7516_Fout, N7517_Fout, 
N7518_Fout, N7519_Fout, N7520_Fout, N7521_Fout, 
N7522_Fout, N7600_Fout, N7601_Fout, N7602_Fout, 
N7603_Fout, N7604_Fout, N7605_Fout, N7606_Fout, 
N7607_Fout, N7626_Fout, N7698_Fout, N7699_Fout, 
N7700_Fout, N7701_Fout, N7702_Fout, N7703_Fout, 
N7704_Fout, N7705_Fout, N7706_Fout, N7707_Fout, 
N7735_Fout, N7736_Fout, N7737_Fout, N7738_Fout, 
N7739_Fout, N7740_Fout, N7741_Fout, N7742_Fout, 
N7754_Fout, N7755_Fout, N7756_Fout, N7757_Fout, 
N7758_Fout, N7759_Fout, N7760_Fout, N7761_Fout, 
N8075_Fout, N8076_Fout, N8123_Fout, N8124_Fout, 
N8127_Fout, N8128_Fout, N816_Fout;

wire N1066_Gout, N1137_Gout, N1138_Gout, N1139_Gout, 
N1140_Gout, N1141_Gout, N1142_Gout, N1143_Gout, 
N1144_Gout, N1145_Gout, N1147_Gout, N1152_Gout, 
N1153_Gout, N1154_Gout, N1155_Gout, N1972_Gout, 
N2054_Gout, N2060_Gout, N2061_Gout, N2139_Gout, 
N2142_Gout, N2309_Gout, N2387_Gout, N2527_Gout, 
N2584_Gout, N2590_Gout, N2623_Gout, N3357_Gout, 
N3358_Gout, N3359_Gout, N3360_Gout, N3604_Gout, 
N3613_Gout, N4272_Gout, N4275_Gout, N4278_Gout, 
N4279_Gout, N4737_Gout, N4738_Gout, N4739_Gout, 
N4740_Gout, N5240_Gout, N5388_Gout, N6641_Gout, 
N6643_Gout, N6646_Gout, N6648_Gout, N6716_Gout, 
N6877_Gout, N6924_Gout, N6925_Gout, N6926_Gout, 
N6927_Gout, N7015_Gout, N709_Gout, N7363_Gout, 
N7365_Gout, N7432_Gout, N7449_Gout, N7465_Gout, 
N7466_Gout, N7467_Gout, N7469_Gout, N7470_Gout, 
N7471_Gout, N7472_Gout, N7473_Gout, N7474_Gout, 
N7476_Gout, N7503_Gout, N7504_Gout, N7506_Gout, 
N7511_Gout, N7515_Gout, N7516_Gout, N7517_Gout, 
N7518_Gout, N7519_Gout, N7520_Gout, N7521_Gout, 
N7522_Gout, N7600_Gout, N7601_Gout, N7602_Gout, 
N7603_Gout, N7604_Gout, N7605_Gout, N7606_Gout, 
N7607_Gout, N7626_Gout, N7698_Gout, N7699_Gout, 
N7700_Gout, N7701_Gout, N7702_Gout, N7703_Gout, 
N7704_Gout, N7705_Gout, N7706_Gout, N7707_Gout, 
N7735_Gout, N7736_Gout, N7737_Gout, N7738_Gout, 
N7739_Gout, N7740_Gout, N7741_Gout, N7742_Gout, 
N7754_Gout, N7755_Gout, N7756_Gout, N7757_Gout, 
N7758_Gout, N7759_Gout, N7760_Gout, N7761_Gout, 
N8075_Gout, N8076_Gout, N8123_Gout, N8124_Gout, 
N8127_Gout, N8128_Gout, N816_Gout;


reg detected;
integer logFile, testFile, faultFile, status, FCFile, faultsF, newfaultFile;
integer i;
real faultCount, detectedFault, TVnum;//number of collapsed faults // number of detected faults
reg[177:0] testVector;// applied test vector
// reg [8*20:1] wireName;// name of the current faulty wire
string wireName, wireName_prev;
string faultsPath, newfaultsPath, readIdx, writeIdx;

reg stuckAtVal, stuckAtVal_prev;
reg stopSimulation = 1'b0;
reg faultInjection = 1'b0;

c5315 FUT ( 
	.N1(N1), .N100(N100), .N103(N103), .N106(N106), .N109(N109), .N11(N11), .N112(N112), .N113(N113), 
	.N114(N114), .N115(N115), .N116(N116), .N117(N117), .N118(N118), .N119(N119), .N120(N120), .N121(N121), 
	.N122(N122), .N123(N123), .N126(N126), .N127(N127), .N128(N128), .N129(N129), .N130(N130), .N131(N131), 
	.N132(N132), .N135(N135), .N136(N136), .N137(N137), .N14(N14), .N140(N140), .N141(N141), .N145(N145), 
	.N146(N146), .N149(N149), .N152(N152), .N155(N155), .N158(N158), .N161(N161), .N164(N164), .N167(N167), 
	.N17(N17), .N170(N170), .N173(N173), .N176(N176), .N179(N179), .N182(N182), .N185(N185), .N188(N188), 
	.N191(N191), .N194(N194), .N197(N197), .N20(N20), .N200(N200), .N203(N203), .N206(N206), .N209(N209), 
	.N210(N210), .N217(N217), .N218(N218), .N225(N225), .N226(N226), .N23(N23), .N233(N233), .N234(N234), 
	.N24(N24), .N241(N241), .N242(N242), .N245(N245), .N248(N248), .N25(N25), .N251(N251), .N254(N254), 
	.N257(N257), .N26(N26), .N264(N264), .N265(N265), .N27(N27), .N272(N272), .N273(N273), .N280(N280), 
	.N281(N281), .N288(N288), .N289(N289), .N292(N292), .N293(N293), .N299(N299), .N302(N302), .N307(N307), 
	.N308(N308), .N31(N31), .N315(N315), .N316(N316), .N323(N323), .N324(N324), .N331(N331), .N332(N332), 
	.N335(N335), .N338(N338), .N34(N34), .N341(N341), .N348(N348), .N351(N351), .N358(N358), .N361(N361), 
	.N366(N366), .N369(N369), .N37(N37), .N372(N372), .N373(N373), .N374(N374), .N386(N386), .N389(N389), 
	.N4(N4), .N40(N40), .N400(N400), .N411(N411), .N422(N422), .N43(N43), .N435(N435), .N446(N446), .N457(N457), 
	.N46(N46), .N468(N468), .N479(N479), .N49(N49), .N490(N490), .N503(N503), .N514(N514), .N52(N52), .N523(N523), 
	.N53(N53), .N534(N534), .N54(N54), .N545(N545), .N549(N549), .N552(N552), .N556(N556), .N559(N559), .N562(N562), 
	.N566(N566), .N571(N571), .N574(N574), .N577(N577), .N580(N580), .N583(N583), .N588(N588), .N591(N591), .N592(N592), 
	.N595(N595), .N596(N596), .N597(N597), .N598(N598), .N599(N599), .N603(N603), .N607(N607), .N61(N61), .N610(N610), 
	.N613(N613), .N616(N616), .N619(N619), .N625(N625), .N631(N631), .N64(N64), .N67(N67), .N70(N70), .N73(N73), .N76(N76), 
	.N79(N79), .N80(N80), .N81(N81), .N82(N82), .N83(N83), .N86(N86), .N87(N87), .N88(N88), .N91(N91), .N94(N94), .N97(N97),
	.N1066(N1066_Fout), .N1137(N1137_Fout), .N1138(N1138_Fout), .N1139(N1139_Fout), 
	.N1140(N1140_Fout), .N1141(N1141_Fout), .N1142(N1142_Fout), .N1143(N1143_Fout), 
	.N1144(N1144_Fout), .N1145(N1145_Fout), .N1147(N1147_Fout), .N1152(N1152_Fout), 
	.N1153(N1153_Fout), .N1154(N1154_Fout), .N1155(N1155_Fout), .N1972(N1972_Fout), 
	.N2054(N2054_Fout), .N2060(N2060_Fout), .N2061(N2061_Fout), .N2139(N2139_Fout), 
	.N2142(N2142_Fout), .N2309(N2309_Fout), .N2387(N2387_Fout), .N2527(N2527_Fout), 
	.N2584(N2584_Fout), .N2590(N2590_Fout), .N2623(N2623_Fout), .N3357(N3357_Fout), 
	.N3358(N3358_Fout), .N3359(N3359_Fout), .N3360(N3360_Fout), .N3604(N3604_Fout), 
	.N3613(N3613_Fout), .N4272(N4272_Fout), .N4275(N4275_Fout), .N4278(N4278_Fout), 
	.N4279(N4279_Fout), .N4737(N4737_Fout), .N4738(N4738_Fout), .N4739(N4739_Fout), 
	.N4740(N4740_Fout), .N5240(N5240_Fout), .N5388(N5388_Fout), .N6641(N6641_Fout), 
	.N6643(N6643_Fout), .N6646(N6646_Fout), .N6648(N6648_Fout), .N6716(N6716_Fout), 
	.N6877(N6877_Fout), .N6924(N6924_Fout), .N6925(N6925_Fout), .N6926(N6926_Fout), 
	.N6927(N6927_Fout), .N7015(N7015_Fout), .N709(N709_Fout), .N7363(N7363_Fout), 
	.N7365(N7365_Fout), .N7432(N7432_Fout), .N7449(N7449_Fout), .N7465(N7465_Fout), 
	.N7466(N7466_Fout), .N7467(N7467_Fout), .N7469(N7469_Fout), .N7470(N7470_Fout), 
	.N7471(N7471_Fout), .N7472(N7472_Fout), .N7473(N7473_Fout), .N7474(N7474_Fout), 
	.N7476(N7476_Fout), .N7503(N7503_Fout), .N7504(N7504_Fout), .N7506(N7506_Fout), 
	.N7511(N7511_Fout), .N7515(N7515_Fout), .N7516(N7516_Fout), .N7517(N7517_Fout), 
	.N7518(N7518_Fout), .N7519(N7519_Fout), .N7520(N7520_Fout), .N7521(N7521_Fout), 
	.N7522(N7522_Fout), .N7600(N7600_Fout), .N7601(N7601_Fout), .N7602(N7602_Fout), 
	.N7603(N7603_Fout), .N7604(N7604_Fout), .N7605(N7605_Fout), .N7606(N7606_Fout), 
	.N7607(N7607_Fout), .N7626(N7626_Fout), .N7698(N7698_Fout), .N7699(N7699_Fout), 
	.N7700(N7700_Fout), .N7701(N7701_Fout), .N7702(N7702_Fout), .N7703(N7703_Fout), 
	.N7704(N7704_Fout), .N7705(N7705_Fout), .N7706(N7706_Fout), .N7707(N7707_Fout), 
	.N7735(N7735_Fout), .N7736(N7736_Fout), .N7737(N7737_Fout), .N7738(N7738_Fout), 
	.N7739(N7739_Fout), .N7740(N7740_Fout), .N7741(N7741_Fout), .N7742(N7742_Fout), 
	.N7754(N7754_Fout), .N7755(N7755_Fout), .N7756(N7756_Fout), .N7757(N7757_Fout), 
	.N7758(N7758_Fout), .N7759(N7759_Fout), .N7760(N7760_Fout), .N7761(N7761_Fout), 
	.N8075(N8075_Fout), .N8076(N8076_Fout), .N8123(N8123_Fout), .N8124(N8124_Fout), 
	.N8127(N8127_Fout), .N8128(N8128_Fout), .N816(N816_Fout)
	);

c5315 GUT ( 
	.N1(N1), .N100(N100), .N103(N103), .N106(N106), .N109(N109), .N11(N11), .N112(N112), .N113(N113), 
	.N114(N114), .N115(N115), .N116(N116), .N117(N117), .N118(N118), .N119(N119), .N120(N120), .N121(N121), 
	.N122(N122), .N123(N123), .N126(N126), .N127(N127), .N128(N128), .N129(N129), .N130(N130), .N131(N131), 
	.N132(N132), .N135(N135), .N136(N136), .N137(N137), .N14(N14), .N140(N140), .N141(N141), .N145(N145), 
	.N146(N146), .N149(N149), .N152(N152), .N155(N155), .N158(N158), .N161(N161), .N164(N164), .N167(N167), 
	.N17(N17), .N170(N170), .N173(N173), .N176(N176), .N179(N179), .N182(N182), .N185(N185), .N188(N188), 
	.N191(N191), .N194(N194), .N197(N197), .N20(N20), .N200(N200), .N203(N203), .N206(N206), .N209(N209), 
	.N210(N210), .N217(N217), .N218(N218), .N225(N225), .N226(N226), .N23(N23), .N233(N233), .N234(N234), 
	.N24(N24), .N241(N241), .N242(N242), .N245(N245), .N248(N248), .N25(N25), .N251(N251), .N254(N254), 
	.N257(N257), .N26(N26), .N264(N264), .N265(N265), .N27(N27), .N272(N272), .N273(N273), .N280(N280), 
	.N281(N281), .N288(N288), .N289(N289), .N292(N292), .N293(N293), .N299(N299), .N302(N302), .N307(N307), 
	.N308(N308), .N31(N31), .N315(N315), .N316(N316), .N323(N323), .N324(N324), .N331(N331), .N332(N332), 
	.N335(N335), .N338(N338), .N34(N34), .N341(N341), .N348(N348), .N351(N351), .N358(N358), .N361(N361), 
	.N366(N366), .N369(N369), .N37(N37), .N372(N372), .N373(N373), .N374(N374), .N386(N386), .N389(N389), 
	.N4(N4), .N40(N40), .N400(N400), .N411(N411), .N422(N422), .N43(N43), .N435(N435), .N446(N446), .N457(N457), 
	.N46(N46), .N468(N468), .N479(N479), .N49(N49), .N490(N490), .N503(N503), .N514(N514), .N52(N52), .N523(N523), 
	.N53(N53), .N534(N534), .N54(N54), .N545(N545), .N549(N549), .N552(N552), .N556(N556), .N559(N559), .N562(N562), 
	.N566(N566), .N571(N571), .N574(N574), .N577(N577), .N580(N580), .N583(N583), .N588(N588), .N591(N591), .N592(N592), 
	.N595(N595), .N596(N596), .N597(N597), .N598(N598), .N599(N599), .N603(N603), .N607(N607), .N61(N61), .N610(N610), 
	.N613(N613), .N616(N616), .N619(N619), .N625(N625), .N631(N631), .N64(N64), .N67(N67), .N70(N70), .N73(N73), .N76(N76), 
	.N79(N79), .N80(N80), .N81(N81), .N82(N82), .N83(N83), .N86(N86), .N87(N87), .N88(N88), .N91(N91), .N94(N94), .N97(N97),
	.N1066(N1066_Gout), .N1137(N1137_Gout), .N1138(N1138_Gout), .N1139(N1139_Gout), 
	.N1140(N1140_Gout), .N1141(N1141_Gout), .N1142(N1142_Gout), .N1143(N1143_Gout), 
	.N1144(N1144_Gout), .N1145(N1145_Gout), .N1147(N1147_Gout), .N1152(N1152_Gout), 
	.N1153(N1153_Gout), .N1154(N1154_Gout), .N1155(N1155_Gout), .N1972(N1972_Gout), 
	.N2054(N2054_Gout), .N2060(N2060_Gout), .N2061(N2061_Gout), .N2139(N2139_Gout), 
	.N2142(N2142_Gout), .N2309(N2309_Gout), .N2387(N2387_Gout), .N2527(N2527_Gout), 
	.N2584(N2584_Gout), .N2590(N2590_Gout), .N2623(N2623_Gout), .N3357(N3357_Gout), 
	.N3358(N3358_Gout), .N3359(N3359_Gout), .N3360(N3360_Gout), .N3604(N3604_Gout), 
	.N3613(N3613_Gout), .N4272(N4272_Gout), .N4275(N4275_Gout), .N4278(N4278_Gout), 
	.N4279(N4279_Gout), .N4737(N4737_Gout), .N4738(N4738_Gout), .N4739(N4739_Gout), 
	.N4740(N4740_Gout), .N5240(N5240_Gout), .N5388(N5388_Gout), .N6641(N6641_Gout), 
	.N6643(N6643_Gout), .N6646(N6646_Gout), .N6648(N6648_Gout), .N6716(N6716_Gout), 
	.N6877(N6877_Gout), .N6924(N6924_Gout), .N6925(N6925_Gout), .N6926(N6926_Gout), 
	.N6927(N6927_Gout), .N7015(N7015_Gout), .N709(N709_Gout), .N7363(N7363_Gout), 
	.N7365(N7365_Gout), .N7432(N7432_Gout), .N7449(N7449_Gout), .N7465(N7465_Gout), 
	.N7466(N7466_Gout), .N7467(N7467_Gout), .N7469(N7469_Gout), .N7470(N7470_Gout), 
	.N7471(N7471_Gout), .N7472(N7472_Gout), .N7473(N7473_Gout), .N7474(N7474_Gout), 
	.N7476(N7476_Gout), .N7503(N7503_Gout), .N7504(N7504_Gout), .N7506(N7506_Gout), 
	.N7511(N7511_Gout), .N7515(N7515_Gout), .N7516(N7516_Gout), .N7517(N7517_Gout), 
	.N7518(N7518_Gout), .N7519(N7519_Gout), .N7520(N7520_Gout), .N7521(N7521_Gout), 
	.N7522(N7522_Gout), .N7600(N7600_Gout), .N7601(N7601_Gout), .N7602(N7602_Gout), 
	.N7603(N7603_Gout), .N7604(N7604_Gout), .N7605(N7605_Gout), .N7606(N7606_Gout), 
	.N7607(N7607_Gout), .N7626(N7626_Gout), .N7698(N7698_Gout), .N7699(N7699_Gout), 
	.N7700(N7700_Gout), .N7701(N7701_Gout), .N7702(N7702_Gout), .N7703(N7703_Gout), 
	.N7704(N7704_Gout), .N7705(N7705_Gout), .N7706(N7706_Gout), .N7707(N7707_Gout), 
	.N7735(N7735_Gout), .N7736(N7736_Gout), .N7737(N7737_Gout), .N7738(N7738_Gout), 
	.N7739(N7739_Gout), .N7740(N7740_Gout), .N7741(N7741_Gout), .N7742(N7742_Gout), 
	.N7754(N7754_Gout), .N7755(N7755_Gout), .N7756(N7756_Gout), .N7757(N7757_Gout), 
	.N7758(N7758_Gout), .N7759(N7759_Gout), .N7760(N7760_Gout), .N7761(N7761_Gout), 
	.N8075(N8075_Gout), .N8076(N8076_Gout), .N8123(N8123_Gout), .N8124(N8124_Gout), 
	.N8127(N8127_Gout), .N8128(N8128_Gout), .N816(N816_Gout)
	);


// // Enhanced Partial Fault Simulation with Fault Dropping
// initial begin
// 	{N1, N100, N103, N106, N109, N11, N112, N113, 
// 	N114, N115, N116, N117, N118, N119, N120, N121, 
// 	N122, N123, N126, N127, N128, N129, N130, N131, 
// 	N132, N135, N136, N137, N14, N140, N141, N145, 
// 	N146, N149, N152, N155, N158, N161, N164, N167, 
// 	N17, N170, N173, N176, N179, N182, N185, N188, 
// 	N191, N194, N197, N20, N200, N203, N206, N209, 
// 	N210, N217, N218, N225, N226, N23, N233, N234, 
// 	N24, N241, N242, N245, N248, N25, N251, N254, 
// 	N257, N26, N264, N265, N27, N272, N273, N280, 
// 	N281, N288, N289, N292, N293, N299, N302, N307, 
// 	N308, N31, N315, N316, N323, N324, N331, N332, 
// 	N335, N338, N34, N341, N348, N351, N358, N361, 
// 	N366, N369, N37, N372, N373, N374, N386, N389, 
// 	N4, N40, N400, N411, N422, N43, N435, N446, N457, 
// 	N46, N468, N479, N49, N490, N503, N514, N52, N523, 
// 	N53, N534, N54, N545, N549, N552, N556, N559, N562, 
// 	N566, N571, N574, N577, N580, N583, N588, N591, N592, 
// 	N595, N596, N597, N598, N599, N603, N607, N61, N610, 
// 	N613, N616, N619, N625, N631, N64, N67, N70, N73, N76, 
// 	N79, N80, N81, N82, N83, N86, N87, N88, N91, N94, N97} = 0;
// 	// logFile = $fopen("FS_log.txt", "w");
// 	FCFile = $fopen("EnhancedPartialFS_FC.txt", "w");
// 	// FCFile = $fopen("EnhancedPartialFS_FC.txt", "w");

// 	TVnum = 0;
// 	faultCount = 4404;
// 	detectedFault = 0;
// 	i = 0;
// 	TVnum = 0;
// 	// $fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
// 	testFile = $fopen("testPatterns.txt", "r");//Test set File
// 	while(!$feof(testFile)) begin
// 		status = $fscanf(testFile,"%b\n", testVector);
// 		// $fwrite(logFile, "Test Vector number %d is:  %b \n",i, testVector);
// 		if (i==0) begin
// 			faultFile = $fopen("c5315_faultlist.flt", "r");
// 		end
// 		else begin
// 			$sformat(readIdx, "%0d", i);
// 			faultsPath = {"faults/faultSet_",readIdx,".flt"};
// 			faultFile = $fopen(faultsPath, "r");
// 		end

// 		$sformat(writeIdx, "%0d", i+1);
// 		newfaultsPath = {"faults/faultSet_",writeIdx,".flt"};
// 		newfaultFile = $fopen(newfaultsPath, "w");
// 		while( !$feof(faultFile))begin
// 			detected = 1'b0;
// 			status = $fscanf(faultFile,"s@%b\n  %s", stuckAtVal, wireName);
// 			// $fwrite(logFile, "Net to be faulty => %s to %b \n", wireName, stuckAtVal);
// 			if(status != -1) begin
// 				#2;
// 				{N1, N100, N103, N106, N109, N11, N112, N113, 
// 				N114, N115, N116, N117, N118, N119, N120, N121, 
// 				N122, N123, N126, N127, N128, N129, N130, N131, 
// 				N132, N135, N136, N137, N14, N140, N141, N145, 
// 				N146, N149, N152, N155, N158, N161, N164, N167, 
// 				N17, N170, N173, N176, N179, N182, N185, N188, 
// 				N191, N194, N197, N20, N200, N203, N206, N209, 
// 				N210, N217, N218, N225, N226, N23, N233, N234, 
// 				N24, N241, N242, N245, N248, N25, N251, N254, 
// 				N257, N26, N264, N265, N27, N272, N273, N280, 
// 				N281, N288, N289, N292, N293, N299, N302, N307, 
// 				N308, N31, N315, N316, N323, N324, N331, N332, 
// 				N335, N338, N34, N341, N348, N351, N358, N361, 
// 				N366, N369, N37, N372, N373, N374, N386, N389, 
// 				N4, N40, N400, N411, N422, N43, N435, N446, N457, 
// 				N46, N468, N479, N49, N490, N503, N514, N52, N523, 
// 				N53, N534, N54, N545, N549, N552, N556, N559, N562, 
// 				N566, N571, N574, N577, N580, N583, N588, N591, N592, 
// 				N595, N596, N597, N598, N599, N603, N607, N61, N610, 
// 				N613, N616, N619, N625, N631, N64, N67, N70, N73, N76, 
// 				N79, N80, N81, N82, N83, N86, N87, N88, N91, N94, N97} = testVector;
// 				#2;
// 				faultInjection = 1'b1;
// 				#9;
// 				if ( {N1066_Fout, N1137_Fout, N1138_Fout, N1139_Fout, 
// 					N1140_Fout, N1141_Fout, N1142_Fout, N1143_Fout, 
// 					N1144_Fout, N1145_Fout, N1147_Fout, N1152_Fout, 
// 					N1153_Fout, N1154_Fout, N1155_Fout, N1972_Fout, 
// 					N2054_Fout, N2060_Fout, N2061_Fout, N2139_Fout, 
// 					N2142_Fout, N2309_Fout, N2387_Fout, N2527_Fout, 
// 					N2584_Fout, N2590_Fout, N2623_Fout, N3357_Fout, 
// 					N3358_Fout, N3359_Fout, N3360_Fout, N3604_Fout, 
// 					N3613_Fout, N4272_Fout, N4275_Fout, N4278_Fout, 
// 					N4279_Fout, N4737_Fout, N4738_Fout, N4739_Fout, 
// 					N4740_Fout, N5240_Fout, N5388_Fout, N6641_Fout, 
// 					N6643_Fout, N6646_Fout, N6648_Fout, N6716_Fout, 
// 					N6877_Fout, N6924_Fout, N6925_Fout, N6926_Fout, 
// 					N6927_Fout, N7015_Fout, N709_Fout, N7363_Fout, 
// 					N7365_Fout, N7432_Fout, N7449_Fout, N7465_Fout, 
// 					N7466_Fout, N7467_Fout, N7469_Fout, N7470_Fout, 
// 					N7471_Fout, N7472_Fout, N7473_Fout, N7474_Fout, 
// 					N7476_Fout, N7503_Fout, N7504_Fout, N7506_Fout, 
// 					N7511_Fout, N7515_Fout, N7516_Fout, N7517_Fout, 
// 					N7518_Fout, N7519_Fout, N7520_Fout, N7521_Fout, 
// 					N7522_Fout, N7600_Fout, N7601_Fout, N7602_Fout, 
// 					N7603_Fout, N7604_Fout, N7605_Fout, N7606_Fout, 
// 					N7607_Fout, N7626_Fout, N7698_Fout, N7699_Fout, 
// 					N7700_Fout, N7701_Fout, N7702_Fout, N7703_Fout, 
// 					N7704_Fout, N7705_Fout, N7706_Fout, N7707_Fout, 
// 					N7735_Fout, N7736_Fout, N7737_Fout, N7738_Fout, 
// 					N7739_Fout, N7740_Fout, N7741_Fout, N7742_Fout, 
// 					N7754_Fout, N7755_Fout, N7756_Fout, N7757_Fout, 
// 					N7758_Fout, N7759_Fout, N7760_Fout, N7761_Fout, 
// 					N8075_Fout, N8076_Fout, N8123_Fout, N8124_Fout, 
// 					N8127_Fout, N8128_Fout, N816_Fout} != {N1066_Gout, N1137_Gout, N1138_Gout, N1139_Gout, 
// 					N1140_Gout, N1141_Gout, N1142_Gout, N1143_Gout, 
// 					N1144_Gout, N1145_Gout, N1147_Gout, N1152_Gout, 
// 					N1153_Gout, N1154_Gout, N1155_Gout, N1972_Gout, 
// 					N2054_Gout, N2060_Gout, N2061_Gout, N2139_Gout, 
// 					N2142_Gout, N2309_Gout, N2387_Gout, N2527_Gout, 
// 					N2584_Gout, N2590_Gout, N2623_Gout, N3357_Gout, 
// 					N3358_Gout, N3359_Gout, N3360_Gout, N3604_Gout, 
// 					N3613_Gout, N4272_Gout, N4275_Gout, N4278_Gout, 
// 					N4279_Gout, N4737_Gout, N4738_Gout, N4739_Gout, 
// 					N4740_Gout, N5240_Gout, N5388_Gout, N6641_Gout, 
// 					N6643_Gout, N6646_Gout, N6648_Gout, N6716_Gout, 
// 					N6877_Gout, N6924_Gout, N6925_Gout, N6926_Gout, 
// 					N6927_Gout, N7015_Gout, N709_Gout, N7363_Gout, 
// 					N7365_Gout, N7432_Gout, N7449_Gout, N7465_Gout, 
// 					N7466_Gout, N7467_Gout, N7469_Gout, N7470_Gout, 
// 					N7471_Gout, N7472_Gout, N7473_Gout, N7474_Gout, 
// 					N7476_Gout, N7503_Gout, N7504_Gout, N7506_Gout, 
// 					N7511_Gout, N7515_Gout, N7516_Gout, N7517_Gout, 
// 					N7518_Gout, N7519_Gout, N7520_Gout, N7521_Gout, 
// 					N7522_Gout, N7600_Gout, N7601_Gout, N7602_Gout, 
// 					N7603_Gout, N7604_Gout, N7605_Gout, N7606_Gout, 
// 					N7607_Gout, N7626_Gout, N7698_Gout, N7699_Gout, 
// 					N7700_Gout, N7701_Gout, N7702_Gout, N7703_Gout, 
// 					N7704_Gout, N7705_Gout, N7706_Gout, N7707_Gout, 
// 					N7735_Gout, N7736_Gout, N7737_Gout, N7738_Gout, 
// 					N7739_Gout, N7740_Gout, N7741_Gout, N7742_Gout, 
// 					N7754_Gout, N7755_Gout, N7756_Gout, N7757_Gout, 
// 					N7758_Gout, N7759_Gout, N7760_Gout, N7761_Gout, 
// 					N8075_Gout, N8076_Gout, N8123_Gout, N8124_Gout, 
// 					N8127_Gout, N8128_Gout, N816_Gout}) 
// 				begin
// 					detected = 1'b1;//in case of mismatch the fault is detected
// 					detectedFault = detectedFault + 1;//incrementing the number of detected faults
// 					// $fwrite(logFile, "Detected fault : s@%b  %s\n", stuckAtVal, wireName);
// 				end
// 				else begin
// 					// $fwrite(logFile, "Undetected fault:   %s to %b at %t\n", wireName, stuckAtVal, $time);
// 					// if ((wireName != wireName_prev) || (stuckAtVal != stuckAtVal_prev)) begin
// 						$fwrite(newfaultFile, "s@%b  %s\n", stuckAtVal, wireName);
// 					// end
// 				end
// 				wireName_prev = wireName;
// 				stuckAtVal_prev = stuckAtVal;
// 				faultInjection = 1'b0;
// 				#2;
// 			end
// 		end
// 		$fclose(newfaultFile);
// 		$fclose(faultFile);
// 		i = i+1;
// 		$display("Test set size = %d\nCollapsed Faults = %d\nDetected Faults = %d\n", i, faultCount ,detectedFault );
// 		$display("coverage = %f\n", detectedFault/faultCount);
// 		$fwrite(FCFile, "Test set Size = %d;	Fault Coverage : %f \n", i, detectedFault/faultCount);
// 	end
// 	$fclose(testFile);
// 	// $fclose(logFile);
// 	$fwrite(FCFile, "Simulation Time: %t \n", $time);
// 	$fclose(FCFile);
// 	// $display("Simulation Done at = %t\n", $time);
// 	stopSimulation = 1'b1;
// 	#10;
// 	$stop;
// end
// endmodule








// Typical Fault Simulation
initial begin
	faultCount = 0;
	detectedFault = 0;
	// logFile = $fopen("FS_log.txt", "w");
	// FCFile = $fopen("typicalFS_FC.txt", "w");
	faultFile = $fopen("c5315_faultlist.flt", "r");
	while(!$feof(faultFile))begin//Outer loop : Faults
		detected = 1'b0;
		status = $fscanf(faultFile,"s@%b\n  %s", stuckAtVal, wireName);
		faultInjection = 1'b1;
		#1;
		faultCount = faultCount + 1;
		testFile = $fopen("testPatterns.txt", "r");//Test set File
		while((!$feof(testFile))&(detected == 0)) begin //Inner Loop : TVs
			status = $fscanf(testFile,"%b\n", testVector);
				{N1, N100, N103, N106, N109, N11, N112, N113, 
				N114, N115, N116, N117, N118, N119, N120, N121, 
				N122, N123, N126, N127, N128, N129, N130, N131, 
				N132, N135, N136, N137, N14, N140, N141, N145, 
				N146, N149, N152, N155, N158, N161, N164, N167, 
				N17, N170, N173, N176, N179, N182, N185, N188, 
				N191, N194, N197, N20, N200, N203, N206, N209, 
				N210, N217, N218, N225, N226, N23, N233, N234, 
				N24, N241, N242, N245, N248, N25, N251, N254, 
				N257, N26, N264, N265, N27, N272, N273, N280, 
				N281, N288, N289, N292, N293, N299, N302, N307, 
				N308, N31, N315, N316, N323, N324, N331, N332, 
				N335, N338, N34, N341, N348, N351, N358, N361, 
				N366, N369, N37, N372, N373, N374, N386, N389, 
				N4, N40, N400, N411, N422, N43, N435, N446, N457, 
				N46, N468, N479, N49, N490, N503, N514, N52, N523, 
				N53, N534, N54, N545, N549, N552, N556, N559, N562, 
				N566, N571, N574, N577, N580, N583, N588, N591, N592, 
				N595, N596, N597, N598, N599, N603, N607, N61, N610, 
				N613, N616, N619, N625, N631, N64, N67, N70, N73, N76, 
				N79, N80, N81, N82, N83, N86, N87, N88, N91, N94, N97} = testVector;
				#1;
					if ( {N1066_Fout, N1137_Fout, N1138_Fout, N1139_Fout, 
					N1140_Fout, N1141_Fout, N1142_Fout, N1143_Fout, 
					N1144_Fout, N1145_Fout, N1147_Fout, N1152_Fout, 
					N1153_Fout, N1154_Fout, N1155_Fout, N1972_Fout, 
					N2054_Fout, N2060_Fout, N2061_Fout, N2139_Fout, 
					N2142_Fout, N2309_Fout, N2387_Fout, N2527_Fout, 
					N2584_Fout, N2590_Fout, N2623_Fout, N3357_Fout, 
					N3358_Fout, N3359_Fout, N3360_Fout, N3604_Fout, 
					N3613_Fout, N4272_Fout, N4275_Fout, N4278_Fout, 
					N4279_Fout, N4737_Fout, N4738_Fout, N4739_Fout, 
					N4740_Fout, N5240_Fout, N5388_Fout, N6641_Fout, 
					N6643_Fout, N6646_Fout, N6648_Fout, N6716_Fout, 
					N6877_Fout, N6924_Fout, N6925_Fout, N6926_Fout, 
					N6927_Fout, N7015_Fout, N709_Fout, N7363_Fout, 
					N7365_Fout, N7432_Fout, N7449_Fout, N7465_Fout, 
					N7466_Fout, N7467_Fout, N7469_Fout, N7470_Fout, 
					N7471_Fout, N7472_Fout, N7473_Fout, N7474_Fout, 
					N7476_Fout, N7503_Fout, N7504_Fout, N7506_Fout, 
					N7511_Fout, N7515_Fout, N7516_Fout, N7517_Fout, 
					N7518_Fout, N7519_Fout, N7520_Fout, N7521_Fout, 
					N7522_Fout, N7600_Fout, N7601_Fout, N7602_Fout, 
					N7603_Fout, N7604_Fout, N7605_Fout, N7606_Fout, 
					N7607_Fout, N7626_Fout, N7698_Fout, N7699_Fout, 
					N7700_Fout, N7701_Fout, N7702_Fout, N7703_Fout, 
					N7704_Fout, N7705_Fout, N7706_Fout, N7707_Fout, 
					N7735_Fout, N7736_Fout, N7737_Fout, N7738_Fout, 
					N7739_Fout, N7740_Fout, N7741_Fout, N7742_Fout, 
					N7754_Fout, N7755_Fout, N7756_Fout, N7757_Fout, 
					N7758_Fout, N7759_Fout, N7760_Fout, N7761_Fout, 
					N8075_Fout, N8076_Fout, N8123_Fout, N8124_Fout, 
					N8127_Fout, N8128_Fout, N816_Fout} != {N1066_Gout, N1137_Gout, N1138_Gout, N1139_Gout, 
					N1140_Gout, N1141_Gout, N1142_Gout, N1143_Gout, 
					N1144_Gout, N1145_Gout, N1147_Gout, N1152_Gout, 
					N1153_Gout, N1154_Gout, N1155_Gout, N1972_Gout, 
					N2054_Gout, N2060_Gout, N2061_Gout, N2139_Gout, 
					N2142_Gout, N2309_Gout, N2387_Gout, N2527_Gout, 
					N2584_Gout, N2590_Gout, N2623_Gout, N3357_Gout, 
					N3358_Gout, N3359_Gout, N3360_Gout, N3604_Gout, 
					N3613_Gout, N4272_Gout, N4275_Gout, N4278_Gout, 
					N4279_Gout, N4737_Gout, N4738_Gout, N4739_Gout, 
					N4740_Gout, N5240_Gout, N5388_Gout, N6641_Gout, 
					N6643_Gout, N6646_Gout, N6648_Gout, N6716_Gout, 
					N6877_Gout, N6924_Gout, N6925_Gout, N6926_Gout, 
					N6927_Gout, N7015_Gout, N709_Gout, N7363_Gout, 
					N7365_Gout, N7432_Gout, N7449_Gout, N7465_Gout, 
					N7466_Gout, N7467_Gout, N7469_Gout, N7470_Gout, 
					N7471_Gout, N7472_Gout, N7473_Gout, N7474_Gout, 
					N7476_Gout, N7503_Gout, N7504_Gout, N7506_Gout, 
					N7511_Gout, N7515_Gout, N7516_Gout, N7517_Gout, 
					N7518_Gout, N7519_Gout, N7520_Gout, N7521_Gout, 
					N7522_Gout, N7600_Gout, N7601_Gout, N7602_Gout, 
					N7603_Gout, N7604_Gout, N7605_Gout, N7606_Gout, 
					N7607_Gout, N7626_Gout, N7698_Gout, N7699_Gout, 
					N7700_Gout, N7701_Gout, N7702_Gout, N7703_Gout, 
					N7704_Gout, N7705_Gout, N7706_Gout, N7707_Gout, 
					N7735_Gout, N7736_Gout, N7737_Gout, N7738_Gout, 
					N7739_Gout, N7740_Gout, N7741_Gout, N7742_Gout, 
					N7754_Gout, N7755_Gout, N7756_Gout, N7757_Gout, 
					N7758_Gout, N7759_Gout, N7760_Gout, N7761_Gout, 
					N8075_Gout, N8076_Gout, N8123_Gout, N8124_Gout, 
					N8127_Gout, N8128_Gout, N816_Gout}) 
					begin
				detected = 1'b1;//in case of mismatch the fault is detected
				detectedFault = detectedFault + 1;//incrementing the number of detected faults
			end//if
		end //while eof test
		$fclose(testFile);
		faultInjection = 1'b0;
		#1;
	end//while eof faults
	// $fclose(logFile);
	$display("Collapsed Faults = %d\n , Detected Faults = %d\n", faultCount ,detectedFault );
	$display("coverage = %f\n", detectedFault/faultCount);
	// $fwrite(FCFile, "Fault Coverage %f \n", detectedFault/faultCount);
	// $fwrite(FCFile, "Simulation Time: %t \n", $time);
	// $fclose(FCFile);
	stopSimulation = 1'b1;
	#10;
	$stop;
end // end of initial

endmodule


