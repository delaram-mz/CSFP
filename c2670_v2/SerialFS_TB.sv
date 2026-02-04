`timescale 1 ns / 1ns
module SerialFS_TB ();
reg N1, N100, N101, N102, N103, N104, N105, N106, 
N107, N108, N11, N111, N112, N113, N114, N115, 
N116, N117, N118, N119, N120, N123, N124, N125, 
N126, N127, N128, N129, N130, N131, N132, N135, 
N136, N137, N138, N139, N14, N140, N141, N142, 
N143_I, N144_I, N145_I, N146_I, N147_I, N148_I, 
N149_I, N15, N150_I, N151_I, N152_I, N153_I, 
N154_I, N155_I, N156_I, N157_I, N158_I, N159_I, 
N16, N160_I, N161_I, N162_I, N163_I, N164_I, 
N165_I, N166_I, N167_I, N168_I, N169_I, N170_I, 
N171_I, N172_I, N173_I, N174_I, N175_I, N176_I, 
N177_I, N178_I, N179_I, N180_I, N181_I, N182_I, 
N183_I, N184_I, N185_I, N186_I, N187_I, N188_I, 
N189_I, N19, N190_I, N191_I, N192_I, N193_I, 
N194_I, N195_I, N196_I, N197_I, N198_I, N199_I, 
N2, N20, N200_I, N201_I, N202_I, N203_I, N204_I, 
N205_I, N206_I, N207_I, N208_I, N209_I, N21, 
N210_I, N211_I, N212_I, N213_I, N214_I, N215_I, 
N216_I, N217_I, N218_I, N219, N22, N224, N227, 
N23, N230, N231, N234, N237, N24, N241, N246, 
N25, N253, N256, N259, N26, N262, N263, N266, 
N269, N27, N272, N275, N278, N28, N281, N284, 
N287, N29, N290, N294, N297, N3, N301, N305, 
N309, N313, N316, N319, N32, N322, N325, N328, 
N33, N331, N334, N337, N34, N340, N343, N346, 
N349, N35, N352, N355, N36, N37, N4, N40, N43, 
N44, N47, N48, N49, N5, N50, N51, N52, N53, N54, 
N55, N56, N57, N6, N60, N61, N62, N63, N64, N65, 
N66, N67, N68, N69, N7, N72, N73, N74, N75, N76, 
N77, N78, N79, N8, N80, N81, N82, N85, N86, N87, 
N88, N89, N90, N91, N92, N93, N94, N95, N96, N99;

wire N1026_Fout, N1028_Fout, N1029_Fout, N1269_Fout, N1277_Fout, N143_O_Fout, N1448_Fout, N144_O_Fout, N145_O_Fout, N146_O_Fout, N147_O_Fout, N148_O_Fout, N149_O_Fout, N150_O_Fout, N151_O_Fout, N152_O_Fout, N153_O_Fout, N154_O_Fout, N155_O_Fout, N156_O_Fout, N157_O_Fout, N158_O_Fout, N159_O_Fout, N160_O_Fout, N161_O_Fout, N162_O_Fout, N163_O_Fout, N164_O_Fout, N165_O_Fout, N166_O_Fout, N167_O_Fout, N168_O_Fout, N169_O_Fout, N170_O_Fout, N171_O_Fout, N1726_Fout, N172_O_Fout, N173_O_Fout, N174_O_Fout, N175_O_Fout, N176_O_Fout, N177_O_Fout, N178_O_Fout, N179_O_Fout, N180_O_Fout, N1816_Fout, N1817_Fout, N1818_Fout, N1819_Fout, N181_O_Fout, N1820_Fout, N1821_Fout, N182_O_Fout, N183_O_Fout, N184_O_Fout, N185_O_Fout, N186_O_Fout, N187_O_Fout, N188_O_Fout, N189_O_Fout, N190_O_Fout, N191_O_Fout, N192_O_Fout, N193_O_Fout, N194_O_Fout, N195_O_Fout, N1969_Fout, N196_O_Fout, N1970_Fout, N1971_Fout, N197_O_Fout, N198_O_Fout, N199_O_Fout, N200_O_Fout, N2010_Fout, N2012_Fout, N2014_Fout, N2016_Fout, N2018_Fout, N201_O_Fout, N2020_Fout, N2022_Fout, N202_O_Fout, N203_O_Fout, N204_O_Fout, N205_O_Fout, N206_O_Fout, N207_O_Fout, N208_O_Fout, N209_O_Fout, N210_O_Fout, N211_O_Fout, N212_O_Fout, N213_O_Fout, N214_O_Fout, N215_O_Fout, N216_O_Fout, N217_O_Fout, N218_O_Fout, N2387_Fout, N2388_Fout, N2389_Fout, N2390_Fout, N2496_Fout, N2643_Fout, N2644_Fout, N2891_Fout, N2925_Fout, N2970_Fout, N2971_Fout, N3038_Fout, N3079_Fout, N3546_Fout, N3671_Fout, N3803_Fout, N3804_Fout, N3809_Fout, N3851_Fout, N3875_Fout, N3881_Fout, N3882_Fout, N398_Fout, N400_Fout, N401_Fout, N419_Fout, N420_Fout, N456_Fout, N457_Fout, N458_Fout, N487_Fout, N488_Fout, N489_Fout, N490_Fout, N491_Fout, N492_Fout, N493_Fout, N494_Fout, N792_Fout, N799_Fout, N805_Fout;
wire N1026_Gout, N1028_Gout, N1029_Gout, N1269_Gout, N1277_Gout, N143_O_Gout, N1448_Gout, N144_O_Gout, N145_O_Gout, N146_O_Gout, N147_O_Gout, N148_O_Gout, N149_O_Gout, N150_O_Gout, N151_O_Gout, N152_O_Gout, N153_O_Gout, N154_O_Gout, N155_O_Gout, N156_O_Gout, N157_O_Gout, N158_O_Gout, N159_O_Gout, N160_O_Gout, N161_O_Gout, N162_O_Gout, N163_O_Gout, N164_O_Gout, N165_O_Gout, N166_O_Gout, N167_O_Gout, N168_O_Gout, N169_O_Gout, N170_O_Gout, N171_O_Gout, N1726_Gout, N172_O_Gout, N173_O_Gout, N174_O_Gout, N175_O_Gout, N176_O_Gout, N177_O_Gout, N178_O_Gout, N179_O_Gout, N180_O_Gout, N1816_Gout, N1817_Gout, N1818_Gout, N1819_Gout, N181_O_Gout, N1820_Gout, N1821_Gout, N182_O_Gout, N183_O_Gout, N184_O_Gout, N185_O_Gout, N186_O_Gout, N187_O_Gout, N188_O_Gout, N189_O_Gout, N190_O_Gout, N191_O_Gout, N192_O_Gout, N193_O_Gout, N194_O_Gout, N195_O_Gout, N1969_Gout, N196_O_Gout, N1970_Gout, N1971_Gout, N197_O_Gout, N198_O_Gout, N199_O_Gout, N200_O_Gout, N2010_Gout, N2012_Gout, N2014_Gout, N2016_Gout, N2018_Gout, N201_O_Gout, N2020_Gout, N2022_Gout, N202_O_Gout, N203_O_Gout, N204_O_Gout, N205_O_Gout, N206_O_Gout, N207_O_Gout, N208_O_Gout, N209_O_Gout, N210_O_Gout, N211_O_Gout, N212_O_Gout, N213_O_Gout, N214_O_Gout, N215_O_Gout, N216_O_Gout, N217_O_Gout, N218_O_Gout, N2387_Gout, N2388_Gout, N2389_Gout, N2390_Gout, N2496_Gout, N2643_Gout, N2644_Gout, N2891_Gout, N2925_Gout, N2970_Gout, N2971_Gout, N3038_Gout, N3079_Gout, N3546_Gout, N3671_Gout, N3803_Gout, N3804_Gout, N3809_Gout, N3851_Gout, N3875_Gout, N3881_Gout, N3882_Gout, N398_Gout, N400_Gout, N401_Gout, N419_Gout, N420_Gout, N456_Gout, N457_Gout, N458_Gout, N487_Gout, N488_Gout, N489_Gout, N490_Gout, N491_Gout, N492_Gout, N493_Gout, N494_Gout, N792_Gout, N799_Gout, N805_Gout;

reg detected;
integer logFile, testFile, faultFile, status, FCFile, faultsF, newfaultFile;
integer i;
real faultCount, detectedFault, TVnum;//number of collapsed faults // number of detected faults
reg[35:0] testVector;// applied test vector
// reg [8*20:1] wireName;// name of the current faulty wire
string wireName, wireName_prev;
string faultsPath, newfaultsPath, readIdx, writeIdx;


reg stuckAtVal, stuckAtVal_prev;
reg stopSimulation = 1'b0;
reg faultInjection = 1'b0;

c2670 FUT (
	.N1(N1), .N100(N100), .N101(N101), .N102(N102), .N103(N103), .N104(N104), .N105(N105), .N106(N106), 
	.N107(N107), .N108(N108), .N11(N11), .N111(N111), .N112(N112), .N113(N113), .N114(N114), .N115(N115), 
	.N116(N116), .N117(N117), .N118(N118), .N119(N119), .N120(N120), .N123(N123), .N124(N124), .N125(N125), 
	.N126(N126), .N127(N127), .N128(N128), .N129(N129), .N130(N130), .N131(N131), .N132(N132), .N135(N135), 
	.N136(N136), .N137(N137), .N138(N138), .N139(N139), .N14(N14), .N140(N140), .N141(N141), .N142(N142), 
	.N143_I(N143_I), .N144_I(N144_I), .N145_I(N145_I), .N146_I(N146_I), .N147_I(N147_I), .N148_I(N148_I), 
	.N149_I(N149_I), .N15(N15), .N150_I(N150_I), .N151_I(N151_I), .N152_I(N152_I), .N153_I(N153_I), 
	.N154_I(N154_I), .N155_I(N155_I), .N156_I(N156_I), .N157_I(N157_I), .N158_I(N158_I), .N159_I(N159_I), 
	.N16(N16), .N160_I(N160_I), .N161_I(N161_I), .N162_I(N162_I), .N163_I(N163_I), .N164_I(N164_I), 
	.N165_I(N165_I), .N166_I(N166_I), .N167_I(N167_I), .N168_I(N168_I), .N169_I(N169_I), .N170_I(N170_I), 
	.N171_I(N171_I), .N172_I(N172_I), .N173_I(N173_I), .N174_I(N174_I), .N175_I(N175_I), .N176_I(N176_I), 
	.N177_I(N177_I), .N178_I(N178_I), .N179_I(N179_I), .N180_I(N180_I), .N181_I(N181_I), .N182_I(N182_I), 
	.N183_I(N183_I), .N184_I(N184_I), .N185_I(N185_I), .N186_I(N186_I), .N187_I(N187_I), .N188_I(N188_I), 
	.N189_I(N189_I), .N19(N19), .N190_I(N190_I), .N191_I(N191_I), .N192_I(N192_I), .N193_I(N193_I), 
	.N194_I(N194_I), .N195_I(N195_I), .N196_I(N196_I), .N197_I(N197_I), .N198_I(N198_I), .N199_I(N199_I), 
	.N2(N2), .N20(N20), .N200_I(N200_I), .N201_I(N201_I), .N202_I(N202_I), .N203_I(N203_I), .N204_I(N204_I), 
	.N205_I(N205_I), .N206_I(N206_I), .N207_I(N207_I), .N208_I(N208_I), .N209_I(N209_I), .N21(N21), 
	.N210_I(N210_I), .N211_I(N211_I), .N212_I(N212_I), .N213_I(N213_I), .N214_I(N214_I), .N215_I(N215_I), 
	.N216_I(N216_I), .N217_I(N217_I), .N218_I(N218_I), .N219(N219), .N22(N22), .N224(N224), .N227(N227), 
	.N23(N23), .N230(N230), .N231(N231), .N234(N234), .N237(N237), .N24(N24), .N241(N241), .N246(N246), 
	.N25(N25), .N253(N253), .N256(N256), .N259(N259), .N26(N26), .N262(N262), .N263(N263), .N266(N266), 
	.N269(N269), .N27(N27), .N272(N272), .N275(N275), .N278(N278), .N28(N28), .N281(N281), .N284(N284), 
	.N287(N287), .N29(N29), .N290(N290), .N294(N294), .N297(N297), .N3(N3), .N301(N301), .N305(N305), 
	.N309(N309), .N313(N313), .N316(N316), .N319(N319), .N32(N32), .N322(N322), .N325(N325), .N328(N328), 
	.N33(N33), .N331(N331), .N334(N334), .N337(N337), .N34(N34), .N340(N340), .N343(N343), .N346(N346), 
	.N349(N349), .N35(N35), .N352(N352), .N355(N355), .N36(N36), .N37(N37), .N4(N4), .N40(N40), .N43(N43), 
	.N44(N44), .N47(N47), .N48(N48), .N49(N49), .N5(N5), .N50(N50), .N51(N51), .N52(N52), .N53(N53), .N54(N54), 
	.N55(N55), .N56(N56), .N57(N57), .N6(N6), .N60(N60), .N61(N61), .N62(N62), .N63(N63), .N64(N64), .N65(N65), 
	.N66(N66), .N67(N67), .N68(N68), .N69(N69), .N7(N7), .N72(N72), .N73(N73), .N74(N74), .N75(N75), .N76(N76), 
	.N77(N77), .N78(N78), .N79(N79), .N8(N8), .N80(N80), .N81(N81), .N82(N82), .N85(N85), .N86(N86), .N87(N87), 
	.N88(N88), .N89(N89), .N90(N90), .N91(N91), .N92(N92), .N93(N93), .N94(N94), .N95(N95), .N96(N96), .N99(N99),
	.N1026(N1026_Fout), .N1028(N1028_Fout), .N1029(N1029_Fout), .N1269(N1269_Fout), .N1277(N1277_Fout), .N143_O(N143_O_Fout), .N1448(N1448_Fout), .N144_O(N144_O_Fout), .N145_O(N145_O_Fout), .N146_O(N146_O_Fout), .N147_O(N147_O_Fout), .N148_O(N148_O_Fout), .N149_O(N149_O_Fout), .N150_O(N150_O_Fout), .N151_O(N151_O_Fout), .N152_O(N152_O_Fout), .N153_O(N153_O_Fout), .N154_O(N154_O_Fout), .N155_O(N155_O_Fout), .N156_O(N156_O_Fout), .N157_O(N157_O_Fout), .N158_O(N158_O_Fout), .N159_O(N159_O_Fout), .N160_O(N160_O_Fout), .N161_O(N161_O_Fout), .N162_O(N162_O_Fout), .N163_O(N163_O_Fout), .N164_O(N164_O_Fout), .N165_O(N165_O_Fout), .N166_O(N166_O_Fout), .N167_O(N167_O_Fout), .N168_O(N168_O_Fout), .N169_O(N169_O_Fout), .N170_O(N170_O_Fout), .N171_O(N171_O_Fout), .N1726(N1726_Fout), .N172_O(N172_O_Fout), .N173_O(N173_O_Fout), .N174_O(N174_O_Fout), .N175_O(N175_O_Fout), .N176_O(N176_O_Fout), .N177_O(N177_O_Fout), .N178_O(N178_O_Fout), .N179_O(N179_O_Fout), .N180_O(N180_O_Fout), .N1816(N1816_Fout), .N1817(N1817_Fout), .N1818(N1818_Fout), .N1819(N1819_Fout), .N181_O(N181_O_Fout), .N1820(N1820_Fout), .N1821(N1821_Fout), .N182_O(N182_O_Fout), .N183_O(N183_O_Fout), .N184_O(N184_O_Fout), .N185_O(N185_O_Fout), .N186_O(N186_O_Fout), .N187_O(N187_O_Fout), .N188_O(N188_O_Fout), .N189_O(N189_O_Fout), .N190_O(N190_O_Fout), .N191_O(N191_O_Fout), .N192_O(N192_O_Fout), .N193_O(N193_O_Fout), .N194_O(N194_O_Fout), .N195_O(N195_O_Fout), .N1969(N1969_Fout), .N196_O(N196_O_Fout), .N1970(N1970_Fout), .N1971(N1971_Fout), .N197_O(N197_O_Fout), .N198_O(N198_O_Fout), .N199_O(N199_O_Fout), .N200_O(N200_O_Fout), .N2010(N2010_Fout), .N2012(N2012_Fout), .N2014(N2014_Fout), .N2016(N2016_Fout), .N2018(N2018_Fout), .N201_O(N201_O_Fout), .N2020(N2020_Fout), .N2022(N2022_Fout), .N202_O(N202_O_Fout), .N203_O(N203_O_Fout), .N204_O(N204_O_Fout), .N205_O(N205_O_Fout), .N206_O(N206_O_Fout), .N207_O(N207_O_Fout), .N208_O(N208_O_Fout), .N209_O(N209_O_Fout), .N210_O(N210_O_Fout), .N211_O(N211_O_Fout), .N212_O(N212_O_Fout), .N213_O(N213_O_Fout), .N214_O(N214_O_Fout), .N215_O(N215_O_Fout), .N216_O(N216_O_Fout), .N217_O(N217_O_Fout), .N218_O(N218_O_Fout), .N2387(N2387_Fout), .N2388(N2388_Fout), .N2389(N2389_Fout), .N2390(N2390_Fout), .N2496(N2496_Fout), .N2643(N2643_Fout), .N2644(N2644_Fout), .N2891(N2891_Fout), .N2925(N2925_Fout), .N2970(N2970_Fout), .N2971(N2971_Fout), .N3038(N3038_Fout), .N3079(N3079_Fout), .N3546(N3546_Fout), .N3671(N3671_Fout), .N3803(N3803_Fout), .N3804(N3804_Fout), .N3809(N3809_Fout), .N3851(N3851_Fout), .N3875(N3875_Fout), .N3881(N3881_Fout), .N3882(N3882_Fout), .N398(N398_Fout), .N400(N400_Fout), .N401(N401_Fout), .N419(N419_Fout), .N420(N420_Fout), .N456(N456_Fout), .N457(N457_Fout), .N458(N458_Fout), .N487(N487_Fout), .N488(N488_Fout), .N489(N489_Fout), .N490(N490_Fout), .N491(N491_Fout), .N492(N492_Fout), .N493(N493_Fout), .N494(N494_Fout), .N792(N792_Fout), .N799(N799_Fout), .N805(N805_Fout)
	);


c2670 GUT (
	.N1(N1), .N100(N100), .N101(N101), .N102(N102), .N103(N103), .N104(N104), .N105(N105), .N106(N106), 
	.N107(N107), .N108(N108), .N11(N11), .N111(N111), .N112(N112), .N113(N113), .N114(N114), .N115(N115), 
	.N116(N116), .N117(N117), .N118(N118), .N119(N119), .N120(N120), .N123(N123), .N124(N124), .N125(N125), 
	.N126(N126), .N127(N127), .N128(N128), .N129(N129), .N130(N130), .N131(N131), .N132(N132), .N135(N135), 
	.N136(N136), .N137(N137), .N138(N138), .N139(N139), .N14(N14), .N140(N140), .N141(N141), .N142(N142), 
	.N143_I(N143_I), .N144_I(N144_I), .N145_I(N145_I), .N146_I(N146_I), .N147_I(N147_I), .N148_I(N148_I), 
	.N149_I(N149_I), .N15(N15), .N150_I(N150_I), .N151_I(N151_I), .N152_I(N152_I), .N153_I(N153_I), 
	.N154_I(N154_I), .N155_I(N155_I), .N156_I(N156_I), .N157_I(N157_I), .N158_I(N158_I), .N159_I(N159_I), 
	.N16(N16), .N160_I(N160_I), .N161_I(N161_I), .N162_I(N162_I), .N163_I(N163_I), .N164_I(N164_I), 
	.N165_I(N165_I), .N166_I(N166_I), .N167_I(N167_I), .N168_I(N168_I), .N169_I(N169_I), .N170_I(N170_I), 
	.N171_I(N171_I), .N172_I(N172_I), .N173_I(N173_I), .N174_I(N174_I), .N175_I(N175_I), .N176_I(N176_I), 
	.N177_I(N177_I), .N178_I(N178_I), .N179_I(N179_I), .N180_I(N180_I), .N181_I(N181_I), .N182_I(N182_I), 
	.N183_I(N183_I), .N184_I(N184_I), .N185_I(N185_I), .N186_I(N186_I), .N187_I(N187_I), .N188_I(N188_I), 
	.N189_I(N189_I), .N19(N19), .N190_I(N190_I), .N191_I(N191_I), .N192_I(N192_I), .N193_I(N193_I), 
	.N194_I(N194_I), .N195_I(N195_I), .N196_I(N196_I), .N197_I(N197_I), .N198_I(N198_I), .N199_I(N199_I), 
	.N2(N2), .N20(N20), .N200_I(N200_I), .N201_I(N201_I), .N202_I(N202_I), .N203_I(N203_I), .N204_I(N204_I), 
	.N205_I(N205_I), .N206_I(N206_I), .N207_I(N207_I), .N208_I(N208_I), .N209_I(N209_I), .N21(N21), 
	.N210_I(N210_I), .N211_I(N211_I), .N212_I(N212_I), .N213_I(N213_I), .N214_I(N214_I), .N215_I(N215_I), 
	.N216_I(N216_I), .N217_I(N217_I), .N218_I(N218_I), .N219(N219), .N22(N22), .N224(N224), .N227(N227), 
	.N23(N23), .N230(N230), .N231(N231), .N234(N234), .N237(N237), .N24(N24), .N241(N241), .N246(N246), 
	.N25(N25), .N253(N253), .N256(N256), .N259(N259), .N26(N26), .N262(N262), .N263(N263), .N266(N266), 
	.N269(N269), .N27(N27), .N272(N272), .N275(N275), .N278(N278), .N28(N28), .N281(N281), .N284(N284), 
	.N287(N287), .N29(N29), .N290(N290), .N294(N294), .N297(N297), .N3(N3), .N301(N301), .N305(N305), 
	.N309(N309), .N313(N313), .N316(N316), .N319(N319), .N32(N32), .N322(N322), .N325(N325), .N328(N328), 
	.N33(N33), .N331(N331), .N334(N334), .N337(N337), .N34(N34), .N340(N340), .N343(N343), .N346(N346), 
	.N349(N349), .N35(N35), .N352(N352), .N355(N355), .N36(N36), .N37(N37), .N4(N4), .N40(N40), .N43(N43), 
	.N44(N44), .N47(N47), .N48(N48), .N49(N49), .N5(N5), .N50(N50), .N51(N51), .N52(N52), .N53(N53), .N54(N54), 
	.N55(N55), .N56(N56), .N57(N57), .N6(N6), .N60(N60), .N61(N61), .N62(N62), .N63(N63), .N64(N64), .N65(N65), 
	.N66(N66), .N67(N67), .N68(N68), .N69(N69), .N7(N7), .N72(N72), .N73(N73), .N74(N74), .N75(N75), .N76(N76), 
	.N77(N77), .N78(N78), .N79(N79), .N8(N8), .N80(N80), .N81(N81), .N82(N82), .N85(N85), .N86(N86), .N87(N87), 
	.N88(N88), .N89(N89), .N90(N90), .N91(N91), .N92(N92), .N93(N93), .N94(N94), .N95(N95), .N96(N96), .N99(N99),
	.N1026(N1026_Gout), .N1028(N1028_Gout), .N1029(N1029_Gout), .N1269(N1269_Gout), .N1277(N1277_Gout), .N143_O(N143_O_Gout), .N1448(N1448_Gout), .N144_O(N144_O_Gout), .N145_O(N145_O_Gout), .N146_O(N146_O_Gout), .N147_O(N147_O_Gout), .N148_O(N148_O_Gout), .N149_O(N149_O_Gout), .N150_O(N150_O_Gout), .N151_O(N151_O_Gout), .N152_O(N152_O_Gout), .N153_O(N153_O_Gout), .N154_O(N154_O_Gout), .N155_O(N155_O_Gout), .N156_O(N156_O_Gout), .N157_O(N157_O_Gout), .N158_O(N158_O_Gout), .N159_O(N159_O_Gout), .N160_O(N160_O_Gout), .N161_O(N161_O_Gout), .N162_O(N162_O_Gout), .N163_O(N163_O_Gout), .N164_O(N164_O_Gout), .N165_O(N165_O_Gout), .N166_O(N166_O_Gout), .N167_O(N167_O_Gout), .N168_O(N168_O_Gout), .N169_O(N169_O_Gout), .N170_O(N170_O_Gout), .N171_O(N171_O_Gout), .N1726(N1726_Gout), .N172_O(N172_O_Gout), .N173_O(N173_O_Gout), .N174_O(N174_O_Gout), .N175_O(N175_O_Gout), .N176_O(N176_O_Gout), .N177_O(N177_O_Gout), .N178_O(N178_O_Gout), .N179_O(N179_O_Gout), .N180_O(N180_O_Gout), .N1816(N1816_Gout), .N1817(N1817_Gout), .N1818(N1818_Gout), .N1819(N1819_Gout), .N181_O(N181_O_Gout), .N1820(N1820_Gout), .N1821(N1821_Gout), .N182_O(N182_O_Gout), .N183_O(N183_O_Gout), .N184_O(N184_O_Gout), .N185_O(N185_O_Gout), .N186_O(N186_O_Gout), .N187_O(N187_O_Gout), .N188_O(N188_O_Gout), .N189_O(N189_O_Gout), .N190_O(N190_O_Gout), .N191_O(N191_O_Gout), .N192_O(N192_O_Gout), .N193_O(N193_O_Gout), .N194_O(N194_O_Gout), .N195_O(N195_O_Gout), .N1969(N1969_Gout), .N196_O(N196_O_Gout), .N1970(N1970_Gout), .N1971(N1971_Gout), .N197_O(N197_O_Gout), .N198_O(N198_O_Gout), .N199_O(N199_O_Gout), .N200_O(N200_O_Gout), .N2010(N2010_Gout), .N2012(N2012_Gout), .N2014(N2014_Gout), .N2016(N2016_Gout), .N2018(N2018_Gout), .N201_O(N201_O_Gout), .N2020(N2020_Gout), .N2022(N2022_Gout), .N202_O(N202_O_Gout), .N203_O(N203_O_Gout), .N204_O(N204_O_Gout), .N205_O(N205_O_Gout), .N206_O(N206_O_Gout), .N207_O(N207_O_Gout), .N208_O(N208_O_Gout), .N209_O(N209_O_Gout), .N210_O(N210_O_Gout), .N211_O(N211_O_Gout), .N212_O(N212_O_Gout), .N213_O(N213_O_Gout), .N214_O(N214_O_Gout), .N215_O(N215_O_Gout), .N216_O(N216_O_Gout), .N217_O(N217_O_Gout), .N218_O(N218_O_Gout), .N2387(N2387_Gout), .N2388(N2388_Gout), .N2389(N2389_Gout), .N2390(N2390_Gout), .N2496(N2496_Gout), .N2643(N2643_Gout), .N2644(N2644_Gout), .N2891(N2891_Gout), .N2925(N2925_Gout), .N2970(N2970_Gout), .N2971(N2971_Gout), .N3038(N3038_Gout), .N3079(N3079_Gout), .N3546(N3546_Gout), .N3671(N3671_Gout), .N3803(N3803_Gout), .N3804(N3804_Gout), .N3809(N3809_Gout), .N3851(N3851_Gout), .N3875(N3875_Gout), .N3881(N3881_Gout), .N3882(N3882_Gout), .N398(N398_Gout), .N400(N400_Gout), .N401(N401_Gout), .N419(N419_Gout), .N420(N420_Gout), .N456(N456_Gout), .N457(N457_Gout), .N458(N458_Gout), .N487(N487_Gout), .N488(N488_Gout), .N489(N489_Gout), .N490(N490_Gout), .N491(N491_Gout), .N492(N492_Gout), .N493(N493_Gout), .N494(N494_Gout), .N792(N792_Gout), .N799(N799_Gout), .N805(N805_Gout)
	);


// Enhanced Partial Fault Simulation with Fault Dropping
initial begin
	logFile = $fopen("FS_log.txt", "w");
	FCFile = $fopen("EnhancedPartialFS_FC.txt", "w");
	{N1, N100, N101, N102, N103, N104, N105, N106, 
	N107, N108, N11, N111, N112, N113, N114, N115, 
	N116, N117, N118, N119, N120, N123, N124, N125, 
	N126, N127, N128, N129, N130, N131, N132, N135, 
	N136, N137, N138, N139, N14, N140, N141, N142, 
	N143_I, N144_I, N145_I, N146_I, N147_I, N148_I, 
	N149_I, N15, N150_I, N151_I, N152_I, N153_I, 
	N154_I, N155_I, N156_I, N157_I, N158_I, N159_I, 
	N16, N160_I, N161_I, N162_I, N163_I, N164_I, 
	N165_I, N166_I, N167_I, N168_I, N169_I, N170_I, 
	N171_I, N172_I, N173_I, N174_I, N175_I, N176_I, 
	N177_I, N178_I, N179_I, N180_I, N181_I, N182_I, 
	N183_I, N184_I, N185_I, N186_I, N187_I, N188_I, 
	N189_I, N19, N190_I, N191_I, N192_I, N193_I, 
	N194_I, N195_I, N196_I, N197_I, N198_I, N199_I, 
	N2, N20, N200_I, N201_I, N202_I, N203_I, N204_I, 
	N205_I, N206_I, N207_I, N208_I, N209_I, N21, 
	N210_I, N211_I, N212_I, N213_I, N214_I, N215_I, 
	N216_I, N217_I, N218_I, N219, N22, N224, N227, 
	N23, N230, N231, N234, N237, N24, N241, N246, 
	N25, N253, N256, N259, N26, N262, N263, N266, 
	N269, N27, N272, N275, N278, N28, N281, N284, 
	N287, N29, N290, N294, N297, N3, N301, N305, 
	N309, N313, N316, N319, N32, N322, N325, N328, 
	N33, N331, N334, N337, N34, N340, N343, N346, 
	N349, N35, N352, N355, N36, N37, N4, N40, N43, 
	N44, N47, N48, N49, N5, N50, N51, N52, N53, N54, 
	N55, N56, N57, N6, N60, N61, N62, N63, N64, N65, 
	N66, N67, N68, N69, N7, N72, N73, N74, N75, N76, 
	N77, N78, N79, N8, N80, N81, N82, N85, N86, N87, 
	N88, N89, N90, N91, N92, N93, N94, N95, N96, N99} = 0;

	TVnum = 0;
	faultCount = 1454;
	detectedFault = 0;
	i = 0;
	TVnum = 0;
	$fwrite(logFile, "==========> Fault Simulation Begins at %t \n", $time);
	testFile = $fopen("testPatterns500.txt", "r");//Test set File
	while(!$feof(testFile)&&(i<500)) begin
		status = $fscanf(testFile,"%b\n", testVector);
		$fwrite(logFile, "Test Vector number %d is:  %b \n",i, testVector);
		if (i==0) begin
			faultFile = $fopen("c2670_faultlist.flt", "r");
		end
		else begin
			$sformat(readIdx, "%0d", i);
			faultsPath = {"faults/faultSet_",readIdx,".flt"};
			faultFile = $fopen(faultsPath, "r");
		end

		$sformat(writeIdx, "%0d", i+1);
		newfaultsPath = {"faults/faultSet_",writeIdx,".flt"};
		newfaultFile = $fopen(newfaultsPath, "w");
		while( !$feof(faultFile))begin
			detected = 1'b0;
			status = $fscanf(faultFile,"s@%b\n  %s", stuckAtVal, wireName);
			// $fwrite(logFile, "Net to be faulty => %s to %b \n", wireName, stuckAtVal);
			#2;
			{N1, N100, N101, N102, N103, N104, N105, N106, 
			N107, N108, N11, N111, N112, N113, N114, N115, 
			N116, N117, N118, N119, N120, N123, N124, N125, 
			N126, N127, N128, N129, N130, N131, N132, N135, 
			N136, N137, N138, N139, N14, N140, N141, N142, 
			N143_I, N144_I, N145_I, N146_I, N147_I, N148_I, 
			N149_I, N15, N150_I, N151_I, N152_I, N153_I, 
			N154_I, N155_I, N156_I, N157_I, N158_I, N159_I, 
			N16, N160_I, N161_I, N162_I, N163_I, N164_I, 
			N165_I, N166_I, N167_I, N168_I, N169_I, N170_I, 
			N171_I, N172_I, N173_I, N174_I, N175_I, N176_I, 
			N177_I, N178_I, N179_I, N180_I, N181_I, N182_I, 
			N183_I, N184_I, N185_I, N186_I, N187_I, N188_I, 
			N189_I, N19, N190_I, N191_I, N192_I, N193_I, 
			N194_I, N195_I, N196_I, N197_I, N198_I, N199_I, 
			N2, N20, N200_I, N201_I, N202_I, N203_I, N204_I, 
			N205_I, N206_I, N207_I, N208_I, N209_I, N21, 
			N210_I, N211_I, N212_I, N213_I, N214_I, N215_I, 
			N216_I, N217_I, N218_I, N219, N22, N224, N227, 
			N23, N230, N231, N234, N237, N24, N241, N246, 
			N25, N253, N256, N259, N26, N262, N263, N266, 
			N269, N27, N272, N275, N278, N28, N281, N284, 
			N287, N29, N290, N294, N297, N3, N301, N305, 
			N309, N313, N316, N319, N32, N322, N325, N328, 
			N33, N331, N334, N337, N34, N340, N343, N346, 
			N349, N35, N352, N355, N36, N37, N4, N40, N43, 
			N44, N47, N48, N49, N5, N50, N51, N52, N53, N54, 
			N55, N56, N57, N6, N60, N61, N62, N63, N64, N65, 
			N66, N67, N68, N69, N7, N72, N73, N74, N75, N76, 
			N77, N78, N79, N8, N80, N81, N82, N85, N86, N87, 
			N88, N89, N90, N91, N92, N93, N94, N95, N96, N99} = testVector;
			#2;
			faultInjection = 1'b1;
			#90;
			if ( {N1026_Gout, N1028_Gout, N1029_Gout, N1269_Gout, N1277_Gout, N143_O_Gout, N1448_Gout, N144_O_Gout, N145_O_Gout, N146_O_Gout, N147_O_Gout, N148_O_Gout, N149_O_Gout, N150_O_Gout, N151_O_Gout, N152_O_Gout, N153_O_Gout, N154_O_Gout, N155_O_Gout, N156_O_Gout, N157_O_Gout, N158_O_Gout, N159_O_Gout, N160_O_Gout, N161_O_Gout, N162_O_Gout, N163_O_Gout, N164_O_Gout, N165_O_Gout, N166_O_Gout, N167_O_Gout, N168_O_Gout, N169_O_Gout, N170_O_Gout, N171_O_Gout, N1726_Gout, N172_O_Gout, N173_O_Gout, N174_O_Gout, N175_O_Gout, N176_O_Gout, N177_O_Gout, N178_O_Gout, N179_O_Gout, N180_O_Gout, N1816_Gout, N1817_Gout, N1818_Gout, N1819_Gout, N181_O_Gout, N1820_Gout, N1821_Gout, N182_O_Gout, N183_O_Gout, N184_O_Gout, N185_O_Gout, N186_O_Gout, N187_O_Gout, N188_O_Gout, N189_O_Gout, N190_O_Gout, N191_O_Gout, N192_O_Gout, N193_O_Gout, N194_O_Gout, N195_O_Gout, N1969_Gout, N196_O_Gout, N1970_Gout, N1971_Gout, N197_O_Gout, N198_O_Gout, N199_O_Gout, N200_O_Gout, N2010_Gout, N2012_Gout, N2014_Gout, N2016_Gout, N2018_Gout, N201_O_Gout, N2020_Gout, N2022_Gout, N202_O_Gout, N203_O_Gout, N204_O_Gout, N205_O_Gout, N206_O_Gout, N207_O_Gout, N208_O_Gout, N209_O_Gout, N210_O_Gout, N211_O_Gout, N212_O_Gout, N213_O_Gout, N214_O_Gout, N215_O_Gout, N216_O_Gout, N217_O_Gout, N218_O_Gout, N2387_Gout, N2388_Gout, N2389_Gout, N2390_Gout, N2496_Gout, N2643_Gout, N2644_Gout, N2891_Gout, N2925_Gout, N2970_Gout, N2971_Gout, N3038_Gout, N3079_Gout, N3546_Gout, N3671_Gout, N3803_Gout, N3804_Gout, N3809_Gout, N3851_Gout, N3875_Gout, N3881_Gout, N3882_Gout, N398_Gout, N400_Gout, N401_Gout, N419_Gout, N420_Gout, N456_Gout, N457_Gout, N458_Gout, N487_Gout, N488_Gout, N489_Gout, N490_Gout, N491_Gout, N492_Gout, N493_Gout, N494_Gout, N792_Gout, N799_Gout, N805_Gout} != {N1026_Fout, N1028_Fout, N1029_Fout, N1269_Fout, N1277_Fout, N143_O_Fout, N1448_Fout, N144_O_Fout, N145_O_Fout, N146_O_Fout, N147_O_Fout, N148_O_Fout, N149_O_Fout, N150_O_Fout, N151_O_Fout, N152_O_Fout, N153_O_Fout, N154_O_Fout, N155_O_Fout, N156_O_Fout, N157_O_Fout, N158_O_Fout, N159_O_Fout, N160_O_Fout, N161_O_Fout, N162_O_Fout, N163_O_Fout, N164_O_Fout, N165_O_Fout, N166_O_Fout, N167_O_Fout, N168_O_Fout, N169_O_Fout, N170_O_Fout, N171_O_Fout, N1726_Fout, N172_O_Fout, N173_O_Fout, N174_O_Fout, N175_O_Fout, N176_O_Fout, N177_O_Fout, N178_O_Fout, N179_O_Fout, N180_O_Fout, N1816_Fout, N1817_Fout, N1818_Fout, N1819_Fout, N181_O_Fout, N1820_Fout, N1821_Fout, N182_O_Fout, N183_O_Fout, N184_O_Fout, N185_O_Fout, N186_O_Fout, N187_O_Fout, N188_O_Fout, N189_O_Fout, N190_O_Fout, N191_O_Fout, N192_O_Fout, N193_O_Fout, N194_O_Fout, N195_O_Fout, N1969_Fout, N196_O_Fout, N1970_Fout, N1971_Fout, N197_O_Fout, N198_O_Fout, N199_O_Fout, N200_O_Fout, N2010_Fout, N2012_Fout, N2014_Fout, N2016_Fout, N2018_Fout, N201_O_Fout, N2020_Fout, N2022_Fout, N202_O_Fout, N203_O_Fout, N204_O_Fout, N205_O_Fout, N206_O_Fout, N207_O_Fout, N208_O_Fout, N209_O_Fout, N210_O_Fout, N211_O_Fout, N212_O_Fout, N213_O_Fout, N214_O_Fout, N215_O_Fout, N216_O_Fout, N217_O_Fout, N218_O_Fout, N2387_Fout, N2388_Fout, N2389_Fout, N2390_Fout, N2496_Fout, N2643_Fout, N2644_Fout, N2891_Fout, N2925_Fout, N2970_Fout, N2971_Fout, N3038_Fout, N3079_Fout, N3546_Fout, N3671_Fout, N3803_Fout, N3804_Fout, N3809_Fout, N3851_Fout, N3875_Fout, N3881_Fout, N3882_Fout, N398_Fout, N400_Fout, N401_Fout, N419_Fout, N420_Fout, N456_Fout, N457_Fout, N458_Fout, N487_Fout, N488_Fout, N489_Fout, N490_Fout, N491_Fout, N492_Fout, N493_Fout, N494_Fout, N792_Fout, N799_Fout, N805_Fout}) 
			begin
				detected = 1'b1;//in case of mismatch the fault is detected
				detectedFault = detectedFault + 1;//incrementing the number of detected faults
				$fwrite(logFile, "Detected fault : s@%b  %s\n", stuckAtVal, wireName);
			end
			else begin
				// $fwrite(logFile, "Undetected fault:   %s to %b at %t\n", wireName, stuckAtVal, $time);
				if ((wireName != wireName_prev) || (stuckAtVal != stuckAtVal_prev)) begin
					$fwrite(newfaultFile, "s@%b  %s\n", stuckAtVal, wireName);
				end			
			end
			wireName_prev = wireName;
			stuckAtVal_prev = stuckAtVal;
			faultInjection = 1'b0;
			#2;
		end
		$fclose(newfaultFile);
		$fclose(faultFile);
		i = i+1;
		$display("Test set size = %d\nCollapsed Faults = %d\nDetected Faults = %d\n", i, faultCount ,detectedFault );
		$display("coverage = %f\n", detectedFault/faultCount);
		$fwrite(FCFile, "Test set Size = %d;	Fault Coverage : %f \n", i, detectedFault/faultCount);
	end
	$fclose(testFile);
	$fclose(logFile);
	$fwrite(FCFile, "Simulation Time: %t \n", $time);
	$fclose(FCFile);
	// $display("Simulation Done at = %t\n", $time);
	stopSimulation = 1'b1;
	#10;
	$stop;
end

endmodule
