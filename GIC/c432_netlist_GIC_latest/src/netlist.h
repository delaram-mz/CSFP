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
	
	sc_in <sc_logic> N1, N102, N105, N108, N11, N112, N115, N14, N17, N21, N24, N27, N30, N34, N37, N4, N40, N43, N47, N50, N53, N56, N60, N63, N66, N69, N73, N76, N79, N8, N82, N86, N89, N92, N95, N99;
	sc_out <sc_logic> N223, N329, N370, N421, N430, N431, N432;
	sc_signal <sc_logic> _000_, _001_, _002_, _003_, _004_, _005_, _006_, _007_, _008_, _009_, _010_, _011_, _012_, _013_, _014_, _015_, _016_, _017_, _018_, _019_, _020_, _021_, _022_, _023_, _024_, _025_, _026_, _027_, _028_, _029_, _030_, _031_, _032_, _033_, _034_, _035_, _036_, _037_, _038_, _039_, _040_, _041_, _042_, _043_, _044_, _045_, _046_, _047_, _048_, _049_, _050_, _051_, _052_, _053_, _054_, _055_, _056_, _057_, _058_, _059_, _060_, _061_, _062_, _063_, _064_, _065_, _066_, _067_, _068_, _069_, _070_, _071_, _072_, _073_, _074_, _075_, _076_, _077_, _078_, _079_, _080_, _081_, _082_, _083_, _084_, _085_, _086_, _087_, _088_, _089_, _090_, _091_, _092_, _093_, _094_, _095_, _096_, _097_, _098_, _099_, _100_, _101_, _102_, _103_, _104_, _105_, _106_, _107_, _108_, _109_, _110_, _111_, _112_, _113_, _114_, _115_, _116_, _117_, _118_, _119_, _120_, _121_, _122_, _123_, _124_, _125_, _126_, _127_, _128_, _129_, _130_, _131_, _132_, _133_, _134_, _135_, _136_, _137_, _138_, _139_, _140_, _141_, _142_, _143_, _144_, _145_, _146_, _147_, _148_, _149_, _150_, _151_, _152_, _153_, _154_, _155_, _156_, _157_, _158_, _159_, _160_, _161_, _162_, _163_, _164_, _165_, _166_, _167_, _168_, _169_, _170_, _171_, _172_, _173_, _174_, _175_, _176_, _177_, _178_, _179_, _180_, _181_, _182_, _183_, _184_, _185_, _186_, _187_, _188_, _189_, _190_, _191_, _192_, _193_, _194_, _195_, _196_, _197_, _198_, _199_, _200_, _201_, _202_, _203_, _204_, _205_, _206_, _207_, _208_, _209_, _210_, _211_, _212_, _213_, _214_, _215_, _216_, _217_, _218_, _219_, _220_, _221_, _222_, _223_, _224_, _225_, _226_, _227_, _228_, _229_, _230_, _231_, _232_, _233_, _234_, _235_, _236_, _237_, _238_, _239_, _240_, _241_, _242_, _243_, _244_, _245_, _246_, _247_, _248_, _249_, _250_, _251_, _252_, _253_, _254_, _255_, _256_, _257_, _258_, _259_, _260_, _261_, _262_, _263_, _264_, _265_, _266_, _267_, _268_, _269_, _270_, _271_, _272_, _273_, _274_, _275_, _276_, _277_, _278_, _279_, _280_, _281_, _282_, _283_, _284_, _285_, _286_, _287_, _288_, _289_, _290_, _291_, _292_, _293_, _294_, _295_, _296_, _297_, _298_, _299_, _300_, _301_, _302_, _303_, _304_, _305_, _306_, _307_, _308_, _309_, _310_, _311_, _312_, _313_, _314_, _315_, _316_, _317_, _318_, _319_, _320_, _321_, _322_, _323_, _324_, _325_, _326_, _327_, _328_, _329_, _330_, _331_, _332_, _333_, _334_, _335_, _336_, _337_, _338_, _339_, _340_, _341_, _342_, _343_, _344_, _345_, _346_, _347_, _348_, _349_, _350_, _351_, _352_, _353_, _354_, _355_, _356_, _357_, _358_, _359_, _360_, _361_, _362_, _363_, _364_, _365_, _366_, _367_, _368_, _369_, _370_, _371_, _372_, _373_, _374_, _375_, _376_, _377_, _378_, _379_, _380_, _381_, _382_, _383_, _384_, _385_, _386_, _387_, _388_, _389_, _390_, _391_, _392_, _393_, _394_, _395_, _396_, _397_, _398_, _399_, _400_, _401_, _402_, _403_, _404_, _405_, _406_, _407_, _408_, _409_, _410_, _411_, _412_, _413_, _414_, _415_, _416_, _417_, _418_, _419_, _420_, _421_, _422_, _423_, _424_, _425_, _426_, _427_, _428_, _429_, _430_, _431_, _432_, _433_, _434_, _435_, _436_, _437_, _438_, _439_, _440_, _441_, _442_, _443_, _444_, _445_, _446_, N203, N213, N309, N319, N360;
	sc_in<sc_logic> endSim;
	sc_in<sc_logic> newTV; 

	int numOfGates;
	int totalObservedCombs;
	double GIC_Coverage;

	NOR2_X1* _447__Gate1;
	NAND2_X1* _448__Gate2;
	NAND2_X1* _449__Gate3;
	NOR2_X1* _450__Gate4;
	NOR2_X1* _451__Gate5;
	NAND2_X1* _452__Gate6;
	NAND2_X1* _453__Gate7;
	NOR2_X1* _454__Gate8;
	INV1_X1* _455__Gate9;
	NAND2_X1* _456__Gate10;
	NAND2_X1* _457__Gate11;
	NAND2_X1* _458__Gate12;
	NAND2_X1* _459__Gate13;
	NAND2_X1* _460__Gate14;
	NAND2_X1* _461__Gate15;
	NOR2_X1* _462__Gate16;
	NAND2_X1* _463__Gate17;
	NOR2_X1* _464__Gate18;
	NOR2_X1* _465__Gate19;
	NOR2_X1* _466__Gate20;
	INV1_X1* _467__Gate21;
	NOR2_X1* _468__Gate22;
	NAND2_X1* _469__Gate23;
	NOR2_X1* _470__Gate24;
	NOR2_X1* _471__Gate25;
	NOR2_X1* _472__Gate26;
	NOR2_X1* _473__Gate27;
	NOR2_X1* _474__Gate28;
	NOR2_X1* _475__Gate29;
	NOR2_X1* _476__Gate30;
	NOR2_X1* _477__Gate31;
	NOR2_X1* _478__Gate32;
	NAND2_X1* _479__Gate33;
	NOR2_X1* _480__Gate34;
	NOR2_X1* _481__Gate35;
	NOR2_X1* _482__Gate36;
	NOR2_X1* _483__Gate37;
	NOR2_X1* _484__Gate38;
	NOR2_X1* _485__Gate39;
	NOR2_X1* _486__Gate40;
	NOR2_X1* _487__Gate41;
	NOR2_X1* _488__Gate42;
	NOR2_X1* _489__Gate43;
	NAND2_X1* _490__Gate44;
	NOR2_X1* _491__Gate45;
	NOR2_X1* _492__Gate46;
	INV1_X1* _493__Gate47;
	NAND2_X1* _494__Gate48;
	NAND2_X1* _495__Gate49;
	INV1_X1* _496__Gate50;
	INV1_X1* _497__Gate51;
	NAND2_X1* _498__Gate52;
	NAND2_X1* _499__Gate53;
	NAND2_X1* _500__Gate54;
	NAND2_X1* _501__Gate55;
	NAND2_X1* _502__Gate56;
	NOR2_X1* _503__Gate57;
	NOR2_X1* _504__Gate58;
	NAND2_X1* _505__Gate59;
	NAND2_X1* _506__Gate60;
	NAND2_X1* _507__Gate61;
	INV1_X1* _508__Gate62;
	NOR2_X1* _509__Gate63;
	INV1_X1* _510__Gate64;
	NOR2_X1* _511__Gate65;
	NOR2_X1* _512__Gate66;
	INV1_X1* _513__Gate67;
	NAND2_X1* _514__Gate68;
	INV1_X1* _515__Gate69;
	NOR2_X1* _516__Gate70;
	INV1_X1* _517__Gate71;
	NOR2_X1* _518__Gate72;
	NOR2_X1* _519__Gate73;
	NAND2_X1* _520__Gate74;
	INV1_X1* _521__Gate75;
	NOR2_X1* _522__Gate76;
	INV1_X1* _523__Gate77;
	NOR2_X1* _524__Gate78;
	NOR2_X1* _525__Gate79;
	INV1_X1* _526__Gate80;
	NOR2_X1* _527__Gate81;
	INV1_X1* _528__Gate82;
	NOR2_X1* _529__Gate83;
	NOR2_X1* _530__Gate84;
	NAND2_X1* _531__Gate85;
	NOR2_X1* _532__Gate86;
	NAND2_X1* _533__Gate87;
	NAND2_X1* _534__Gate88;
	NAND2_X1* _535__Gate89;
	NOR2_X1* _536__Gate90;
	INV1_X1* _537__Gate91;
	NAND2_X1* _538__Gate92;
	NAND2_X1* _539__Gate93;
	NOR2_X1* _540__Gate94;
	NAND2_X1* _541__Gate95;
	NAND2_X1* _542__Gate96;
	NOR2_X1* _543__Gate97;
	NOR2_X1* _544__Gate98;
	NAND2_X1* _545__Gate99;
	NAND2_X1* _546__Gate100;
	NOR2_X1* _547__Gate101;
	NAND2_X1* _548__Gate102;
	NAND2_X1* _549__Gate103;
	NOR2_X1* _550__Gate104;
	NOR2_X1* _551__Gate105;
	NAND2_X1* _552__Gate106;
	NAND2_X1* _553__Gate107;
	NAND2_X1* _554__Gate108;
	NOR2_X1* _555__Gate109;
	NAND2_X1* _556__Gate110;
	NAND2_X1* _557__Gate111;
	NOR2_X1* _558__Gate112;
	NOR2_X1* _559__Gate113;
	NAND2_X1* _560__Gate114;
	NAND2_X1* _561__Gate115;
	NOR2_X1* _562__Gate116;
	NAND2_X1* _563__Gate117;
	NAND2_X1* _564__Gate118;
	NOR2_X1* _565__Gate119;
	NOR2_X1* _566__Gate120;
	NAND2_X1* _567__Gate121;
	NOR2_X1* _568__Gate122;
	NAND2_X1* _569__Gate123;
	INV1_X1* _570__Gate124;
	INV1_X1* _571__Gate125;
	INV1_X1* _572__Gate126;
	NAND2_X1* _573__Gate127;
	INV1_X1* _574__Gate128;
	NAND2_X1* _575__Gate129;
	NAND2_X1* _576__Gate130;
	NOR2_X1* _577__Gate131;
	NAND2_X1* _578__Gate132;
	NOR2_X1* _579__Gate133;
	NOR2_X1* _580__Gate134;
	NOR2_X1* _581__Gate135;
	NAND2_X1* _582__Gate136;
	INV1_X1* _583__Gate137;
	NOR2_X1* _584__Gate138;
	NOR2_X1* _585__Gate139;
	NAND2_X1* _586__Gate140;
	NAND2_X1* _587__Gate141;
	INV1_X1* _588__Gate142;
	INV1_X1* _589__Gate143;
	NOR2_X1* _590__Gate144;
	NOR2_X1* _591__Gate145;
	NAND2_X1* _592__Gate146;
	INV1_X1* _593__Gate147;
	INV1_X1* _594__Gate148;
	NOR2_X1* _595__Gate149;
	NOR2_X1* _596__Gate150;
	NAND2_X1* _597__Gate151;
	NAND2_X1* _598__Gate152;
	NOR2_X1* _599__Gate153;
	INV1_X1* _600__Gate154;
	NOR2_X1* _601__Gate155;
	NOR2_X1* _602__Gate156;
	NAND2_X1* _603__Gate157;
	INV1_X1* _604__Gate158;
	INV1_X1* _605__Gate159;
	NOR2_X1* _606__Gate160;
	NOR2_X1* _607__Gate161;
	NAND2_X1* _608__Gate162;
	NAND2_X1* _609__Gate163;
	INV1_X1* _610__Gate164;
	INV1_X1* _611__Gate165;
	NOR2_X1* _612__Gate166;
	NOR2_X1* _613__Gate167;
	NAND2_X1* _614__Gate168;
	INV1_X1* _615__Gate169;
	NAND2_X1* _616__Gate170;
	NAND2_X1* _617__Gate171;
	NAND2_X1* _618__Gate172;
	NAND2_X1* _619__Gate173;
	NOR2_X1* _620__Gate174;
	NAND2_X1* _621__Gate175;
	NOR2_X1* _622__Gate176;
	NOR2_X1* _623__Gate177;
	NOR2_X1* _624__Gate178;
	NOR2_X1* _625__Gate179;
	NOR2_X1* _626__Gate180;
	NAND2_X1* _627__Gate181;
	NOR2_X1* _628__Gate182;
	NOR2_X1* _629__Gate183;
	NOR2_X1* _630__Gate184;
	NOR2_X1* _631__Gate185;
	NAND2_X1* _632__Gate186;
	NAND2_X1* _633__Gate187;
	INV1_X1* _634__Gate188;
	NOR2_X1* _635__Gate189;
	NOR2_X1* _636__Gate190;
	NAND2_X1* _637__Gate191;
	NOR2_X1* _638__Gate192;
	NOR2_X1* _639__Gate193;
	NOR2_X1* _640__Gate194;
	NOR2_X1* _641__Gate195;
	NAND2_X1* _642__Gate196;
	NAND2_X1* _643__Gate197;
	NOR2_X1* _644__Gate198;
	NOR2_X1* _645__Gate199;
	NOR2_X1* _646__Gate200;
	NOR2_X1* _647__Gate201;
	NOR2_X1* _648__Gate202;
	NAND2_X1* _649__Gate203;
	NOR2_X1* _650__Gate204;
	NOR2_X1* _651__Gate205;
	NOR2_X1* _652__Gate206;
	NOR2_X1* _653__Gate207;
	NAND2_X1* _654__Gate208;
	NAND2_X1* _655__Gate209;
	INV1_X1* _656__Gate210;
	NOR2_X1* _657__Gate211;
	NOR2_X1* _658__Gate212;
	NAND2_X1* _659__Gate213;
	INV1_X1* _660__Gate214;
	NAND2_X1* _661__Gate215;
	NAND2_X1* _662__Gate216;
	NOR2_X1* _663__Gate217;
	NOR2_X1* _664__Gate218;
	NOR2_X1* _665__Gate219;
	INV1_X1* _666__Gate220;
	NOR2_X1* _667__Gate221;
	NOR2_X1* _668__Gate222;
	NAND2_X1* _669__Gate223;
	NOR2_X1* _670__Gate224;
	NAND2_X1* _671__Gate225;
	NAND2_X1* _672__Gate226;
	NAND2_X1* _673__Gate227;
	INV1_X1* _674__Gate228;
	NAND2_X1* _675__Gate229;
	NAND2_X1* _676__Gate230;
	INV1_X1* _677__Gate231;
	NAND2_X1* _678__Gate232;
	NAND2_X1* _679__Gate233;
	NOR2_X1* _680__Gate234;
	NAND2_X1* _681__Gate235;
	NAND2_X1* _682__Gate236;
	INV1_X1* _683__Gate237;
	NAND2_X1* _684__Gate238;
	NAND2_X1* _685__Gate239;
	NOR2_X1* _686__Gate240;
	NOR2_X1* _687__Gate241;
	NAND2_X1* _688__Gate242;
	NAND2_X1* _689__Gate243;
	NOR2_X1* _690__Gate244;
	NAND2_X1* _691__Gate245;
	NAND2_X1* _692__Gate246;
	INV1_X1* _693__Gate247;
	NAND2_X1* _694__Gate248;
	NAND2_X1* _695__Gate249;
	NOR2_X1* _696__Gate250;
	NOR2_X1* _697__Gate251;
	NAND2_X1* _698__Gate252;
	NAND2_X1* _699__Gate253;
	NAND2_X1* _700__Gate254;
	INV1_X1* _701__Gate255;
	NAND2_X1* _702__Gate256;
	NAND2_X1* _703__Gate257;

	SC_CTOR(c432_netlist)
	{
		numOfGates = 257;

		_447__Gate1 = new NOR2_X1("_447__instance1");
		_447__Gate1->id = 1;
		_447__Gate1->A1(_311_);
		_447__Gate1->A2(_308_);
		_447__Gate1->ZN(_312_);
		module_map[1] = _447__Gate1;
		std::cerr << "File is open, reading is done" << std::endl;	

		_448__Gate2 = new NAND2_X1("_448__instance2");
		_448__Gate2->id = 2;
		_448__Gate2->A1(_222_);
		_448__Gate2->A2(_210_);
		_448__Gate2->ZN(_313_);
		module_map[2] = _448__Gate2;

		_449__Gate3 = new NAND2_X1("_449__instance3");
		_449__Gate3->id = 3;
		_449__Gate3->A1(_313_);
		_449__Gate3->A2(_281_);
		_449__Gate3->ZN(_314_);
		module_map[3] = _449__Gate3;

		_450__Gate4 = new NOR2_X1("_450__instance4");
		_450__Gate4->id = 4;
		_450__Gate4->A1(_314_);
		_450__Gate4->A2(_280_);
		_450__Gate4->ZN(_315_);
		module_map[4] = _450__Gate4;

		_451__Gate5 = new NOR2_X1("_451__instance5");
		_451__Gate5->id = 5;
		_451__Gate5->A1(_315_);
		_451__Gate5->A2(_312_);
		_451__Gate5->ZN(_316_);
		module_map[5] = _451__Gate5;

		_452__Gate6 = new NAND2_X1("_452__instance6");
		_452__Gate6->id = 6;
		_452__Gate6->A1(_433_);
		_452__Gate6->A2(_382_);
		_452__Gate6->ZN(_317_);
		module_map[6] = _452__Gate6;

		_453__Gate7 = new NAND2_X1("_453__instance7");
		_453__Gate7->id = 7;
		_453__Gate7->A1(_317_);
		_453__Gate7->A2(_200_);
		_453__Gate7->ZN(_318_);
		module_map[7] = _453__Gate7;

		_454__Gate8 = new NOR2_X1("_454__instance8");
		_454__Gate8->id = 8;
		_454__Gate8->A1(_318_);
		_454__Gate8->A2(_441_);
		_454__Gate8->ZN(_319_);
		module_map[8] = _454__Gate8;

		_455__Gate9 = new INV1_X1("_455__instance9");
		_455__Gate9->id = 9;
		_455__Gate9->A(_436_);
		_455__Gate9->ZN(_320_);
		module_map[9] = _455__Gate9;

		_456__Gate10 = new NAND2_X1("_456__instance10");
		_456__Gate10->id = 10;
		_456__Gate10->A1(_161_);
		_456__Gate10->A2(_266_);
		_456__Gate10->ZN(_321_);
		module_map[10] = _456__Gate10;

		_457__Gate11 = new NAND2_X1("_457__instance11");
		_457__Gate11->id = 11;
		_457__Gate11->A1(_321_);
		_457__Gate11->A2(_413_);
		_457__Gate11->ZN(_323_);
		module_map[11] = _457__Gate11;

		_458__Gate12 = new NAND2_X1("_458__instance12");
		_458__Gate12->id = 12;
		_458__Gate12->A1(_323_);
		_458__Gate12->A2(_320_);
		_458__Gate12->ZN(_324_);
		module_map[12] = _458__Gate12;

		_459__Gate13 = new NAND2_X1("_459__instance13");
		_459__Gate13->id = 13;
		_459__Gate13->A1(_433_);
		_459__Gate13->A2(_414_);
		_459__Gate13->ZN(_325_);
		module_map[13] = _459__Gate13;

		_460__Gate14 = new NAND2_X1("_460__instance14");
		_460__Gate14->id = 14;
		_460__Gate14->A1(_273_);
		_460__Gate14->A2(_325_);
		_460__Gate14->ZN(_326_);
		module_map[14] = _460__Gate14;

		_461__Gate15 = new NAND2_X1("_461__instance15");
		_461__Gate15->id = 15;
		_461__Gate15->A1(_326_);
		_461__Gate15->A2(_324_);
		_461__Gate15->ZN(_327_);
		module_map[15] = _461__Gate15;

		_462__Gate16 = new NOR2_X1("_462__instance16");
		_462__Gate16->id = 16;
		_462__Gate16->A1(_327_);
		_462__Gate16->A2(_319_);
		_462__Gate16->ZN(_328_);
		module_map[16] = _462__Gate16;

		_463__Gate17 = new NAND2_X1("_463__instance17");
		_463__Gate17->id = 17;
		_463__Gate17->A1(_328_);
		_463__Gate17->A2(_316_);
		_463__Gate17->ZN(_329_);
		module_map[17] = _463__Gate17;

		_464__Gate18 = new NOR2_X1("_464__instance18");
		_464__Gate18->id = 18;
		_464__Gate18->A1(_329_);
		_464__Gate18->A2(_306_);
		_464__Gate18->ZN(_330_);
		module_map[18] = _464__Gate18;

		_465__Gate19 = new NOR2_X1("_465__instance19");
		_465__Gate19->id = 19;
		_465__Gate19->A1(_330_);
		_465__Gate19->A2(_281_);
		_465__Gate19->ZN(_331_);
		module_map[19] = _465__Gate19;

		_466__Gate20 = new NOR2_X1("_466__instance20");
		_466__Gate20->id = 20;
		_466__Gate20->A1(_331_);
		_466__Gate20->A2(_280_);
		_466__Gate20->ZN(_332_);
		module_map[20] = _466__Gate20;

		_467__Gate21 = new INV1_X1("_467__instance21");
		_467__Gate21->id = 21;
		_467__Gate21->A(_182_);
		_467__Gate21->ZN(_333_);
		module_map[21] = _467__Gate21;

		_468__Gate22 = new NOR2_X1("_468__instance22");
		_468__Gate22->id = 22;
		_468__Gate22->A1(_330_);
		_468__Gate22->A2(_333_);
		_468__Gate22->ZN(_334_);
		module_map[22] = _468__Gate22;

		_469__Gate23 = new NAND2_X1("_469__instance23");
		_469__Gate23->id = 23;
		_469__Gate23->A1(_325_);
		_469__Gate23->A2(_175_);
		_469__Gate23->ZN(_335_);
		module_map[23] = _469__Gate23;

		_470__Gate24 = new NOR2_X1("_470__instance24");
		_470__Gate24->id = 24;
		_470__Gate24->A1(_335_);
		_470__Gate24->A2(_334_);
		_470__Gate24->ZN(_336_);
		module_map[24] = _470__Gate24;

		_471__Gate25 = new NOR2_X1("_471__instance25");
		_471__Gate25->id = 25;
		_471__Gate25->A1(_330_);
		_471__Gate25->A2(_284_);
		_471__Gate25->ZN(_337_);
		module_map[25] = _471__Gate25;

		_472__Gate26 = new NOR2_X1("_472__instance26");
		_472__Gate26->id = 26;
		_472__Gate26->A1(_337_);
		_472__Gate26->A2(_283_);
		_472__Gate26->ZN(_338_);
		module_map[26] = _472__Gate26;

		_473__Gate27 = new NOR2_X1("_473__instance27");
		_473__Gate27->id = 27;
		_473__Gate27->A1(_338_);
		_473__Gate27->A2(_336_);
		_473__Gate27->ZN(_339_);
		module_map[27] = _473__Gate27;

		_474__Gate28 = new NOR2_X1("_474__instance28");
		_474__Gate28->id = 28;
		_474__Gate28->A1(_330_);
		_474__Gate28->A2(_300_);
		_474__Gate28->ZN(_340_);
		module_map[28] = _474__Gate28;

		_475__Gate29 = new NOR2_X1("_475__instance29");
		_475__Gate29->id = 29;
		_475__Gate29->A1(_340_);
		_475__Gate29->A2(_299_);
		_475__Gate29->ZN(_341_);
		module_map[29] = _475__Gate29;

		_476__Gate30 = new NOR2_X1("_476__instance30");
		_476__Gate30->id = 30;
		_476__Gate30->A1(_330_);
		_476__Gate30->A2(_309_);
		_476__Gate30->ZN(_342_);
		module_map[30] = _476__Gate30;

		_477__Gate31 = new NOR2_X1("_477__instance31");
		_477__Gate31->id = 31;
		_477__Gate31->A1(_342_);
		_477__Gate31->A2(_308_);
		_477__Gate31->ZN(_344_);
		module_map[31] = _477__Gate31;

		_478__Gate32 = new NOR2_X1("_478__instance32");
		_478__Gate32->id = 32;
		_478__Gate32->A1(_344_);
		_478__Gate32->A2(_341_);
		_478__Gate32->ZN(_345_);
		module_map[32] = _478__Gate32;

		_479__Gate33 = new NAND2_X1("_479__instance33");
		_479__Gate33->id = 33;
		_479__Gate33->A1(_345_);
		_479__Gate33->A2(_339_);
		_479__Gate33->ZN(_253_);
		module_map[33] = _479__Gate33;

		_480__Gate34 = new NOR2_X1("_480__instance34");
		_480__Gate34->id = 34;
		_480__Gate34->A1(_330_);
		_480__Gate34->A2(_290_);
		_480__Gate34->ZN(_346_);
		module_map[34] = _480__Gate34;

		_481__Gate35 = new NOR2_X1("_481__instance35");
		_481__Gate35->id = 35;
		_481__Gate35->A1(_346_);
		_481__Gate35->A2(_289_);
		_481__Gate35->ZN(_347_);
		module_map[35] = _481__Gate35;

		_482__Gate36 = new NOR2_X1("_482__instance36");
		_482__Gate36->id = 36;
		_482__Gate36->A1(_330_);
		_482__Gate36->A2(_261_);
		_482__Gate36->ZN(_348_);
		module_map[36] = _482__Gate36;

		_483__Gate37 = new NOR2_X1("_483__instance37");
		_483__Gate37->id = 37;
		_483__Gate37->A1(_348_);
		_483__Gate37->A2(_318_);
		_483__Gate37->ZN(_349_);
		module_map[37] = _483__Gate37;

		_484__Gate38 = new NOR2_X1("_484__instance38");
		_484__Gate38->id = 38;
		_484__Gate38->A1(_349_);
		_484__Gate38->A2(_347_);
		_484__Gate38->ZN(_350_);
		module_map[38] = _484__Gate38;

		_485__Gate39 = new NOR2_X1("_485__instance39");
		_485__Gate39->id = 39;
		_485__Gate39->A1(_330_);
		_485__Gate39->A2(_320_);
		_485__Gate39->ZN(_351_);
		module_map[39] = _485__Gate39;

		_486__Gate40 = new NOR2_X1("_486__instance40");
		_486__Gate40->id = 40;
		_486__Gate40->A1(_351_);
		_486__Gate40->A2(_268_);
		_486__Gate40->ZN(_352_);
		module_map[40] = _486__Gate40;

		_487__Gate41 = new NOR2_X1("_487__instance41");
		_487__Gate41->id = 41;
		_487__Gate41->A1(_330_);
		_487__Gate41->A2(_235_);
		_487__Gate41->ZN(_354_);
		module_map[41] = _487__Gate41;

		_488__Gate42 = new NOR2_X1("_488__instance42");
		_488__Gate42->id = 42;
		_488__Gate42->A1(_354_);
		_488__Gate42->A2(_296_);
		_488__Gate42->ZN(_355_);
		module_map[42] = _488__Gate42;

		_489__Gate43 = new NOR2_X1("_489__instance43");
		_489__Gate43->id = 43;
		_489__Gate43->A1(_355_);
		_489__Gate43->A2(_352_);
		_489__Gate43->ZN(_356_);
		module_map[43] = _489__Gate43;

		_490__Gate44 = new NAND2_X1("_490__instance44");
		_490__Gate44->id = 44;
		_490__Gate44->A1(_356_);
		_490__Gate44->A2(_350_);
		_490__Gate44->ZN(_357_);
		module_map[44] = _490__Gate44;

		_491__Gate45 = new NOR2_X1("_491__instance45");
		_491__Gate45->id = 45;
		_491__Gate45->A1(_357_);
		_491__Gate45->A2(_253_);
		_491__Gate45->ZN(_358_);
		module_map[45] = _491__Gate45;

		_492__Gate46 = new NOR2_X1("_492__instance46");
		_492__Gate46->id = 46;
		_492__Gate46->A1(_358_);
		_492__Gate46->A2(_332_);
		_492__Gate46->ZN(_248_);
		module_map[46] = _492__Gate46;

		_493__Gate47 = new INV1_X1("_493__instance47");
		_493__Gate47->id = 47;
		_493__Gate47->A(_350_);
		_493__Gate47->ZN(_359_);
		module_map[47] = _493__Gate47;

		_494__Gate48 = new NAND2_X1("_494__instance48");
		_494__Gate48->id = 48;
		_494__Gate48->A1(_359_);
		_494__Gate48->A2(_339_);
		_494__Gate48->ZN(_360_);
		module_map[48] = _494__Gate48;

		_495__Gate49 = new NAND2_X1("_495__instance49");
		_495__Gate49->id = 49;
		_495__Gate49->A1(_360_);
		_495__Gate49->A2(_345_);
		_495__Gate49->ZN(_259_);
		module_map[49] = _495__Gate49;

		_496__Gate50 = new INV1_X1("_496__instance50");
		_496__Gate50->id = 50;
		_496__Gate50->A(_341_);
		_496__Gate50->ZN(_361_);
		module_map[50] = _496__Gate50;

		_497__Gate51 = new INV1_X1("_497__instance51");
		_497__Gate51->id = 51;
		_497__Gate51->A(_344_);
		_497__Gate51->ZN(_362_);
		module_map[51] = _497__Gate51;

		_498__Gate52 = new NAND2_X1("_498__instance52");
		_498__Gate52->id = 52;
		_498__Gate52->A1(_205_);
		_498__Gate52->A2(_190_);
		_498__Gate52->ZN(_363_);
		module_map[52] = _498__Gate52;

		_499__Gate53 = new NAND2_X1("_499__instance53");
		_499__Gate53->id = 53;
		_499__Gate53->A1(_363_);
		_499__Gate53->A2(_225_);
		_499__Gate53->ZN(_364_);
		module_map[53] = _499__Gate53;

		_500__Gate54 = new NAND2_X1("_500__instance54");
		_500__Gate54->id = 54;
		_500__Gate54->A1(_347_);
		_500__Gate54->A2(_364_);
		_500__Gate54->ZN(_365_);
		module_map[54] = _500__Gate54;

		_501__Gate55 = new NAND2_X1("_501__instance55");
		_501__Gate55->id = 55;
		_501__Gate55->A1(_205_);
		_501__Gate55->A2(_156_);
		_501__Gate55->ZN(_366_);
		module_map[55] = _501__Gate55;

		_502__Gate56 = new NAND2_X1("_502__instance56");
		_502__Gate56->id = 56;
		_502__Gate56->A1(_366_);
		_502__Gate56->A2(_237_);
		_502__Gate56->ZN(_367_);
		module_map[56] = _502__Gate56;

		_503__Gate57 = new NOR2_X1("_503__instance57");
		_503__Gate57->id = 57;
		_503__Gate57->A1(_367_);
		_503__Gate57->A2(_349_);
		_503__Gate57->ZN(_368_);
		module_map[57] = _503__Gate57;

		_504__Gate58 = new NOR2_X1("_504__instance58");
		_504__Gate58->id = 58;
		_504__Gate58->A1(_368_);
		_504__Gate58->A2(_336_);
		_504__Gate58->ZN(_369_);
		module_map[58] = _504__Gate58;

		_505__Gate59 = new NAND2_X1("_505__instance59");
		_505__Gate59->id = 59;
		_505__Gate59->A1(_369_);
		_505__Gate59->A2(_365_);
		_505__Gate59->ZN(_370_);
		module_map[59] = _505__Gate59;

		_506__Gate60 = new NAND2_X1("_506__instance60");
		_506__Gate60->id = 60;
		_506__Gate60->A1(_370_);
		_506__Gate60->A2(_362_);
		_506__Gate60->ZN(_371_);
		module_map[60] = _506__Gate60;

		_507__Gate61 = new NAND2_X1("_507__instance61");
		_507__Gate61->id = 61;
		_507__Gate61->A1(_371_);
		_507__Gate61->A2(_361_);
		_507__Gate61->ZN(_265_);
		module_map[61] = _507__Gate61;

		_508__Gate62 = new INV1_X1("_508__instance62");
		_508__Gate62->id = 62;
		_508__Gate62->A(_154_);
		_508__Gate62->ZN(_379_);
		module_map[62] = _508__Gate62;

		_509__Gate63 = new NOR2_X1("_509__instance63");
		_509__Gate63->id = 63;
		_509__Gate63->A1(_270_);
		_509__Gate63->A2(_379_);
		_509__Gate63->ZN(_380_);
		module_map[63] = _509__Gate63;

		_510__Gate64 = new INV1_X1("_510__instance64");
		_510__Gate64->id = 64;
		_510__Gate64->A(_322_);
		_510__Gate64->ZN(_381_);
		module_map[64] = _510__Gate64;

		_511__Gate65 = new NOR2_X1("_511__instance65");
		_511__Gate65->id = 65;
		_511__Gate65->A1(_343_);
		_511__Gate65->A2(_381_);
		_511__Gate65->ZN(_383_);
		module_map[65] = _511__Gate65;

		_512__Gate66 = new NOR2_X1("_512__instance66");
		_512__Gate66->id = 66;
		_512__Gate66->A1(_383_);
		_512__Gate66->A2(_380_);
		_512__Gate66->ZN(_384_);
		module_map[66] = _512__Gate66;

		_513__Gate67 = new INV1_X1("_513__instance67");
		_513__Gate67->id = 67;
		_513__Gate67->A(_374_);
		_513__Gate67->ZN(_385_);
		module_map[67] = _513__Gate67;

		_514__Gate68 = new NAND2_X1("_514__instance68");
		_514__Gate68->id = 68;
		_514__Gate68->A1(_385_);
		_514__Gate68->A2(_373_);
		_514__Gate68->ZN(_386_);
		module_map[68] = _514__Gate68;

		_515__Gate69 = new INV1_X1("_515__instance69");
		_515__Gate69->id = 69;
		_515__Gate69->A(_422_);
		_515__Gate69->ZN(_388_);
		module_map[69] = _515__Gate69;

		_516__Gate70 = new NOR2_X1("_516__instance70");
		_516__Gate70->id = 70;
		_516__Gate70->A1(_155_);
		_516__Gate70->A2(_388_);
		_516__Gate70->ZN(_389_);
		module_map[70] = _516__Gate70;

		_517__Gate71 = new INV1_X1("_517__instance71");
		_517__Gate71->id = 71;
		_517__Gate71->A(_376_);
		_517__Gate71->ZN(_390_);
		module_map[71] = _517__Gate71;

		_518__Gate72 = new NOR2_X1("_518__instance72");
		_518__Gate72->id = 72;
		_518__Gate72->A1(_398_);
		_518__Gate72->A2(_390_);
		_518__Gate72->ZN(_391_);
		module_map[72] = _518__Gate72;

		_519__Gate73 = new NOR2_X1("_519__instance73");
		_519__Gate73->id = 73;
		_519__Gate73->A1(_391_);
		_519__Gate73->A2(_389_);
		_519__Gate73->ZN(_392_);
		module_map[73] = _519__Gate73;

		_520__Gate74 = new NAND2_X1("_520__instance74");
		_520__Gate74->id = 74;
		_520__Gate74->A1(_392_);
		_520__Gate74->A2(_386_);
		_520__Gate74->ZN(_393_);
		module_map[74] = _520__Gate74;

		_521__Gate75 = new INV1_X1("_521__instance75");
		_521__Gate75->id = 75;
		_521__Gate75->A(_301_);
		_521__Gate75->ZN(_394_);
		module_map[75] = _521__Gate75;

		_522__Gate76 = new NOR2_X1("_522__instance76");
		_522__Gate76->id = 76;
		_522__Gate76->A1(_353_);
		_522__Gate76->A2(_394_);
		_522__Gate76->ZN(_396_);
		module_map[76] = _522__Gate76;

		_523__Gate77 = new INV1_X1("_523__instance77");
		_523__Gate77->id = 77;
		_523__Gate77->A(_202_);
		_523__Gate77->ZN(_397_);
		module_map[77] = _523__Gate77;

		_524__Gate78 = new NOR2_X1("_524__instance78");
		_524__Gate78->id = 78;
		_524__Gate78->A1(_224_);
		_524__Gate78->A2(_397_);
		_524__Gate78->ZN(_399_);
		module_map[78] = _524__Gate78;

		_525__Gate79 = new NOR2_X1("_525__instance79");
		_525__Gate79->id = 79;
		_525__Gate79->A1(_399_);
		_525__Gate79->A2(_396_);
		_525__Gate79->ZN(_400_);
		module_map[79] = _525__Gate79;

		_526__Gate80 = new INV1_X1("_526__instance80");
		_526__Gate80->id = 80;
		_526__Gate80->A(_245_);
		_526__Gate80->ZN(_401_);
		module_map[80] = _526__Gate80;

		_527__Gate81 = new NOR2_X1("_527__instance81");
		_527__Gate81->id = 81;
		_527__Gate81->A1(_271_);
		_527__Gate81->A2(_401_);
		_527__Gate81->ZN(_403_);
		module_map[81] = _527__Gate81;

		_528__Gate82 = new INV1_X1("_528__instance82");
		_528__Gate82->id = 82;
		_528__Gate82->A(_372_);
		_528__Gate82->ZN(_404_);
		module_map[82] = _528__Gate82;

		_529__Gate83 = new NOR2_X1("_529__instance83");
		_529__Gate83->id = 83;
		_529__Gate83->A1(_375_);
		_529__Gate83->A2(_404_);
		_529__Gate83->ZN(_405_);
		module_map[83] = _529__Gate83;

		_530__Gate84 = new NOR2_X1("_530__instance84");
		_530__Gate84->id = 84;
		_530__Gate84->A1(_405_);
		_530__Gate84->A2(_403_);
		_530__Gate84->ZN(_406_);
		module_map[84] = _530__Gate84;

		_531__Gate85 = new NAND2_X1("_531__instance85");
		_531__Gate85->id = 85;
		_531__Gate85->A1(_406_);
		_531__Gate85->A2(_400_);
		_531__Gate85->ZN(_407_);
		module_map[85] = _531__Gate85;

		_532__Gate86 = new NOR2_X1("_532__instance86");
		_532__Gate86->id = 86;
		_532__Gate86->A1(_407_);
		_532__Gate86->A2(_393_);
		_532__Gate86->ZN(_408_);
		module_map[86] = _532__Gate86;

		_533__Gate87 = new NAND2_X1("_533__instance87");
		_533__Gate87->id = 87;
		_533__Gate87->A1(_408_);
		_533__Gate87->A2(_384_);
		_533__Gate87->ZN(_377_);
		module_map[87] = _533__Gate87;

		_534__Gate88 = new NAND2_X1("_534__instance88");
		_534__Gate88->id = 88;
		_534__Gate88->A1(_377_);
		_534__Gate88->A2(_270_);
		_534__Gate88->ZN(_410_);
		module_map[88] = _534__Gate88;

		_535__Gate89 = new NAND2_X1("_535__instance89");
		_535__Gate89->id = 89;
		_535__Gate89->A1(_410_);
		_535__Gate89->A2(_154_);
		_535__Gate89->ZN(_411_);
		module_map[89] = _535__Gate89;

		_536__Gate90 = new NOR2_X1("_536__instance90");
		_536__Gate90->id = 90;
		_536__Gate90->A1(_411_);
		_536__Gate90->A2(_378_);
		_536__Gate90->ZN(_412_);
		module_map[90] = _536__Gate90;

		_537__Gate91 = new INV1_X1("_537__instance91");
		_537__Gate91->id = 91;
		_537__Gate91->A(_412_);
		_537__Gate91->ZN(_413_);
		module_map[91] = _537__Gate91;

		_538__Gate92 = new NAND2_X1("_538__instance92");
		_538__Gate92->id = 92;
		_538__Gate92->A1(_377_);
		_538__Gate92->A2(_343_);
		_538__Gate92->ZN(_415_);
		module_map[92] = _538__Gate92;

		_539__Gate93 = new NAND2_X1("_539__instance93");
		_539__Gate93->id = 93;
		_539__Gate93->A1(_415_);
		_539__Gate93->A2(_322_);
		_539__Gate93->ZN(_416_);
		module_map[93] = _539__Gate93;

		_540__Gate94 = new NOR2_X1("_540__instance94");
		_540__Gate94->id = 94;
		_540__Gate94->A1(_416_);
		_540__Gate94->A2(_414_);
		_540__Gate94->ZN(_417_);
		module_map[94] = _540__Gate94;

		_541__Gate95 = new NAND2_X1("_541__instance95");
		_541__Gate95->id = 95;
		_541__Gate95->A1(_377_);
		_541__Gate95->A2(_375_);
		_541__Gate95->ZN(_418_);
		module_map[95] = _541__Gate95;

		_542__Gate96 = new NAND2_X1("_542__instance96");
		_542__Gate96->id = 96;
		_542__Gate96->A1(_418_);
		_542__Gate96->A2(_372_);
		_542__Gate96->ZN(_419_);
		module_map[96] = _542__Gate96;

		_543__Gate97 = new NOR2_X1("_543__instance97");
		_543__Gate97->id = 97;
		_543__Gate97->A1(_419_);
		_543__Gate97->A2(_420_);
		_543__Gate97->ZN(_421_);
		module_map[97] = _543__Gate97;

		_544__Gate98 = new NOR2_X1("_544__instance98");
		_544__Gate98->id = 98;
		_544__Gate98->A1(_421_);
		_544__Gate98->A2(_417_);
		_544__Gate98->ZN(_423_);
		module_map[98] = _544__Gate98;

		_545__Gate99 = new NAND2_X1("_545__instance99");
		_545__Gate99->id = 99;
		_545__Gate99->A1(_377_);
		_545__Gate99->A2(_353_);
		_545__Gate99->ZN(_424_);
		module_map[99] = _545__Gate99;

		_546__Gate100 = new NAND2_X1("_546__instance100");
		_546__Gate100->id = 100;
		_546__Gate100->A1(_424_);
		_546__Gate100->A2(_301_);
		_546__Gate100->ZN(_425_);
		module_map[100] = _546__Gate100;

		_547__Gate101 = new NOR2_X1("_547__instance101");
		_547__Gate101->id = 101;
		_547__Gate101->A1(_425_);
		_547__Gate101->A2(_409_);
		_547__Gate101->ZN(_426_);
		module_map[101] = _547__Gate101;

		_548__Gate102 = new NAND2_X1("_548__instance102");
		_548__Gate102->id = 102;
		_548__Gate102->A1(_377_);
		_548__Gate102->A2(_271_);
		_548__Gate102->ZN(_428_);
		module_map[102] = _548__Gate102;

		_549__Gate103 = new NAND2_X1("_549__instance103");
		_549__Gate103->id = 103;
		_549__Gate103->A1(_428_);
		_549__Gate103->A2(_245_);
		_549__Gate103->ZN(_429_);
		module_map[103] = _549__Gate103;

		_550__Gate104 = new NOR2_X1("_550__instance104");
		_550__Gate104->id = 104;
		_550__Gate104->A1(_429_);
		_550__Gate104->A2(_402_);
		_550__Gate104->ZN(_430_);
		module_map[104] = _550__Gate104;

		_551__Gate105 = new NOR2_X1("_551__instance105");
		_551__Gate105->id = 105;
		_551__Gate105->A1(_430_);
		_551__Gate105->A2(_426_);
		_551__Gate105->ZN(_431_);
		module_map[105] = _551__Gate105;

		_552__Gate106 = new NAND2_X1("_552__instance106");
		_552__Gate106->id = 106;
		_552__Gate106->A1(_431_);
		_552__Gate106->A2(_423_);
		_552__Gate106->ZN(_432_);
		module_map[106] = _552__Gate106;

		_553__Gate107 = new NAND2_X1("_553__instance107");
		_553__Gate107->id = 107;
		_553__Gate107->A1(_377_);
		_553__Gate107->A2(_398_);
		_553__Gate107->ZN(_434_);
		module_map[107] = _553__Gate107;

		_554__Gate108 = new NAND2_X1("_554__instance108");
		_554__Gate108->id = 108;
		_554__Gate108->A1(_434_);
		_554__Gate108->A2(_376_);
		_554__Gate108->ZN(_435_);
		module_map[108] = _554__Gate108;

		_555__Gate109 = new NOR2_X1("_555__instance109");
		_555__Gate109->id = 109;
		_555__Gate109->A1(_435_);
		_555__Gate109->A2(_382_);
		_555__Gate109->ZN(_437_);
		module_map[109] = _555__Gate109;

		_556__Gate110 = new NAND2_X1("_556__instance110");
		_556__Gate110->id = 110;
		_556__Gate110->A1(_377_);
		_556__Gate110->A2(_155_);
		_556__Gate110->ZN(_438_);
		module_map[110] = _556__Gate110;

		_557__Gate111 = new NAND2_X1("_557__instance111");
		_557__Gate111->id = 111;
		_557__Gate111->A1(_438_);
		_557__Gate111->A2(_422_);
		_557__Gate111->ZN(_439_);
		module_map[111] = _557__Gate111;

		_558__Gate112 = new NOR2_X1("_558__instance112");
		_558__Gate112->id = 112;
		_558__Gate112->A1(_439_);
		_558__Gate112->A2(_387_);
		_558__Gate112->ZN(_440_);
		module_map[112] = _558__Gate112;

		_559__Gate113 = new NOR2_X1("_559__instance113");
		_559__Gate113->id = 113;
		_559__Gate113->A1(_440_);
		_559__Gate113->A2(_437_);
		_559__Gate113->ZN(_442_);
		module_map[113] = _559__Gate113;

		_560__Gate114 = new NAND2_X1("_560__instance114");
		_560__Gate114->id = 114;
		_560__Gate114->A1(_377_);
		_560__Gate114->A2(_224_);
		_560__Gate114->ZN(_443_);
		module_map[114] = _560__Gate114;

		_561__Gate115 = new NAND2_X1("_561__instance115");
		_561__Gate115->id = 115;
		_561__Gate115->A1(_443_);
		_561__Gate115->A2(_202_);
		_561__Gate115->ZN(_444_);
		module_map[115] = _561__Gate115;

		_562__Gate116 = new NOR2_X1("_562__instance116");
		_562__Gate116->id = 116;
		_562__Gate116->A1(_444_);
		_562__Gate116->A2(_395_);
		_562__Gate116->ZN(_445_);
		module_map[116] = _562__Gate116;

		_563__Gate117 = new NAND2_X1("_563__instance117");
		_563__Gate117->id = 117;
		_563__Gate117->A1(_377_);
		_563__Gate117->A2(_374_);
		_563__Gate117->ZN(_446_);
		module_map[117] = _563__Gate117;

		_564__Gate118 = new NAND2_X1("_564__instance118");
		_564__Gate118->id = 118;
		_564__Gate118->A1(_446_);
		_564__Gate118->A2(_373_);
		_564__Gate118->ZN(_157_);
		module_map[118] = _564__Gate118;

		_565__Gate119 = new NOR2_X1("_565__instance119");
		_565__Gate119->id = 119;
		_565__Gate119->A1(_157_);
		_565__Gate119->A2(_427_);
		_565__Gate119->ZN(_158_);
		module_map[119] = _565__Gate119;

		_566__Gate120 = new NOR2_X1("_566__instance120");
		_566__Gate120->id = 120;
		_566__Gate120->A1(_158_);
		_566__Gate120->A2(_445_);
		_566__Gate120->ZN(_159_);
		module_map[120] = _566__Gate120;

		_567__Gate121 = new NAND2_X1("_567__instance121");
		_567__Gate121->id = 121;
		_567__Gate121->A1(_159_);
		_567__Gate121->A2(_442_);
		_567__Gate121->ZN(_160_);
		module_map[121] = _567__Gate121;

		_568__Gate122 = new NOR2_X1("_568__instance122");
		_568__Gate122->id = 122;
		_568__Gate122->A1(_160_);
		_568__Gate122->A2(_432_);
		_568__Gate122->ZN(_161_);
		module_map[122] = _568__Gate122;

		_569__Gate123 = new NAND2_X1("_569__instance123");
		_569__Gate123->id = 123;
		_569__Gate123->A1(_161_);
		_569__Gate123->A2(_413_);
		_569__Gate123->ZN(_433_);
		module_map[123] = _569__Gate123;

		_570__Gate124 = new INV1_X1("_570__instance124");
		_570__Gate124->id = 124;
		_570__Gate124->A(_420_);
		_570__Gate124->ZN(_163_);
		module_map[124] = _570__Gate124;

		_571__Gate125 = new INV1_X1("_571__instance125");
		_571__Gate125->id = 125;
		_571__Gate125->A(_414_);
		_571__Gate125->ZN(_164_);
		module_map[125] = _571__Gate125;

		_572__Gate126 = new INV1_X1("_572__instance126");
		_572__Gate126->id = 126;
		_572__Gate126->A(_343_);
		_572__Gate126->ZN(_165_);
		module_map[126] = _572__Gate126;

		_573__Gate127 = new NAND2_X1("_573__instance127");
		_573__Gate127->id = 127;
		_573__Gate127->A1(_400_);
		_573__Gate127->A2(_384_);
		_573__Gate127->ZN(_166_);
		module_map[127] = _573__Gate127;

		_574__Gate128 = new INV1_X1("_574__instance128");
		_574__Gate128->id = 128;
		_574__Gate128->A(_398_);
		_574__Gate128->ZN(_168_);
		module_map[128] = _574__Gate128;

		_575__Gate129 = new NAND2_X1("_575__instance129");
		_575__Gate129->id = 129;
		_575__Gate129->A1(_168_);
		_575__Gate129->A2(_376_);
		_575__Gate129->ZN(_169_);
		module_map[129] = _575__Gate129;

		_576__Gate130 = new NAND2_X1("_576__instance130");
		_576__Gate130->id = 130;
		_576__Gate130->A1(_386_);
		_576__Gate130->A2(_169_);
		_576__Gate130->ZN(_170_);
		module_map[130] = _576__Gate130;

		_577__Gate131 = new NOR2_X1("_577__instance131");
		_577__Gate131->id = 131;
		_577__Gate131->A1(_170_);
		_577__Gate131->A2(_389_);
		_577__Gate131->ZN(_171_);
		module_map[131] = _577__Gate131;

		_578__Gate132 = new NAND2_X1("_578__instance132");
		_578__Gate132->id = 132;
		_578__Gate132->A1(_406_);
		_578__Gate132->A2(_171_);
		_578__Gate132->ZN(_172_);
		module_map[132] = _578__Gate132;

		_579__Gate133 = new NOR2_X1("_579__instance133");
		_579__Gate133->id = 133;
		_579__Gate133->A1(_172_);
		_579__Gate133->A2(_166_);
		_579__Gate133->ZN(_173_);
		module_map[133] = _579__Gate133;

		_580__Gate134 = new NOR2_X1("_580__instance134");
		_580__Gate134->id = 134;
		_580__Gate134->A1(_173_);
		_580__Gate134->A2(_165_);
		_580__Gate134->ZN(_174_);
		module_map[134] = _580__Gate134;

		_581__Gate135 = new NOR2_X1("_581__instance135");
		_581__Gate135->id = 135;
		_581__Gate135->A1(_174_);
		_581__Gate135->A2(_381_);
		_581__Gate135->ZN(_175_);
		module_map[135] = _581__Gate135;

		_582__Gate136 = new NAND2_X1("_582__instance136");
		_582__Gate136->id = 136;
		_582__Gate136->A1(_175_);
		_582__Gate136->A2(_164_);
		_582__Gate136->ZN(_177_);
		module_map[136] = _582__Gate136;

		_583__Gate137 = new INV1_X1("_583__instance137");
		_583__Gate137->id = 137;
		_583__Gate137->A(_375_);
		_583__Gate137->ZN(_178_);
		module_map[137] = _583__Gate137;

		_584__Gate138 = new NOR2_X1("_584__instance138");
		_584__Gate138->id = 138;
		_584__Gate138->A1(_173_);
		_584__Gate138->A2(_178_);
		_584__Gate138->ZN(_179_);
		module_map[138] = _584__Gate138;

		_585__Gate139 = new NOR2_X1("_585__instance139");
		_585__Gate139->id = 139;
		_585__Gate139->A1(_179_);
		_585__Gate139->A2(_404_);
		_585__Gate139->ZN(_180_);
		module_map[139] = _585__Gate139;

		_586__Gate140 = new NAND2_X1("_586__instance140");
		_586__Gate140->id = 140;
		_586__Gate140->A1(_180_);
		_586__Gate140->A2(_163_);
		_586__Gate140->ZN(_181_);
		module_map[140] = _586__Gate140;

		_587__Gate141 = new NAND2_X1("_587__instance141");
		_587__Gate141->id = 141;
		_587__Gate141->A1(_181_);
		_587__Gate141->A2(_177_);
		_587__Gate141->ZN(_183_);
		module_map[141] = _587__Gate141;

		_588__Gate142 = new INV1_X1("_588__instance142");
		_588__Gate142->id = 142;
		_588__Gate142->A(_409_);
		_588__Gate142->ZN(_184_);
		module_map[142] = _588__Gate142;

		_589__Gate143 = new INV1_X1("_589__instance143");
		_589__Gate143->id = 143;
		_589__Gate143->A(_353_);
		_589__Gate143->ZN(_185_);
		module_map[143] = _589__Gate143;

		_590__Gate144 = new NOR2_X1("_590__instance144");
		_590__Gate144->id = 144;
		_590__Gate144->A1(_173_);
		_590__Gate144->A2(_185_);
		_590__Gate144->ZN(_186_);
		module_map[144] = _590__Gate144;

		_591__Gate145 = new NOR2_X1("_591__instance145");
		_591__Gate145->id = 145;
		_591__Gate145->A1(_186_);
		_591__Gate145->A2(_394_);
		_591__Gate145->ZN(_187_);
		module_map[145] = _591__Gate145;

		_592__Gate146 = new NAND2_X1("_592__instance146");
		_592__Gate146->id = 146;
		_592__Gate146->A1(_187_);
		_592__Gate146->A2(_184_);
		_592__Gate146->ZN(_188_);
		module_map[146] = _592__Gate146;

		_593__Gate147 = new INV1_X1("_593__instance147");
		_593__Gate147->id = 147;
		_593__Gate147->A(_402_);
		_593__Gate147->ZN(_189_);
		module_map[147] = _593__Gate147;

		_594__Gate148 = new INV1_X1("_594__instance148");
		_594__Gate148->id = 148;
		_594__Gate148->A(_271_);
		_594__Gate148->ZN(_191_);
		module_map[148] = _594__Gate148;

		_595__Gate149 = new NOR2_X1("_595__instance149");
		_595__Gate149->id = 149;
		_595__Gate149->A1(_173_);
		_595__Gate149->A2(_191_);
		_595__Gate149->ZN(_192_);
		module_map[149] = _595__Gate149;

		_596__Gate150 = new NOR2_X1("_596__instance150");
		_596__Gate150->id = 150;
		_596__Gate150->A1(_192_);
		_596__Gate150->A2(_401_);
		_596__Gate150->ZN(_193_);
		module_map[150] = _596__Gate150;

		_597__Gate151 = new NAND2_X1("_597__instance151");
		_597__Gate151->id = 151;
		_597__Gate151->A1(_193_);
		_597__Gate151->A2(_189_);
		_597__Gate151->ZN(_194_);
		module_map[151] = _597__Gate151;

		_598__Gate152 = new NAND2_X1("_598__instance152");
		_598__Gate152->id = 152;
		_598__Gate152->A1(_194_);
		_598__Gate152->A2(_188_);
		_598__Gate152->ZN(_195_);
		module_map[152] = _598__Gate152;

		_599__Gate153 = new NOR2_X1("_599__instance153");
		_599__Gate153->id = 153;
		_599__Gate153->A1(_195_);
		_599__Gate153->A2(_183_);
		_599__Gate153->ZN(_197_);
		module_map[153] = _599__Gate153;

		_600__Gate154 = new INV1_X1("_600__instance154");
		_600__Gate154->id = 154;
		_600__Gate154->A(_382_);
		_600__Gate154->ZN(_198_);
		module_map[154] = _600__Gate154;

		_601__Gate155 = new NOR2_X1("_601__instance155");
		_601__Gate155->id = 155;
		_601__Gate155->A1(_173_);
		_601__Gate155->A2(_168_);
		_601__Gate155->ZN(_199_);
		module_map[155] = _601__Gate155;

		_602__Gate156 = new NOR2_X1("_602__instance156");
		_602__Gate156->id = 156;
		_602__Gate156->A1(_199_);
		_602__Gate156->A2(_390_);
		_602__Gate156->ZN(_200_);
		module_map[156] = _602__Gate156;

		_603__Gate157 = new NAND2_X1("_603__instance157");
		_603__Gate157->id = 157;
		_603__Gate157->A1(_200_);
		_603__Gate157->A2(_198_);
		_603__Gate157->ZN(_201_);
		module_map[157] = _603__Gate157;

		_604__Gate158 = new INV1_X1("_604__instance158");
		_604__Gate158->id = 158;
		_604__Gate158->A(_387_);
		_604__Gate158->ZN(_203_);
		module_map[158] = _604__Gate158;

		_605__Gate159 = new INV1_X1("_605__instance159");
		_605__Gate159->id = 159;
		_605__Gate159->A(_155_);
		_605__Gate159->ZN(_204_);
		module_map[159] = _605__Gate159;

		_606__Gate160 = new NOR2_X1("_606__instance160");
		_606__Gate160->id = 160;
		_606__Gate160->A1(_173_);
		_606__Gate160->A2(_204_);
		_606__Gate160->ZN(_206_);
		module_map[160] = _606__Gate160;

		_607__Gate161 = new NOR2_X1("_607__instance161");
		_607__Gate161->id = 161;
		_607__Gate161->A1(_206_);
		_607__Gate161->A2(_388_);
		_607__Gate161->ZN(_207_);
		module_map[161] = _607__Gate161;

		_608__Gate162 = new NAND2_X1("_608__instance162");
		_608__Gate162->id = 162;
		_608__Gate162->A1(_207_);
		_608__Gate162->A2(_203_);
		_608__Gate162->ZN(_208_);
		module_map[162] = _608__Gate162;

		_609__Gate163 = new NAND2_X1("_609__instance163");
		_609__Gate163->id = 163;
		_609__Gate163->A1(_208_);
		_609__Gate163->A2(_201_);
		_609__Gate163->ZN(_209_);
		module_map[163] = _609__Gate163;

		_610__Gate164 = new INV1_X1("_610__instance164");
		_610__Gate164->id = 164;
		_610__Gate164->A(_395_);
		_610__Gate164->ZN(_210_);
		module_map[164] = _610__Gate164;

		_611__Gate165 = new INV1_X1("_611__instance165");
		_611__Gate165->id = 165;
		_611__Gate165->A(_224_);
		_611__Gate165->ZN(_211_);
		module_map[165] = _611__Gate165;

		_612__Gate166 = new NOR2_X1("_612__instance166");
		_612__Gate166->id = 166;
		_612__Gate166->A1(_173_);
		_612__Gate166->A2(_211_);
		_612__Gate166->ZN(_212_);
		module_map[166] = _612__Gate166;

		_613__Gate167 = new NOR2_X1("_613__instance167");
		_613__Gate167->id = 167;
		_613__Gate167->A1(_212_);
		_613__Gate167->A2(_397_);
		_613__Gate167->ZN(_213_);
		module_map[167] = _613__Gate167;

		_614__Gate168 = new NAND2_X1("_614__instance168");
		_614__Gate168->id = 168;
		_614__Gate168->A1(_213_);
		_614__Gate168->A2(_210_);
		_614__Gate168->ZN(_214_);
		module_map[168] = _614__Gate168;

		_615__Gate169 = new INV1_X1("_615__instance169");
		_615__Gate169->id = 169;
		_615__Gate169->A(_427_);
		_615__Gate169->ZN(_215_);
		module_map[169] = _615__Gate169;

		_616__Gate170 = new NAND2_X1("_616__instance170");
		_616__Gate170->id = 170;
		_616__Gate170->A1(_173_);
		_616__Gate170->A2(_373_);
		_616__Gate170->ZN(_216_);
		module_map[170] = _616__Gate170;

		_617__Gate171 = new NAND2_X1("_617__instance171");
		_617__Gate171->id = 171;
		_617__Gate171->A1(_216_);
		_617__Gate171->A2(_386_);
		_617__Gate171->ZN(_217_);
		module_map[171] = _617__Gate171;

		_618__Gate172 = new NAND2_X1("_618__instance172");
		_618__Gate172->id = 172;
		_618__Gate172->A1(_217_);
		_618__Gate172->A2(_215_);
		_618__Gate172->ZN(_218_);
		module_map[172] = _618__Gate172;

		_619__Gate173 = new NAND2_X1("_619__instance173");
		_619__Gate173->id = 173;
		_619__Gate173->A1(_218_);
		_619__Gate173->A2(_214_);
		_619__Gate173->ZN(_219_);
		module_map[173] = _619__Gate173;

		_620__Gate174 = new NOR2_X1("_620__instance174");
		_620__Gate174->id = 174;
		_620__Gate174->A1(_219_);
		_620__Gate174->A2(_209_);
		_620__Gate174->ZN(_220_);
		module_map[174] = _620__Gate174;

		_621__Gate175 = new NAND2_X1("_621__instance175");
		_621__Gate175->id = 175;
		_621__Gate175->A1(_220_);
		_621__Gate175->A2(_197_);
		_621__Gate175->ZN(_221_);
		module_map[175] = _621__Gate175;

		_622__Gate176 = new NOR2_X1("_622__instance176");
		_622__Gate176->id = 176;
		_622__Gate176->A1(_221_);
		_622__Gate176->A2(_412_);
		_622__Gate176->ZN(_222_);
		module_map[176] = _622__Gate176;

		_623__Gate177 = new NOR2_X1("_623__instance177");
		_623__Gate177->id = 177;
		_623__Gate177->A1(_222_);
		_623__Gate177->A2(_163_);
		_623__Gate177->ZN(_223_);
		module_map[177] = _623__Gate177;

		_624__Gate178 = new NOR2_X1("_624__instance178");
		_624__Gate178->id = 178;
		_624__Gate178->A1(_223_);
		_624__Gate178->A2(_419_);
		_624__Gate178->ZN(_225_);
		module_map[178] = _624__Gate178;

		_625__Gate179 = new NOR2_X1("_625__instance179");
		_625__Gate179->id = 179;
		_625__Gate179->A1(_433_);
		_625__Gate179->A2(_420_);
		_625__Gate179->ZN(_226_);
		module_map[179] = _625__Gate179;

		_626__Gate180 = new NOR2_X1("_626__instance180");
		_626__Gate180->id = 180;
		_626__Gate180->A1(_226_);
		_626__Gate180->A2(_190_);
		_626__Gate180->ZN(_227_);
		module_map[180] = _626__Gate180;

		_627__Gate181 = new NAND2_X1("_627__instance181");
		_627__Gate181->id = 181;
		_627__Gate181->A1(_227_);
		_627__Gate181->A2(_225_);
		_627__Gate181->ZN(_228_);
		module_map[181] = _627__Gate181;

		_628__Gate182 = new NOR2_X1("_628__instance182");
		_628__Gate182->id = 182;
		_628__Gate182->A1(_222_);
		_628__Gate182->A2(_215_);
		_628__Gate182->ZN(_229_);
		module_map[182] = _628__Gate182;

		_629__Gate183 = new NOR2_X1("_629__instance183");
		_629__Gate183->id = 183;
		_629__Gate183->A1(_229_);
		_629__Gate183->A2(_157_);
		_629__Gate183->ZN(_230_);
		module_map[183] = _629__Gate183;

		_630__Gate184 = new NOR2_X1("_630__instance184");
		_630__Gate184->id = 184;
		_630__Gate184->A1(_433_);
		_630__Gate184->A2(_427_);
		_630__Gate184->ZN(_231_);
		module_map[184] = _630__Gate184;

		_631__Gate185 = new NOR2_X1("_631__instance185");
		_631__Gate185->id = 185;
		_631__Gate185->A1(_231_);
		_631__Gate185->A2(_196_);
		_631__Gate185->ZN(_232_);
		module_map[185] = _631__Gate185;

		_632__Gate186 = new NAND2_X1("_632__instance186");
		_632__Gate186->id = 186;
		_632__Gate186->A1(_232_);
		_632__Gate186->A2(_230_);
		_632__Gate186->ZN(_233_);
		module_map[186] = _632__Gate186;

		_633__Gate187 = new NAND2_X1("_633__instance187");
		_633__Gate187->id = 187;
		_633__Gate187->A1(_233_);
		_633__Gate187->A2(_228_);
		_633__Gate187->ZN(_234_);
		module_map[187] = _633__Gate187;

		_634__Gate188 = new INV1_X1("_634__instance188");
		_634__Gate188->id = 188;
		_634__Gate188->A(_156_);
		_634__Gate188->ZN(_235_);
		module_map[188] = _634__Gate188;

		_635__Gate189 = new NOR2_X1("_635__instance189");
		_635__Gate189->id = 189;
		_635__Gate189->A1(_222_);
		_635__Gate189->A2(_203_);
		_635__Gate189->ZN(_236_);
		module_map[189] = _635__Gate189;

		_636__Gate190 = new NOR2_X1("_636__instance190");
		_636__Gate190->id = 190;
		_636__Gate190->A1(_236_);
		_636__Gate190->A2(_439_);
		_636__Gate190->ZN(_237_);
		module_map[190] = _636__Gate190;

		_637__Gate191 = new NAND2_X1("_637__instance191");
		_637__Gate191->id = 191;
		_637__Gate191->A1(_237_);
		_637__Gate191->A2(_235_);
		_637__Gate191->ZN(_238_);
		module_map[191] = _637__Gate191;

		_638__Gate192 = new NOR2_X1("_638__instance192");
		_638__Gate192->id = 192;
		_638__Gate192->A1(_222_);
		_638__Gate192->A2(_189_);
		_638__Gate192->ZN(_239_);
		module_map[192] = _638__Gate192;

		_639__Gate193 = new NOR2_X1("_639__instance193");
		_639__Gate193->id = 193;
		_639__Gate193->A1(_239_);
		_639__Gate193->A2(_429_);
		_639__Gate193->ZN(_240_);
		module_map[193] = _639__Gate193;

		_640__Gate194 = new NOR2_X1("_640__instance194");
		_640__Gate194->id = 194;
		_640__Gate194->A1(_433_);
		_640__Gate194->A2(_402_);
		_640__Gate194->ZN(_241_);
		module_map[194] = _640__Gate194;

		_641__Gate195 = new NOR2_X1("_641__instance195");
		_641__Gate195->id = 195;
		_641__Gate195->A1(_241_);
		_641__Gate195->A2(_167_);
		_641__Gate195->ZN(_242_);
		module_map[195] = _641__Gate195;

		_642__Gate196 = new NAND2_X1("_642__instance196");
		_642__Gate196->id = 196;
		_642__Gate196->A1(_242_);
		_642__Gate196->A2(_240_);
		_642__Gate196->ZN(_243_);
		module_map[196] = _642__Gate196;

		_643__Gate197 = new NAND2_X1("_643__instance197");
		_643__Gate197->id = 197;
		_643__Gate197->A1(_243_);
		_643__Gate197->A2(_238_);
		_643__Gate197->ZN(_244_);
		module_map[197] = _643__Gate197;

		_644__Gate198 = new NOR2_X1("_644__instance198");
		_644__Gate198->id = 198;
		_644__Gate198->A1(_244_);
		_644__Gate198->A2(_234_);
		_644__Gate198->ZN(_246_);
		module_map[198] = _644__Gate198;

		_645__Gate199 = new NOR2_X1("_645__instance199");
		_645__Gate199->id = 199;
		_645__Gate199->A1(_222_);
		_645__Gate199->A2(_184_);
		_645__Gate199->ZN(_247_);
		module_map[199] = _645__Gate199;

		_646__Gate200 = new NOR2_X1("_646__instance200");
		_646__Gate200->id = 200;
		_646__Gate200->A1(_247_);
		_646__Gate200->A2(_425_);
		_646__Gate200->ZN(_249_);
		module_map[200] = _646__Gate200;

		_647__Gate201 = new NOR2_X1("_647__instance201");
		_647__Gate201->id = 201;
		_647__Gate201->A1(_433_);
		_647__Gate201->A2(_409_);
		_647__Gate201->ZN(_250_);
		module_map[201] = _647__Gate201;

		_648__Gate202 = new NOR2_X1("_648__instance202");
		_648__Gate202->id = 202;
		_648__Gate202->A1(_250_);
		_648__Gate202->A2(_176_);
		_648__Gate202->ZN(_251_);
		module_map[202] = _648__Gate202;

		_649__Gate203 = new NAND2_X1("_649__instance203");
		_649__Gate203->id = 203;
		_649__Gate203->A1(_251_);
		_649__Gate203->A2(_249_);
		_649__Gate203->ZN(_252_);
		module_map[203] = _649__Gate203;

		_650__Gate204 = new NOR2_X1("_650__instance204");
		_650__Gate204->id = 204;
		_650__Gate204->A1(_222_);
		_650__Gate204->A2(_210_);
		_650__Gate204->ZN(_254_);
		module_map[204] = _650__Gate204;

		_651__Gate205 = new NOR2_X1("_651__instance205");
		_651__Gate205->id = 205;
		_651__Gate205->A1(_254_);
		_651__Gate205->A2(_444_);
		_651__Gate205->ZN(_255_);
		module_map[205] = _651__Gate205;

		_652__Gate206 = new NOR2_X1("_652__instance206");
		_652__Gate206->id = 206;
		_652__Gate206->A1(_433_);
		_652__Gate206->A2(_395_);
		_652__Gate206->ZN(_256_);
		module_map[206] = _652__Gate206;

		_653__Gate207 = new NOR2_X1("_653__instance207");
		_653__Gate207->id = 207;
		_653__Gate207->A1(_256_);
		_653__Gate207->A2(_162_);
		_653__Gate207->ZN(_257_);
		module_map[207] = _653__Gate207;

		_654__Gate208 = new NAND2_X1("_654__instance208");
		_654__Gate208->id = 208;
		_654__Gate208->A1(_257_);
		_654__Gate208->A2(_255_);
		_654__Gate208->ZN(_258_);
		module_map[208] = _654__Gate208;

		_655__Gate209 = new NAND2_X1("_655__instance209");
		_655__Gate209->id = 209;
		_655__Gate209->A1(_258_);
		_655__Gate209->A2(_252_);
		_655__Gate209->ZN(_260_);
		module_map[209] = _655__Gate209;

		_656__Gate210 = new INV1_X1("_656__instance210");
		_656__Gate210->id = 210;
		_656__Gate210->A(_441_);
		_656__Gate210->ZN(_261_);
		module_map[210] = _656__Gate210;

		_657__Gate211 = new NOR2_X1("_657__instance211");
		_657__Gate211->id = 211;
		_657__Gate211->A1(_222_);
		_657__Gate211->A2(_198_);
		_657__Gate211->ZN(_262_);
		module_map[211] = _657__Gate211;

		_658__Gate212 = new NOR2_X1("_658__instance212");
		_658__Gate212->id = 212;
		_658__Gate212->A1(_262_);
		_658__Gate212->A2(_435_);
		_658__Gate212->ZN(_263_);
		module_map[212] = _658__Gate212;

		_659__Gate213 = new NAND2_X1("_659__instance213");
		_659__Gate213->id = 213;
		_659__Gate213->A1(_263_);
		_659__Gate213->A2(_261_);
		_659__Gate213->ZN(_264_);
		module_map[213] = _659__Gate213;

		_660__Gate214 = new INV1_X1("_660__instance214");
		_660__Gate214->id = 214;
		_660__Gate214->A(_411_);
		_660__Gate214->ZN(_266_);
		module_map[214] = _660__Gate214;

		_661__Gate215 = new NAND2_X1("_661__instance215");
		_661__Gate215->id = 215;
		_661__Gate215->A1(_221_);
		_661__Gate215->A2(_378_);
		_661__Gate215->ZN(_267_);
		module_map[215] = _661__Gate215;

		_662__Gate216 = new NAND2_X1("_662__instance216");
		_662__Gate216->id = 216;
		_662__Gate216->A1(_267_);
		_662__Gate216->A2(_266_);
		_662__Gate216->ZN(_268_);
		module_map[216] = _662__Gate216;

		_663__Gate217 = new NOR2_X1("_663__instance217");
		_663__Gate217->id = 217;
		_663__Gate217->A1(_268_);
		_663__Gate217->A2(_436_);
		_663__Gate217->ZN(_269_);
		module_map[217] = _663__Gate217;

		_664__Gate218 = new NOR2_X1("_664__instance218");
		_664__Gate218->id = 218;
		_664__Gate218->A1(_222_);
		_664__Gate218->A2(_164_);
		_664__Gate218->ZN(_272_);
		module_map[218] = _664__Gate218;

		_665__Gate219 = new NOR2_X1("_665__instance219");
		_665__Gate219->id = 219;
		_665__Gate219->A1(_416_);
		_665__Gate219->A2(_182_);
		_665__Gate219->ZN(_273_);
		module_map[219] = _665__Gate219;

		_666__Gate220 = new INV1_X1("_666__instance220");
		_666__Gate220->id = 220;
		_666__Gate220->A(_273_);
		_666__Gate220->ZN(_274_);
		module_map[220] = _666__Gate220;

		_667__Gate221 = new NOR2_X1("_667__instance221");
		_667__Gate221->id = 221;
		_667__Gate221->A1(_274_);
		_667__Gate221->A2(_272_);
		_667__Gate221->ZN(_275_);
		module_map[221] = _667__Gate221;

		_668__Gate222 = new NOR2_X1("_668__instance222");
		_668__Gate222->id = 222;
		_668__Gate222->A1(_275_);
		_668__Gate222->A2(_269_);
		_668__Gate222->ZN(_276_);
		module_map[222] = _668__Gate222;

		_669__Gate223 = new NAND2_X1("_669__instance223");
		_669__Gate223->id = 223;
		_669__Gate223->A1(_276_);
		_669__Gate223->A2(_264_);
		_669__Gate223->ZN(_277_);
		module_map[223] = _669__Gate223;

		_670__Gate224 = new NOR2_X1("_670__instance224");
		_670__Gate224->id = 224;
		_670__Gate224->A1(_277_);
		_670__Gate224->A2(_260_);
		_670__Gate224->ZN(_278_);
		module_map[224] = _670__Gate224;

		_671__Gate225 = new NAND2_X1("_671__instance225");
		_671__Gate225->id = 225;
		_671__Gate225->A1(_278_);
		_671__Gate225->A2(_246_);
		_671__Gate225->ZN(_205_);
		module_map[225] = _671__Gate225;

		_672__Gate226 = new NAND2_X1("_672__instance226");
		_672__Gate226->id = 226;
		_672__Gate226->A1(_433_);
		_672__Gate226->A2(_395_);
		_672__Gate226->ZN(_279_);
		module_map[226] = _672__Gate226;

		_673__Gate227 = new NAND2_X1("_673__instance227");
		_673__Gate227->id = 227;
		_673__Gate227->A1(_279_);
		_673__Gate227->A2(_213_);
		_673__Gate227->ZN(_280_);
		module_map[227] = _673__Gate227;

		_674__Gate228 = new INV1_X1("_674__instance228");
		_674__Gate228->id = 228;
		_674__Gate228->A(_162_);
		_674__Gate228->ZN(_281_);
		module_map[228] = _674__Gate228;

		_675__Gate229 = new NAND2_X1("_675__instance229");
		_675__Gate229->id = 229;
		_675__Gate229->A1(_433_);
		_675__Gate229->A2(_420_);
		_675__Gate229->ZN(_282_);
		module_map[229] = _675__Gate229;

		_676__Gate230 = new NAND2_X1("_676__instance230");
		_676__Gate230->id = 230;
		_676__Gate230->A1(_282_);
		_676__Gate230->A2(_180_);
		_676__Gate230->ZN(_283_);
		module_map[230] = _676__Gate230;

		_677__Gate231 = new INV1_X1("_677__instance231");
		_677__Gate231->id = 231;
		_677__Gate231->A(_190_);
		_677__Gate231->ZN(_284_);
		module_map[231] = _677__Gate231;

		_678__Gate232 = new NAND2_X1("_678__instance232");
		_678__Gate232->id = 232;
		_678__Gate232->A1(_222_);
		_678__Gate232->A2(_163_);
		_678__Gate232->ZN(_285_);
		module_map[232] = _678__Gate232;

		_679__Gate233 = new NAND2_X1("_679__instance233");
		_679__Gate233->id = 233;
		_679__Gate233->A1(_285_);
		_679__Gate233->A2(_284_);
		_679__Gate233->ZN(_286_);
		module_map[233] = _679__Gate233;

		_680__Gate234 = new NOR2_X1("_680__instance234");
		_680__Gate234->id = 234;
		_680__Gate234->A1(_286_);
		_680__Gate234->A2(_283_);
		_680__Gate234->ZN(_287_);
		module_map[234] = _680__Gate234;

		_681__Gate235 = new NAND2_X1("_681__instance235");
		_681__Gate235->id = 235;
		_681__Gate235->A1(_433_);
		_681__Gate235->A2(_427_);
		_681__Gate235->ZN(_288_);
		module_map[235] = _681__Gate235;

		_682__Gate236 = new NAND2_X1("_682__instance236");
		_682__Gate236->id = 236;
		_682__Gate236->A1(_288_);
		_682__Gate236->A2(_217_);
		_682__Gate236->ZN(_289_);
		module_map[236] = _682__Gate236;

		_683__Gate237 = new INV1_X1("_683__instance237");
		_683__Gate237->id = 237;
		_683__Gate237->A(_196_);
		_683__Gate237->ZN(_290_);
		module_map[237] = _683__Gate237;

		_684__Gate238 = new NAND2_X1("_684__instance238");
		_684__Gate238->id = 238;
		_684__Gate238->A1(_222_);
		_684__Gate238->A2(_215_);
		_684__Gate238->ZN(_291_);
		module_map[238] = _684__Gate238;

		_685__Gate239 = new NAND2_X1("_685__instance239");
		_685__Gate239->id = 239;
		_685__Gate239->A1(_291_);
		_685__Gate239->A2(_290_);
		_685__Gate239->ZN(_292_);
		module_map[239] = _685__Gate239;

		_686__Gate240 = new NOR2_X1("_686__instance240");
		_686__Gate240->id = 240;
		_686__Gate240->A1(_292_);
		_686__Gate240->A2(_289_);
		_686__Gate240->ZN(_293_);
		module_map[240] = _686__Gate240;

		_687__Gate241 = new NOR2_X1("_687__instance241");
		_687__Gate241->id = 241;
		_687__Gate241->A1(_293_);
		_687__Gate241->A2(_287_);
		_687__Gate241->ZN(_294_);
		module_map[241] = _687__Gate241;

		_688__Gate242 = new NAND2_X1("_688__instance242");
		_688__Gate242->id = 242;
		_688__Gate242->A1(_433_);
		_688__Gate242->A2(_387_);
		_688__Gate242->ZN(_295_);
		module_map[242] = _688__Gate242;

		_689__Gate243 = new NAND2_X1("_689__instance243");
		_689__Gate243->id = 243;
		_689__Gate243->A1(_295_);
		_689__Gate243->A2(_207_);
		_689__Gate243->ZN(_296_);
		module_map[243] = _689__Gate243;

		_690__Gate244 = new NOR2_X1("_690__instance244");
		_690__Gate244->id = 244;
		_690__Gate244->A1(_296_);
		_690__Gate244->A2(_156_);
		_690__Gate244->ZN(_297_);
		module_map[244] = _690__Gate244;

		_691__Gate245 = new NAND2_X1("_691__instance245");
		_691__Gate245->id = 245;
		_691__Gate245->A1(_433_);
		_691__Gate245->A2(_402_);
		_691__Gate245->ZN(_298_);
		module_map[245] = _691__Gate245;

		_692__Gate246 = new NAND2_X1("_692__instance246");
		_692__Gate246->id = 246;
		_692__Gate246->A1(_298_);
		_692__Gate246->A2(_193_);
		_692__Gate246->ZN(_299_);
		module_map[246] = _692__Gate246;

		_693__Gate247 = new INV1_X1("_693__instance247");
		_693__Gate247->id = 247;
		_693__Gate247->A(_167_);
		_693__Gate247->ZN(_300_);
		module_map[247] = _693__Gate247;

		_694__Gate248 = new NAND2_X1("_694__instance248");
		_694__Gate248->id = 248;
		_694__Gate248->A1(_222_);
		_694__Gate248->A2(_189_);
		_694__Gate248->ZN(_302_);
		module_map[248] = _694__Gate248;

		_695__Gate249 = new NAND2_X1("_695__instance249");
		_695__Gate249->id = 249;
		_695__Gate249->A1(_302_);
		_695__Gate249->A2(_300_);
		_695__Gate249->ZN(_303_);
		module_map[249] = _695__Gate249;

		_696__Gate250 = new NOR2_X1("_696__instance250");
		_696__Gate250->id = 250;
		_696__Gate250->A1(_303_);
		_696__Gate250->A2(_299_);
		_696__Gate250->ZN(_304_);
		module_map[250] = _696__Gate250;

		_697__Gate251 = new NOR2_X1("_697__instance251");
		_697__Gate251->id = 251;
		_697__Gate251->A1(_304_);
		_697__Gate251->A2(_297_);
		_697__Gate251->ZN(_305_);
		module_map[251] = _697__Gate251;

		_698__Gate252 = new NAND2_X1("_698__instance252");
		_698__Gate252->id = 252;
		_698__Gate252->A1(_305_);
		_698__Gate252->A2(_294_);
		_698__Gate252->ZN(_306_);
		module_map[252] = _698__Gate252;

		_699__Gate253 = new NAND2_X1("_699__instance253");
		_699__Gate253->id = 253;
		_699__Gate253->A1(_433_);
		_699__Gate253->A2(_409_);
		_699__Gate253->ZN(_307_);
		module_map[253] = _699__Gate253;

		_700__Gate254 = new NAND2_X1("_700__instance254");
		_700__Gate254->id = 254;
		_700__Gate254->A1(_307_);
		_700__Gate254->A2(_187_);
		_700__Gate254->ZN(_308_);
		module_map[254] = _700__Gate254;

		_701__Gate255 = new INV1_X1("_701__instance255");
		_701__Gate255->id = 255;
		_701__Gate255->A(_176_);
		_701__Gate255->ZN(_309_);
		module_map[255] = _701__Gate255;

		_702__Gate256 = new NAND2_X1("_702__instance256");
		_702__Gate256->id = 256;
		_702__Gate256->A1(_222_);
		_702__Gate256->A2(_184_);
		_702__Gate256->ZN(_310_);
		module_map[256] = _702__Gate256;

		_703__Gate257 = new NAND2_X1("_703__instance257");
		_703__Gate257->id = 257;
		_703__Gate257->A1(_310_);
		_703__Gate257->A2(_309_);
		_703__Gate257->ZN(_311_);
		module_map[257] = _703__Gate257;


 
		
		cout << "all gates are instantiated " << numOfGates << "\n";
		SC_THREAD(assignments);
		sensitive << N43 << N76 << N37 << N69 << N50 << N329 << N30 << N4 << N95 << _377_ << N73 << N47 << _205_ << N89 << N92 << _253_ << _259_ << _265_ << N82 << N17 << _248_ << N8 << N34 << N11 << _433_ << N79 << N112 << N105 << N86 << N1 << N223 << N14 << N56 << N370 << N108 << N66 << N21 << N27 << N63 << N24 << N115 << N40 << N102 << N99 << N60 << N53;
		SC_METHOD(GIC_Coverage_Calculator);
		sensitive << newTV << endSim;
	}
	void ini();
	void assignments();
	void GIC_Coverage_Calculator();
};
