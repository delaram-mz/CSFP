#include "NAND2_X1.h"
#include "NOR2_X1.h"
#include "INV1_X1.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <map>


extern std::map<int, gates*> module_map;
SC_MODULE(c432_netlist)
{
	std::map<int, gates*> module_map;
	sc_in <fs_logic> N1, N102, N105, N108, N11, N112, N115, N14, N17, N21, N24, N27, N30, N34, N37, N4, N40, N43, N47, N50, N53, N56, N60, N63, N66, N69, N73, N76, N79, N8, N82, N86, N89, N92, N95, N99;
	sc_out <fs_logic> N223, N329, N370, N421, N430, N431, N432;
	sc_signal <fs_logic> _000_, _001_, _002_, _003_, _004_, _005_, _006_, _007_, _008_, _009_, _010_, _011_, _012_, _013_, _014_, _015_, _016_, _017_, _018_, _019_, _020_, _021_, _022_, _023_, _024_, _025_, _026_, _027_, _028_, _029_, _030_, _031_, _032_, _033_, _034_, _035_, _036_, _037_, _038_, _039_, _040_, _041_, _042_, _043_, _044_, _045_, _046_, _047_, _048_, _049_, _050_, _051_, _052_, _053_, _054_, _055_, _056_, _057_, _058_, _059_, _060_, _061_, _062_, _063_, _064_, _065_, _066_, _067_, _068_, _069_, _070_, _071_, _072_, _073_, _074_, _075_, _076_, _077_, _078_, _079_, _080_, _081_, _082_, _083_, _084_, _085_, _086_, _087_, _088_, _089_, _090_, _091_, _092_, _093_, _094_, _095_, _096_, _097_, _098_, _099_, _100_, _101_, _102_, _103_, _104_, _105_, _106_, _107_, _108_, _109_, _110_, _111_, _112_, _113_, _114_, _115_, _116_, _117_, _118_, _119_, _120_, _121_, _122_, _123_, _124_, _125_, _126_, _127_, _128_, _129_, _130_, _131_, _132_, _133_, _134_, _135_, _136_, _137_, _138_, _139_, _140_, _141_, _142_, _143_, _144_, _145_, _146_, _147_, _148_, _149_, _150_, _151_, _152_, _153_, _154_, _155_, _156_, _157_, _158_, _159_, _160_, _161_, _162_, _163_, _164_, _165_, _166_, _167_, _168_, _169_, _170_, _171_, _172_, _173_, _174_, _175_, _176_, _177_, _178_, _179_, _180_, _181_, _182_, _183_, _184_, _185_, _186_, _187_, _188_, _189_, _190_, _191_, _192_, _193_, _194_, _195_, _196_, _197_, _198_, _199_, _200_, _201_, _202_, _203_, _204_, _205_, _206_, _207_, _208_, _209_, _210_, _211_, _212_, _213_, _214_, _215_, _216_, _217_, _218_, _219_, _220_, _221_, _222_, _223_, _224_, _225_, _226_, _227_, _228_, _229_, _230_, _231_, _232_, _233_, _234_, _235_, _236_, _237_, _238_, _239_, _240_, _241_, _242_, _243_, _244_, _245_, _246_, _247_, _248_, _249_, _250_, _251_, _252_, _253_, _254_, _255_, _256_, _257_, _258_, _259_, _260_, _261_, _262_, _263_, _264_, _265_, _266_, _267_, _268_, _269_, _270_, _271_, _272_, _273_, _274_, _275_, _276_, _277_, _278_, _279_, _280_, _281_, _282_, _283_, _284_, _285_, _286_, _287_, _288_, _289_, _290_, _291_, _292_, _293_, _294_, _295_, _296_, _297_, _298_, _299_, _300_, _301_, _302_, _303_, _304_, _305_, _306_, _307_, _308_, _309_, _310_, _311_, _312_, _313_, _314_, _315_, _316_, _317_, _318_, _319_, _320_, _321_, _322_, _323_, _324_, _325_, _326_, _327_, _328_, _329_, _330_, _331_, _332_, _333_, _334_, _335_, _336_, _337_, _338_, _339_, _340_, _341_, _342_, _343_, _344_, _345_, _346_, _347_, _348_, _349_, _350_, _351_, _352_, _353_, _354_, _355_, _356_, _357_, _358_, _359_, _360_, _361_, _362_, _363_, _364_, _365_, _366_, _367_, _368_, _369_, _370_, _371_, _372_, _373_, _374_, _375_, _376_, _377_, _378_, _379_, _380_, _381_, _382_, _383_, _384_, _385_, _386_, _387_, _388_, _389_, _390_, _391_, _392_, _393_, _394_, _395_, _396_, _397_, _398_, _399_, _400_, _401_, _402_, _403_, _404_, _405_, _406_, _407_, _408_, _409_, _410_, _411_, _412_, _413_, _414_, _415_, _416_, _417_, _418_, _419_, _420_, _421_, _422_, _423_, _424_, _425_, _426_, _427_, _428_, _429_, _430_, _431_, _432_, _433_, _434_, _435_, _436_, _437_, _438_, _439_, _440_, _441_, _442_, _443_, _444_, _445_, _446_, N203, N213, N309, N319, N360;
	sc_in<sc_logic> endSim; 
	sc_in<sc_logic> newTV; 
	sc_uint<32> counter; 

	std::vector<std::vector<int>> ALL_DET; 
	std::vector<std::vector<int>> RX_FAULTS; 
	int TVnum =0 ; 
	int tot_det = 0; 
	int det = 0; 

	int numOfGates;
	int totalObservedCombs;
	double GIC_Coverage;

	NOR2_X1* _447_Gate1;
	NAND2_X1* _448_Gate2;
	NAND2_X1* _449_Gate3;
	NOR2_X1* _450_Gate4;
	NOR2_X1* _451_Gate5;
	NAND2_X1* _452_Gate6;
	NAND2_X1* _453_Gate7;
	NOR2_X1* _454_Gate8;
	INV1_X1* _455_Gate9;
	NAND2_X1* _456_Gate10;
	NAND2_X1* _457_Gate11;
	NAND2_X1* _458_Gate12;
	NAND2_X1* _459_Gate13;
	NAND2_X1* _460_Gate14;
	NAND2_X1* _461_Gate15;
	NOR2_X1* _462_Gate16;
	NAND2_X1* _463_Gate17;
	NOR2_X1* _464_Gate18;
	NOR2_X1* _465_Gate19;
	NOR2_X1* _466_Gate20;
	INV1_X1* _467_Gate21;
	NOR2_X1* _468_Gate22;
	NAND2_X1* _469_Gate23;
	NOR2_X1* _470_Gate24;
	NOR2_X1* _471_Gate25;
	NOR2_X1* _472_Gate26;
	NOR2_X1* _473_Gate27;
	NOR2_X1* _474_Gate28;
	NOR2_X1* _475_Gate29;
	NOR2_X1* _476_Gate30;
	NOR2_X1* _477_Gate31;
	NOR2_X1* _478_Gate32;
	NAND2_X1* _479_Gate33;
	NOR2_X1* _480_Gate34;
	NOR2_X1* _481_Gate35;
	NOR2_X1* _482_Gate36;
	NOR2_X1* _483_Gate37;
	NOR2_X1* _484_Gate38;
	NOR2_X1* _485_Gate39;
	NOR2_X1* _486_Gate40;
	NOR2_X1* _487_Gate41;
	NOR2_X1* _488_Gate42;
	NOR2_X1* _489_Gate43;
	NAND2_X1* _490_Gate44;
	NOR2_X1* _491_Gate45;
	NOR2_X1* _492_Gate46;
	INV1_X1* _493_Gate47;
	NAND2_X1* _494_Gate48;
	NAND2_X1* _495_Gate49;
	INV1_X1* _496_Gate50;
	INV1_X1* _497_Gate51;
	NAND2_X1* _498_Gate52;
	NAND2_X1* _499_Gate53;
	NAND2_X1* _500_Gate54;
	NAND2_X1* _501_Gate55;
	NAND2_X1* _502_Gate56;
	NOR2_X1* _503_Gate57;
	NOR2_X1* _504_Gate58;
	NAND2_X1* _505_Gate59;
	NAND2_X1* _506_Gate60;
	NAND2_X1* _507_Gate61;
	INV1_X1* _508_Gate62;
	NOR2_X1* _509_Gate63;
	INV1_X1* _510_Gate64;
	NOR2_X1* _511_Gate65;
	NOR2_X1* _512_Gate66;
	INV1_X1* _513_Gate67;
	NAND2_X1* _514_Gate68;
	INV1_X1* _515_Gate69;
	NOR2_X1* _516_Gate70;
	INV1_X1* _517_Gate71;
	NOR2_X1* _518_Gate72;
	NOR2_X1* _519_Gate73;
	NAND2_X1* _520_Gate74;
	INV1_X1* _521_Gate75;
	NOR2_X1* _522_Gate76;
	INV1_X1* _523_Gate77;
	NOR2_X1* _524_Gate78;
	NOR2_X1* _525_Gate79;
	INV1_X1* _526_Gate80;
	NOR2_X1* _527_Gate81;
	INV1_X1* _528_Gate82;
	NOR2_X1* _529_Gate83;
	NOR2_X1* _530_Gate84;
	NAND2_X1* _531_Gate85;
	NOR2_X1* _532_Gate86;
	NAND2_X1* _533_Gate87;
	NAND2_X1* _534_Gate88;
	NAND2_X1* _535_Gate89;
	NOR2_X1* _536_Gate90;
	INV1_X1* _537_Gate91;
	NAND2_X1* _538_Gate92;
	NAND2_X1* _539_Gate93;
	NOR2_X1* _540_Gate94;
	NAND2_X1* _541_Gate95;
	NAND2_X1* _542_Gate96;
	NOR2_X1* _543_Gate97;
	NOR2_X1* _544_Gate98;
	NAND2_X1* _545_Gate99;
	NAND2_X1* _546_Gate100;
	NOR2_X1* _547_Gate101;
	NAND2_X1* _548_Gate102;
	NAND2_X1* _549_Gate103;
	NOR2_X1* _550_Gate104;
	NOR2_X1* _551_Gate105;
	NAND2_X1* _552_Gate106;
	NAND2_X1* _553_Gate107;
	NAND2_X1* _554_Gate108;
	NOR2_X1* _555_Gate109;
	NAND2_X1* _556_Gate110;
	NAND2_X1* _557_Gate111;
	NOR2_X1* _558_Gate112;
	NOR2_X1* _559_Gate113;
	NAND2_X1* _560_Gate114;
	NAND2_X1* _561_Gate115;
	NOR2_X1* _562_Gate116;
	NAND2_X1* _563_Gate117;
	NAND2_X1* _564_Gate118;
	NOR2_X1* _565_Gate119;
	NOR2_X1* _566_Gate120;
	NAND2_X1* _567_Gate121;
	NOR2_X1* _568_Gate122;
	NAND2_X1* _569_Gate123;
	INV1_X1* _570_Gate124;
	INV1_X1* _571_Gate125;
	INV1_X1* _572_Gate126;
	NAND2_X1* _573_Gate127;
	INV1_X1* _574_Gate128;
	NAND2_X1* _575_Gate129;
	NAND2_X1* _576_Gate130;
	NOR2_X1* _577_Gate131;
	NAND2_X1* _578_Gate132;
	NOR2_X1* _579_Gate133;
	NOR2_X1* _580_Gate134;
	NOR2_X1* _581_Gate135;
	NAND2_X1* _582_Gate136;
	INV1_X1* _583_Gate137;
	NOR2_X1* _584_Gate138;
	NOR2_X1* _585_Gate139;
	NAND2_X1* _586_Gate140;
	NAND2_X1* _587_Gate141;
	INV1_X1* _588_Gate142;
	INV1_X1* _589_Gate143;
	NOR2_X1* _590_Gate144;
	NOR2_X1* _591_Gate145;
	NAND2_X1* _592_Gate146;
	INV1_X1* _593_Gate147;
	INV1_X1* _594_Gate148;
	NOR2_X1* _595_Gate149;
	NOR2_X1* _596_Gate150;
	NAND2_X1* _597_Gate151;
	NAND2_X1* _598_Gate152;
	NOR2_X1* _599_Gate153;
	INV1_X1* _600_Gate154;
	NOR2_X1* _601_Gate155;
	NOR2_X1* _602_Gate156;
	NAND2_X1* _603_Gate157;
	INV1_X1* _604_Gate158;
	INV1_X1* _605_Gate159;
	NOR2_X1* _606_Gate160;
	NOR2_X1* _607_Gate161;
	NAND2_X1* _608_Gate162;
	NAND2_X1* _609_Gate163;
	INV1_X1* _610_Gate164;
	INV1_X1* _611_Gate165;
	NOR2_X1* _612_Gate166;
	NOR2_X1* _613_Gate167;
	NAND2_X1* _614_Gate168;
	INV1_X1* _615_Gate169;
	NAND2_X1* _616_Gate170;
	NAND2_X1* _617_Gate171;
	NAND2_X1* _618_Gate172;
	NAND2_X1* _619_Gate173;
	NOR2_X1* _620_Gate174;
	NAND2_X1* _621_Gate175;
	NOR2_X1* _622_Gate176;
	NOR2_X1* _623_Gate177;
	NOR2_X1* _624_Gate178;
	NOR2_X1* _625_Gate179;
	NOR2_X1* _626_Gate180;
	NAND2_X1* _627_Gate181;
	NOR2_X1* _628_Gate182;
	NOR2_X1* _629_Gate183;
	NOR2_X1* _630_Gate184;
	NOR2_X1* _631_Gate185;
	NAND2_X1* _632_Gate186;
	NAND2_X1* _633_Gate187;
	INV1_X1* _634_Gate188;
	NOR2_X1* _635_Gate189;
	NOR2_X1* _636_Gate190;
	NAND2_X1* _637_Gate191;
	NOR2_X1* _638_Gate192;
	NOR2_X1* _639_Gate193;
	NOR2_X1* _640_Gate194;
	NOR2_X1* _641_Gate195;
	NAND2_X1* _642_Gate196;
	NAND2_X1* _643_Gate197;
	NOR2_X1* _644_Gate198;
	NOR2_X1* _645_Gate199;
	NOR2_X1* _646_Gate200;
	NOR2_X1* _647_Gate201;
	NOR2_X1* _648_Gate202;
	NAND2_X1* _649_Gate203;
	NOR2_X1* _650_Gate204;
	NOR2_X1* _651_Gate205;
	NOR2_X1* _652_Gate206;
	NOR2_X1* _653_Gate207;
	NAND2_X1* _654_Gate208;
	NAND2_X1* _655_Gate209;
	INV1_X1* _656_Gate210;
	NOR2_X1* _657_Gate211;
	NOR2_X1* _658_Gate212;
	NAND2_X1* _659_Gate213;
	INV1_X1* _660_Gate214;
	NAND2_X1* _661_Gate215;
	NAND2_X1* _662_Gate216;
	NOR2_X1* _663_Gate217;
	NOR2_X1* _664_Gate218;
	NOR2_X1* _665_Gate219;
	INV1_X1* _666_Gate220;
	NOR2_X1* _667_Gate221;
	NOR2_X1* _668_Gate222;
	NAND2_X1* _669_Gate223;
	NOR2_X1* _670_Gate224;
	NAND2_X1* _671_Gate225;
	NAND2_X1* _672_Gate226;
	NAND2_X1* _673_Gate227;
	INV1_X1* _674_Gate228;
	NAND2_X1* _675_Gate229;
	NAND2_X1* _676_Gate230;
	INV1_X1* _677_Gate231;
	NAND2_X1* _678_Gate232;
	NAND2_X1* _679_Gate233;
	NOR2_X1* _680_Gate234;
	NAND2_X1* _681_Gate235;
	NAND2_X1* _682_Gate236;
	INV1_X1* _683_Gate237;
	NAND2_X1* _684_Gate238;
	NAND2_X1* _685_Gate239;
	NOR2_X1* _686_Gate240;
	NOR2_X1* _687_Gate241;
	NAND2_X1* _688_Gate242;
	NAND2_X1* _689_Gate243;
	NOR2_X1* _690_Gate244;
	NAND2_X1* _691_Gate245;
	NAND2_X1* _692_Gate246;
	INV1_X1* _693_Gate247;
	NAND2_X1* _694_Gate248;
	NAND2_X1* _695_Gate249;
	NOR2_X1* _696_Gate250;
	NOR2_X1* _697_Gate251;
	NAND2_X1* _698_Gate252;
	NAND2_X1* _699_Gate253;
	NAND2_X1* _700_Gate254;
	INV1_X1* _701_Gate255;
	NAND2_X1* _702_Gate256;
	NAND2_X1* _703_Gate257;
	POUT1_X1* _704_Gate258;
	POUT1_X1* _705_Gate259;
	POUT1_X1* _706_Gate260;
	POUT1_X1* _707_Gate261;
	POUT1_X1* _708_Gate262;
	POUT1_X1* _709_Gate263;
	POUT1_X1* _710_Gate264;

	SC_CTOR(c432_netlist)
	{
		numOfGates = 264;

		_447_Gate1 = new NOR2_X1("_447__instance1");
		_447_Gate1->id = 1;
		_447_Gate1->A1(_311_);
		_447_Gate1->A2(_308_);
		_447_Gate1->A2_branch_FAULTS = {{31, 1}};
		_447_Gate1->ZN(_312_);
		_447_Gate1->faults=34;
		module_map[1] = _447_Gate1;

		_448_Gate2 = new NAND2_X1("_448__instance2");
		_448_Gate2->id = 2;
		_448_Gate2->A1(_222_);
		_448_Gate2->A2(_210_);
		_448_Gate2->A1_branch_FAULTS = {{177, 3},{182, 3},{189, 3},{192, 3},{199, 3},{204, 3},{211, 3},{218, 3},{232, 2},{238, 2},{248, 2},{256, 2}};
		_448_Gate2->A2_branch_FAULTS = {{168, 0},{204, 1}};
		_448_Gate2->ZN(_313_);
		_448_Gate2->faults=21;
		module_map[2] = _448_Gate2;

		_449_Gate3 = new NAND2_X1("_449__instance3");
		_449_Gate3->id = 3;
		_449_Gate3->A1(_313_);
		_449_Gate3->A2(_281_);
		_449_Gate3->A2_branch_FAULTS = {{19, 1}};
		_449_Gate3->ZN(_314_);
		_449_Gate3->faults=33;
		module_map[3] = _449_Gate3;

		_450_Gate4 = new NOR2_X1("_450__instance4");
		_450_Gate4->id = 4;
		_450_Gate4->A1(_314_);
		_450_Gate4->A2(_280_);
		_450_Gate4->A2_branch_FAULTS = {{20, 1}};
		_450_Gate4->ZN(_315_);
		_450_Gate4->faults=34;
		module_map[4] = _450_Gate4;

		_451_Gate5 = new NOR2_X1("_451__instance5");
		_451_Gate5->id = 5;
		_451_Gate5->A1(_315_);
		_451_Gate5->A2(_312_);
		_451_Gate5->ZN(_316_);
		_451_Gate5->faults=16;
		module_map[5] = _451_Gate5;

		_452_Gate6 = new NAND2_X1("_452__instance6");
		_452_Gate6->id = 6;
		_452_Gate6->A1(_433_);
		_452_Gate6->A2(_382_);
		_452_Gate6->ZN(_317_);
		_452_Gate6->faults=21;
		module_map[6] = _452_Gate6;

		_453_Gate7 = new NAND2_X1("_453__instance7");
		_453_Gate7->id = 7;
		_453_Gate7->A1(_317_);
		_453_Gate7->A2(_200_);
		_453_Gate7->A2_branch_FAULTS = {{157, 2}};
		_453_Gate7->ZN(_318_);
		_453_Gate7->faults=49;
		module_map[7] = _453_Gate7;

		_454_Gate8 = new NOR2_X1("_454__instance8");
		_454_Gate8->id = 8;
		_454_Gate8->A1(_318_);
		_454_Gate8->A2(_441_);
		_454_Gate8->A1_branch_FAULTS = {{37, 1}};
		_454_Gate8->ZN(_319_);
		_454_Gate8->faults=42;
		module_map[8] = _454_Gate8;

		_455_Gate9 = new INV1_X1("_455__instance9");
		_455_Gate9->id = 9;
		_455_Gate9->A(_436_);
		_455_Gate9->A1_branch_FAULTS = {{217, 1}};
		_455_Gate9->ZN(_320_);
		_455_Gate9->faults=12;
		module_map[9] = _455_Gate9;

		_456_Gate10 = new NAND2_X1("_456__instance10");
		_456_Gate10->id = 10;
		_456_Gate10->A1(_161_);
		_456_Gate10->A2(_266_);
		_456_Gate10->A1_branch_FAULTS = {{123, 2}};
		_456_Gate10->A2_branch_FAULTS = {{216, 0}};
		_456_Gate10->ZN(_321_);
		_456_Gate10->faults=21;
		module_map[10] = _456_Gate10;

		_457_Gate11 = new NAND2_X1("_457__instance11");
		_457_Gate11->id = 11;
		_457_Gate11->A1(_321_);
		_457_Gate11->A2(_413_);
		_457_Gate11->A2_branch_FAULTS = {{123, 0}};
		_457_Gate11->ZN(_323_);
		_457_Gate11->faults=17;
		module_map[11] = _457_Gate11;

		_458_Gate12 = new NAND2_X1("_458__instance12");
		_458_Gate12->id = 12;
		_458_Gate12->A1(_323_);
		_458_Gate12->A2(_320_);
		_458_Gate12->A2_branch_FAULTS = {{39, 1}};
		_458_Gate12->ZN(_324_);
		_458_Gate12->faults=17;
		module_map[12] = _458_Gate12;

		_459_Gate13 = new NAND2_X1("_459__instance13");
		_459_Gate13->id = 13;
		_459_Gate13->A1(_433_);
		_459_Gate13->A2(_414_);
		_459_Gate13->ZN(_325_);
		_459_Gate13->faults=53;
		module_map[13] = _459_Gate13;

		_460_Gate14 = new NAND2_X1("_460__instance14");
		_460_Gate14->id = 14;
		_460_Gate14->A1(_273_);
		_460_Gate14->A2(_325_);
		_460_Gate14->A2_branch_FAULTS = {{23, 2}};
		_460_Gate14->ZN(_326_);
		_460_Gate14->faults=21;
		module_map[14] = _460_Gate14;

		_461_Gate15 = new NAND2_X1("_461__instance15");
		_461_Gate15->id = 15;
		_461_Gate15->A1(_326_);
		_461_Gate15->A2(_324_);
		_461_Gate15->ZN(_327_);
		_461_Gate15->faults=32;
		module_map[15] = _461_Gate15;

		_462_Gate16 = new NOR2_X1("_462__instance16");
		_462_Gate16->id = 16;
		_462_Gate16->A1(_327_);
		_462_Gate16->A2(_319_);
		_462_Gate16->ZN(_328_);
		_462_Gate16->faults=16;
		module_map[16] = _462_Gate16;

		_463_Gate17 = new NAND2_X1("_463__instance17");
		_463_Gate17->id = 17;
		_463_Gate17->A1(_328_);
		_463_Gate17->A2(_316_);
		_463_Gate17->ZN(_329_);
		_463_Gate17->faults=32;
		module_map[17] = _463_Gate17;

		_464_Gate18 = new NOR2_X1("_464__instance18");
		_464_Gate18->id = 18;
		_464_Gate18->A1(_329_);
		_464_Gate18->A2(_306_);
		_464_Gate18->ZN(_330_);
		_464_Gate18->faults=48;
		module_map[18] = _464_Gate18;

		_465_Gate19 = new NOR2_X1("_465__instance19");
		_465_Gate19->id = 19;
		_465_Gate19->A1(_330_);
		_465_Gate19->A2(_281_);
		_465_Gate19->A1_branch_FAULTS = {{22, 3},{25, 3},{28, 3},{30, 3},{34, 3},{36, 3},{39, 3},{41, 3}};
		_465_Gate19->A2_branch_FAULTS = {{3, 0}};
		_465_Gate19->ZN(_331_);
		_465_Gate19->faults=42;
		module_map[19] = _465_Gate19;

		_466_Gate20 = new NOR2_X1("_466__instance20");
		_466_Gate20->id = 20;
		_466_Gate20->A1(_331_);
		_466_Gate20->A2(_280_);
		_466_Gate20->A2_branch_FAULTS = {{4, 1}};
		_466_Gate20->ZN(_332_);
		_466_Gate20->faults=34;
		module_map[20] = _466_Gate20;

		_467_Gate21 = new INV1_X1("_467__instance21");
		_467_Gate21->id = 21;
		_467_Gate21->A(_182_);
		_467_Gate21->A1_branch_FAULTS = {{219, 1}};
		_467_Gate21->ZN(_333_);
		_467_Gate21->faults=8;
		module_map[21] = _467_Gate21;

		_468_Gate22 = new NOR2_X1("_468__instance22");
		_468_Gate22->id = 22;
		_468_Gate22->A1(_330_);
		_468_Gate22->A2(_333_);
		_468_Gate22->A1_branch_FAULTS = {{19, 3},{25, 3},{28, 3},{30, 3},{34, 3},{36, 3},{39, 3},{41, 3}};
		_468_Gate22->ZN(_334_);
		_468_Gate22->faults=40;
		module_map[22] = _468_Gate22;

		_469_Gate23 = new NAND2_X1("_469__instance23");
		_469_Gate23->id = 23;
		_469_Gate23->A1(_325_);
		_469_Gate23->A2(_175_);
		_469_Gate23->A1_branch_FAULTS = {{14, 0}};
		_469_Gate23->A2_branch_FAULTS = {{136, 2}};
		_469_Gate23->ZN(_335_);
		_469_Gate23->faults=37;
		module_map[23] = _469_Gate23;

		_470_Gate24 = new NOR2_X1("_470__instance24");
		_470_Gate24->id = 24;
		_470_Gate24->A1(_335_);
		_470_Gate24->A2(_334_);
		_470_Gate24->ZN(_336_);
		_470_Gate24->faults=48;
		module_map[24] = _470_Gate24;

		_471_Gate25 = new NOR2_X1("_471__instance25");
		_471_Gate25->id = 25;
		_471_Gate25->A1(_330_);
		_471_Gate25->A2(_284_);
		_471_Gate25->A1_branch_FAULTS = {{19, 3},{22, 3},{28, 3},{30, 3},{34, 3},{36, 3},{39, 3},{41, 3}};
		_471_Gate25->A2_branch_FAULTS = {{233, 0}};
		_471_Gate25->ZN(_337_);
		_471_Gate25->faults=42;
		module_map[25] = _471_Gate25;

		_472_Gate26 = new NOR2_X1("_472__instance26");
		_472_Gate26->id = 26;
		_472_Gate26->A1(_337_);
		_472_Gate26->A2(_283_);
		_472_Gate26->A2_branch_FAULTS = {{234, 1}};
		_472_Gate26->ZN(_338_);
		_472_Gate26->faults=34;
		module_map[26] = _472_Gate26;

		_473_Gate27 = new NOR2_X1("_473__instance27");
		_473_Gate27->id = 27;
		_473_Gate27->A1(_338_);
		_473_Gate27->A2(_336_);
		_473_Gate27->A2_branch_FAULTS = {{58, 1}};
		_473_Gate27->ZN(_339_);
		_473_Gate27->faults=50;
		module_map[27] = _473_Gate27;

		_474_Gate28 = new NOR2_X1("_474__instance28");
		_474_Gate28->id = 28;
		_474_Gate28->A1(_330_);
		_474_Gate28->A2(_300_);
		_474_Gate28->A1_branch_FAULTS = {{19, 3},{22, 3},{25, 3},{30, 3},{34, 3},{36, 3},{39, 3},{41, 3}};
		_474_Gate28->A2_branch_FAULTS = {{249, 0}};
		_474_Gate28->ZN(_340_);
		_474_Gate28->faults=42;
		module_map[28] = _474_Gate28;

		_475_Gate29 = new NOR2_X1("_475__instance29");
		_475_Gate29->id = 29;
		_475_Gate29->A1(_340_);
		_475_Gate29->A2(_299_);
		_475_Gate29->A2_branch_FAULTS = {{250, 1}};
		_475_Gate29->ZN(_341_);
		_475_Gate29->faults=50;
		module_map[29] = _475_Gate29;

		_476_Gate30 = new NOR2_X1("_476__instance30");
		_476_Gate30->id = 30;
		_476_Gate30->A1(_330_);
		_476_Gate30->A2(_309_);
		_476_Gate30->A1_branch_FAULTS = {{19, 3},{22, 3},{25, 3},{28, 3},{34, 3},{36, 3},{39, 3},{41, 3}};
		_476_Gate30->A2_branch_FAULTS = {{257, 0}};
		_476_Gate30->ZN(_342_);
		_476_Gate30->faults=42;
		module_map[30] = _476_Gate30;

		_477_Gate31 = new NOR2_X1("_477__instance31");
		_477_Gate31->id = 31;
		_477_Gate31->A1(_342_);
		_477_Gate31->A2(_308_);
		_477_Gate31->A2_branch_FAULTS = {{1, 1}};
		_477_Gate31->ZN(_344_);
		_477_Gate31->faults=50;
		module_map[31] = _477_Gate31;

		_478_Gate32 = new NOR2_X1("_478__instance32");
		_478_Gate32->id = 32;
		_478_Gate32->A1(_344_);
		_478_Gate32->A2(_341_);
		_478_Gate32->ZN(_345_);
		_478_Gate32->faults=58;
		module_map[32] = _478_Gate32;

		_479_Gate33 = new NAND2_X1("_479__instance33");
		_479_Gate33->id = 33;
		_479_Gate33->A1(_345_);
		_479_Gate33->A2(_339_);
		_479_Gate33->A1_branch_FAULTS = {{49, 0}};
		_479_Gate33->A2_branch_FAULTS = {{48, 0}};
		_479_Gate33->ZN(_253_);
		_479_Gate33->faults=53;
		module_map[33] = _479_Gate33;

		_480_Gate34 = new NOR2_X1("_480__instance34");
		_480_Gate34->id = 34;
		_480_Gate34->A1(_330_);
		_480_Gate34->A2(_290_);
		_480_Gate34->A1_branch_FAULTS = {{19, 3},{22, 3},{25, 3},{28, 3},{30, 3},{36, 3},{39, 3},{41, 3}};
		_480_Gate34->A2_branch_FAULTS = {{239, 0}};
		_480_Gate34->ZN(_346_);
		_480_Gate34->faults=42;
		module_map[34] = _480_Gate34;

		_481_Gate35 = new NOR2_X1("_481__instance35");
		_481_Gate35->id = 35;
		_481_Gate35->A1(_346_);
		_481_Gate35->A2(_289_);
		_481_Gate35->A2_branch_FAULTS = {{240, 1}};
		_481_Gate35->ZN(_347_);
		_481_Gate35->faults=50;
		module_map[35] = _481_Gate35;

		_482_Gate36 = new NOR2_X1("_482__instance36");
		_482_Gate36->id = 36;
		_482_Gate36->A1(_330_);
		_482_Gate36->A2(_261_);
		_482_Gate36->A1_branch_FAULTS = {{19, 3},{22, 3},{25, 3},{28, 3},{30, 3},{34, 3},{39, 3},{41, 3}};
		_482_Gate36->A2_branch_FAULTS = {{213, 0}};
		_482_Gate36->ZN(_348_);
		_482_Gate36->faults=42;
		module_map[36] = _482_Gate36;

		_483_Gate37 = new NOR2_X1("_483__instance37");
		_483_Gate37->id = 37;
		_483_Gate37->A1(_348_);
		_483_Gate37->A2(_318_);
		_483_Gate37->A2_branch_FAULTS = {{8, 3}};
		_483_Gate37->ZN(_349_);
		_483_Gate37->faults=50;
		module_map[37] = _483_Gate37;

		_484_Gate38 = new NOR2_X1("_484__instance38");
		_484_Gate38->id = 38;
		_484_Gate38->A1(_349_);
		_484_Gate38->A2(_347_);
		_484_Gate38->A1_branch_FAULTS = {{57, 1}};
		_484_Gate38->A2_branch_FAULTS = {{54, 2}};
		_484_Gate38->ZN(_350_);
		_484_Gate38->faults=58;
		module_map[38] = _484_Gate38;

		_485_Gate39 = new NOR2_X1("_485__instance39");
		_485_Gate39->id = 39;
		_485_Gate39->A1(_330_);
		_485_Gate39->A2(_320_);
		_485_Gate39->A1_branch_FAULTS = {{19, 3},{22, 3},{25, 3},{28, 3},{30, 3},{34, 3},{36, 3},{41, 3}};
		_485_Gate39->A2_branch_FAULTS = {{12, 0}};
		_485_Gate39->ZN(_351_);
		_485_Gate39->faults=42;
		module_map[39] = _485_Gate39;

		_486_Gate40 = new NOR2_X1("_486__instance40");
		_486_Gate40->id = 40;
		_486_Gate40->A1(_351_);
		_486_Gate40->A2(_268_);
		_486_Gate40->A2_branch_FAULTS = {{217, 3}};
		_486_Gate40->ZN(_352_);
		_486_Gate40->faults=34;
		module_map[40] = _486_Gate40;

		_487_Gate41 = new NOR2_X1("_487__instance41");
		_487_Gate41->id = 41;
		_487_Gate41->A1(_330_);
		_487_Gate41->A2(_235_);
		_487_Gate41->A1_branch_FAULTS = {{19, 3},{22, 3},{25, 3},{28, 3},{30, 3},{34, 3},{36, 3},{39, 3}};
		_487_Gate41->A2_branch_FAULTS = {{191, 0}};
		_487_Gate41->ZN(_354_);
		_487_Gate41->faults=42;
		module_map[41] = _487_Gate41;

		_488_Gate42 = new NOR2_X1("_488__instance42");
		_488_Gate42->id = 42;
		_488_Gate42->A1(_354_);
		_488_Gate42->A2(_296_);
		_488_Gate42->A2_branch_FAULTS = {{244, 3}};
		_488_Gate42->ZN(_355_);
		_488_Gate42->faults=34;
		module_map[42] = _488_Gate42;

		_489_Gate43 = new NOR2_X1("_489__instance43");
		_489_Gate43->id = 43;
		_489_Gate43->A1(_355_);
		_489_Gate43->A2(_352_);
		_489_Gate43->ZN(_356_);
		_489_Gate43->faults=16;
		module_map[43] = _489_Gate43;

		_490_Gate44 = new NAND2_X1("_490__instance44");
		_490_Gate44->id = 44;
		_490_Gate44->A1(_356_);
		_490_Gate44->A2(_350_);
		_490_Gate44->ZN(_357_);
		_490_Gate44->faults=33;
		module_map[44] = _490_Gate44;

		_491_Gate45 = new NOR2_X1("_491__instance45");
		_491_Gate45->id = 45;
		_491_Gate45->A1(_357_);
		_491_Gate45->A2(_253_);
		_491_Gate45->ZN(_358_);
		_491_Gate45->faults=34;
		module_map[45] = _491_Gate45;

		_492_Gate46 = new NOR2_X1("_492__instance46");
		_492_Gate46->id = 46;
		_492_Gate46->A1(_358_);
		_492_Gate46->A2(_332_);
		_492_Gate46->ZN(_248_);
		_492_Gate46->faults=0;
		module_map[46] = _492_Gate46;

		_493_Gate47 = new INV1_X1("_493__instance47");
		_493_Gate47->id = 47;
		_493_Gate47->A(_350_);
		_493_Gate47->A1_branch_FAULTS = {{44, 0}};
		_493_Gate47->ZN(_359_);
		_493_Gate47->faults=4;
		module_map[47] = _493_Gate47;

		_494_Gate48 = new NAND2_X1("_494__instance48");
		_494_Gate48->id = 48;
		_494_Gate48->A1(_359_);
		_494_Gate48->A2(_339_);
		_494_Gate48->A2_branch_FAULTS = {{33, 0}};
		_494_Gate48->ZN(_360_);
		_494_Gate48->faults=17;
		module_map[48] = _494_Gate48;

		_495_Gate49 = new NAND2_X1("_495__instance49");
		_495_Gate49->id = 49;
		_495_Gate49->A1(_360_);
		_495_Gate49->A2(_345_);
		_495_Gate49->A2_branch_FAULTS = {{33, 2}};
		_495_Gate49->ZN(_259_);
		_495_Gate49->faults=1;
		module_map[49] = _495_Gate49;

		_496_Gate50 = new INV1_X1("_496__instance50");
		_496_Gate50->id = 50;
		_496_Gate50->A(_341_);
		_496_Gate50->A1_branch_FAULTS = {{32, 1}};
		_496_Gate50->ZN(_361_);
		_496_Gate50->faults=4;
		module_map[50] = _496_Gate50;

		_497_Gate51 = new INV1_X1("_497__instance51");
		_497_Gate51->id = 51;
		_497_Gate51->A(_344_);
		_497_Gate51->A1_branch_FAULTS = {{32, 3}};
		_497_Gate51->ZN(_362_);
		_497_Gate51->faults=4;
		module_map[51] = _497_Gate51;

		_498_Gate52 = new NAND2_X1("_498__instance52");
		_498_Gate52->id = 52;
		_498_Gate52->A1(_205_);
		_498_Gate52->A2(_190_);
		_498_Gate52->ZN(_363_);
		_498_Gate52->faults=21;
		module_map[52] = _498_Gate52;

		_499_Gate53 = new NAND2_X1("_499__instance53");
		_499_Gate53->id = 53;
		_499_Gate53->A1(_363_);
		_499_Gate53->A2(_225_);
		_499_Gate53->A2_branch_FAULTS = {{181, 0}};
		_499_Gate53->ZN(_364_);
		_499_Gate53->faults=17;
		module_map[53] = _499_Gate53;

		_500_Gate54 = new NAND2_X1("_500__instance54");
		_500_Gate54->id = 54;
		_500_Gate54->A1(_347_);
		_500_Gate54->A2(_364_);
		_500_Gate54->A1_branch_FAULTS = {{38, 1}};
		_500_Gate54->ZN(_365_);
		_500_Gate54->faults=20;
		module_map[54] = _500_Gate54;

		_501_Gate55 = new NAND2_X1("_501__instance55");
		_501_Gate55->id = 55;
		_501_Gate55->A1(_205_);
		_501_Gate55->A2(_156_);
		_501_Gate55->A2_branch_FAULTS = {{244, 1}};
		_501_Gate55->ZN(_366_);
		_501_Gate55->faults=21;
		module_map[55] = _501_Gate55;

		_502_Gate56 = new NAND2_X1("_502__instance56");
		_502_Gate56->id = 56;
		_502_Gate56->A1(_366_);
		_502_Gate56->A2(_237_);
		_502_Gate56->A2_branch_FAULTS = {{191, 2}};
		_502_Gate56->ZN(_367_);
		_502_Gate56->faults=33;
		module_map[56] = _502_Gate56;

		_503_Gate57 = new NOR2_X1("_503__instance57");
		_503_Gate57->id = 57;
		_503_Gate57->A1(_367_);
		_503_Gate57->A2(_349_);
		_503_Gate57->A2_branch_FAULTS = {{38, 3}};
		_503_Gate57->ZN(_368_);
		_503_Gate57->faults=34;
		module_map[57] = _503_Gate57;

		_504_Gate58 = new NOR2_X1("_504__instance58");
		_504_Gate58->id = 58;
		_504_Gate58->A1(_368_);
		_504_Gate58->A2(_336_);
		_504_Gate58->A2_branch_FAULTS = {{27, 1}};
		_504_Gate58->ZN(_369_);
		_504_Gate58->faults=18;
		module_map[58] = _504_Gate58;

		_505_Gate59 = new NAND2_X1("_505__instance59");
		_505_Gate59->id = 59;
		_505_Gate59->A1(_369_);
		_505_Gate59->A2(_365_);
		_505_Gate59->ZN(_370_);
		_505_Gate59->faults=16;
		module_map[59] = _505_Gate59;

		_506_Gate60 = new NAND2_X1("_506__instance60");
		_506_Gate60->id = 60;
		_506_Gate60->A1(_370_);
		_506_Gate60->A2(_362_);
		_506_Gate60->ZN(_371_);
		_506_Gate60->faults=16;
		module_map[60] = _506_Gate60;

		_507_Gate61 = new NAND2_X1("_507__instance61");
		_507_Gate61->id = 61;
		_507_Gate61->A1(_371_);
		_507_Gate61->A2(_361_);
		_507_Gate61->ZN(_265_);
		_507_Gate61->faults=0;
		module_map[61] = _507_Gate61;

		_508_Gate62 = new INV1_X1("_508__instance62");
		_508_Gate62->id = 62;
		_508_Gate62->A(_154_);
		_508_Gate62->A1_branch_FAULTS = {{89, 0}};
		_508_Gate62->ZN(_379_);
		_508_Gate62->faults=8;
		module_map[62] = _508_Gate62;

		_509_Gate63 = new NOR2_X1("_509__instance63");
		_509_Gate63->id = 63;
		_509_Gate63->A1(_270_);
		_509_Gate63->A2(_379_);
		_509_Gate63->A1_branch_FAULTS = {{88, 0}};
		_509_Gate63->ZN(_380_);
		_509_Gate63->faults=40;
		module_map[63] = _509_Gate63;

		_510_Gate64 = new INV1_X1("_510__instance64");
		_510_Gate64->id = 64;
		_510_Gate64->A(_322_);
		_510_Gate64->A1_branch_FAULTS = {{93, 0}};
		_510_Gate64->ZN(_381_);
		_510_Gate64->faults=12;
		module_map[64] = _510_Gate64;

		_511_Gate65 = new NOR2_X1("_511__instance65");
		_511_Gate65->id = 65;
		_511_Gate65->A1(_343_);
		_511_Gate65->A2(_381_);
		_511_Gate65->A2_branch_FAULTS = {{135, 1}};
		_511_Gate65->ZN(_383_);
		_511_Gate65->faults=42;
		module_map[65] = _511_Gate65;

		_512_Gate66 = new NOR2_X1("_512__instance66");
		_512_Gate66->id = 66;
		_512_Gate66->A1(_383_);
		_512_Gate66->A2(_380_);
		_512_Gate66->ZN(_384_);
		_512_Gate66->faults=48;
		module_map[66] = _512_Gate66;

		_513_Gate67 = new INV1_X1("_513__instance67");
		_513_Gate67->id = 67;
		_513_Gate67->A(_374_);
		_513_Gate67->A1_branch_FAULTS = {{117, 0}};
		_513_Gate67->ZN(_385_);
		_513_Gate67->faults=4;
		module_map[67] = _513_Gate67;

		_514_Gate68 = new NAND2_X1("_514__instance68");
		_514_Gate68->id = 68;
		_514_Gate68->A1(_385_);
		_514_Gate68->A2(_373_);
		_514_Gate68->A2_branch_FAULTS = {{118, 0},{170, 0}};
		_514_Gate68->ZN(_386_);
		_514_Gate68->faults=49;
		module_map[68] = _514_Gate68;

		_515_Gate69 = new INV1_X1("_515__instance69");
		_515_Gate69->id = 69;
		_515_Gate69->A(_422_);
		_515_Gate69->A1_branch_FAULTS = {{111, 0}};
		_515_Gate69->ZN(_388_);
		_515_Gate69->faults=12;
		module_map[69] = _515_Gate69;

		_516_Gate70 = new NOR2_X1("_516__instance70");
		_516_Gate70->id = 70;
		_516_Gate70->A1(_155_);
		_516_Gate70->A2(_388_);
		_516_Gate70->A2_branch_FAULTS = {{161, 1}};
		_516_Gate70->ZN(_389_);
		_516_Gate70->faults=58;
		module_map[70] = _516_Gate70;

		_517_Gate71 = new INV1_X1("_517__instance71");
		_517_Gate71->id = 71;
		_517_Gate71->A(_376_);
		_517_Gate71->A1_branch_FAULTS = {{108, 0},{129, 0}};
		_517_Gate71->ZN(_390_);
		_517_Gate71->faults=12;
		module_map[71] = _517_Gate71;

		_518_Gate72 = new NOR2_X1("_518__instance72");
		_518_Gate72->id = 72;
		_518_Gate72->A1(_398_);
		_518_Gate72->A2(_390_);
		_518_Gate72->A2_branch_FAULTS = {{156, 1}};
		_518_Gate72->ZN(_391_);
		_518_Gate72->faults=42;
		module_map[72] = _518_Gate72;

		_519_Gate73 = new NOR2_X1("_519__instance73");
		_519_Gate73->id = 73;
		_519_Gate73->A1(_391_);
		_519_Gate73->A2(_389_);
		_519_Gate73->A2_branch_FAULTS = {{131, 1}};
		_519_Gate73->ZN(_392_);
		_519_Gate73->faults=18;
		module_map[73] = _519_Gate73;

		_520_Gate74 = new NAND2_X1("_520__instance74");
		_520_Gate74->id = 74;
		_520_Gate74->A1(_392_);
		_520_Gate74->A2(_386_);
		_520_Gate74->A2_branch_FAULTS = {{130, 2},{171, 0}};
		_520_Gate74->ZN(_393_);
		_520_Gate74->faults=33;
		module_map[74] = _520_Gate74;

		_521_Gate75 = new INV1_X1("_521__instance75");
		_521_Gate75->id = 75;
		_521_Gate75->A(_301_);
		_521_Gate75->A1_branch_FAULTS = {{100, 0}};
		_521_Gate75->ZN(_394_);
		_521_Gate75->faults=12;
		module_map[75] = _521_Gate75;

		_522_Gate76 = new NOR2_X1("_522__instance76");
		_522_Gate76->id = 76;
		_522_Gate76->A1(_353_);
		_522_Gate76->A2(_394_);
		_522_Gate76->A2_branch_FAULTS = {{145, 1}};
		_522_Gate76->ZN(_396_);
		_522_Gate76->faults=42;
		module_map[76] = _522_Gate76;

		_523_Gate77 = new INV1_X1("_523__instance77");
		_523_Gate77->id = 77;
		_523_Gate77->A(_202_);
		_523_Gate77->A1_branch_FAULTS = {{115, 0}};
		_523_Gate77->ZN(_397_);
		_523_Gate77->faults=12;
		module_map[77] = _523_Gate77;

		_524_Gate78 = new NOR2_X1("_524__instance78");
		_524_Gate78->id = 78;
		_524_Gate78->A1(_224_);
		_524_Gate78->A2(_397_);
		_524_Gate78->A2_branch_FAULTS = {{167, 1}};
		_524_Gate78->ZN(_399_);
		_524_Gate78->faults=42;
		module_map[78] = _524_Gate78;

		_525_Gate79 = new NOR2_X1("_525__instance79");
		_525_Gate79->id = 79;
		_525_Gate79->A1(_399_);
		_525_Gate79->A2(_396_);
		_525_Gate79->ZN(_400_);
		_525_Gate79->faults=48;
		module_map[79] = _525_Gate79;

		_526_Gate80 = new INV1_X1("_526__instance80");
		_526_Gate80->id = 80;
		_526_Gate80->A(_245_);
		_526_Gate80->A1_branch_FAULTS = {{103, 0}};
		_526_Gate80->ZN(_401_);
		_526_Gate80->faults=12;
		module_map[80] = _526_Gate80;

		_527_Gate81 = new NOR2_X1("_527__instance81");
		_527_Gate81->id = 81;
		_527_Gate81->A1(_271_);
		_527_Gate81->A2(_401_);
		_527_Gate81->A2_branch_FAULTS = {{150, 1}};
		_527_Gate81->ZN(_403_);
		_527_Gate81->faults=42;
		module_map[81] = _527_Gate81;

		_528_Gate82 = new INV1_X1("_528__instance82");
		_528_Gate82->id = 82;
		_528_Gate82->A(_372_);
		_528_Gate82->A1_branch_FAULTS = {{96, 0}};
		_528_Gate82->ZN(_404_);
		_528_Gate82->faults=12;
		module_map[82] = _528_Gate82;

		_529_Gate83 = new NOR2_X1("_529__instance83");
		_529_Gate83->id = 83;
		_529_Gate83->A1(_375_);
		_529_Gate83->A2(_404_);
		_529_Gate83->A2_branch_FAULTS = {{139, 1}};
		_529_Gate83->ZN(_405_);
		_529_Gate83->faults=42;
		module_map[83] = _529_Gate83;

		_530_Gate84 = new NOR2_X1("_530__instance84");
		_530_Gate84->id = 84;
		_530_Gate84->A1(_405_);
		_530_Gate84->A2(_403_);
		_530_Gate84->ZN(_406_);
		_530_Gate84->faults=48;
		module_map[84] = _530_Gate84;

		_531_Gate85 = new NAND2_X1("_531__instance85");
		_531_Gate85->id = 85;
		_531_Gate85->A1(_406_);
		_531_Gate85->A2(_400_);
		_531_Gate85->A1_branch_FAULTS = {{132, 2}};
		_531_Gate85->A2_branch_FAULTS = {{127, 2}};
		_531_Gate85->ZN(_407_);
		_531_Gate85->faults=37;
		module_map[85] = _531_Gate85;

		_532_Gate86 = new NOR2_X1("_532__instance86");
		_532_Gate86->id = 86;
		_532_Gate86->A1(_407_);
		_532_Gate86->A2(_393_);
		_532_Gate86->ZN(_408_);
		_532_Gate86->faults=16;
		module_map[86] = _532_Gate86;

		_533_Gate87 = new NAND2_X1("_533__instance87");
		_533_Gate87->id = 87;
		_533_Gate87->A1(_408_);
		_533_Gate87->A2(_384_);
		_533_Gate87->A2_branch_FAULTS = {{127, 0}};
		_533_Gate87->ZN(_377_);
		_533_Gate87->faults=49;
		module_map[87] = _533_Gate87;

		_534_Gate88 = new NAND2_X1("_534__instance88");
		_534_Gate88->id = 88;
		_534_Gate88->A1(_377_);
		_534_Gate88->A2(_270_);
		_534_Gate88->A2_branch_FAULTS = {{63, 3}};
		_534_Gate88->ZN(_410_);
		_534_Gate88->faults=21;
		module_map[88] = _534_Gate88;

		_535_Gate89 = new NAND2_X1("_535__instance89");
		_535_Gate89->id = 89;
		_535_Gate89->A1(_410_);
		_535_Gate89->A2(_154_);
		_535_Gate89->ZN(_411_);
		_535_Gate89->faults=49;
		module_map[89] = _535_Gate89;

		_536_Gate90 = new NOR2_X1("_536__instance90");
		_536_Gate90->id = 90;
		_536_Gate90->A1(_411_);
		_536_Gate90->A2(_378_);
		_536_Gate90->A2_branch_FAULTS = {{215, 0}};
		_536_Gate90->ZN(_412_);
		_536_Gate90->faults=58;
		module_map[90] = _536_Gate90;

		_537_Gate91 = new INV1_X1("_537__instance91");
		_537_Gate91->id = 91;
		_537_Gate91->A(_412_);
		_537_Gate91->A1_branch_FAULTS = {{176, 1}};
		_537_Gate91->ZN(_413_);
		_537_Gate91->faults=12;
		module_map[91] = _537_Gate91;

		_538_Gate92 = new NAND2_X1("_538__instance92");
		_538_Gate92->id = 92;
		_538_Gate92->A1(_377_);
		_538_Gate92->A2(_343_);
		_538_Gate92->ZN(_415_);
		_538_Gate92->faults=21;
		module_map[92] = _538_Gate92;

		_539_Gate93 = new NAND2_X1("_539__instance93");
		_539_Gate93->id = 93;
		_539_Gate93->A1(_415_);
		_539_Gate93->A2(_322_);
		_539_Gate93->ZN(_416_);
		_539_Gate93->faults=49;
		module_map[93] = _539_Gate93;

		_540_Gate94 = new NOR2_X1("_540__instance94");
		_540_Gate94->id = 94;
		_540_Gate94->A1(_416_);
		_540_Gate94->A2(_414_);
		_540_Gate94->A1_branch_FAULTS = {{219, 3}};
		_540_Gate94->ZN(_417_);
		_540_Gate94->faults=42;
		module_map[94] = _540_Gate94;

		_541_Gate95 = new NAND2_X1("_541__instance95");
		_541_Gate95->id = 95;
		_541_Gate95->A1(_377_);
		_541_Gate95->A2(_375_);
		_541_Gate95->ZN(_418_);
		_541_Gate95->faults=21;
		module_map[95] = _541_Gate95;

		_542_Gate96 = new NAND2_X1("_542__instance96");
		_542_Gate96->id = 96;
		_542_Gate96->A1(_418_);
		_542_Gate96->A2(_372_);
		_542_Gate96->ZN(_419_);
		_542_Gate96->faults=49;
		module_map[96] = _542_Gate96;

		_543_Gate97 = new NOR2_X1("_543__instance97");
		_543_Gate97->id = 97;
		_543_Gate97->A1(_419_);
		_543_Gate97->A2(_420_);
		_543_Gate97->A1_branch_FAULTS = {{178, 1}};
		_543_Gate97->A2_branch_FAULTS = {{179, 1},{229, 0}};
		_543_Gate97->ZN(_421_);
		_543_Gate97->faults=42;
		module_map[97] = _543_Gate97;

		_544_Gate98 = new NOR2_X1("_544__instance98");
		_544_Gate98->id = 98;
		_544_Gate98->A1(_421_);
		_544_Gate98->A2(_417_);
		_544_Gate98->ZN(_423_);
		_544_Gate98->faults=16;
		module_map[98] = _544_Gate98;

		_545_Gate99 = new NAND2_X1("_545__instance99");
		_545_Gate99->id = 99;
		_545_Gate99->A1(_377_);
		_545_Gate99->A2(_353_);
		_545_Gate99->ZN(_424_);
		_545_Gate99->faults=21;
		module_map[99] = _545_Gate99;

		_546_Gate100 = new NAND2_X1("_546__instance100");
		_546_Gate100->id = 100;
		_546_Gate100->A1(_424_);
		_546_Gate100->A2(_301_);
		_546_Gate100->ZN(_425_);
		_546_Gate100->faults=49;
		module_map[100] = _546_Gate100;

		_547_Gate101 = new NOR2_X1("_547__instance101");
		_547_Gate101->id = 101;
		_547_Gate101->A1(_425_);
		_547_Gate101->A2(_409_);
		_547_Gate101->A1_branch_FAULTS = {{200, 1}};
		_547_Gate101->A2_branch_FAULTS = {{201, 1},{253, 0}};
		_547_Gate101->ZN(_426_);
		_547_Gate101->faults=42;
		module_map[101] = _547_Gate101;

		_548_Gate102 = new NAND2_X1("_548__instance102");
		_548_Gate102->id = 102;
		_548_Gate102->A1(_377_);
		_548_Gate102->A2(_271_);
		_548_Gate102->ZN(_428_);
		_548_Gate102->faults=21;
		module_map[102] = _548_Gate102;

		_549_Gate103 = new NAND2_X1("_549__instance103");
		_549_Gate103->id = 103;
		_549_Gate103->A1(_428_);
		_549_Gate103->A2(_245_);
		_549_Gate103->ZN(_429_);
		_549_Gate103->faults=49;
		module_map[103] = _549_Gate103;

		_550_Gate104 = new NOR2_X1("_550__instance104");
		_550_Gate104->id = 104;
		_550_Gate104->A1(_429_);
		_550_Gate104->A2(_402_);
		_550_Gate104->A1_branch_FAULTS = {{193, 1}};
		_550_Gate104->A2_branch_FAULTS = {{194, 1},{245, 0}};
		_550_Gate104->ZN(_430_);
		_550_Gate104->faults=42;
		module_map[104] = _550_Gate104;

		_551_Gate105 = new NOR2_X1("_551__instance105");
		_551_Gate105->id = 105;
		_551_Gate105->A1(_430_);
		_551_Gate105->A2(_426_);
		_551_Gate105->ZN(_431_);
		_551_Gate105->faults=16;
		module_map[105] = _551_Gate105;

		_552_Gate106 = new NAND2_X1("_552__instance106");
		_552_Gate106->id = 106;
		_552_Gate106->A1(_431_);
		_552_Gate106->A2(_423_);
		_552_Gate106->ZN(_432_);
		_552_Gate106->faults=32;
		module_map[106] = _552_Gate106;

		_553_Gate107 = new NAND2_X1("_553__instance107");
		_553_Gate107->id = 107;
		_553_Gate107->A1(_377_);
		_553_Gate107->A2(_398_);
		_553_Gate107->ZN(_434_);
		_553_Gate107->faults=21;
		module_map[107] = _553_Gate107;

		_554_Gate108 = new NAND2_X1("_554__instance108");
		_554_Gate108->id = 108;
		_554_Gate108->A1(_434_);
		_554_Gate108->A2(_376_);
		_554_Gate108->A2_branch_FAULTS = {{129, 0}};
		_554_Gate108->ZN(_435_);
		_554_Gate108->faults=49;
		module_map[108] = _554_Gate108;

		_555_Gate109 = new NOR2_X1("_555__instance109");
		_555_Gate109->id = 109;
		_555_Gate109->A1(_435_);
		_555_Gate109->A2(_382_);
		_555_Gate109->A1_branch_FAULTS = {{212, 1}};
		_555_Gate109->ZN(_437_);
		_555_Gate109->faults=42;
		module_map[109] = _555_Gate109;

		_556_Gate110 = new NAND2_X1("_556__instance110");
		_556_Gate110->id = 110;
		_556_Gate110->A1(_377_);
		_556_Gate110->A2(_155_);
		_556_Gate110->ZN(_438_);
		_556_Gate110->faults=21;
		module_map[110] = _556_Gate110;

		_557_Gate111 = new NAND2_X1("_557__instance111");
		_557_Gate111->id = 111;
		_557_Gate111->A1(_438_);
		_557_Gate111->A2(_422_);
		_557_Gate111->ZN(_439_);
		_557_Gate111->faults=49;
		module_map[111] = _557_Gate111;

		_558_Gate112 = new NOR2_X1("_558__instance112");
		_558_Gate112->id = 112;
		_558_Gate112->A1(_439_);
		_558_Gate112->A2(_387_);
		_558_Gate112->A1_branch_FAULTS = {{190, 1}};
		_558_Gate112->A2_branch_FAULTS = {{242, 0}};
		_558_Gate112->ZN(_440_);
		_558_Gate112->faults=42;
		module_map[112] = _558_Gate112;

		_559_Gate113 = new NOR2_X1("_559__instance113");
		_559_Gate113->id = 113;
		_559_Gate113->A1(_440_);
		_559_Gate113->A2(_437_);
		_559_Gate113->ZN(_442_);
		_559_Gate113->faults=16;
		module_map[113] = _559_Gate113;

		_560_Gate114 = new NAND2_X1("_560__instance114");
		_560_Gate114->id = 114;
		_560_Gate114->A1(_377_);
		_560_Gate114->A2(_224_);
		_560_Gate114->ZN(_443_);
		_560_Gate114->faults=21;
		module_map[114] = _560_Gate114;

		_561_Gate115 = new NAND2_X1("_561__instance115");
		_561_Gate115->id = 115;
		_561_Gate115->A1(_443_);
		_561_Gate115->A2(_202_);
		_561_Gate115->ZN(_444_);
		_561_Gate115->faults=49;
		module_map[115] = _561_Gate115;

		_562_Gate116 = new NOR2_X1("_562__instance116");
		_562_Gate116->id = 116;
		_562_Gate116->A1(_444_);
		_562_Gate116->A2(_395_);
		_562_Gate116->A1_branch_FAULTS = {{205, 1}};
		_562_Gate116->A2_branch_FAULTS = {{206, 1},{226, 0}};
		_562_Gate116->ZN(_445_);
		_562_Gate116->faults=42;
		module_map[116] = _562_Gate116;

		_563_Gate117 = new NAND2_X1("_563__instance117");
		_563_Gate117->id = 117;
		_563_Gate117->A1(_377_);
		_563_Gate117->A2(_374_);
		_563_Gate117->ZN(_446_);
		_563_Gate117->faults=21;
		module_map[117] = _563_Gate117;

		_564_Gate118 = new NAND2_X1("_564__instance118");
		_564_Gate118->id = 118;
		_564_Gate118->A1(_446_);
		_564_Gate118->A2(_373_);
		_564_Gate118->A2_branch_FAULTS = {{68, 0},{170, 0}};
		_564_Gate118->ZN(_157_);
		_564_Gate118->faults=49;
		module_map[118] = _564_Gate118;

		_565_Gate119 = new NOR2_X1("_565__instance119");
		_565_Gate119->id = 119;
		_565_Gate119->A1(_157_);
		_565_Gate119->A2(_427_);
		_565_Gate119->A1_branch_FAULTS = {{183, 1}};
		_565_Gate119->A2_branch_FAULTS = {{184, 1},{235, 0}};
		_565_Gate119->ZN(_158_);
		_565_Gate119->faults=42;
		module_map[119] = _565_Gate119;

		_566_Gate120 = new NOR2_X1("_566__instance120");
		_566_Gate120->id = 120;
		_566_Gate120->A1(_158_);
		_566_Gate120->A2(_445_);
		_566_Gate120->ZN(_159_);
		_566_Gate120->faults=16;
		module_map[120] = _566_Gate120;

		_567_Gate121 = new NAND2_X1("_567__instance121");
		_567_Gate121->id = 121;
		_567_Gate121->A1(_159_);
		_567_Gate121->A2(_442_);
		_567_Gate121->ZN(_160_);
		_567_Gate121->faults=32;
		module_map[121] = _567_Gate121;

		_568_Gate122 = new NOR2_X1("_568__instance122");
		_568_Gate122->id = 122;
		_568_Gate122->A1(_160_);
		_568_Gate122->A2(_432_);
		_568_Gate122->ZN(_161_);
		_568_Gate122->faults=48;
		module_map[122] = _568_Gate122;

		_569_Gate123 = new NAND2_X1("_569__instance123");
		_569_Gate123->id = 123;
		_569_Gate123->A1(_161_);
		_569_Gate123->A2(_413_);
		_569_Gate123->A1_branch_FAULTS = {{10, 2}};
		_569_Gate123->A2_branch_FAULTS = {{11, 0}};
		_569_Gate123->ZN(_433_);
		_569_Gate123->faults=53;
		module_map[123] = _569_Gate123;

		_570_Gate124 = new INV1_X1("_570__instance124");
		_570_Gate124->id = 124;
		_570_Gate124->A(_420_);
		_570_Gate124->A1_branch_FAULTS = {{97, 1},{179, 1},{229, 0}};
		_570_Gate124->ZN(_163_);
		_570_Gate124->faults=12;
		module_map[124] = _570_Gate124;

		_571_Gate125 = new INV1_X1("_571__instance125");
		_571_Gate125->id = 125;
		_571_Gate125->A(_414_);
		_571_Gate125->A1_branch_FAULTS = {{13, 0},{94, 1}};
		_571_Gate125->ZN(_164_);
		_571_Gate125->faults=12;
		module_map[125] = _571_Gate125;

		_572_Gate126 = new INV1_X1("_572__instance126");
		_572_Gate126->id = 126;
		_572_Gate126->A(_343_);
		_572_Gate126->A1_branch_FAULTS = {{65, 3},{92, 0}};
		_572_Gate126->ZN(_165_);
		_572_Gate126->faults=8;
		module_map[126] = _572_Gate126;

		_573_Gate127 = new NAND2_X1("_573__instance127");
		_573_Gate127->id = 127;
		_573_Gate127->A1(_400_);
		_573_Gate127->A2(_384_);
		_573_Gate127->A1_branch_FAULTS = {{85, 0}};
		_573_Gate127->A2_branch_FAULTS = {{87, 0}};
		_573_Gate127->ZN(_166_);
		_573_Gate127->faults=37;
		module_map[127] = _573_Gate127;

		_574_Gate128 = new INV1_X1("_574__instance128");
		_574_Gate128->id = 128;
		_574_Gate128->A(_398_);
		_574_Gate128->A1_branch_FAULTS = {{72, 3},{107, 0}};
		_574_Gate128->ZN(_168_);
		_574_Gate128->faults=12;
		module_map[128] = _574_Gate128;

		_575_Gate129 = new NAND2_X1("_575__instance129");
		_575_Gate129->id = 129;
		_575_Gate129->A1(_168_);
		_575_Gate129->A2(_376_);
		_575_Gate129->A1_branch_FAULTS = {{155, 1}};
		_575_Gate129->A2_branch_FAULTS = {{108, 0}};
		_575_Gate129->ZN(_169_);
		_575_Gate129->faults=21;
		module_map[129] = _575_Gate129;

		_576_Gate130 = new NAND2_X1("_576__instance130");
		_576_Gate130->id = 130;
		_576_Gate130->A1(_386_);
		_576_Gate130->A2(_169_);
		_576_Gate130->A1_branch_FAULTS = {{74, 0},{171, 0}};
		_576_Gate130->ZN(_170_);
		_576_Gate130->faults=36;
		module_map[130] = _576_Gate130;

		_577_Gate131 = new NOR2_X1("_577__instance131");
		_577_Gate131->id = 131;
		_577_Gate131->A1(_170_);
		_577_Gate131->A2(_389_);
		_577_Gate131->A2_branch_FAULTS = {{73, 1}};
		_577_Gate131->ZN(_171_);
		_577_Gate131->faults=18;
		module_map[131] = _577_Gate131;

		_578_Gate132 = new NAND2_X1("_578__instance132");
		_578_Gate132->id = 132;
		_578_Gate132->A1(_406_);
		_578_Gate132->A2(_171_);
		_578_Gate132->A1_branch_FAULTS = {{85, 2}};
		_578_Gate132->ZN(_172_);
		_578_Gate132->faults=36;
		module_map[132] = _578_Gate132;

		_579_Gate133 = new NOR2_X1("_579__instance133");
		_579_Gate133->id = 133;
		_579_Gate133->A1(_172_);
		_579_Gate133->A2(_166_);
		_579_Gate133->ZN(_173_);
		_579_Gate133->faults=48;
		module_map[133] = _579_Gate133;

		_580_Gate134 = new NOR2_X1("_580__instance134");
		_580_Gate134->id = 134;
		_580_Gate134->A1(_173_);
		_580_Gate134->A2(_165_);
		_580_Gate134->A1_branch_FAULTS = {{138, 3},{144, 3},{149, 3},{155, 3},{160, 3},{166, 3},{170, 2}};
		_580_Gate134->ZN(_174_);
		_580_Gate134->faults=40;
		module_map[134] = _580_Gate134;

		_581_Gate135 = new NOR2_X1("_581__instance135");
		_581_Gate135->id = 135;
		_581_Gate135->A1(_174_);
		_581_Gate135->A2(_381_);
		_581_Gate135->A2_branch_FAULTS = {{65, 1}};
		_581_Gate135->ZN(_175_);
		_581_Gate135->faults=50;
		module_map[135] = _581_Gate135;

		_582_Gate136 = new NAND2_X1("_582__instance136");
		_582_Gate136->id = 136;
		_582_Gate136->A1(_175_);
		_582_Gate136->A2(_164_);
		_582_Gate136->A1_branch_FAULTS = {{23, 0}};
		_582_Gate136->A2_branch_FAULTS = {{218, 1}};
		_582_Gate136->ZN(_177_);
		_582_Gate136->faults=21;
		module_map[136] = _582_Gate136;

		_583_Gate137 = new INV1_X1("_583__instance137");
		_583_Gate137->id = 137;
		_583_Gate137->A(_375_);
		_583_Gate137->A1_branch_FAULTS = {{83, 3},{95, 0}};
		_583_Gate137->ZN(_178_);
		_583_Gate137->faults=8;
		module_map[137] = _583_Gate137;

		_584_Gate138 = new NOR2_X1("_584__instance138");
		_584_Gate138->id = 138;
		_584_Gate138->A1(_173_);
		_584_Gate138->A2(_178_);
		_584_Gate138->A1_branch_FAULTS = {{134, 3},{144, 3},{149, 3},{155, 3},{160, 3},{166, 3},{170, 2}};
		_584_Gate138->ZN(_179_);
		_584_Gate138->faults=40;
		module_map[138] = _584_Gate138;

		_585_Gate139 = new NOR2_X1("_585__instance139");
		_585_Gate139->id = 139;
		_585_Gate139->A1(_179_);
		_585_Gate139->A2(_404_);
		_585_Gate139->A2_branch_FAULTS = {{83, 1}};
		_585_Gate139->ZN(_180_);
		_585_Gate139->faults=50;
		module_map[139] = _585_Gate139;

		_586_Gate140 = new NAND2_X1("_586__instance140");
		_586_Gate140->id = 140;
		_586_Gate140->A1(_180_);
		_586_Gate140->A2(_163_);
		_586_Gate140->A1_branch_FAULTS = {{230, 0}};
		_586_Gate140->A2_branch_FAULTS = {{177, 1},{232, 0}};
		_586_Gate140->ZN(_181_);
		_586_Gate140->faults=21;
		module_map[140] = _586_Gate140;

		_587_Gate141 = new NAND2_X1("_587__instance141");
		_587_Gate141->id = 141;
		_587_Gate141->A1(_181_);
		_587_Gate141->A2(_177_);
		_587_Gate141->ZN(_183_);
		_587_Gate141->faults=32;
		module_map[141] = _587_Gate141;

		_588_Gate142 = new INV1_X1("_588__instance142");
		_588_Gate142->id = 142;
		_588_Gate142->A(_409_);
		_588_Gate142->A1_branch_FAULTS = {{101, 1},{201, 1},{253, 0}};
		_588_Gate142->ZN(_184_);
		_588_Gate142->faults=12;
		module_map[142] = _588_Gate142;

		_589_Gate143 = new INV1_X1("_589__instance143");
		_589_Gate143->id = 143;
		_589_Gate143->A(_353_);
		_589_Gate143->A1_branch_FAULTS = {{76, 3},{99, 0}};
		_589_Gate143->ZN(_185_);
		_589_Gate143->faults=8;
		module_map[143] = _589_Gate143;

		_590_Gate144 = new NOR2_X1("_590__instance144");
		_590_Gate144->id = 144;
		_590_Gate144->A1(_173_);
		_590_Gate144->A2(_185_);
		_590_Gate144->A1_branch_FAULTS = {{134, 3},{138, 3},{149, 3},{155, 3},{160, 3},{166, 3},{170, 2}};
		_590_Gate144->ZN(_186_);
		_590_Gate144->faults=40;
		module_map[144] = _590_Gate144;

		_591_Gate145 = new NOR2_X1("_591__instance145");
		_591_Gate145->id = 145;
		_591_Gate145->A1(_186_);
		_591_Gate145->A2(_394_);
		_591_Gate145->A2_branch_FAULTS = {{76, 1}};
		_591_Gate145->ZN(_187_);
		_591_Gate145->faults=50;
		module_map[145] = _591_Gate145;

		_592_Gate146 = new NAND2_X1("_592__instance146");
		_592_Gate146->id = 146;
		_592_Gate146->A1(_187_);
		_592_Gate146->A2(_184_);
		_592_Gate146->A1_branch_FAULTS = {{254, 0}};
		_592_Gate146->A2_branch_FAULTS = {{199, 1},{256, 0}};
		_592_Gate146->ZN(_188_);
		_592_Gate146->faults=21;
		module_map[146] = _592_Gate146;

		_593_Gate147 = new INV1_X1("_593__instance147");
		_593_Gate147->id = 147;
		_593_Gate147->A(_402_);
		_593_Gate147->A1_branch_FAULTS = {{104, 1},{194, 1},{245, 0}};
		_593_Gate147->ZN(_189_);
		_593_Gate147->faults=12;
		module_map[147] = _593_Gate147;

		_594_Gate148 = new INV1_X1("_594__instance148");
		_594_Gate148->id = 148;
		_594_Gate148->A(_271_);
		_594_Gate148->A1_branch_FAULTS = {{81, 3},{102, 0}};
		_594_Gate148->ZN(_191_);
		_594_Gate148->faults=8;
		module_map[148] = _594_Gate148;

		_595_Gate149 = new NOR2_X1("_595__instance149");
		_595_Gate149->id = 149;
		_595_Gate149->A1(_173_);
		_595_Gate149->A2(_191_);
		_595_Gate149->A1_branch_FAULTS = {{134, 3},{138, 3},{144, 3},{155, 3},{160, 3},{166, 3},{170, 2}};
		_595_Gate149->ZN(_192_);
		_595_Gate149->faults=40;
		module_map[149] = _595_Gate149;

		_596_Gate150 = new NOR2_X1("_596__instance150");
		_596_Gate150->id = 150;
		_596_Gate150->A1(_192_);
		_596_Gate150->A2(_401_);
		_596_Gate150->A2_branch_FAULTS = {{81, 1}};
		_596_Gate150->ZN(_193_);
		_596_Gate150->faults=50;
		module_map[150] = _596_Gate150;

		_597_Gate151 = new NAND2_X1("_597__instance151");
		_597_Gate151->id = 151;
		_597_Gate151->A1(_193_);
		_597_Gate151->A2(_189_);
		_597_Gate151->A1_branch_FAULTS = {{246, 0}};
		_597_Gate151->A2_branch_FAULTS = {{192, 1},{248, 0}};
		_597_Gate151->ZN(_194_);
		_597_Gate151->faults=21;
		module_map[151] = _597_Gate151;

		_598_Gate152 = new NAND2_X1("_598__instance152");
		_598_Gate152->id = 152;
		_598_Gate152->A1(_194_);
		_598_Gate152->A2(_188_);
		_598_Gate152->ZN(_195_);
		_598_Gate152->faults=32;
		module_map[152] = _598_Gate152;

		_599_Gate153 = new NOR2_X1("_599__instance153");
		_599_Gate153->id = 153;
		_599_Gate153->A1(_195_);
		_599_Gate153->A2(_183_);
		_599_Gate153->ZN(_197_);
		_599_Gate153->faults=16;
		module_map[153] = _599_Gate153;

		_600_Gate154 = new INV1_X1("_600__instance154");
		_600_Gate154->id = 154;
		_600_Gate154->A(_382_);
		_600_Gate154->A1_branch_FAULTS = {{6, 0},{109, 1}};
		_600_Gate154->ZN(_198_);
		_600_Gate154->faults=12;
		module_map[154] = _600_Gate154;

		_601_Gate155 = new NOR2_X1("_601__instance155");
		_601_Gate155->id = 155;
		_601_Gate155->A1(_173_);
		_601_Gate155->A2(_168_);
		_601_Gate155->A1_branch_FAULTS = {{134, 3},{138, 3},{144, 3},{149, 3},{160, 3},{166, 3},{170, 2}};
		_601_Gate155->A2_branch_FAULTS = {{129, 2}};
		_601_Gate155->ZN(_199_);
		_601_Gate155->faults=42;
		module_map[155] = _601_Gate155;

		_602_Gate156 = new NOR2_X1("_602__instance156");
		_602_Gate156->id = 156;
		_602_Gate156->A1(_199_);
		_602_Gate156->A2(_390_);
		_602_Gate156->A2_branch_FAULTS = {{72, 1}};
		_602_Gate156->ZN(_200_);
		_602_Gate156->faults=50;
		module_map[156] = _602_Gate156;

		_603_Gate157 = new NAND2_X1("_603__instance157");
		_603_Gate157->id = 157;
		_603_Gate157->A1(_200_);
		_603_Gate157->A2(_198_);
		_603_Gate157->A1_branch_FAULTS = {{7, 0}};
		_603_Gate157->A2_branch_FAULTS = {{211, 1}};
		_603_Gate157->ZN(_201_);
		_603_Gate157->faults=21;
		module_map[157] = _603_Gate157;

		_604_Gate158 = new INV1_X1("_604__instance158");
		_604_Gate158->id = 158;
		_604_Gate158->A(_387_);
		_604_Gate158->A1_branch_FAULTS = {{112, 1},{242, 0}};
		_604_Gate158->ZN(_203_);
		_604_Gate158->faults=12;
		module_map[158] = _604_Gate158;

		_605_Gate159 = new INV1_X1("_605__instance159");
		_605_Gate159->id = 159;
		_605_Gate159->A(_155_);
		_605_Gate159->A1_branch_FAULTS = {{70, 3},{110, 0}};
		_605_Gate159->ZN(_204_);
		_605_Gate159->faults=8;
		module_map[159] = _605_Gate159;

		_606_Gate160 = new NOR2_X1("_606__instance160");
		_606_Gate160->id = 160;
		_606_Gate160->A1(_173_);
		_606_Gate160->A2(_204_);
		_606_Gate160->A1_branch_FAULTS = {{134, 3},{138, 3},{144, 3},{149, 3},{155, 3},{166, 3},{170, 2}};
		_606_Gate160->ZN(_206_);
		_606_Gate160->faults=40;
		module_map[160] = _606_Gate160;

		_607_Gate161 = new NOR2_X1("_607__instance161");
		_607_Gate161->id = 161;
		_607_Gate161->A1(_206_);
		_607_Gate161->A2(_388_);
		_607_Gate161->A2_branch_FAULTS = {{70, 1}};
		_607_Gate161->ZN(_207_);
		_607_Gate161->faults=50;
		module_map[161] = _607_Gate161;

		_608_Gate162 = new NAND2_X1("_608__instance162");
		_608_Gate162->id = 162;
		_608_Gate162->A1(_207_);
		_608_Gate162->A2(_203_);
		_608_Gate162->A1_branch_FAULTS = {{243, 0}};
		_608_Gate162->A2_branch_FAULTS = {{189, 1}};
		_608_Gate162->ZN(_208_);
		_608_Gate162->faults=21;
		module_map[162] = _608_Gate162;

		_609_Gate163 = new NAND2_X1("_609__instance163");
		_609_Gate163->id = 163;
		_609_Gate163->A1(_208_);
		_609_Gate163->A2(_201_);
		_609_Gate163->ZN(_209_);
		_609_Gate163->faults=32;
		module_map[163] = _609_Gate163;

		_610_Gate164 = new INV1_X1("_610__instance164");
		_610_Gate164->id = 164;
		_610_Gate164->A(_395_);
		_610_Gate164->A1_branch_FAULTS = {{116, 1},{206, 1},{226, 0}};
		_610_Gate164->ZN(_210_);
		_610_Gate164->faults=12;
		module_map[164] = _610_Gate164;

		_611_Gate165 = new INV1_X1("_611__instance165");
		_611_Gate165->id = 165;
		_611_Gate165->A(_224_);
		_611_Gate165->A1_branch_FAULTS = {{78, 3},{114, 0}};
		_611_Gate165->ZN(_211_);
		_611_Gate165->faults=8;
		module_map[165] = _611_Gate165;

		_612_Gate166 = new NOR2_X1("_612__instance166");
		_612_Gate166->id = 166;
		_612_Gate166->A1(_173_);
		_612_Gate166->A2(_211_);
		_612_Gate166->A1_branch_FAULTS = {{134, 3},{138, 3},{144, 3},{149, 3},{155, 3},{160, 3},{170, 2}};
		_612_Gate166->ZN(_212_);
		_612_Gate166->faults=40;
		module_map[166] = _612_Gate166;

		_613_Gate167 = new NOR2_X1("_613__instance167");
		_613_Gate167->id = 167;
		_613_Gate167->A1(_212_);
		_613_Gate167->A2(_397_);
		_613_Gate167->A2_branch_FAULTS = {{78, 1}};
		_613_Gate167->ZN(_213_);
		_613_Gate167->faults=50;
		module_map[167] = _613_Gate167;

		_614_Gate168 = new NAND2_X1("_614__instance168");
		_614_Gate168->id = 168;
		_614_Gate168->A1(_213_);
		_614_Gate168->A2(_210_);
		_614_Gate168->A1_branch_FAULTS = {{227, 0}};
		_614_Gate168->A2_branch_FAULTS = {{2, 0},{204, 1}};
		_614_Gate168->ZN(_214_);
		_614_Gate168->faults=21;
		module_map[168] = _614_Gate168;

		_615_Gate169 = new INV1_X1("_615__instance169");
		_615_Gate169->id = 169;
		_615_Gate169->A(_427_);
		_615_Gate169->A1_branch_FAULTS = {{119, 1},{184, 1},{235, 0}};
		_615_Gate169->ZN(_215_);
		_615_Gate169->faults=12;
		module_map[169] = _615_Gate169;

		_616_Gate170 = new NAND2_X1("_616__instance170");
		_616_Gate170->id = 170;
		_616_Gate170->A1(_173_);
		_616_Gate170->A2(_373_);
		_616_Gate170->A1_branch_FAULTS = {{134, 3},{138, 3},{144, 3},{149, 3},{155, 3},{160, 3},{166, 3}};
		_616_Gate170->A2_branch_FAULTS = {{68, 0},{118, 0}};
		_616_Gate170->ZN(_216_);
		_616_Gate170->faults=21;
		module_map[170] = _616_Gate170;

		_617_Gate171 = new NAND2_X1("_617__instance171");
		_617_Gate171->id = 171;
		_617_Gate171->A1(_216_);
		_617_Gate171->A2(_386_);
		_617_Gate171->A2_branch_FAULTS = {{74, 0},{130, 2}};
		_617_Gate171->ZN(_217_);
		_617_Gate171->faults=49;
		module_map[171] = _617_Gate171;

		_618_Gate172 = new NAND2_X1("_618__instance172");
		_618_Gate172->id = 172;
		_618_Gate172->A1(_217_);
		_618_Gate172->A2(_215_);
		_618_Gate172->A1_branch_FAULTS = {{236, 0}};
		_618_Gate172->A2_branch_FAULTS = {{182, 1},{238, 0}};
		_618_Gate172->ZN(_218_);
		_618_Gate172->faults=21;
		module_map[172] = _618_Gate172;

		_619_Gate173 = new NAND2_X1("_619__instance173");
		_619_Gate173->id = 173;
		_619_Gate173->A1(_218_);
		_619_Gate173->A2(_214_);
		_619_Gate173->ZN(_219_);
		_619_Gate173->faults=32;
		module_map[173] = _619_Gate173;

		_620_Gate174 = new NOR2_X1("_620__instance174");
		_620_Gate174->id = 174;
		_620_Gate174->A1(_219_);
		_620_Gate174->A2(_209_);
		_620_Gate174->ZN(_220_);
		_620_Gate174->faults=16;
		module_map[174] = _620_Gate174;

		_621_Gate175 = new NAND2_X1("_621__instance175");
		_621_Gate175->id = 175;
		_621_Gate175->A1(_220_);
		_621_Gate175->A2(_197_);
		_621_Gate175->ZN(_221_);
		_621_Gate175->faults=48;
		module_map[175] = _621_Gate175;

		_622_Gate176 = new NOR2_X1("_622__instance176");
		_622_Gate176->id = 176;
		_622_Gate176->A1(_221_);
		_622_Gate176->A2(_412_);
		_622_Gate176->A1_branch_FAULTS = {{215, 2}};
		_622_Gate176->ZN(_222_);
		_622_Gate176->faults=58;
		module_map[176] = _622_Gate176;

		_623_Gate177 = new NOR2_X1("_623__instance177");
		_623_Gate177->id = 177;
		_623_Gate177->A1(_222_);
		_623_Gate177->A2(_163_);
		_623_Gate177->A1_branch_FAULTS = {{2, 2},{182, 3},{189, 3},{192, 3},{199, 3},{204, 3},{211, 3},{218, 3},{232, 2},{238, 2},{248, 2},{256, 2}};
		_623_Gate177->A2_branch_FAULTS = {{140, 0},{232, 0}};
		_623_Gate177->ZN(_223_);
		_623_Gate177->faults=42;
		module_map[177] = _623_Gate177;

		_624_Gate178 = new NOR2_X1("_624__instance178");
		_624_Gate178->id = 178;
		_624_Gate178->A1(_223_);
		_624_Gate178->A2(_419_);
		_624_Gate178->A2_branch_FAULTS = {{97, 3}};
		_624_Gate178->ZN(_225_);
		_624_Gate178->faults=50;
		module_map[178] = _624_Gate178;

		_625_Gate179 = new NOR2_X1("_625__instance179");
		_625_Gate179->id = 179;
		_625_Gate179->A1(_433_);
		_625_Gate179->A2(_420_);
		_625_Gate179->A2_branch_FAULTS = {{97, 1},{229, 0}};
		_625_Gate179->ZN(_226_);
		_625_Gate179->faults=42;
		module_map[179] = _625_Gate179;

		_626_Gate180 = new NOR2_X1("_626__instance180");
		_626_Gate180->id = 180;
		_626_Gate180->A1(_226_);
		_626_Gate180->A2(_190_);
		_626_Gate180->ZN(_227_);
		_626_Gate180->faults=18;
		module_map[180] = _626_Gate180;

		_627_Gate181 = new NAND2_X1("_627__instance181");
		_627_Gate181->id = 181;
		_627_Gate181->A1(_227_);
		_627_Gate181->A2(_225_);
		_627_Gate181->A2_branch_FAULTS = {{53, 0}};
		_627_Gate181->ZN(_228_);
		_627_Gate181->faults=17;
		module_map[181] = _627_Gate181;

		_628_Gate182 = new NOR2_X1("_628__instance182");
		_628_Gate182->id = 182;
		_628_Gate182->A1(_222_);
		_628_Gate182->A2(_215_);
		_628_Gate182->A1_branch_FAULTS = {{2, 2},{177, 3},{189, 3},{192, 3},{199, 3},{204, 3},{211, 3},{218, 3},{232, 2},{238, 2},{248, 2},{256, 2}};
		_628_Gate182->A2_branch_FAULTS = {{172, 0},{238, 0}};
		_628_Gate182->ZN(_229_);
		_628_Gate182->faults=42;
		module_map[182] = _628_Gate182;

		_629_Gate183 = new NOR2_X1("_629__instance183");
		_629_Gate183->id = 183;
		_629_Gate183->A1(_229_);
		_629_Gate183->A2(_157_);
		_629_Gate183->A2_branch_FAULTS = {{119, 3}};
		_629_Gate183->ZN(_230_);
		_629_Gate183->faults=18;
		module_map[183] = _629_Gate183;

		_630_Gate184 = new NOR2_X1("_630__instance184");
		_630_Gate184->id = 184;
		_630_Gate184->A1(_433_);
		_630_Gate184->A2(_427_);
		_630_Gate184->A2_branch_FAULTS = {{119, 1},{235, 0}};
		_630_Gate184->ZN(_231_);
		_630_Gate184->faults=42;
		module_map[184] = _630_Gate184;

		_631_Gate185 = new NOR2_X1("_631__instance185");
		_631_Gate185->id = 185;
		_631_Gate185->A1(_231_);
		_631_Gate185->A2(_196_);
		_631_Gate185->ZN(_232_);
		_631_Gate185->faults=18;
		module_map[185] = _631_Gate185;

		_632_Gate186 = new NAND2_X1("_632__instance186");
		_632_Gate186->id = 186;
		_632_Gate186->A1(_232_);
		_632_Gate186->A2(_230_);
		_632_Gate186->ZN(_233_);
		_632_Gate186->faults=16;
		module_map[186] = _632_Gate186;

		_633_Gate187 = new NAND2_X1("_633__instance187");
		_633_Gate187->id = 187;
		_633_Gate187->A1(_233_);
		_633_Gate187->A2(_228_);
		_633_Gate187->ZN(_234_);
		_633_Gate187->faults=32;
		module_map[187] = _633_Gate187;

		_634_Gate188 = new INV1_X1("_634__instance188");
		_634_Gate188->id = 188;
		_634_Gate188->A(_156_);
		_634_Gate188->A1_branch_FAULTS = {{55, 0},{244, 1}};
		_634_Gate188->ZN(_235_);
		_634_Gate188->faults=12;
		module_map[188] = _634_Gate188;

		_635_Gate189 = new NOR2_X1("_635__instance189");
		_635_Gate189->id = 189;
		_635_Gate189->A1(_222_);
		_635_Gate189->A2(_203_);
		_635_Gate189->A1_branch_FAULTS = {{2, 2},{177, 3},{182, 3},{192, 3},{199, 3},{204, 3},{211, 3},{218, 3},{232, 2},{238, 2},{248, 2},{256, 2}};
		_635_Gate189->A2_branch_FAULTS = {{162, 0}};
		_635_Gate189->ZN(_236_);
		_635_Gate189->faults=42;
		module_map[189] = _635_Gate189;

		_636_Gate190 = new NOR2_X1("_636__instance190");
		_636_Gate190->id = 190;
		_636_Gate190->A1(_236_);
		_636_Gate190->A2(_439_);
		_636_Gate190->A2_branch_FAULTS = {{112, 3}};
		_636_Gate190->ZN(_237_);
		_636_Gate190->faults=50;
		module_map[190] = _636_Gate190;

		_637_Gate191 = new NAND2_X1("_637__instance191");
		_637_Gate191->id = 191;
		_637_Gate191->A1(_237_);
		_637_Gate191->A2(_235_);
		_637_Gate191->A1_branch_FAULTS = {{56, 0}};
		_637_Gate191->A2_branch_FAULTS = {{41, 1}};
		_637_Gate191->ZN(_238_);
		_637_Gate191->faults=21;
		module_map[191] = _637_Gate191;

		_638_Gate192 = new NOR2_X1("_638__instance192");
		_638_Gate192->id = 192;
		_638_Gate192->A1(_222_);
		_638_Gate192->A2(_189_);
		_638_Gate192->A1_branch_FAULTS = {{2, 2},{177, 3},{182, 3},{189, 3},{199, 3},{204, 3},{211, 3},{218, 3},{232, 2},{238, 2},{248, 2},{256, 2}};
		_638_Gate192->A2_branch_FAULTS = {{151, 0},{248, 0}};
		_638_Gate192->ZN(_239_);
		_638_Gate192->faults=42;
		module_map[192] = _638_Gate192;

		_639_Gate193 = new NOR2_X1("_639__instance193");
		_639_Gate193->id = 193;
		_639_Gate193->A1(_239_);
		_639_Gate193->A2(_429_);
		_639_Gate193->A2_branch_FAULTS = {{104, 3}};
		_639_Gate193->ZN(_240_);
		_639_Gate193->faults=18;
		module_map[193] = _639_Gate193;

		_640_Gate194 = new NOR2_X1("_640__instance194");
		_640_Gate194->id = 194;
		_640_Gate194->A1(_433_);
		_640_Gate194->A2(_402_);
		_640_Gate194->A2_branch_FAULTS = {{104, 1},{245, 0}};
		_640_Gate194->ZN(_241_);
		_640_Gate194->faults=42;
		module_map[194] = _640_Gate194;

		_641_Gate195 = new NOR2_X1("_641__instance195");
		_641_Gate195->id = 195;
		_641_Gate195->A1(_241_);
		_641_Gate195->A2(_167_);
		_641_Gate195->ZN(_242_);
		_641_Gate195->faults=18;
		module_map[195] = _641_Gate195;

		_642_Gate196 = new NAND2_X1("_642__instance196");
		_642_Gate196->id = 196;
		_642_Gate196->A1(_242_);
		_642_Gate196->A2(_240_);
		_642_Gate196->ZN(_243_);
		_642_Gate196->faults=16;
		module_map[196] = _642_Gate196;

		_643_Gate197 = new NAND2_X1("_643__instance197");
		_643_Gate197->id = 197;
		_643_Gate197->A1(_243_);
		_643_Gate197->A2(_238_);
		_643_Gate197->ZN(_244_);
		_643_Gate197->faults=32;
		module_map[197] = _643_Gate197;

		_644_Gate198 = new NOR2_X1("_644__instance198");
		_644_Gate198->id = 198;
		_644_Gate198->A1(_244_);
		_644_Gate198->A2(_234_);
		_644_Gate198->ZN(_246_);
		_644_Gate198->faults=16;
		module_map[198] = _644_Gate198;

		_645_Gate199 = new NOR2_X1("_645__instance199");
		_645_Gate199->id = 199;
		_645_Gate199->A1(_222_);
		_645_Gate199->A2(_184_);
		_645_Gate199->A1_branch_FAULTS = {{2, 2},{177, 3},{182, 3},{189, 3},{192, 3},{204, 3},{211, 3},{218, 3},{232, 2},{238, 2},{248, 2},{256, 2}};
		_645_Gate199->A2_branch_FAULTS = {{146, 0},{256, 0}};
		_645_Gate199->ZN(_247_);
		_645_Gate199->faults=42;
		module_map[199] = _645_Gate199;

		_646_Gate200 = new NOR2_X1("_646__instance200");
		_646_Gate200->id = 200;
		_646_Gate200->A1(_247_);
		_646_Gate200->A2(_425_);
		_646_Gate200->A2_branch_FAULTS = {{101, 3}};
		_646_Gate200->ZN(_249_);
		_646_Gate200->faults=18;
		module_map[200] = _646_Gate200;

		_647_Gate201 = new NOR2_X1("_647__instance201");
		_647_Gate201->id = 201;
		_647_Gate201->A1(_433_);
		_647_Gate201->A2(_409_);
		_647_Gate201->A2_branch_FAULTS = {{101, 1},{253, 0}};
		_647_Gate201->ZN(_250_);
		_647_Gate201->faults=42;
		module_map[201] = _647_Gate201;

		_648_Gate202 = new NOR2_X1("_648__instance202");
		_648_Gate202->id = 202;
		_648_Gate202->A1(_250_);
		_648_Gate202->A2(_176_);
		_648_Gate202->ZN(_251_);
		_648_Gate202->faults=18;
		module_map[202] = _648_Gate202;

		_649_Gate203 = new NAND2_X1("_649__instance203");
		_649_Gate203->id = 203;
		_649_Gate203->A1(_251_);
		_649_Gate203->A2(_249_);
		_649_Gate203->ZN(_252_);
		_649_Gate203->faults=16;
		module_map[203] = _649_Gate203;

		_650_Gate204 = new NOR2_X1("_650__instance204");
		_650_Gate204->id = 204;
		_650_Gate204->A1(_222_);
		_650_Gate204->A2(_210_);
		_650_Gate204->A1_branch_FAULTS = {{2, 2},{177, 3},{182, 3},{189, 3},{192, 3},{199, 3},{211, 3},{218, 3},{232, 2},{238, 2},{248, 2},{256, 2}};
		_650_Gate204->A2_branch_FAULTS = {{2, 0},{168, 0}};
		_650_Gate204->ZN(_254_);
		_650_Gate204->faults=42;
		module_map[204] = _650_Gate204;

		_651_Gate205 = new NOR2_X1("_651__instance205");
		_651_Gate205->id = 205;
		_651_Gate205->A1(_254_);
		_651_Gate205->A2(_444_);
		_651_Gate205->A2_branch_FAULTS = {{116, 3}};
		_651_Gate205->ZN(_255_);
		_651_Gate205->faults=18;
		module_map[205] = _651_Gate205;

		_652_Gate206 = new NOR2_X1("_652__instance206");
		_652_Gate206->id = 206;
		_652_Gate206->A1(_433_);
		_652_Gate206->A2(_395_);
		_652_Gate206->A2_branch_FAULTS = {{116, 1},{226, 0}};
		_652_Gate206->ZN(_256_);
		_652_Gate206->faults=42;
		module_map[206] = _652_Gate206;

		_653_Gate207 = new NOR2_X1("_653__instance207");
		_653_Gate207->id = 207;
		_653_Gate207->A1(_256_);
		_653_Gate207->A2(_162_);
		_653_Gate207->ZN(_257_);
		_653_Gate207->faults=18;
		module_map[207] = _653_Gate207;

		_654_Gate208 = new NAND2_X1("_654__instance208");
		_654_Gate208->id = 208;
		_654_Gate208->A1(_257_);
		_654_Gate208->A2(_255_);
		_654_Gate208->ZN(_258_);
		_654_Gate208->faults=16;
		module_map[208] = _654_Gate208;

		_655_Gate209 = new NAND2_X1("_655__instance209");
		_655_Gate209->id = 209;
		_655_Gate209->A1(_258_);
		_655_Gate209->A2(_252_);
		_655_Gate209->ZN(_260_);
		_655_Gate209->faults=32;
		module_map[209] = _655_Gate209;

		_656_Gate210 = new INV1_X1("_656__instance210");
		_656_Gate210->id = 210;
		_656_Gate210->A(_441_);
		_656_Gate210->A1_branch_FAULTS = {{8, 1}};
		_656_Gate210->ZN(_261_);
		_656_Gate210->faults=12;
		module_map[210] = _656_Gate210;

		_657_Gate211 = new NOR2_X1("_657__instance211");
		_657_Gate211->id = 211;
		_657_Gate211->A1(_222_);
		_657_Gate211->A2(_198_);
		_657_Gate211->A1_branch_FAULTS = {{2, 2},{177, 3},{182, 3},{189, 3},{192, 3},{199, 3},{204, 3},{218, 3},{232, 2},{238, 2},{248, 2},{256, 2}};
		_657_Gate211->A2_branch_FAULTS = {{157, 0}};
		_657_Gate211->ZN(_262_);
		_657_Gate211->faults=42;
		module_map[211] = _657_Gate211;

		_658_Gate212 = new NOR2_X1("_658__instance212");
		_658_Gate212->id = 212;
		_658_Gate212->A1(_262_);
		_658_Gate212->A2(_435_);
		_658_Gate212->A2_branch_FAULTS = {{109, 3}};
		_658_Gate212->ZN(_263_);
		_658_Gate212->faults=18;
		module_map[212] = _658_Gate212;

		_659_Gate213 = new NAND2_X1("_659__instance213");
		_659_Gate213->id = 213;
		_659_Gate213->A1(_263_);
		_659_Gate213->A2(_261_);
		_659_Gate213->A2_branch_FAULTS = {{36, 1}};
		_659_Gate213->ZN(_264_);
		_659_Gate213->faults=17;
		module_map[213] = _659_Gate213;

		_660_Gate214 = new INV1_X1("_660__instance214");
		_660_Gate214->id = 214;
		_660_Gate214->A(_411_);
		_660_Gate214->A1_branch_FAULTS = {{90, 3}};
		_660_Gate214->ZN(_266_);
		_660_Gate214->faults=12;
		module_map[214] = _660_Gate214;

		_661_Gate215 = new NAND2_X1("_661__instance215");
		_661_Gate215->id = 215;
		_661_Gate215->A1(_221_);
		_661_Gate215->A2(_378_);
		_661_Gate215->A1_branch_FAULTS = {{176, 3}};
		_661_Gate215->A2_branch_FAULTS = {{90, 1}};
		_661_Gate215->ZN(_267_);
		_661_Gate215->faults=21;
		module_map[215] = _661_Gate215;

		_662_Gate216 = new NAND2_X1("_662__instance216");
		_662_Gate216->id = 216;
		_662_Gate216->A1(_267_);
		_662_Gate216->A2(_266_);
		_662_Gate216->A2_branch_FAULTS = {{10, 0}};
		_662_Gate216->ZN(_268_);
		_662_Gate216->faults=49;
		module_map[216] = _662_Gate216;

		_663_Gate217 = new NOR2_X1("_663__instance217");
		_663_Gate217->id = 217;
		_663_Gate217->A1(_268_);
		_663_Gate217->A2(_436_);
		_663_Gate217->A1_branch_FAULTS = {{40, 1}};
		_663_Gate217->ZN(_269_);
		_663_Gate217->faults=42;
		module_map[217] = _663_Gate217;

		_664_Gate218 = new NOR2_X1("_664__instance218");
		_664_Gate218->id = 218;
		_664_Gate218->A1(_222_);
		_664_Gate218->A2(_164_);
		_664_Gate218->A1_branch_FAULTS = {{2, 2},{177, 3},{182, 3},{189, 3},{192, 3},{199, 3},{204, 3},{211, 3},{232, 2},{238, 2},{248, 2},{256, 2}};
		_664_Gate218->A2_branch_FAULTS = {{136, 0}};
		_664_Gate218->ZN(_272_);
		_664_Gate218->faults=42;
		module_map[218] = _664_Gate218;

		_665_Gate219 = new NOR2_X1("_665__instance219");
		_665_Gate219->id = 219;
		_665_Gate219->A1(_416_);
		_665_Gate219->A2(_182_);
		_665_Gate219->A1_branch_FAULTS = {{94, 3}};
		_665_Gate219->ZN(_273_);
		_665_Gate219->faults=58;
		module_map[219] = _665_Gate219;

		_666_Gate220 = new INV1_X1("_666__instance220");
		_666_Gate220->id = 220;
		_666_Gate220->A(_273_);
		_666_Gate220->A1_branch_FAULTS = {{14, 2}};
		_666_Gate220->ZN(_274_);
		_666_Gate220->faults=8;
		module_map[220] = _666_Gate220;

		_667_Gate221 = new NOR2_X1("_667__instance221");
		_667_Gate221->id = 221;
		_667_Gate221->A1(_274_);
		_667_Gate221->A2(_272_);
		_667_Gate221->ZN(_275_);
		_667_Gate221->faults=32;
		module_map[221] = _667_Gate221;

		_668_Gate222 = new NOR2_X1("_668__instance222");
		_668_Gate222->id = 222;
		_668_Gate222->A1(_275_);
		_668_Gate222->A2(_269_);
		_668_Gate222->ZN(_276_);
		_668_Gate222->faults=16;
		module_map[222] = _668_Gate222;

		_669_Gate223 = new NAND2_X1("_669__instance223");
		_669_Gate223->id = 223;
		_669_Gate223->A1(_276_);
		_669_Gate223->A2(_264_);
		_669_Gate223->ZN(_277_);
		_669_Gate223->faults=32;
		module_map[223] = _669_Gate223;

		_670_Gate224 = new NOR2_X1("_670__instance224");
		_670_Gate224->id = 224;
		_670_Gate224->A1(_277_);
		_670_Gate224->A2(_260_);
		_670_Gate224->ZN(_278_);
		_670_Gate224->faults=16;
		module_map[224] = _670_Gate224;

		_671_Gate225 = new NAND2_X1("_671__instance225");
		_671_Gate225->id = 225;
		_671_Gate225->A1(_278_);
		_671_Gate225->A2(_246_);
		_671_Gate225->ZN(_205_);
		_671_Gate225->faults=48;
		module_map[225] = _671_Gate225;

		_672_Gate226 = new NAND2_X1("_672__instance226");
		_672_Gate226->id = 226;
		_672_Gate226->A1(_433_);
		_672_Gate226->A2(_395_);
		_672_Gate226->A2_branch_FAULTS = {{116, 1},{206, 1}};
		_672_Gate226->ZN(_279_);
		_672_Gate226->faults=21;
		module_map[226] = _672_Gate226;

		_673_Gate227 = new NAND2_X1("_673__instance227");
		_673_Gate227->id = 227;
		_673_Gate227->A1(_279_);
		_673_Gate227->A2(_213_);
		_673_Gate227->A2_branch_FAULTS = {{168, 2}};
		_673_Gate227->ZN(_280_);
		_673_Gate227->faults=49;
		module_map[227] = _673_Gate227;

		_674_Gate228 = new INV1_X1("_674__instance228");
		_674_Gate228->id = 228;
		_674_Gate228->A(_162_);
		_674_Gate228->A1_branch_FAULTS = {{207, 1}};
		_674_Gate228->ZN(_281_);
		_674_Gate228->faults=12;
		module_map[228] = _674_Gate228;

		_675_Gate229 = new NAND2_X1("_675__instance229");
		_675_Gate229->id = 229;
		_675_Gate229->A1(_433_);
		_675_Gate229->A2(_420_);
		_675_Gate229->A2_branch_FAULTS = {{97, 1},{179, 1}};
		_675_Gate229->ZN(_282_);
		_675_Gate229->faults=21;
		module_map[229] = _675_Gate229;

		_676_Gate230 = new NAND2_X1("_676__instance230");
		_676_Gate230->id = 230;
		_676_Gate230->A1(_282_);
		_676_Gate230->A2(_180_);
		_676_Gate230->A2_branch_FAULTS = {{140, 2}};
		_676_Gate230->ZN(_283_);
		_676_Gate230->faults=49;
		module_map[230] = _676_Gate230;

		_677_Gate231 = new INV1_X1("_677__instance231");
		_677_Gate231->id = 231;
		_677_Gate231->A(_190_);
		_677_Gate231->A1_branch_FAULTS = {{52, 0},{180, 1}};
		_677_Gate231->ZN(_284_);
		_677_Gate231->faults=12;
		module_map[231] = _677_Gate231;

		_678_Gate232 = new NAND2_X1("_678__instance232");
		_678_Gate232->id = 232;
		_678_Gate232->A1(_222_);
		_678_Gate232->A2(_163_);
		_678_Gate232->A1_branch_FAULTS = {{2, 2},{177, 3},{182, 3},{189, 3},{192, 3},{199, 3},{204, 3},{211, 3},{218, 3},{238, 2},{248, 2},{256, 2}};
		_678_Gate232->A2_branch_FAULTS = {{140, 0},{177, 1}};
		_678_Gate232->ZN(_285_);
		_678_Gate232->faults=21;
		module_map[232] = _678_Gate232;

		_679_Gate233 = new NAND2_X1("_679__instance233");
		_679_Gate233->id = 233;
		_679_Gate233->A1(_285_);
		_679_Gate233->A2(_284_);
		_679_Gate233->A2_branch_FAULTS = {{25, 1}};
		_679_Gate233->ZN(_286_);
		_679_Gate233->faults=33;
		module_map[233] = _679_Gate233;

		_680_Gate234 = new NOR2_X1("_680__instance234");
		_680_Gate234->id = 234;
		_680_Gate234->A1(_286_);
		_680_Gate234->A2(_283_);
		_680_Gate234->A2_branch_FAULTS = {{26, 1}};
		_680_Gate234->ZN(_287_);
		_680_Gate234->faults=34;
		module_map[234] = _680_Gate234;

		_681_Gate235 = new NAND2_X1("_681__instance235");
		_681_Gate235->id = 235;
		_681_Gate235->A1(_433_);
		_681_Gate235->A2(_427_);
		_681_Gate235->A2_branch_FAULTS = {{119, 1},{184, 1}};
		_681_Gate235->ZN(_288_);
		_681_Gate235->faults=21;
		module_map[235] = _681_Gate235;

		_682_Gate236 = new NAND2_X1("_682__instance236");
		_682_Gate236->id = 236;
		_682_Gate236->A1(_288_);
		_682_Gate236->A2(_217_);
		_682_Gate236->A2_branch_FAULTS = {{172, 2}};
		_682_Gate236->ZN(_289_);
		_682_Gate236->faults=49;
		module_map[236] = _682_Gate236;

		_683_Gate237 = new INV1_X1("_683__instance237");
		_683_Gate237->id = 237;
		_683_Gate237->A(_196_);
		_683_Gate237->A1_branch_FAULTS = {{185, 1}};
		_683_Gate237->ZN(_290_);
		_683_Gate237->faults=12;
		module_map[237] = _683_Gate237;

		_684_Gate238 = new NAND2_X1("_684__instance238");
		_684_Gate238->id = 238;
		_684_Gate238->A1(_222_);
		_684_Gate238->A2(_215_);
		_684_Gate238->A1_branch_FAULTS = {{2, 2},{177, 3},{182, 3},{189, 3},{192, 3},{199, 3},{204, 3},{211, 3},{218, 3},{232, 2},{248, 2},{256, 2}};
		_684_Gate238->A2_branch_FAULTS = {{172, 0},{182, 1}};
		_684_Gate238->ZN(_291_);
		_684_Gate238->faults=21;
		module_map[238] = _684_Gate238;

		_685_Gate239 = new NAND2_X1("_685__instance239");
		_685_Gate239->id = 239;
		_685_Gate239->A1(_291_);
		_685_Gate239->A2(_290_);
		_685_Gate239->A2_branch_FAULTS = {{34, 1}};
		_685_Gate239->ZN(_292_);
		_685_Gate239->faults=33;
		module_map[239] = _685_Gate239;

		_686_Gate240 = new NOR2_X1("_686__instance240");
		_686_Gate240->id = 240;
		_686_Gate240->A1(_292_);
		_686_Gate240->A2(_289_);
		_686_Gate240->A2_branch_FAULTS = {{35, 1}};
		_686_Gate240->ZN(_293_);
		_686_Gate240->faults=34;
		module_map[240] = _686_Gate240;

		_687_Gate241 = new NOR2_X1("_687__instance241");
		_687_Gate241->id = 241;
		_687_Gate241->A1(_293_);
		_687_Gate241->A2(_287_);
		_687_Gate241->ZN(_294_);
		_687_Gate241->faults=16;
		module_map[241] = _687_Gate241;

		_688_Gate242 = new NAND2_X1("_688__instance242");
		_688_Gate242->id = 242;
		_688_Gate242->A1(_433_);
		_688_Gate242->A2(_387_);
		_688_Gate242->ZN(_295_);
		_688_Gate242->faults=21;
		module_map[242] = _688_Gate242;

		_689_Gate243 = new NAND2_X1("_689__instance243");
		_689_Gate243->id = 243;
		_689_Gate243->A1(_295_);
		_689_Gate243->A2(_207_);
		_689_Gate243->A2_branch_FAULTS = {{162, 2}};
		_689_Gate243->ZN(_296_);
		_689_Gate243->faults=49;
		module_map[243] = _689_Gate243;

		_690_Gate244 = new NOR2_X1("_690__instance244");
		_690_Gate244->id = 244;
		_690_Gate244->A1(_296_);
		_690_Gate244->A2(_156_);
		_690_Gate244->A1_branch_FAULTS = {{42, 1}};
		_690_Gate244->ZN(_297_);
		_690_Gate244->faults=42;
		module_map[244] = _690_Gate244;

		_691_Gate245 = new NAND2_X1("_691__instance245");
		_691_Gate245->id = 245;
		_691_Gate245->A1(_433_);
		_691_Gate245->A2(_402_);
		_691_Gate245->A2_branch_FAULTS = {{104, 1},{194, 1}};
		_691_Gate245->ZN(_298_);
		_691_Gate245->faults=21;
		module_map[245] = _691_Gate245;

		_692_Gate246 = new NAND2_X1("_692__instance246");
		_692_Gate246->id = 246;
		_692_Gate246->A1(_298_);
		_692_Gate246->A2(_193_);
		_692_Gate246->A2_branch_FAULTS = {{151, 2}};
		_692_Gate246->ZN(_299_);
		_692_Gate246->faults=49;
		module_map[246] = _692_Gate246;

		_693_Gate247 = new INV1_X1("_693__instance247");
		_693_Gate247->id = 247;
		_693_Gate247->A(_167_);
		_693_Gate247->A1_branch_FAULTS = {{195, 1}};
		_693_Gate247->ZN(_300_);
		_693_Gate247->faults=12;
		module_map[247] = _693_Gate247;

		_694_Gate248 = new NAND2_X1("_694__instance248");
		_694_Gate248->id = 248;
		_694_Gate248->A1(_222_);
		_694_Gate248->A2(_189_);
		_694_Gate248->A1_branch_FAULTS = {{2, 2},{177, 3},{182, 3},{189, 3},{192, 3},{199, 3},{204, 3},{211, 3},{218, 3},{232, 2},{238, 2},{256, 2}};
		_694_Gate248->A2_branch_FAULTS = {{151, 0},{192, 1}};
		_694_Gate248->ZN(_302_);
		_694_Gate248->faults=21;
		module_map[248] = _694_Gate248;

		_695_Gate249 = new NAND2_X1("_695__instance249");
		_695_Gate249->id = 249;
		_695_Gate249->A1(_302_);
		_695_Gate249->A2(_300_);
		_695_Gate249->A2_branch_FAULTS = {{28, 1}};
		_695_Gate249->ZN(_303_);
		_695_Gate249->faults=33;
		module_map[249] = _695_Gate249;

		_696_Gate250 = new NOR2_X1("_696__instance250");
		_696_Gate250->id = 250;
		_696_Gate250->A1(_303_);
		_696_Gate250->A2(_299_);
		_696_Gate250->A2_branch_FAULTS = {{29, 1}};
		_696_Gate250->ZN(_304_);
		_696_Gate250->faults=34;
		module_map[250] = _696_Gate250;

		_697_Gate251 = new NOR2_X1("_697__instance251");
		_697_Gate251->id = 251;
		_697_Gate251->A1(_304_);
		_697_Gate251->A2(_297_);
		_697_Gate251->ZN(_305_);
		_697_Gate251->faults=16;
		module_map[251] = _697_Gate251;

		_698_Gate252 = new NAND2_X1("_698__instance252");
		_698_Gate252->id = 252;
		_698_Gate252->A1(_305_);
		_698_Gate252->A2(_294_);
		_698_Gate252->ZN(_306_);
		_698_Gate252->faults=32;
		module_map[252] = _698_Gate252;

		_699_Gate253 = new NAND2_X1("_699__instance253");
		_699_Gate253->id = 253;
		_699_Gate253->A1(_433_);
		_699_Gate253->A2(_409_);
		_699_Gate253->A2_branch_FAULTS = {{101, 1},{201, 1}};
		_699_Gate253->ZN(_307_);
		_699_Gate253->faults=21;
		module_map[253] = _699_Gate253;

		_700_Gate254 = new NAND2_X1("_700__instance254");
		_700_Gate254->id = 254;
		_700_Gate254->A1(_307_);
		_700_Gate254->A2(_187_);
		_700_Gate254->A2_branch_FAULTS = {{146, 2}};
		_700_Gate254->ZN(_308_);
		_700_Gate254->faults=49;
		module_map[254] = _700_Gate254;

		_701_Gate255 = new INV1_X1("_701__instance255");
		_701_Gate255->id = 255;
		_701_Gate255->A(_176_);
		_701_Gate255->A1_branch_FAULTS = {{202, 1}};
		_701_Gate255->ZN(_309_);
		_701_Gate255->faults=12;
		module_map[255] = _701_Gate255;

		_702_Gate256 = new NAND2_X1("_702__instance256");
		_702_Gate256->id = 256;
		_702_Gate256->A1(_222_);
		_702_Gate256->A2(_184_);
		_702_Gate256->A1_branch_FAULTS = {{2, 2},{177, 3},{182, 3},{189, 3},{192, 3},{199, 3},{204, 3},{211, 3},{218, 3},{232, 2},{238, 2},{248, 2}};
		_702_Gate256->A2_branch_FAULTS = {{146, 0},{199, 1}};
		_702_Gate256->ZN(_310_);
		_702_Gate256->faults=21;
		module_map[256] = _702_Gate256;

		_703_Gate257 = new NAND2_X1("_703__instance257");
		_703_Gate257->id = 257;
		_703_Gate257->A1(_310_);
		_703_Gate257->A2(_309_);
		_703_Gate257->A2_branch_FAULTS = {{30, 1}};
		_703_Gate257->ZN(_311_);
		_703_Gate257->faults=33;
		module_map[257] = _703_Gate257;

		_704_Gate258 = new POUT1_X1("_704__instance258");
		_704_Gate258->id = 258;
		_704_Gate258->A(_253_);
		_704_Gate258->A1_branch_FAULTS = {{45, 1}};
		_704_Gate258->ZN(N430);
		_704_Gate258->faults=12;
		module_map[258] = _704_Gate258;

		_705_Gate259 = new POUT1_X1("_705__instance259");
		_705_Gate259->id = 259;
		_705_Gate259->A(_248_);
		_705_Gate259->ZN(N421);
		_705_Gate259->faults=12;
		module_map[259] = _705_Gate259;

		_706_Gate260 = new POUT1_X1("_706__instance260");
		_706_Gate260->id = 260;
		_706_Gate260->A(_259_);
		_706_Gate260->ZN(N431);
		_706_Gate260->faults=12;
		module_map[260] = _706_Gate260;

		_707_Gate261 = new POUT1_X1("_707__instance261");
		_707_Gate261->id = 261;
		_707_Gate261->A(_265_);
		_707_Gate261->ZN(N432);
		_707_Gate261->faults=12;
		module_map[261] = _707_Gate261;

		_708_Gate262 = new POUT1_X1("_708__instance262");
		_708_Gate262->id = 262;
		_708_Gate262->A(_377_);
		_708_Gate262->A1_branch_FAULTS = {{88, 2},{92, 2},{95, 2},{99, 2},{102, 2},{107, 2},{110, 2},{114, 2},{117, 2}};
		_708_Gate262->ZN(N223);
		_708_Gate262->faults=12;
		module_map[262] = _708_Gate262;

		_709_Gate263 = new POUT1_X1("_709__instance263");
		_709_Gate263->id = 263;
		_709_Gate263->A(_433_);
		_709_Gate263->A1_branch_FAULTS = {{6, 2},{13, 2},{179, 3},{184, 3},{194, 3},{201, 3},{206, 3},{226, 2},{229, 2},{235, 2},{242, 2},{245, 2},{253, 2}};
		_709_Gate263->ZN(N329);
		_709_Gate263->faults=12;
		module_map[263] = _709_Gate263;

		_710_Gate264 = new POUT1_X1("_710__instance264");
		_710_Gate264->id = 264;
		_710_Gate264->A(_205_);
		_710_Gate264->A1_branch_FAULTS = {{52, 2},{55, 2}};
		_710_Gate264->ZN(N370);
		_710_Gate264->faults=12;
		module_map[264] = _710_Gate264;

		cout << "all gates are instantiated " << numOfGates << "\n";
		SC_THREAD(assignments);
		sensitive << N92 << N11 << N112 << N105 << N17 << N329 << N8 << N34 << = << N89 << N60 << N1 << N24 << N108 << N95 << N82 << N63 << N370 << N56 << N47 << N223 << N27 << N14 << N76 << N86 << N66 << N37 << N73 << N53 << N79 << N4 << N99 << N69 << N102 << N21 << N40 << N43 << N115 << N30 << N50;
		SC_METHOD(GIC_Coverage_Calculator);
		sensitive << endSim<< newTV;

		SC_METHOD(faultCollection);
		sensitive << newTV.neg();

	}
	void ini();
	void assignments();
	void GIC_Coverage_Calculator();
	void faultCollection();

};
