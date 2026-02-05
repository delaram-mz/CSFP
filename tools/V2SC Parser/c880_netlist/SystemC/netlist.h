#include "NAND2_X1.h"
#include "NOR2_X1.h"
#include "INV1_X1.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <set>
#include <map>


extern std::map<int, GATES_X1*> module_map;
SC_MODULE(c880_netlist)
{
	std::map<int, GATES_X1*> module_map;
	sc_in <fs_logic> N1, N101, N106, N111, N116, N121, N126, N13, N130, N135, N138, N143, N146, N149, N152, N153, N156, N159, N165, N17, N171, N177, N183, N189, N195, N201, N207, N210, N219, N228, N237, N246, N255, N259, N26, N260, N261, N267, N268, N29, N36, N42, N51, N55, N59, N68, N72, N73, N74, N75, N8, N80, N85, N86, N87, N88, N89, N90, N91, N96;
	sc_out <fs_logic> N388, N389, N390, N391, N418, N419, N420, N421, N422, N423, N446, N447, N448, N449, N450, N767, N768, N850, N863, N864, N865, N866, N874, N878, N879, N880;
	sc_signal <fs_logic> _0000_, _0001_, _0002_, _0003_, _0004_, _0005_, _0006_, _0007_, _0008_, _0009_, _0010_, _0011_, _0012_, _0013_, _0014_, _0015_, _0016_, _0017_, _0018_, _0019_, _0020_, _0021_, _0022_, _0023_, _0024_, _0025_, _0026_, _0027_, _0028_, _0029_, _0030_, _0031_, _0032_, _0033_, _0034_, _0035_, _0036_, _0037_, _0038_, _0039_, _0040_, _0041_, _0042_, _0043_, _0044_, _0045_, _0046_, _0047_, _0048_, _0049_, _0050_, _0051_, _0052_, _0053_, _0054_, _0055_, _0056_, _0057_, _0058_, _0059_, _0060_, _0061_, _0062_, _0063_, _0064_, _0065_, _0066_, _0067_, _0068_, _0069_, _0070_, _0071_, _0072_, _0073_, _0074_, _0075_, _0076_, _0077_, _0078_, _0079_, _0080_, _0081_, _0082_, _0083_, _0084_, _0085_, _0086_, _0087_, _0088_, _0089_, _0090_, _0091_, _0092_, _0093_, _0094_, _0095_, _0096_, _0097_, _0098_, _0099_, _0100_, _0101_, _0102_, _0103_, _0104_, _0105_, _0106_, _0107_, _0108_, _0109_, _0110_, _0111_, _0112_, _0113_, _0114_, _0115_, _0116_, _0117_, _0118_, _0119_, _0120_, _0121_, _0122_, _0123_, _0124_, _0125_, _0126_, _0127_, _0128_, _0129_, _0130_, _0131_, _0132_, _0133_, _0134_, _0135_, _0136_, _0137_, _0138_, _0139_, _0140_, _0141_, _0142_, _0143_, _0144_, _0145_, _0146_, _0147_, _0148_, _0149_, _0150_, _0151_, _0152_, _0153_, _0154_, _0155_, _0156_, _0157_, _0158_, _0159_, _0160_, _0161_, _0162_, _0163_, _0164_, _0165_, _0166_, _0167_, _0168_, _0169_, _0170_, _0171_, _0172_, _0173_, _0174_, _0175_, _0176_, _0177_, _0178_, _0179_, _0180_, _0181_, _0182_, _0183_, _0184_, _0185_, _0186_, _0187_, _0188_, _0189_, _0190_, _0191_, _0192_, _0193_, _0194_, _0195_, _0196_, _0197_, _0198_, _0199_, _0200_, _0201_, _0202_, _0203_, _0204_, _0205_, _0206_, _0207_, _0208_, _0209_, _0210_, _0211_, _0212_, _0213_, _0214_, _0215_, _0216_, _0217_, _0218_, _0219_, _0220_, _0221_, _0222_, _0223_, _0224_, _0225_, _0226_, _0227_, _0228_, _0229_, _0230_, _0231_, _0232_, _0233_, _0234_, _0235_, _0236_, _0237_, _0238_, _0239_, _0240_, _0241_, _0242_, _0243_, _0244_, _0245_, _0246_, _0247_, _0248_, _0249_, _0250_, _0251_, _0252_, _0253_, _0254_, _0255_, _0256_, _0257_, _0258_, _0259_, _0260_, _0261_, _0262_, _0263_, _0264_, _0265_, _0266_, _0267_, _0268_, _0269_, _0270_, _0271_, _0272_, _0273_, _0274_, _0275_, _0276_, _0277_, _0278_, _0279_, _0280_, _0281_, _0282_, _0283_, _0284_, _0285_, _0286_, _0287_, _0288_, _0289_, _0290_, _0291_, _0292_, _0293_, _0294_, _0295_, _0296_, _0297_, _0298_, _0299_, _0300_, _0301_, _0302_, _0303_, _0304_, _0305_, _0306_, _0307_, _0308_, _0309_, _0310_, _0311_, _0312_, _0313_, _0314_, _0315_, _0316_, _0317_, _0318_, _0319_, _0320_, _0321_, _0322_, _0323_, _0324_, _0325_, _0326_, _0327_, _0328_, _0329_, _0330_, _0331_, _0332_, _0333_, _0334_, _0335_, _0336_, _0337_, _0338_, _0339_, _0340_, _0341_, _0342_, _0343_, _0344_, _0345_, _0346_, _0347_, _0348_, _0349_, _0350_, _0351_, _0352_, _0353_, _0354_, _0355_, _0356_, _0357_, _0358_, _0359_, _0360_, _0361_, _0362_, _0363_, _0364_, _0365_, _0366_, _0367_, _0368_, _0369_, _0370_, _0371_, _0372_, _0373_, _0374_, _0375_, _0376_, _0377_, _0378_, _0379_, _0380_, _0381_, _0382_, _0383_, _0384_, _0385_, _0386_, _0387_, _0388_, _0389_, _0390_, _0391_, _0392_, _0393_, _0394_, _0395_, _0396_, _0397_, _0398_, _0399_, _0400_, _0401_, _0402_, _0403_, _0404_, _0405_, _0406_, _0407_, _0408_, _0409_, _0410_, _0411_, _0412_, _0413_, _0414_, _0415_, _0416_, _0417_, _0418_, _0419_, _0420_, _0421_, _0422_, _0423_, _0424_, _0425_, _0426_, _0427_, _0428_, _0429_, _0430_, _0431_, _0432_, _0433_, _0434_, _0435_, _0436_, _0437_, _0438_, _0439_, _0440_, _0441_, _0442_, _0443_, _0444_, _0445_, _0446_, _0447_, _0448_, _0449_, _0450_, _0451_, _0452_, _0453_, _0454_, _0455_, _0456_, _0457_, _0458_, _0459_, _0460_, _0461_, _0462_, _0463_, _0464_, _0465_, _0466_, _0467_, _0468_, _0469_, _0470_, _0471_, _0472_, _0473_, _0474_, _0475_, _0476_, _0477_, _0478_, _0479_, _0480_, _0481_, _0482_, _0483_, _0484_, _0485_, _0486_, _0487_, _0488_, _0489_, _0490_, _0491_, _0492_, _0493_, _0494_, _0495_, _0496_, _0497_, _0498_, _0499_, _0500_, _0501_, _0502_, _0503_, _0504_, _0505_, _0506_, _0507_, _0508_, _0509_, _0510_, _0511_, _0512_, _0513_, _0514_, _0515_, _0516_, _0517_, _0518_, _0519_, _0520_, _0521_, _0522_, _0523_, _0524_, _0525_, _0526_, _0527_, _0528_, _0529_, _0530_, _0531_, _0532_, _0533_, _0534_, _0535_, _0536_, _0537_, _0538_, _0539_, _0540_, _0541_, _0542_, _0543_, _0544_, _0545_, _0546_, _0547_, _0548_, _0549_, _0550_, _0551_, _0552_, _0553_, _0554_, _0555_, _0556_, _0557_, _0558_, _0559_, _0560_, _0561_, _0562_, _0563_, _0564_, _0565_, _0566_, _0567_, _0568_, _0569_, _0570_, _0571_, _0572_, _0573_, _0574_, _0575_, _0576_, _0577_, _0578_, _0579_, _0580_, _0581_, _0582_, _0583_, _0584_, _0585_, _0586_, _0587_, _0588_, _0589_, _0590_, _0591_, _0592_, _0593_, _0594_, _0595_, _0596_, _0597_, _0598_, _0599_, _0600_, _0601_, _0602_, _0603_, _0604_, _0605_, _0606_, _0607_, _0608_, _0609_, _0610_, _0611_, _0612_, _0613_, _0614_, _0615_, _0616_, _0617_, _0618_, _0619_, _0620_, _0621_, _0622_, _0623_, _0624_, _0625_, _0626_, _0627_, _0628_, _0629_, _0630_, _0631_, _0632_, _0633_, _0634_, _0635_, _0636_, _0637_, _0638_, _0639_, _0640_, _0641_, _0642_, _0643_, _0644_, _0645_, _0646_, _0647_, _0648_, _0649_, _0650_, _0651_, _0652_, _0653_, _0654_, _0655_, _0656_, _0657_, _0658_, _0659_, _0660_, _0661_, _0662_, _0663_, _0664_, _0665_, _0666_, _0667_, _0668_, _0669_, _0670_, _0671_, _0672_, _0673_, _0674_, _0675_, _0676_, _0677_, _0678_, _0679_, _0680_, _0681_, _0682_, _0683_, _0684_, _0685_, _0686_, _0687_, _0688_, _0689_, _0690_, _0691_, _0692_, _0693_, _0694_, _0695_, _0696_, _0697_, _0698_, _0699_, _0700_, _0701_, _0702_, _0703_, _0704_, _0705_, _0706_, _0707_, _0708_, _0709_, _0710_, N273, N276, N290, N291, N292, N297, N342, N344, N351, N353, N354, N356, N369, N392, N393, N399, N401, N402, N403, N660, N661, N840, N855, N856, N857, N858, N870, N875, N876, N877;
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

	INV1_X1* _0711_Gate1;
	NAND2_X1* _0712_Gate2;
	NOR2_X1* _0713_Gate3;
	INV1_X1* _0714_Gate4;
	NOR2_X1* _0715_Gate5;
	INV1_X1* _0716_Gate6;
	NAND2_X1* _0717_Gate7;
	NOR2_X1* _0718_Gate8;
	NAND2_X1* _0719_Gate9;
	NOR2_X1* _0720_Gate10;
	NAND2_X1* _0721_Gate11;
	NAND2_X1* _0722_Gate12;
	INV1_X1* _0723_Gate13;
	NAND2_X1* _0724_Gate14;
	NAND2_X1* _0725_Gate15;
	NAND2_X1* _0726_Gate16;
	NOR2_X1* _0727_Gate17;
	NAND2_X1* _0728_Gate18;
	NAND2_X1* _0729_Gate19;
	NAND2_X1* _0730_Gate20;
	INV1_X1* _0731_Gate21;
	INV1_X1* _0732_Gate22;
	INV1_X1* _0733_Gate23;
	INV1_X1* _0734_Gate24;
	NOR2_X1* _0735_Gate25;
	NAND2_X1* _0736_Gate26;
	NOR2_X1* _0737_Gate27;
	NOR2_X1* _0738_Gate28;
	NOR2_X1* _0739_Gate29;
	NAND2_X1* _0740_Gate30;
	NAND2_X1* _0741_Gate31;
	INV1_X1* _0742_Gate32;
	NAND2_X1* _0743_Gate33;
	NOR2_X1* _0744_Gate34;
	INV1_X1* _0745_Gate35;
	NOR2_X1* _0746_Gate36;
	NOR2_X1* _0747_Gate37;
	NAND2_X1* _0748_Gate38;
	NAND2_X1* _0749_Gate39;
	INV1_X1* _0750_Gate40;
	INV1_X1* _0751_Gate41;
	INV1_X1* _0752_Gate42;
	INV1_X1* _0753_Gate43;
	INV1_X1* _0754_Gate44;
	NOR2_X1* _0755_Gate45;
	INV1_X1* _0756_Gate46;
	NOR2_X1* _0757_Gate47;
	NAND2_X1* _0758_Gate48;
	NOR2_X1* _0759_Gate49;
	NOR2_X1* _0760_Gate50;
	NOR2_X1* _0761_Gate51;
	NAND2_X1* _0762_Gate52;
	NOR2_X1* _0763_Gate53;
	NAND2_X1* _0764_Gate54;
	NAND2_X1* _0765_Gate55;
	NAND2_X1* _0766_Gate56;
	INV1_X1* _0767_Gate57;
	NAND2_X1* _0768_Gate58;
	NOR2_X1* _0769_Gate59;
	NAND2_X1* _0770_Gate60;
	INV1_X1* _0771_Gate61;
	NOR2_X1* _0772_Gate62;
	NAND2_X1* _0773_Gate63;
	INV1_X1* _0774_Gate64;
	NOR2_X1* _0775_Gate65;
	NOR2_X1* _0776_Gate66;
	NAND2_X1* _0777_Gate67;
	INV1_X1* _0778_Gate68;
	INV1_X1* _0779_Gate69;
	NOR2_X1* _0780_Gate70;
	NAND2_X1* _0781_Gate71;
	INV1_X1* _0782_Gate72;
	NOR2_X1* _0783_Gate73;
	INV1_X1* _0784_Gate74;
	NOR2_X1* _0785_Gate75;
	NAND2_X1* _0786_Gate76;
	NAND2_X1* _0787_Gate77;
	NAND2_X1* _0788_Gate78;
	NOR2_X1* _0789_Gate79;
	NAND2_X1* _0790_Gate80;
	NOR2_X1* _0791_Gate81;
	NAND2_X1* _0792_Gate82;
	INV1_X1* _0793_Gate83;
	INV1_X1* _0794_Gate84;
	NOR2_X1* _0795_Gate85;
	INV1_X1* _0796_Gate86;
	INV1_X1* _0797_Gate87;
	NOR2_X1* _0798_Gate88;
	NOR2_X1* _0799_Gate89;
	NAND2_X1* _0800_Gate90;
	NOR2_X1* _0801_Gate91;
	NAND2_X1* _0802_Gate92;
	NOR2_X1* _0803_Gate93;
	NAND2_X1* _0804_Gate94;
	INV1_X1* _0805_Gate95;
	INV1_X1* _0806_Gate96;
	NOR2_X1* _0807_Gate97;
	INV1_X1* _0808_Gate98;
	NOR2_X1* _0809_Gate99;
	NOR2_X1* _0810_Gate100;
	INV1_X1* _0811_Gate101;
	NOR2_X1* _0812_Gate102;
	NOR2_X1* _0813_Gate103;
	NAND2_X1* _0814_Gate104;
	INV1_X1* _0815_Gate105;
	NOR2_X1* _0816_Gate106;
	INV1_X1* _0817_Gate107;
	NAND2_X1* _0818_Gate108;
	INV1_X1* _0819_Gate109;
	NOR2_X1* _0820_Gate110;
	NOR2_X1* _0821_Gate111;
	NAND2_X1* _0822_Gate112;
	INV1_X1* _0823_Gate113;
	NOR2_X1* _0824_Gate114;
	NOR2_X1* _0825_Gate115;
	INV1_X1* _0826_Gate116;
	NOR2_X1* _0827_Gate117;
	NAND2_X1* _0828_Gate118;
	NAND2_X1* _0829_Gate119;
	NOR2_X1* _0830_Gate120;
	NOR2_X1* _0831_Gate121;
	NAND2_X1* _0832_Gate122;
	INV1_X1* _0833_Gate123;
	INV1_X1* _0834_Gate124;
	NAND2_X1* _0835_Gate125;
	NAND2_X1* _0836_Gate126;
	NOR2_X1* _0837_Gate127;
	NOR2_X1* _0838_Gate128;
	NOR2_X1* _0839_Gate129;
	NOR2_X1* _0840_Gate130;
	NAND2_X1* _0841_Gate131;
	NAND2_X1* _0842_Gate132;
	NAND2_X1* _0843_Gate133;
	INV1_X1* _0844_Gate134;
	NAND2_X1* _0845_Gate135;
	NOR2_X1* _0846_Gate136;
	NAND2_X1* _0847_Gate137;
	NOR2_X1* _0848_Gate138;
	NAND2_X1* _0849_Gate139;
	NAND2_X1* _0850_Gate140;
	NAND2_X1* _0851_Gate141;
	NOR2_X1* _0852_Gate142;
	NAND2_X1* _0853_Gate143;
	NOR2_X1* _0854_Gate144;
	NAND2_X1* _0855_Gate145;
	NOR2_X1* _0856_Gate146;
	INV1_X1* _0857_Gate147;
	NAND2_X1* _0858_Gate148;
	NOR2_X1* _0859_Gate149;
	NOR2_X1* _0860_Gate150;
	NAND2_X1* _0861_Gate151;
	NOR2_X1* _0862_Gate152;
	NAND2_X1* _0863_Gate153;
	NOR2_X1* _0864_Gate154;
	NAND2_X1* _0865_Gate155;
	INV1_X1* _0866_Gate156;
	NOR2_X1* _0867_Gate157;
	NOR2_X1* _0868_Gate158;
	NOR2_X1* _0869_Gate159;
	NAND2_X1* _0870_Gate160;
	NOR2_X1* _0871_Gate161;
	NAND2_X1* _0872_Gate162;
	NOR2_X1* _0873_Gate163;
	NAND2_X1* _0874_Gate164;
	NOR2_X1* _0875_Gate165;
	INV1_X1* _0876_Gate166;
	NAND2_X1* _0877_Gate167;
	NOR2_X1* _0878_Gate168;
	NOR2_X1* _0879_Gate169;
	NAND2_X1* _0880_Gate170;
	NOR2_X1* _0881_Gate171;
	NAND2_X1* _0882_Gate172;
	NOR2_X1* _0883_Gate173;
	NAND2_X1* _0884_Gate174;
	INV1_X1* _0885_Gate175;
	NOR2_X1* _0886_Gate176;
	INV1_X1* _0887_Gate177;
	NOR2_X1* _0888_Gate178;
	NOR2_X1* _0889_Gate179;
	NAND2_X1* _0890_Gate180;
	NOR2_X1* _0891_Gate181;
	NAND2_X1* _0892_Gate182;
	NOR2_X1* _0893_Gate183;
	NAND2_X1* _0894_Gate184;
	INV1_X1* _0895_Gate185;
	INV1_X1* _0896_Gate186;
	NOR2_X1* _0897_Gate187;
	NOR2_X1* _0898_Gate188;
	INV1_X1* _0899_Gate189;
	NOR2_X1* _0900_Gate190;
	INV1_X1* _0901_Gate191;
	INV1_X1* _0902_Gate192;
	NOR2_X1* _0903_Gate193;
	NOR2_X1* _0904_Gate194;
	NOR2_X1* _0905_Gate195;
	INV1_X1* _0906_Gate196;
	NOR2_X1* _0907_Gate197;
	INV1_X1* _0908_Gate198;
	NOR2_X1* _0909_Gate199;
	NOR2_X1* _0910_Gate200;
	INV1_X1* _0911_Gate201;
	NAND2_X1* _0912_Gate202;
	INV1_X1* _0913_Gate203;
	NOR2_X1* _0914_Gate204;
	NOR2_X1* _0915_Gate205;
	NOR2_X1* _0916_Gate206;
	NOR2_X1* _0917_Gate207;
	INV1_X1* _0918_Gate208;
	NOR2_X1* _0919_Gate209;
	INV1_X1* _0920_Gate210;
	NOR2_X1* _0921_Gate211;
	INV1_X1* _0922_Gate212;
	NOR2_X1* _0923_Gate213;
	INV1_X1* _0924_Gate214;
	NOR2_X1* _0925_Gate215;
	NAND2_X1* _0926_Gate216;
	NOR2_X1* _0927_Gate217;
	NOR2_X1* _0928_Gate218;
	NAND2_X1* _0929_Gate219;
	NOR2_X1* _0930_Gate220;
	INV1_X1* _0931_Gate221;
	NOR2_X1* _0932_Gate222;
	INV1_X1* _0933_Gate223;
	INV1_X1* _0934_Gate224;
	NOR2_X1* _0935_Gate225;
	NOR2_X1* _0936_Gate226;
	NAND2_X1* _0937_Gate227;
	INV1_X1* _0938_Gate228;
	NOR2_X1* _0939_Gate229;
	INV1_X1* _0940_Gate230;
	NOR2_X1* _0941_Gate231;
	INV1_X1* _0942_Gate232;
	NOR2_X1* _0943_Gate233;
	NOR2_X1* _0944_Gate234;
	NAND2_X1* _0945_Gate235;
	INV1_X1* _0946_Gate236;
	NOR2_X1* _0947_Gate237;
	NOR2_X1* _0948_Gate238;
	NOR2_X1* _0949_Gate239;
	NOR2_X1* _0950_Gate240;
	NOR2_X1* _0951_Gate241;
	INV1_X1* _0952_Gate242;
	NOR2_X1* _0953_Gate243;
	INV1_X1* _0954_Gate244;
	INV1_X1* _0955_Gate245;
	NOR2_X1* _0956_Gate246;
	INV1_X1* _0957_Gate247;
	NAND2_X1* _0958_Gate248;
	NOR2_X1* _0959_Gate249;
	NOR2_X1* _0960_Gate250;
	NAND2_X1* _0961_Gate251;
	NAND2_X1* _0962_Gate252;
	NOR2_X1* _0963_Gate253;
	NAND2_X1* _0964_Gate254;
	NAND2_X1* _0965_Gate255;
	NAND2_X1* _0966_Gate256;
	NAND2_X1* _0967_Gate257;
	NOR2_X1* _0968_Gate258;
	NAND2_X1* _0969_Gate259;
	NAND2_X1* _0970_Gate260;
	NAND2_X1* _0971_Gate261;
	NOR2_X1* _0972_Gate262;
	NAND2_X1* _0973_Gate263;
	INV1_X1* _0974_Gate264;
	NAND2_X1* _0975_Gate265;
	NOR2_X1* _0976_Gate266;
	NOR2_X1* _0977_Gate267;
	NAND2_X1* _0978_Gate268;
	NAND2_X1* _0979_Gate269;
	INV1_X1* _0980_Gate270;
	NAND2_X1* _0981_Gate271;
	NOR2_X1* _0982_Gate272;
	NOR2_X1* _0983_Gate273;
	NAND2_X1* _0984_Gate274;
	NOR2_X1* _0985_Gate275;
	NAND2_X1* _0986_Gate276;
	NOR2_X1* _0987_Gate277;
	NAND2_X1* _0988_Gate278;
	NAND2_X1* _0989_Gate279;
	NAND2_X1* _0990_Gate280;
	NOR2_X1* _0991_Gate281;
	NAND2_X1* _0992_Gate282;
	NOR2_X1* _0993_Gate283;
	NAND2_X1* _0994_Gate284;
	NOR2_X1* _0995_Gate285;
	INV1_X1* _0996_Gate286;
	NOR2_X1* _0997_Gate287;
	NAND2_X1* _0998_Gate288;
	NOR2_X1* _0999_Gate289;
	NOR2_X1* _1000_Gate290;
	NAND2_X1* _1001_Gate291;
	NOR2_X1* _1002_Gate292;
	NAND2_X1* _1003_Gate293;
	NOR2_X1* _1004_Gate294;
	NAND2_X1* _1005_Gate295;
	NAND2_X1* _1006_Gate296;
	NAND2_X1* _1007_Gate297;
	NOR2_X1* _1008_Gate298;
	NAND2_X1* _1009_Gate299;
	NOR2_X1* _1010_Gate300;
	NAND2_X1* _1011_Gate301;
	INV1_X1* _1012_Gate302;
	NAND2_X1* _1013_Gate303;
	NAND2_X1* _1014_Gate304;
	NOR2_X1* _1015_Gate305;
	NOR2_X1* _1016_Gate306;
	NAND2_X1* _1017_Gate307;
	NOR2_X1* _1018_Gate308;
	NAND2_X1* _1019_Gate309;
	NOR2_X1* _1020_Gate310;
	NAND2_X1* _1021_Gate311;
	NAND2_X1* _1022_Gate312;
	NAND2_X1* _1023_Gate313;
	NOR2_X1* _1024_Gate314;
	NAND2_X1* _1025_Gate315;
	NOR2_X1* _1026_Gate316;
	NAND2_X1* _1027_Gate317;
	NAND2_X1* _1028_Gate318;
	NOR2_X1* _1029_Gate319;
	INV1_X1* _1030_Gate320;
	INV1_X1* _1031_Gate321;
	NOR2_X1* _1032_Gate322;
	NAND2_X1* _1033_Gate323;
	NAND2_X1* _1034_Gate324;
	INV1_X1* _1035_Gate325;
	NAND2_X1* _1036_Gate326;
	NAND2_X1* _1037_Gate327;
	NOR2_X1* _1038_Gate328;
	INV1_X1* _1039_Gate329;
	NAND2_X1* _1040_Gate330;
	NOR2_X1* _1041_Gate331;
	INV1_X1* _1042_Gate332;
	NOR2_X1* _1043_Gate333;
	NOR2_X1* _1044_Gate334;
	NOR2_X1* _1045_Gate335;
	INV1_X1* _1046_Gate336;
	NOR2_X1* _1047_Gate337;
	NOR2_X1* _1048_Gate338;
	NOR2_X1* _1049_Gate339;
	NOR2_X1* _1050_Gate340;
	NOR2_X1* _1051_Gate341;
	NOR2_X1* _1052_Gate342;
	INV1_X1* _1053_Gate343;
	NOR2_X1* _1054_Gate344;
	NOR2_X1* _1055_Gate345;
	NOR2_X1* _1056_Gate346;
	INV1_X1* _1057_Gate347;
	NOR2_X1* _1058_Gate348;
	NOR2_X1* _1059_Gate349;
	NOR2_X1* _1060_Gate350;
	NOR2_X1* _1061_Gate351;
	NAND2_X1* _1062_Gate352;
	INV1_X1* _1063_Gate353;
	NOR2_X1* _1064_Gate354;
	INV1_X1* _1065_Gate355;
	NOR2_X1* _1066_Gate356;
	NOR2_X1* _1067_Gate357;
	NOR2_X1* _1068_Gate358;
	INV1_X1* _1069_Gate359;
	NOR2_X1* _1070_Gate360;
	NAND2_X1* _1071_Gate361;
	INV1_X1* _1072_Gate362;
	NOR2_X1* _1073_Gate363;
	INV1_X1* _1074_Gate364;
	NOR2_X1* _1075_Gate365;
	INV1_X1* _1076_Gate366;
	NOR2_X1* _1077_Gate367;
	NOR2_X1* _1078_Gate368;
	INV1_X1* _1079_Gate369;
	NOR2_X1* _1080_Gate370;
	NOR2_X1* _1081_Gate371;
	NOR2_X1* _1082_Gate372;
	NOR2_X1* _1083_Gate373;
	NAND2_X1* _1084_Gate374;
	INV1_X1* _1085_Gate375;
	NOR2_X1* _1086_Gate376;
	INV1_X1* _1087_Gate377;
	NOR2_X1* _1088_Gate378;
	NOR2_X1* _1089_Gate379;
	NOR2_X1* _1090_Gate380;
	INV1_X1* _1091_Gate381;
	NOR2_X1* _1092_Gate382;
	NOR2_X1* _1093_Gate383;
	NOR2_X1* _1094_Gate384;
	INV1_X1* _1095_Gate385;
	NOR2_X1* _1096_Gate386;
	NOR2_X1* _1097_Gate387;
	NOR2_X1* _1098_Gate388;
	NOR2_X1* _1099_Gate389;
	NOR2_X1* _1100_Gate390;
	NOR2_X1* _1101_Gate391;
	NOR2_X1* _1102_Gate392;
	NAND2_X1* _1103_Gate393;
	INV1_X1* _1104_Gate394;
	NOR2_X1* _1105_Gate395;
	INV1_X1* _1106_Gate396;
	NOR2_X1* _1107_Gate397;
	NAND2_X1* _1108_Gate398;
	INV1_X1* _1109_Gate399;
	NOR2_X1* _1110_Gate400;
	INV1_X1* _1111_Gate401;
	NAND2_X1* _1112_Gate402;
	NAND2_X1* _1113_Gate403;
	NAND2_X1* _1114_Gate404;
	NAND2_X1* _1115_Gate405;
	NOR2_X1* _1116_Gate406;
	NOR2_X1* _1117_Gate407;
	NOR2_X1* _1118_Gate408;
	INV1_X1* _1119_Gate409;
	INV1_X1* _1120_Gate410;
	NOR2_X1* _1121_Gate411;
	INV1_X1* _1122_Gate412;
	NOR2_X1* _1123_Gate413;
	NAND2_X1* _1124_Gate414;
	INV1_X1* _1125_Gate415;
	NOR2_X1* _1126_Gate416;
	NOR2_X1* _1127_Gate417;
	INV1_X1* _1128_Gate418;
	NOR2_X1* _1129_Gate419;
	NAND2_X1* _1130_Gate420;

	SC_CTOR(c880_netlist)
	{
		numOfGates = 420;

		_0711_Gate1 = new INV1_X1("_0711__instance1");
		_0711_Gate1->id = 1;
		_0711_Gate1->A(_0351_);
		_0711_Gate1->ZN(_0695_);
		_0711_Gate1->faults=48;
		module_map[1] = _0711_Gate1;

		_0712_Gate2 = new NAND2_X1("_0712__instance2");
		_0712_Gate2->id = 2;
		_0712_Gate2->A1(_0672_);
		_0712_Gate2->A2(_0584_);
		_0712_Gate2->ZN(_0696_);
		_0712_Gate2->faults=53;
		module_map[2] = _0712_Gate2;

		_0713_Gate3 = new NOR2_X1("_0713__instance3");
		_0713_Gate3->id = 3;
		_0713_Gate3->A1(_0696_);
		_0713_Gate3->A2(_0695_);
		_0713_Gate3->ZN(_0683_);
		_0713_Gate3->faults=58;
		module_map[3] = _0713_Gate3;

		_0714_Gate4 = new INV1_X1("_0714__instance4");
		_0714_Gate4->id = 4;
		_0714_Gate4->A(_0255_);
		_0714_Gate4->ZN(_0698_);
		_0714_Gate4->faults=48;
		module_map[4] = _0714_Gate4;

		_0715_Gate5 = new NOR2_X1("_0715__instance5");
		_0715_Gate5->id = 5;
		_0715_Gate5->A1(_0698_);
		_0715_Gate5->A2(_0695_);
		_0715_Gate5->ZN(_0699_);
		_0715_Gate5->faults=58;
		module_map[5] = _0715_Gate5;

		_0716_Gate6 = new INV1_X1("_0716__instance6");
		_0716_Gate6->id = 6;
		_0716_Gate6->A(_0327_);
		_0716_Gate6->ZN(_0700_);
		_0716_Gate6->faults=32;
		module_map[6] = _0716_Gate6;

		_0717_Gate7 = new NAND2_X1("_0717__instance7");
		_0717_Gate7->id = 7;
		_0717_Gate7->A1(_0244_);
		_0717_Gate7->A2(_0697_);
		_0717_Gate7->ZN(_0701_);
		_0717_Gate7->faults=53;
		module_map[7] = _0717_Gate7;

		_0718_Gate8 = new NOR2_X1("_0718__instance8");
		_0718_Gate8->id = 8;
		_0718_Gate8->A1(_0701_);
		_0718_Gate8->A2(_0700_);
		_0718_Gate8->ZN(_0703_);
		_0718_Gate8->faults=40;
		module_map[8] = _0718_Gate8;

		_0719_Gate9 = new NAND2_X1("_0719__instance9");
		_0719_Gate9->id = 9;
		_0719_Gate9->A1(_0362_);
		_0719_Gate9->A2(_0672_);
		_0719_Gate9->ZN(_0704_);
		_0719_Gate9->faults=53;
		module_map[9] = _0719_Gate9;

		_0720_Gate10 = new NOR2_X1("_0720__instance10");
		_0720_Gate10->id = 10;
		_0720_Gate10->A1(_0704_);
		_0720_Gate10->A2(_0703_);
		_0720_Gate10->ZN(_0706_);
		_0720_Gate10->faults=24;
		module_map[10] = _0720_Gate10;

		_0721_Gate11 = new NAND2_X1("_0721__instance11");
		_0721_Gate11->id = 11;
		_0721_Gate11->A1(_0706_);
		_0721_Gate11->A2(_0699_);
		_0721_Gate11->ZN(_0707_);
		_0721_Gate11->faults=49;
		module_map[11] = _0721_Gate11;

		_0722_Gate12 = new NAND2_X1("_0722__instance12");
		_0722_Gate12->id = 12;
		_0722_Gate12->A1(_0697_);
		_0722_Gate12->A2(_0690_);
		_0722_Gate12->ZN(_0708_);
		_0722_Gate12->faults=52;
		module_map[12] = _0722_Gate12;

		_0723_Gate13 = new INV1_X1("_0723__instance13");
		_0723_Gate13->id = 13;
		_0723_Gate13->A(_0244_);
		_0723_Gate13->ZN(_0710_);
		_0723_Gate13->faults=48;
		module_map[13] = _0723_Gate13;

		_0724_Gate14 = new NAND2_X1("_0724__instance14");
		_0724_Gate14->id = 14;
		_0724_Gate14->A1(_0698_);
		_0724_Gate14->A2(_0710_);
		_0724_Gate14->ZN(_0232_);
		_0724_Gate14->faults=21;
		module_map[14] = _0724_Gate14;

		_0725_Gate15 = new NAND2_X1("_0725__instance15");
		_0725_Gate15->id = 15;
		_0725_Gate15->A1(_0255_);
		_0725_Gate15->A2(_0244_);
		_0725_Gate15->ZN(_0233_);
		_0725_Gate15->faults=53;
		module_map[15] = _0725_Gate15;

		_0726_Gate16 = new NAND2_X1("_0726__instance16");
		_0726_Gate16->id = 16;
		_0726_Gate16->A1(_0233_);
		_0726_Gate16->A2(_0232_);
		_0726_Gate16->ZN(_0235_);
		_0726_Gate16->faults=36;
		module_map[16] = _0726_Gate16;

		_0727_Gate17 = new NOR2_X1("_0727__instance17");
		_0727_Gate17->id = 17;
		_0727_Gate17->A1(_0235_);
		_0727_Gate17->A2(_0708_);
		_0727_Gate17->ZN(_0236_);
		_0727_Gate17->faults=18;
		module_map[17] = _0727_Gate17;

		_0728_Gate18 = new NAND2_X1("_0728__instance18");
		_0728_Gate18->id = 18;
		_0728_Gate18->A1(_0236_);
		_0728_Gate18->A2(_0683_);
		_0728_Gate18->ZN(_0238_);
		_0728_Gate18->faults=17;
		module_map[18] = _0728_Gate18;

		_0729_Gate19 = new NAND2_X1("_0729__instance19");
		_0729_Gate19->id = 19;
		_0729_Gate19->A1(_0238_);
		_0729_Gate19->A2(_0707_);
		_0729_Gate19->ZN(_0239_);
		_0729_Gate19->faults=49;
		module_map[19] = _0729_Gate19;

		_0730_Gate20 = new NAND2_X1("_0730__instance20");
		_0730_Gate20->id = 20;
		_0730_Gate20->A1(_0239_);
		_0730_Gate20->A2(_0431_);
		_0730_Gate20->ZN(_0240_);
		_0730_Gate20->faults=21;
		module_map[20] = _0730_Gate20;

		_0731_Gate21 = new INV1_X1("_0731__instance21");
		_0731_Gate21->id = 21;
		_0731_Gate21->A(_0457_);
		_0731_Gate21->ZN(_0241_);
		_0731_Gate21->faults=48;
		module_map[21] = _0731_Gate21;

		_0732_Gate22 = new INV1_X1("_0732__instance22");
		_0732_Gate22->id = 22;
		_0732_Gate22->A(_0672_);
		_0732_Gate22->ZN(_0242_);
		_0732_Gate22->faults=48;
		module_map[22] = _0732_Gate22;

		_0733_Gate23 = new INV1_X1("_0733__instance23");
		_0733_Gate23->id = 23;
		_0733_Gate23->A(_0708_);
		_0733_Gate23->ZN(_0243_);
		_0733_Gate23->faults=48;
		module_map[23] = _0733_Gate23;

		_0734_Gate24 = new INV1_X1("_0734__instance24");
		_0734_Gate24->id = 24;
		_0734_Gate24->A(_0584_);
		_0734_Gate24->ZN(_0245_);
		_0734_Gate24->faults=32;
		module_map[24] = _0734_Gate24;

		_0735_Gate25 = new NOR2_X1("_0735__instance25");
		_0735_Gate25->id = 25;
		_0735_Gate25->A1(_0242_);
		_0735_Gate25->A2(_0245_);
		_0735_Gate25->ZN(_0246_);
		_0735_Gate25->faults=24;
		module_map[25] = _0735_Gate25;

		_0736_Gate26 = new NAND2_X1("_0736__instance26");
		_0736_Gate26->id = 26;
		_0736_Gate26->A1(_0699_);
		_0736_Gate26->A2(_0246_);
		_0736_Gate26->ZN(_0247_);
		_0736_Gate26->faults=52;
		module_map[26] = _0736_Gate26;

		_0737_Gate27 = new NOR2_X1("_0737__instance27");
		_0737_Gate27->id = 27;
		_0737_Gate27->A1(_0247_);
		_0737_Gate27->A2(_0243_);
		_0737_Gate27->ZN(_0248_);
		_0737_Gate27->faults=42;
		module_map[27] = _0737_Gate27;

		_0738_Gate28 = new NOR2_X1("_0738__instance28");
		_0738_Gate28->id = 28;
		_0738_Gate28->A1(_0248_);
		_0738_Gate28->A2(_0242_);
		_0738_Gate28->ZN(_0249_);
		_0738_Gate28->faults=50;
		module_map[28] = _0738_Gate28;

		_0739_Gate29 = new NOR2_X1("_0739__instance29");
		_0739_Gate29->id = 29;
		_0739_Gate29->A1(_0249_);
		_0739_Gate29->A2(_0241_);
		_0739_Gate29->ZN(_0250_);
		_0739_Gate29->faults=42;
		module_map[29] = _0739_Gate29;

		_0740_Gate30 = new NAND2_X1("_0740__instance30");
		_0740_Gate30->id = 30;
		_0740_Gate30->A1(_0683_);
		_0740_Gate30->A2(_0544_);
		_0740_Gate30->ZN(_0251_);
		_0740_Gate30->faults=53;
		module_map[30] = _0740_Gate30;

		_0741_Gate31 = new NAND2_X1("_0741__instance31");
		_0741_Gate31->id = 31;
		_0741_Gate31->A1(_0515_);
		_0741_Gate31->A2(_0327_);
		_0741_Gate31->ZN(_0252_);
		_0741_Gate31->faults=53;
		module_map[31] = _0741_Gate31;

		_0742_Gate32 = new INV1_X1("_0742__instance32");
		_0742_Gate32->id = 32;
		_0742_Gate32->A(_0564_);
		_0742_Gate32->ZN(_0253_);
		_0742_Gate32->faults=16;
		module_map[32] = _0742_Gate32;

		_0743_Gate33 = new NAND2_X1("_0743__instance33");
		_0743_Gate33->id = 33;
		_0743_Gate33->A1(_0253_);
		_0743_Gate33->A2(_0489_);
		_0743_Gate33->ZN(_0254_);
		_0743_Gate33->faults=33;
		module_map[33] = _0743_Gate33;

		_0744_Gate34 = new NOR2_X1("_0744__instance34");
		_0744_Gate34->id = 34;
		_0744_Gate34->A1(_0254_);
		_0744_Gate34->A2(_0252_);
		_0744_Gate34->ZN(_0256_);
		_0744_Gate34->faults=2;
		module_map[34] = _0744_Gate34;

		_0745_Gate35 = new INV1_X1("_0745__instance35");
		_0745_Gate35->id = 35;
		_0745_Gate35->A(_0256_);
		_0745_Gate35->ZN(_0257_);
		_0745_Gate35->faults=48;
		module_map[35] = _0745_Gate35;

		_0746_Gate36 = new NOR2_X1("_0746__instance36");
		_0746_Gate36->id = 36;
		_0746_Gate36->A1(_0257_);
		_0746_Gate36->A2(_0251_);
		_0746_Gate36->ZN(_0259_);
		_0746_Gate36->faults=58;
		module_map[36] = _0746_Gate36;

		_0747_Gate37 = new NOR2_X1("_0747__instance37");
		_0747_Gate37->id = 37;
		_0747_Gate37->A1(_0259_);
		_0747_Gate37->A2(_0250_);
		_0747_Gate37->ZN(_0260_);
		_0747_Gate37->faults=24;
		module_map[37] = _0747_Gate37;

		_0748_Gate38 = new NAND2_X1("_0748__instance38");
		_0748_Gate38->id = 38;
		_0748_Gate38->A1(_0260_);
		_0748_Gate38->A2(_0240_);
		_0748_Gate38->ZN(_0261_);
		_0748_Gate38->faults=16;
		module_map[38] = _0748_Gate38;

		_0749_Gate39 = new NAND2_X1("_0749__instance39");
		_0749_Gate39->id = 39;
		_0749_Gate39->A1(_0261_);
		_0749_Gate39->A2(_0231_);
		_0749_Gate39->ZN(_0262_);
		_0749_Gate39->faults=49;
		module_map[39] = _0749_Gate39;

		_0750_Gate40 = new INV1_X1("_0750__instance40");
		_0750_Gate40->id = 40;
		_0750_Gate40->A(_0262_);
		_0750_Gate40->ZN(_0263_);
		_0750_Gate40->faults=48;
		module_map[40] = _0750_Gate40;

		_0751_Gate41 = new INV1_X1("_0751__instance41");
		_0751_Gate41->id = 41;
		_0751_Gate41->A(_0231_);
		_0751_Gate41->ZN(_0264_);
		_0751_Gate41->faults=48;
		module_map[41] = _0751_Gate41;

		_0752_Gate42 = new INV1_X1("_0752__instance42");
		_0752_Gate42->id = 42;
		_0752_Gate42->A(_0431_);
		_0752_Gate42->ZN(_0265_);
		_0752_Gate42->faults=48;
		module_map[42] = _0752_Gate42;

		_0753_Gate43 = new INV1_X1("_0753__instance43");
		_0753_Gate43->id = 43;
		_0753_Gate43->A(_0707_);
		_0753_Gate43->ZN(_0267_);
		_0753_Gate43->faults=32;
		module_map[43] = _0753_Gate43;

		_0754_Gate44 = new INV1_X1("_0754__instance44");
		_0754_Gate44->id = 44;
		_0754_Gate44->A(_0683_);
		_0754_Gate44->ZN(_0268_);
		_0754_Gate44->faults=32;
		module_map[44] = _0754_Gate44;

		_0755_Gate45 = new NOR2_X1("_0755__instance45");
		_0755_Gate45->id = 45;
		_0755_Gate45->A1(_0255_);
		_0755_Gate45->A2(_0244_);
		_0755_Gate45->ZN(_0269_);
		_0755_Gate45->faults=42;
		module_map[45] = _0755_Gate45;

		_0756_Gate46 = new INV1_X1("_0756__instance46");
		_0756_Gate46->id = 46;
		_0756_Gate46->A(_0233_);
		_0756_Gate46->ZN(_0270_);
		_0756_Gate46->faults=32;
		module_map[46] = _0756_Gate46;

		_0757_Gate47 = new NOR2_X1("_0757__instance47");
		_0757_Gate47->id = 47;
		_0757_Gate47->A1(_0270_);
		_0757_Gate47->A2(_0269_);
		_0757_Gate47->ZN(_0271_);
		_0757_Gate47->faults=16;
		module_map[47] = _0757_Gate47;

		_0758_Gate48 = new NAND2_X1("_0758__instance48");
		_0758_Gate48->id = 48;
		_0758_Gate48->A1(_0271_);
		_0758_Gate48->A2(_0243_);
		_0758_Gate48->ZN(_0272_);
		_0758_Gate48->faults=33;
		module_map[48] = _0758_Gate48;

		_0759_Gate49 = new NOR2_X1("_0759__instance49");
		_0759_Gate49->id = 49;
		_0759_Gate49->A1(_0272_);
		_0759_Gate49->A2(_0268_);
		_0759_Gate49->ZN(_0273_);
		_0759_Gate49->faults=32;
		module_map[49] = _0759_Gate49;

		_0760_Gate50 = new NOR2_X1("_0760__instance50");
		_0760_Gate50->id = 50;
		_0760_Gate50->A1(_0273_);
		_0760_Gate50->A2(_0267_);
		_0760_Gate50->ZN(_0274_);
		_0760_Gate50->faults=48;
		module_map[50] = _0760_Gate50;

		_0761_Gate51 = new NOR2_X1("_0761__instance51");
		_0761_Gate51->id = 51;
		_0761_Gate51->A1(_0274_);
		_0761_Gate51->A2(_0265_);
		_0761_Gate51->ZN(_0276_);
		_0761_Gate51->faults=42;
		module_map[51] = _0761_Gate51;

		_0762_Gate52 = new NAND2_X1("_0762__instance52");
		_0762_Gate52->id = 52;
		_0762_Gate52->A1(_0255_);
		_0762_Gate52->A2(_0351_);
		_0762_Gate52->ZN(_0277_);
		_0762_Gate52->faults=37;
		module_map[52] = _0762_Gate52;

		_0763_Gate53 = new NOR2_X1("_0763__instance53");
		_0763_Gate53->id = 53;
		_0763_Gate53->A1(_0277_);
		_0763_Gate53->A2(_0696_);
		_0763_Gate53->ZN(_0278_);
		_0763_Gate53->faults=18;
		module_map[53] = _0763_Gate53;

		_0764_Gate54 = new NAND2_X1("_0764__instance54");
		_0764_Gate54->id = 54;
		_0764_Gate54->A1(_0278_);
		_0764_Gate54->A2(_0708_);
		_0764_Gate54->ZN(_0279_);
		_0764_Gate54->faults=17;
		module_map[54] = _0764_Gate54;

		_0765_Gate55 = new NAND2_X1("_0765__instance55");
		_0765_Gate55->id = 55;
		_0765_Gate55->A1(_0279_);
		_0765_Gate55->A2(_0672_);
		_0765_Gate55->ZN(_0280_);
		_0765_Gate55->faults=49;
		module_map[55] = _0765_Gate55;

		_0766_Gate56 = new NAND2_X1("_0766__instance56");
		_0766_Gate56->id = 56;
		_0766_Gate56->A1(_0280_);
		_0766_Gate56->A2(_0457_);
		_0766_Gate56->ZN(_0281_);
		_0766_Gate56->faults=21;
		module_map[56] = _0766_Gate56;

		_0767_Gate57 = new INV1_X1("_0767__instance57");
		_0767_Gate57->id = 57;
		_0767_Gate57->A(_0259_);
		_0767_Gate57->ZN(_0283_);
		_0767_Gate57->faults=48;
		module_map[57] = _0767_Gate57;

		_0768_Gate58 = new NAND2_X1("_0768__instance58");
		_0768_Gate58->id = 58;
		_0768_Gate58->A1(_0283_);
		_0768_Gate58->A2(_0281_);
		_0768_Gate58->ZN(_0284_);
		_0768_Gate58->faults=36;
		module_map[58] = _0768_Gate58;

		_0769_Gate59 = new NOR2_X1("_0769__instance59");
		_0769_Gate59->id = 59;
		_0769_Gate59->A1(_0284_);
		_0769_Gate59->A2(_0276_);
		_0769_Gate59->ZN(_0285_);
		_0769_Gate59->faults=48;
		module_map[59] = _0769_Gate59;

		_0770_Gate60 = new NAND2_X1("_0770__instance60");
		_0770_Gate60->id = 60;
		_0770_Gate60->A1(_0285_);
		_0770_Gate60->A2(_0264_);
		_0770_Gate60->ZN(_0286_);
		_0770_Gate60->faults=53;
		module_map[60] = _0770_Gate60;

		_0771_Gate61 = new INV1_X1("_0771__instance61");
		_0771_Gate61->id = 61;
		_0771_Gate61->A(_0286_);
		_0771_Gate61->ZN(_0287_);
		_0771_Gate61->faults=32;
		module_map[61] = _0771_Gate61;

		_0772_Gate62 = new NOR2_X1("_0772__instance62");
		_0772_Gate62->id = 62;
		_0772_Gate62->A1(_0287_);
		_0772_Gate62->A2(_0263_);
		_0772_Gate62->ZN(_0288_);
		_0772_Gate62->faults=50;
		module_map[62] = _0772_Gate62;

		_0773_Gate63 = new NAND2_X1("_0773__instance63");
		_0773_Gate63->id = 63;
		_0773_Gate63->A1(_0288_);
		_0773_Gate63->A2(_0676_);
		_0773_Gate63->ZN(_0290_);
		_0773_Gate63->faults=21;
		module_map[63] = _0773_Gate63;

		_0774_Gate64 = new INV1_X1("_0774__instance64");
		_0774_Gate64->id = 64;
		_0774_Gate64->A(_0677_);
		_0774_Gate64->ZN(_0291_);
		_0774_Gate64->faults=48;
		module_map[64] = _0774_Gate64;

		_0775_Gate65 = new NOR2_X1("_0775__instance65");
		_0775_Gate65->id = 65;
		_0775_Gate65->A1(_0288_);
		_0775_Gate65->A2(_0676_);
		_0775_Gate65->ZN(_0292_);
		_0775_Gate65->faults=42;
		module_map[65] = _0775_Gate65;

		_0776_Gate66 = new NOR2_X1("_0776__instance66");
		_0776_Gate66->id = 66;
		_0776_Gate66->A1(_0292_);
		_0776_Gate66->A2(_0291_);
		_0776_Gate66->ZN(_0293_);
		_0776_Gate66->faults=18;
		module_map[66] = _0776_Gate66;

		_0777_Gate67 = new NAND2_X1("_0777__instance67");
		_0777_Gate67->id = 67;
		_0777_Gate67->A1(_0293_);
		_0777_Gate67->A2(_0290_);
		_0777_Gate67->ZN(_0294_);
		_0777_Gate67->faults=16;
		module_map[67] = _0777_Gate67;

		_0778_Gate68 = new INV1_X1("_0778__instance68");
		_0778_Gate68->id = 68;
		_0778_Gate68->A(_0689_);
		_0778_Gate68->ZN(_0295_);
		_0778_Gate68->faults=48;
		module_map[68] = _0778_Gate68;

		_0779_Gate69 = new INV1_X1("_0779__instance69");
		_0779_Gate69->id = 69;
		_0779_Gate69->A(_0288_);
		_0779_Gate69->ZN(_0297_);
		_0779_Gate69->faults=32;
		module_map[69] = _0779_Gate69;

		_0780_Gate70 = new NOR2_X1("_0780__instance70");
		_0780_Gate70->id = 70;
		_0780_Gate70->A1(_0297_);
		_0780_Gate70->A2(_0295_);
		_0780_Gate70->ZN(_0299_);
		_0780_Gate70->faults=34;
		module_map[70] = _0780_Gate70;

		_0781_Gate71 = new NAND2_X1("_0781__instance71");
		_0781_Gate71->id = 71;
		_0781_Gate71->A1(_0263_);
		_0781_Gate71->A2(_0678_);
		_0781_Gate71->ZN(_0300_);
		_0781_Gate71->faults=21;
		module_map[71] = _0781_Gate71;

		_0782_Gate72 = new INV1_X1("_0782__instance72");
		_0782_Gate72->id = 72;
		_0782_Gate72->A(_0688_);
		_0782_Gate72->ZN(_0302_);
		_0782_Gate72->faults=48;
		module_map[72] = _0782_Gate72;

		_0783_Gate73 = new NOR2_X1("_0783__instance73");
		_0783_Gate73->id = 73;
		_0783_Gate73->A1(_0285_);
		_0783_Gate73->A2(_0302_);
		_0783_Gate73->ZN(_0303_);
		_0783_Gate73->faults=42;
		module_map[73] = _0783_Gate73;

		_0784_Gate74 = new INV1_X1("_0784__instance74");
		_0784_Gate74->id = 74;
		_0784_Gate74->A(_0544_);
		_0784_Gate74->ZN(_0304_);
		_0784_Gate74->faults=32;
		module_map[74] = _0784_Gate74;

		_0785_Gate75 = new NOR2_X1("_0785__instance75");
		_0785_Gate75->id = 75;
		_0785_Gate75->A1(_0704_);
		_0785_Gate75->A2(_0304_);
		_0785_Gate75->ZN(_0305_);
		_0785_Gate75->faults=24;
		module_map[75] = _0785_Gate75;

		_0786_Gate76 = new NAND2_X1("_0786__instance76");
		_0786_Gate76->id = 76;
		_0786_Gate76->A1(_0305_);
		_0786_Gate76->A2(_0679_);
		_0786_Gate76->ZN(_0306_);
		_0786_Gate76->faults=49;
		module_map[76] = _0786_Gate76;

		_0787_Gate77 = new NAND2_X1("_0787__instance77");
		_0787_Gate77->id = 77;
		_0787_Gate77->A1(_0681_);
		_0787_Gate77->A2(_0697_);
		_0787_Gate77->ZN(_0307_);
		_0787_Gate77->faults=53;
		module_map[77] = _0787_Gate77;

		_0788_Gate78 = new NAND2_X1("_0788__instance78");
		_0788_Gate78->id = 78;
		_0788_Gate78->A1(_0682_);
		_0788_Gate78->A2(_0244_);
		_0788_Gate78->ZN(_0308_);
		_0788_Gate78->faults=33;
		module_map[78] = _0788_Gate78;

		_0789_Gate79 = new NOR2_X1("_0789__instance79");
		_0789_Gate79->id = 79;
		_0789_Gate79->A1(_0308_);
		_0789_Gate79->A2(_0307_);
		_0789_Gate79->ZN(_0309_);
		_0789_Gate79->faults=18;
		module_map[79] = _0789_Gate79;

		_0790_Gate80 = new NAND2_X1("_0790__instance80");
		_0790_Gate80->id = 80;
		_0790_Gate80->A1(_0309_);
		_0790_Gate80->A2(_0680_);
		_0790_Gate80->ZN(_0310_);
		_0790_Gate80->faults=32;
		module_map[80] = _0790_Gate80;

		_0791_Gate81 = new NOR2_X1("_0791__instance81");
		_0791_Gate81->id = 81;
		_0791_Gate81->A1(_0310_);
		_0791_Gate81->A2(_0306_);
		_0791_Gate81->ZN(_0311_);
		_0791_Gate81->faults=50;
		module_map[81] = _0791_Gate81;

		_0792_Gate82 = new NAND2_X1("_0792__instance82");
		_0792_Gate82->id = 82;
		_0792_Gate82->A1(_0311_);
		_0792_Gate82->A2(_0231_);
		_0792_Gate82->ZN(_0313_);
		_0792_Gate82->faults=21;
		module_map[82] = _0792_Gate82;

		_0793_Gate83 = new INV1_X1("_0793__instance83");
		_0793_Gate83->id = 83;
		_0793_Gate83->A(_0684_);
		_0793_Gate83->ZN(_0314_);
		_0793_Gate83->faults=48;
		module_map[83] = _0793_Gate83;

		_0794_Gate84 = new INV1_X1("_0794__instance84");
		_0794_Gate84->id = 84;
		_0794_Gate84->A(_0685_);
		_0794_Gate84->ZN(_0315_);
		_0794_Gate84->faults=32;
		module_map[84] = _0794_Gate84;

		_0795_Gate85 = new NOR2_X1("_0795__instance85");
		_0795_Gate85->id = 85;
		_0795_Gate85->A1(_0315_);
		_0795_Gate85->A2(_0314_);
		_0795_Gate85->ZN(_0316_);
		_0795_Gate85->faults=34;
		module_map[85] = _0795_Gate85;

		_0796_Gate86 = new INV1_X1("_0796__instance86");
		_0796_Gate86->id = 86;
		_0796_Gate86->A(_0686_);
		_0796_Gate86->ZN(_0317_);
		_0796_Gate86->faults=48;
		module_map[86] = _0796_Gate86;

		_0797_Gate87 = new INV1_X1("_0797__instance87");
		_0797_Gate87->id = 87;
		_0797_Gate87->A(_0687_);
		_0797_Gate87->ZN(_0318_);
		_0797_Gate87->faults=48;
		module_map[87] = _0797_Gate87;

		_0798_Gate88 = new NOR2_X1("_0798__instance88");
		_0798_Gate88->id = 88;
		_0798_Gate88->A1(_0318_);
		_0798_Gate88->A2(_0317_);
		_0798_Gate88->ZN(_0320_);
		_0798_Gate88->faults=42;
		module_map[88] = _0798_Gate88;

		_0799_Gate89 = new NOR2_X1("_0799__instance89");
		_0799_Gate89->id = 89;
		_0799_Gate89->A1(_0320_);
		_0799_Gate89->A2(_0316_);
		_0799_Gate89->ZN(_0321_);
		_0799_Gate89->faults=16;
		module_map[89] = _0799_Gate89;

		_0800_Gate90 = new NAND2_X1("_0800__instance90");
		_0800_Gate90->id = 90;
		_0800_Gate90->A1(_0321_);
		_0800_Gate90->A2(_0313_);
		_0800_Gate90->ZN(_0323_);
		_0800_Gate90->faults=32;
		module_map[90] = _0800_Gate90;

		_0801_Gate91 = new NOR2_X1("_0801__instance91");
		_0801_Gate91->id = 91;
		_0801_Gate91->A1(_0323_);
		_0801_Gate91->A2(_0303_);
		_0801_Gate91->ZN(_0324_);
		_0801_Gate91->faults=16;
		module_map[91] = _0801_Gate91;

		_0802_Gate92 = new NAND2_X1("_0802__instance92");
		_0802_Gate92->id = 92;
		_0802_Gate92->A1(_0324_);
		_0802_Gate92->A2(_0300_);
		_0802_Gate92->ZN(_0325_);
		_0802_Gate92->faults=32;
		module_map[92] = _0802_Gate92;

		_0803_Gate93 = new NOR2_X1("_0803__instance93");
		_0803_Gate93->id = 93;
		_0803_Gate93->A1(_0325_);
		_0803_Gate93->A2(_0299_);
		_0803_Gate93->ZN(_0326_);
		_0803_Gate93->faults=16;
		module_map[93] = _0803_Gate93;

		_0804_Gate94 = new NAND2_X1("_0804__instance94");
		_0804_Gate94->id = 94;
		_0804_Gate94->A1(_0326_);
		_0804_Gate94->A2(_0294_);
		_0804_Gate94->ZN(_0691_);
		_0804_Gate94->faults=48;
		module_map[94] = _0804_Gate94;

		_0805_Gate95 = new INV1_X1("_0805__instance95");
		_0805_Gate95->id = 95;
		_0805_Gate95->A(_0692_);
		_0805_Gate95->ZN(_0328_);
		_0805_Gate95->faults=48;
		module_map[95] = _0805_Gate95;

		_0806_Gate96 = new INV1_X1("_0806__instance96");
		_0806_Gate96->id = 96;
		_0806_Gate96->A(_0693_);
		_0806_Gate96->ZN(_0329_);
		_0806_Gate96->faults=48;
		module_map[96] = _0806_Gate96;

		_0807_Gate97 = new NOR2_X1("_0807__instance97");
		_0807_Gate97->id = 97;
		_0807_Gate97->A1(_0274_);
		_0807_Gate97->A2(_0329_);
		_0807_Gate97->ZN(_0330_);
		_0807_Gate97->faults=42;
		module_map[97] = _0807_Gate97;

		_0808_Gate98 = new INV1_X1("_0808__instance98");
		_0808_Gate98->id = 98;
		_0808_Gate98->A(_0694_);
		_0808_Gate98->ZN(_0331_);
		_0808_Gate98->faults=48;
		module_map[98] = _0808_Gate98;

		_0809_Gate99 = new NOR2_X1("_0809__instance99");
		_0809_Gate99->id = 99;
		_0809_Gate99->A1(_0249_);
		_0809_Gate99->A2(_0331_);
		_0809_Gate99->ZN(_0333_);
		_0809_Gate99->faults=42;
		module_map[99] = _0809_Gate99;

		_0810_Gate100 = new NOR2_X1("_0810__instance100");
		_0810_Gate100->id = 100;
		_0810_Gate100->A1(_0333_);
		_0810_Gate100->A2(_0259_);
		_0810_Gate100->ZN(_0334_);
		_0810_Gate100->faults=2;
		module_map[100] = _0810_Gate100;

		_0811_Gate101 = new INV1_X1("_0811__instance101");
		_0811_Gate101->id = 101;
		_0811_Gate101->A(_0334_);
		_0811_Gate101->ZN(_0336_);
		_0811_Gate101->faults=32;
		module_map[101] = _0811_Gate101;

		_0812_Gate102 = new NOR2_X1("_0812__instance102");
		_0812_Gate102->id = 102;
		_0812_Gate102->A1(_0336_);
		_0812_Gate102->A2(_0330_);
		_0812_Gate102->ZN(_0337_);
		_0812_Gate102->faults=48;
		module_map[102] = _0812_Gate102;

		_0813_Gate103 = new NOR2_X1("_0813__instance103");
		_0813_Gate103->id = 103;
		_0813_Gate103->A1(_0337_);
		_0813_Gate103->A2(_0328_);
		_0813_Gate103->ZN(_0338_);
		_0813_Gate103->faults=58;
		module_map[103] = _0813_Gate103;

		_0814_Gate104 = new NAND2_X1("_0814__instance104");
		_0814_Gate104->id = 104;
		_0814_Gate104->A1(_0337_);
		_0814_Gate104->A2(_0328_);
		_0814_Gate104->ZN(_0339_);
		_0814_Gate104->faults=5;
		module_map[104] = _0814_Gate104;

		_0815_Gate105 = new INV1_X1("_0815__instance105");
		_0815_Gate105->id = 105;
		_0815_Gate105->A(_0339_);
		_0815_Gate105->ZN(_0340_);
		_0815_Gate105->faults=48;
		module_map[105] = _0815_Gate105;

		_0816_Gate106 = new NOR2_X1("_0816__instance106");
		_0816_Gate106->id = 106;
		_0816_Gate106->A1(_0340_);
		_0816_Gate106->A2(_0338_);
		_0816_Gate106->ZN(_0341_);
		_0816_Gate106->faults=58;
		module_map[106] = _0816_Gate106;

		_0817_Gate107 = new INV1_X1("_0817__instance107");
		_0817_Gate107->id = 107;
		_0817_Gate107->A(_0702_);
		_0817_Gate107->ZN(_0342_);
		_0817_Gate107->faults=48;
		module_map[107] = _0817_Gate107;

		_0818_Gate108 = new NAND2_X1("_0818__instance108");
		_0818_Gate108->id = 108;
		_0818_Gate108->A1(_0239_);
		_0818_Gate108->A2(_0709_);
		_0818_Gate108->ZN(_0343_);
		_0818_Gate108->faults=21;
		module_map[108] = _0818_Gate108;

		_0819_Gate109 = new INV1_X1("_0819__instance109");
		_0819_Gate109->id = 109;
		_0819_Gate109->A(_0705_);
		_0819_Gate109->ZN(_0344_);
		_0819_Gate109->faults=48;
		module_map[109] = _0819_Gate109;

		_0820_Gate110 = new NOR2_X1("_0820__instance110");
		_0820_Gate110->id = 110;
		_0820_Gate110->A1(_0249_);
		_0820_Gate110->A2(_0344_);
		_0820_Gate110->ZN(_0346_);
		_0820_Gate110->faults=42;
		module_map[110] = _0820_Gate110;

		_0821_Gate111 = new NOR2_X1("_0821__instance111");
		_0821_Gate111->id = 111;
		_0821_Gate111->A1(_0346_);
		_0821_Gate111->A2(_0259_);
		_0821_Gate111->ZN(_0347_);
		_0821_Gate111->faults=18;
		module_map[111] = _0821_Gate111;

		_0822_Gate112 = new NAND2_X1("_0822__instance112");
		_0822_Gate112->id = 112;
		_0822_Gate112->A1(_0347_);
		_0822_Gate112->A2(_0343_);
		_0822_Gate112->ZN(_0348_);
		_0822_Gate112->faults=48;
		module_map[112] = _0822_Gate112;

		_0823_Gate113 = new INV1_X1("_0823__instance113");
		_0823_Gate113->id = 113;
		_0823_Gate113->A(_0348_);
		_0823_Gate113->ZN(_0350_);
		_0823_Gate113->faults=48;
		module_map[113] = _0823_Gate113;

		_0824_Gate114 = new NOR2_X1("_0824__instance114");
		_0824_Gate114->id = 114;
		_0824_Gate114->A1(_0350_);
		_0824_Gate114->A2(_0342_);
		_0824_Gate114->ZN(_0352_);
		_0824_Gate114->faults=58;
		module_map[114] = _0824_Gate114;

		_0825_Gate115 = new NOR2_X1("_0825__instance115");
		_0825_Gate115->id = 115;
		_0825_Gate115->A1(_0348_);
		_0825_Gate115->A2(_0702_);
		_0825_Gate115->ZN(_0353_);
		_0825_Gate115->faults=58;
		module_map[115] = _0825_Gate115;

		_0826_Gate116 = new INV1_X1("_0826__instance116");
		_0826_Gate116->id = 116;
		_0826_Gate116->A(_0234_);
		_0826_Gate116->ZN(_0354_);
		_0826_Gate116->faults=48;
		module_map[116] = _0826_Gate116;

		_0827_Gate117 = new NOR2_X1("_0827__instance117");
		_0827_Gate117->id = 117;
		_0827_Gate117->A1(_0274_);
		_0827_Gate117->A2(_0318_);
		_0827_Gate117->ZN(_0355_);
		_0827_Gate117->faults=42;
		module_map[117] = _0827_Gate117;

		_0828_Gate118 = new NAND2_X1("_0828__instance118");
		_0828_Gate118->id = 118;
		_0828_Gate118->A1(_0280_);
		_0828_Gate118->A2(_0237_);
		_0828_Gate118->ZN(_0356_);
		_0828_Gate118->faults=21;
		module_map[118] = _0828_Gate118;

		_0829_Gate119 = new NAND2_X1("_0829__instance119");
		_0829_Gate119->id = 119;
		_0829_Gate119->A1(_0356_);
		_0829_Gate119->A2(_0283_);
		_0829_Gate119->ZN(_0357_);
		_0829_Gate119->faults=33;
		module_map[119] = _0829_Gate119;

		_0830_Gate120 = new NOR2_X1("_0830__instance120");
		_0830_Gate120->id = 120;
		_0830_Gate120->A1(_0357_);
		_0830_Gate120->A2(_0355_);
		_0830_Gate120->ZN(_0358_);
		_0830_Gate120->faults=48;
		module_map[120] = _0830_Gate120;

		_0831_Gate121 = new NOR2_X1("_0831__instance121");
		_0831_Gate121->id = 121;
		_0831_Gate121->A1(_0358_);
		_0831_Gate121->A2(_0354_);
		_0831_Gate121->ZN(_0359_);
		_0831_Gate121->faults=58;
		module_map[121] = _0831_Gate121;

		_0832_Gate122 = new NAND2_X1("_0832__instance122");
		_0832_Gate122->id = 122;
		_0832_Gate122->A1(_0358_);
		_0832_Gate122->A2(_0354_);
		_0832_Gate122->ZN(_0360_);
		_0832_Gate122->faults=5;
		module_map[122] = _0832_Gate122;

		_0833_Gate123 = new INV1_X1("_0833__instance123");
		_0833_Gate123->id = 123;
		_0833_Gate123->A(_0360_);
		_0833_Gate123->ZN(_0361_);
		_0833_Gate123->faults=48;
		module_map[123] = _0833_Gate123;

		_0834_Gate124 = new INV1_X1("_0834__instance124");
		_0834_Gate124->id = 124;
		_0834_Gate124->A(_0676_);
		_0834_Gate124->ZN(_0363_);
		_0834_Gate124->faults=16;
		module_map[124] = _0834_Gate124;

		_0835_Gate125 = new NAND2_X1("_0835__instance125");
		_0835_Gate125->id = 125;
		_0835_Gate125->A1(_0262_);
		_0835_Gate125->A2(_0363_);
		_0835_Gate125->ZN(_0364_);
		_0835_Gate125->faults=20;
		module_map[125] = _0835_Gate125;

		_0836_Gate126 = new NAND2_X1("_0836__instance126");
		_0836_Gate126->id = 126;
		_0836_Gate126->A1(_0364_);
		_0836_Gate126->A2(_0286_);
		_0836_Gate126->ZN(_0365_);
		_0836_Gate126->faults=49;
		module_map[126] = _0836_Gate126;

		_0837_Gate127 = new NOR2_X1("_0837__instance127");
		_0837_Gate127->id = 127;
		_0837_Gate127->A1(_0365_);
		_0837_Gate127->A2(_0361_);
		_0837_Gate127->ZN(_0366_);
		_0837_Gate127->faults=42;
		module_map[127] = _0837_Gate127;

		_0838_Gate128 = new NOR2_X1("_0838__instance128");
		_0838_Gate128->id = 128;
		_0838_Gate128->A1(_0366_);
		_0838_Gate128->A2(_0359_);
		_0838_Gate128->ZN(_0367_);
		_0838_Gate128->faults=50;
		module_map[128] = _0838_Gate128;

		_0839_Gate129 = new NOR2_X1("_0839__instance129");
		_0839_Gate129->id = 129;
		_0839_Gate129->A1(_0367_);
		_0839_Gate129->A2(_0353_);
		_0839_Gate129->ZN(_0368_);
		_0839_Gate129->faults=42;
		module_map[129] = _0839_Gate129;

		_0840_Gate130 = new NOR2_X1("_0840__instance130");
		_0840_Gate130->id = 130;
		_0840_Gate130->A1(_0368_);
		_0840_Gate130->A2(_0352_);
		_0840_Gate130->ZN(_0370_);
		_0840_Gate130->faults=50;
		module_map[130] = _0840_Gate130;

		_0841_Gate131 = new NAND2_X1("_0841__instance131");
		_0841_Gate131->id = 131;
		_0841_Gate131->A1(_0370_);
		_0841_Gate131->A2(_0677_);
		_0841_Gate131->ZN(_0371_);
		_0841_Gate131->faults=21;
		module_map[131] = _0841_Gate131;

		_0842_Gate132 = new NAND2_X1("_0842__instance132");
		_0842_Gate132->id = 132;
		_0842_Gate132->A1(_0371_);
		_0842_Gate132->A2(_0295_);
		_0842_Gate132->ZN(_0372_);
		_0842_Gate132->faults=17;
		module_map[132] = _0842_Gate132;

		_0843_Gate133 = new NAND2_X1("_0843__instance133");
		_0843_Gate133->id = 133;
		_0843_Gate133->A1(_0372_);
		_0843_Gate133->A2(_0341_);
		_0843_Gate133->ZN(_0373_);
		_0843_Gate133->faults=17;
		module_map[133] = _0843_Gate133;

		_0844_Gate134 = new INV1_X1("_0844__instance134");
		_0844_Gate134->id = 134;
		_0844_Gate134->A(_0370_);
		_0844_Gate134->ZN(_0374_);
		_0844_Gate134->faults=16;
		module_map[134] = _0844_Gate134;

		_0845_Gate135 = new NAND2_X1("_0845__instance135");
		_0845_Gate135->id = 135;
		_0845_Gate135->A1(_0374_);
		_0845_Gate135->A2(_0677_);
		_0845_Gate135->ZN(_0375_);
		_0845_Gate135->faults=33;
		module_map[135] = _0845_Gate135;

		_0846_Gate136 = new NOR2_X1("_0846__instance136");
		_0846_Gate136->id = 136;
		_0846_Gate136->A1(_0375_);
		_0846_Gate136->A2(_0341_);
		_0846_Gate136->ZN(_0376_);
		_0846_Gate136->faults=34;
		module_map[136] = _0846_Gate136;

		_0847_Gate137 = new NAND2_X1("_0847__instance137");
		_0847_Gate137->id = 137;
		_0847_Gate137->A1(_0338_);
		_0847_Gate137->A2(_0678_);
		_0847_Gate137->ZN(_0377_);
		_0847_Gate137->faults=21;
		module_map[137] = _0847_Gate137;

		_0848_Gate138 = new NOR2_X1("_0848__instance138");
		_0848_Gate138->id = 138;
		_0848_Gate138->A1(_0337_);
		_0848_Gate138->A2(_0302_);
		_0848_Gate138->ZN(_0378_);
		_0848_Gate138->faults=42;
		module_map[138] = _0848_Gate138;

		_0849_Gate139 = new NAND2_X1("_0849__instance139");
		_0849_Gate139->id = 139;
		_0849_Gate139->A1(_0258_);
		_0849_Gate139->A2(_0686_);
		_0849_Gate139->ZN(_0379_);
		_0849_Gate139->faults=21;
		module_map[139] = _0849_Gate139;

		_0850_Gate140 = new NAND2_X1("_0850__instance140");
		_0850_Gate140->id = 140;
		_0850_Gate140->A1(_0311_);
		_0850_Gate140->A2(_0692_);
		_0850_Gate140->ZN(_0380_);
		_0850_Gate140->faults=21;
		module_map[140] = _0850_Gate140;

		_0851_Gate141 = new NAND2_X1("_0851__instance141");
		_0851_Gate141->id = 141;
		_0851_Gate141->A1(_0380_);
		_0851_Gate141->A2(_0379_);
		_0851_Gate141->ZN(_0381_);
		_0851_Gate141->faults=32;
		module_map[141] = _0851_Gate141;

		_0852_Gate142 = new NOR2_X1("_0852__instance142");
		_0852_Gate142->id = 142;
		_0852_Gate142->A1(_0381_);
		_0852_Gate142->A2(_0378_);
		_0852_Gate142->ZN(_0383_);
		_0852_Gate142->faults=16;
		module_map[142] = _0852_Gate142;

		_0853_Gate143 = new NAND2_X1("_0853__instance143");
		_0853_Gate143->id = 143;
		_0853_Gate143->A1(_0383_);
		_0853_Gate143->A2(_0377_);
		_0853_Gate143->ZN(_0384_);
		_0853_Gate143->faults=32;
		module_map[143] = _0853_Gate143;

		_0854_Gate144 = new NOR2_X1("_0854__instance144");
		_0854_Gate144->id = 144;
		_0854_Gate144->A1(_0384_);
		_0854_Gate144->A2(_0376_);
		_0854_Gate144->ZN(_0385_);
		_0854_Gate144->faults=16;
		module_map[144] = _0854_Gate144;

		_0855_Gate145 = new NAND2_X1("_0855__instance145");
		_0855_Gate145->id = 145;
		_0855_Gate145->A1(_0385_);
		_0855_Gate145->A2(_0373_);
		_0855_Gate145->ZN(_0266_);
		_0855_Gate145->faults=48;
		module_map[145] = _0855_Gate145;

		_0856_Gate146 = new NOR2_X1("_0856__instance146");
		_0856_Gate146->id = 146;
		_0856_Gate146->A1(_0353_);
		_0856_Gate146->A2(_0352_);
		_0856_Gate146->ZN(_0386_);
		_0856_Gate146->faults=10;
		module_map[146] = _0856_Gate146;

		_0857_Gate147 = new INV1_X1("_0857__instance147");
		_0857_Gate147->id = 147;
		_0857_Gate147->A(_0386_);
		_0857_Gate147->ZN(_0387_);
		_0857_Gate147->faults=48;
		module_map[147] = _0857_Gate147;

		_0858_Gate148 = new NAND2_X1("_0858__instance148");
		_0858_Gate148->id = 148;
		_0858_Gate148->A1(_0387_);
		_0858_Gate148->A2(_0367_);
		_0858_Gate148->ZN(_0388_);
		_0858_Gate148->faults=21;
		module_map[148] = _0858_Gate148;

		_0859_Gate149 = new NOR2_X1("_0859__instance149");
		_0859_Gate149->id = 149;
		_0859_Gate149->A1(_0387_);
		_0859_Gate149->A2(_0367_);
		_0859_Gate149->ZN(_0389_);
		_0859_Gate149->faults=42;
		module_map[149] = _0859_Gate149;

		_0860_Gate150 = new NOR2_X1("_0860__instance150");
		_0860_Gate150->id = 150;
		_0860_Gate150->A1(_0389_);
		_0860_Gate150->A2(_0291_);
		_0860_Gate150->ZN(_0390_);
		_0860_Gate150->faults=18;
		module_map[150] = _0860_Gate150;

		_0861_Gate151 = new NAND2_X1("_0861__instance151");
		_0861_Gate151->id = 151;
		_0861_Gate151->A1(_0390_);
		_0861_Gate151->A2(_0388_);
		_0861_Gate151->ZN(_0391_);
		_0861_Gate151->faults=16;
		module_map[151] = _0861_Gate151;

		_0862_Gate152 = new NOR2_X1("_0862__instance152");
		_0862_Gate152->id = 152;
		_0862_Gate152->A1(_0387_);
		_0862_Gate152->A2(_0295_);
		_0862_Gate152->ZN(_0392_);
		_0862_Gate152->faults=42;
		module_map[152] = _0862_Gate152;

		_0863_Gate153 = new NAND2_X1("_0863__instance153");
		_0863_Gate153->id = 153;
		_0863_Gate153->A1(_0352_);
		_0863_Gate153->A2(_0678_);
		_0863_Gate153->ZN(_0394_);
		_0863_Gate153->faults=21;
		module_map[153] = _0863_Gate153;

		_0864_Gate154 = new NOR2_X1("_0864__instance154");
		_0864_Gate154->id = 154;
		_0864_Gate154->A1(_0350_);
		_0864_Gate154->A2(_0302_);
		_0864_Gate154->ZN(_0395_);
		_0864_Gate154->faults=42;
		module_map[154] = _0864_Gate154;

		_0865_Gate155 = new NAND2_X1("_0865__instance155");
		_0865_Gate155->id = 155;
		_0865_Gate155->A1(_0311_);
		_0865_Gate155->A2(_0702_);
		_0865_Gate155->ZN(_0396_);
		_0865_Gate155->faults=21;
		module_map[155] = _0865_Gate155;

		_0866_Gate156 = new INV1_X1("_0866__instance156");
		_0866_Gate156->id = 156;
		_0866_Gate156->A(_0275_);
		_0866_Gate156->ZN(_0397_);
		_0866_Gate156->faults=32;
		module_map[156] = _0866_Gate156;

		_0867_Gate157 = new NOR2_X1("_0867__instance157");
		_0867_Gate157->id = 157;
		_0867_Gate157->A1(_0397_);
		_0867_Gate157->A2(_0314_);
		_0867_Gate157->ZN(_0398_);
		_0867_Gate157->faults=34;
		module_map[157] = _0867_Gate157;

		_0868_Gate158 = new NOR2_X1("_0868__instance158");
		_0868_Gate158->id = 158;
		_0868_Gate158->A1(_0329_);
		_0868_Gate158->A2(_0317_);
		_0868_Gate158->ZN(_0399_);
		_0868_Gate158->faults=42;
		module_map[158] = _0868_Gate158;

		_0869_Gate159 = new NOR2_X1("_0869__instance159");
		_0869_Gate159->id = 159;
		_0869_Gate159->A1(_0399_);
		_0869_Gate159->A2(_0398_);
		_0869_Gate159->ZN(_0400_);
		_0869_Gate159->faults=16;
		module_map[159] = _0869_Gate159;

		_0870_Gate160 = new NAND2_X1("_0870__instance160");
		_0870_Gate160->id = 160;
		_0870_Gate160->A1(_0400_);
		_0870_Gate160->A2(_0396_);
		_0870_Gate160->ZN(_0401_);
		_0870_Gate160->faults=32;
		module_map[160] = _0870_Gate160;

		_0871_Gate161 = new NOR2_X1("_0871__instance161");
		_0871_Gate161->id = 161;
		_0871_Gate161->A1(_0401_);
		_0871_Gate161->A2(_0395_);
		_0871_Gate161->ZN(_0402_);
		_0871_Gate161->faults=16;
		module_map[161] = _0871_Gate161;

		_0872_Gate162 = new NAND2_X1("_0872__instance162");
		_0872_Gate162->id = 162;
		_0872_Gate162->A1(_0402_);
		_0872_Gate162->A2(_0394_);
		_0872_Gate162->ZN(_0403_);
		_0872_Gate162->faults=32;
		module_map[162] = _0872_Gate162;

		_0873_Gate163 = new NOR2_X1("_0873__instance163");
		_0873_Gate163->id = 163;
		_0873_Gate163->A1(_0403_);
		_0873_Gate163->A2(_0392_);
		_0873_Gate163->ZN(_0404_);
		_0873_Gate163->faults=16;
		module_map[163] = _0873_Gate163;

		_0874_Gate164 = new NAND2_X1("_0874__instance164");
		_0874_Gate164->id = 164;
		_0874_Gate164->A1(_0404_);
		_0874_Gate164->A2(_0391_);
		_0874_Gate164->ZN(_0282_);
		_0874_Gate164->faults=48;
		module_map[164] = _0874_Gate164;

		_0875_Gate165 = new NOR2_X1("_0875__instance165");
		_0875_Gate165->id = 165;
		_0875_Gate165->A1(_0361_);
		_0875_Gate165->A2(_0359_);
		_0875_Gate165->ZN(_0406_);
		_0875_Gate165->faults=10;
		module_map[165] = _0875_Gate165;

		_0876_Gate166 = new INV1_X1("_0876__instance166");
		_0876_Gate166->id = 166;
		_0876_Gate166->A(_0406_);
		_0876_Gate166->ZN(_0407_);
		_0876_Gate166->faults=48;
		module_map[166] = _0876_Gate166;

		_0877_Gate167 = new NAND2_X1("_0877__instance167");
		_0877_Gate167->id = 167;
		_0877_Gate167->A1(_0407_);
		_0877_Gate167->A2(_0365_);
		_0877_Gate167->ZN(_0408_);
		_0877_Gate167->faults=21;
		module_map[167] = _0877_Gate167;

		_0878_Gate168 = new NOR2_X1("_0878__instance168");
		_0878_Gate168->id = 168;
		_0878_Gate168->A1(_0407_);
		_0878_Gate168->A2(_0365_);
		_0878_Gate168->ZN(_0409_);
		_0878_Gate168->faults=42;
		module_map[168] = _0878_Gate168;

		_0879_Gate169 = new NOR2_X1("_0879__instance169");
		_0879_Gate169->id = 169;
		_0879_Gate169->A1(_0409_);
		_0879_Gate169->A2(_0291_);
		_0879_Gate169->ZN(_0410_);
		_0879_Gate169->faults=18;
		module_map[169] = _0879_Gate169;

		_0880_Gate170 = new NAND2_X1("_0880__instance170");
		_0880_Gate170->id = 170;
		_0880_Gate170->A1(_0410_);
		_0880_Gate170->A2(_0408_);
		_0880_Gate170->ZN(_0411_);
		_0880_Gate170->faults=16;
		module_map[170] = _0880_Gate170;

		_0881_Gate171 = new NOR2_X1("_0881__instance171");
		_0881_Gate171->id = 171;
		_0881_Gate171->A1(_0407_);
		_0881_Gate171->A2(_0295_);
		_0881_Gate171->ZN(_0412_);
		_0881_Gate171->faults=42;
		module_map[171] = _0881_Gate171;

		_0882_Gate172 = new NAND2_X1("_0882__instance172");
		_0882_Gate172->id = 172;
		_0882_Gate172->A1(_0359_);
		_0882_Gate172->A2(_0678_);
		_0882_Gate172->ZN(_0413_);
		_0882_Gate172->faults=21;
		module_map[172] = _0882_Gate172;

		_0883_Gate173 = new NOR2_X1("_0883__instance173");
		_0883_Gate173->id = 173;
		_0883_Gate173->A1(_0358_);
		_0883_Gate173->A2(_0302_);
		_0883_Gate173->ZN(_0414_);
		_0883_Gate173->faults=42;
		module_map[173] = _0883_Gate173;

		_0884_Gate174 = new NAND2_X1("_0884__instance174");
		_0884_Gate174->id = 174;
		_0884_Gate174->A1(_0311_);
		_0884_Gate174->A2(_0234_);
		_0884_Gate174->ZN(_0415_);
		_0884_Gate174->faults=21;
		module_map[174] = _0884_Gate174;

		_0885_Gate175 = new INV1_X1("_0885__instance175");
		_0885_Gate175->id = 175;
		_0885_Gate175->A(_0289_);
		_0885_Gate175->ZN(_0416_);
		_0885_Gate175->faults=32;
		module_map[175] = _0885_Gate175;

		_0886_Gate176 = new NOR2_X1("_0886__instance176");
		_0886_Gate176->id = 176;
		_0886_Gate176->A1(_0416_);
		_0886_Gate176->A2(_0314_);
		_0886_Gate176->ZN(_0418_);
		_0886_Gate176->faults=34;
		module_map[176] = _0886_Gate176;

		_0887_Gate177 = new INV1_X1("_0887__instance177");
		_0887_Gate177->id = 177;
		_0887_Gate177->A(_0709_);
		_0887_Gate177->ZN(_0420_);
		_0887_Gate177->faults=32;
		module_map[177] = _0887_Gate177;

		_0888_Gate178 = new NOR2_X1("_0888__instance178");
		_0888_Gate178->id = 178;
		_0888_Gate178->A1(_0420_);
		_0888_Gate178->A2(_0317_);
		_0888_Gate178->ZN(_0421_);
		_0888_Gate178->faults=34;
		module_map[178] = _0888_Gate178;

		_0889_Gate179 = new NOR2_X1("_0889__instance179");
		_0889_Gate179->id = 179;
		_0889_Gate179->A1(_0421_);
		_0889_Gate179->A2(_0418_);
		_0889_Gate179->ZN(_0423_);
		_0889_Gate179->faults=16;
		module_map[179] = _0889_Gate179;

		_0890_Gate180 = new NAND2_X1("_0890__instance180");
		_0890_Gate180->id = 180;
		_0890_Gate180->A1(_0423_);
		_0890_Gate180->A2(_0415_);
		_0890_Gate180->ZN(_0425_);
		_0890_Gate180->faults=32;
		module_map[180] = _0890_Gate180;

		_0891_Gate181 = new NOR2_X1("_0891__instance181");
		_0891_Gate181->id = 181;
		_0891_Gate181->A1(_0425_);
		_0891_Gate181->A2(_0414_);
		_0891_Gate181->ZN(_0426_);
		_0891_Gate181->faults=16;
		module_map[181] = _0891_Gate181;

		_0892_Gate182 = new NAND2_X1("_0892__instance182");
		_0892_Gate182->id = 182;
		_0892_Gate182->A1(_0426_);
		_0892_Gate182->A2(_0413_);
		_0892_Gate182->ZN(_0428_);
		_0892_Gate182->faults=32;
		module_map[182] = _0892_Gate182;

		_0893_Gate183 = new NOR2_X1("_0893__instance183");
		_0893_Gate183->id = 183;
		_0893_Gate183->A1(_0428_);
		_0893_Gate183->A2(_0412_);
		_0893_Gate183->ZN(_0430_);
		_0893_Gate183->faults=16;
		module_map[183] = _0893_Gate183;

		_0894_Gate184 = new NAND2_X1("_0894__instance184");
		_0894_Gate184->id = 184;
		_0894_Gate184->A1(_0430_);
		_0894_Gate184->A2(_0411_);
		_0894_Gate184->ZN(_0296_);
		_0894_Gate184->faults=48;
		module_map[184] = _0894_Gate184;

		_0895_Gate185 = new INV1_X1("_0895__instance185");
		_0895_Gate185->id = 185;
		_0895_Gate185->A(_0298_);
		_0895_Gate185->ZN(_0433_);
		_0895_Gate185->faults=48;
		module_map[185] = _0895_Gate185;

		_0896_Gate186 = new INV1_X1("_0896__instance186");
		_0896_Gate186->id = 186;
		_0896_Gate186->A(_0301_);
		_0896_Gate186->ZN(_0434_);
		_0896_Gate186->faults=48;
		module_map[186] = _0896_Gate186;

		_0897_Gate187 = new NOR2_X1("_0897__instance187");
		_0897_Gate187->id = 187;
		_0897_Gate187->A1(_0274_);
		_0897_Gate187->A2(_0434_);
		_0897_Gate187->ZN(_0436_);
		_0897_Gate187->faults=42;
		module_map[187] = _0897_Gate187;

		_0898_Gate188 = new NOR2_X1("_0898__instance188");
		_0898_Gate188->id = 188;
		_0898_Gate188->A1(_0251_);
		_0898_Gate188->A2(_0243_);
		_0898_Gate188->ZN(_0437_);
		_0898_Gate188->faults=58;
		module_map[188] = _0898_Gate188;

		_0899_Gate189 = new INV1_X1("_0899__instance189");
		_0899_Gate189->id = 189;
		_0899_Gate189->A(_0437_);
		_0899_Gate189->ZN(_0439_);
		_0899_Gate189->faults=48;
		module_map[189] = _0899_Gate189;

		_0900_Gate190 = new NOR2_X1("_0900__instance190");
		_0900_Gate190->id = 190;
		_0900_Gate190->A1(_0439_);
		_0900_Gate190->A2(_0331_);
		_0900_Gate190->ZN(_0440_);
		_0900_Gate190->faults=42;
		module_map[190] = _0900_Gate190;

		_0901_Gate191 = new INV1_X1("_0901__instance191");
		_0901_Gate191->id = 191;
		_0901_Gate191->A(_0362_);
		_0901_Gate191->ZN(_0441_);
		_0901_Gate191->faults=32;
		module_map[191] = _0901_Gate191;

		_0902_Gate192 = new INV1_X1("_0902__instance192");
		_0902_Gate192->id = 192;
		_0902_Gate192->A(_0312_);
		_0902_Gate192->ZN(_0442_);
		_0902_Gate192->faults=48;
		module_map[192] = _0902_Gate192;

		_0903_Gate193 = new NOR2_X1("_0903__instance193");
		_0903_Gate193->id = 193;
		_0903_Gate193->A1(_0442_);
		_0903_Gate193->A2(_0441_);
		_0903_Gate193->ZN(_0444_);
		_0903_Gate193->faults=40;
		module_map[193] = _0903_Gate193;

		_0904_Gate194 = new NOR2_X1("_0904__instance194");
		_0904_Gate194->id = 194;
		_0904_Gate194->A1(_0257_);
		_0904_Gate194->A2(_0247_);
		_0904_Gate194->ZN(_0445_);
		_0904_Gate194->faults=58;
		module_map[194] = _0904_Gate194;

		_0905_Gate195 = new NOR2_X1("_0905__instance195");
		_0905_Gate195->id = 195;
		_0905_Gate195->A1(_0445_);
		_0905_Gate195->A2(_0444_);
		_0905_Gate195->ZN(_0446_);
		_0905_Gate195->faults=8;
		module_map[195] = _0905_Gate195;

		_0906_Gate196 = new INV1_X1("_0906__instance196");
		_0906_Gate196->id = 196;
		_0906_Gate196->A(_0446_);
		_0906_Gate196->ZN(_0447_);
		_0906_Gate196->faults=32;
		module_map[196] = _0906_Gate196;

		_0907_Gate197 = new NOR2_X1("_0907__instance197");
		_0907_Gate197->id = 197;
		_0907_Gate197->A1(_0447_);
		_0907_Gate197->A2(_0440_);
		_0907_Gate197->ZN(_0448_);
		_0907_Gate197->faults=0;
		module_map[197] = _0907_Gate197;

		_0908_Gate198 = new INV1_X1("_0908__instance198");
		_0908_Gate198->id = 198;
		_0908_Gate198->A(_0448_);
		_0908_Gate198->ZN(_0450_);
		_0908_Gate198->faults=32;
		module_map[198] = _0908_Gate198;

		_0909_Gate199 = new NOR2_X1("_0909__instance199");
		_0909_Gate199->id = 199;
		_0909_Gate199->A1(_0450_);
		_0909_Gate199->A2(_0436_);
		_0909_Gate199->ZN(_0451_);
		_0909_Gate199->faults=48;
		module_map[199] = _0909_Gate199;

		_0910_Gate200 = new NOR2_X1("_0910__instance200");
		_0910_Gate200->id = 200;
		_0910_Gate200->A1(_0451_);
		_0910_Gate200->A2(_0433_);
		_0910_Gate200->ZN(_0453_);
		_0910_Gate200->faults=58;
		module_map[200] = _0910_Gate200;

		_0911_Gate201 = new INV1_X1("_0911__instance201");
		_0911_Gate201->id = 201;
		_0911_Gate201->A(_0453_);
		_0911_Gate201->ZN(_0454_);
		_0911_Gate201->faults=48;
		module_map[201] = _0911_Gate201;

		_0912_Gate202 = new NAND2_X1("_0912__instance202");
		_0912_Gate202->id = 202;
		_0912_Gate202->A1(_0451_);
		_0912_Gate202->A2(_0433_);
		_0912_Gate202->ZN(_0455_);
		_0912_Gate202->faults=53;
		module_map[202] = _0912_Gate202;

		_0913_Gate203 = new INV1_X1("_0913__instance203");
		_0913_Gate203->id = 203;
		_0913_Gate203->A(_0322_);
		_0913_Gate203->ZN(_0456_);
		_0913_Gate203->faults=48;
		module_map[203] = _0913_Gate203;

		_0914_Gate204 = new NOR2_X1("_0914__instance204");
		_0914_Gate204->id = 204;
		_0914_Gate204->A1(_0274_);
		_0914_Gate204->A2(_0456_);
		_0914_Gate204->ZN(_0458_);
		_0914_Gate204->faults=42;
		module_map[204] = _0914_Gate204;

		_0915_Gate205 = new NOR2_X1("_0915__instance205");
		_0915_Gate205->id = 205;
		_0915_Gate205->A1(_0439_);
		_0915_Gate205->A2(_0344_);
		_0915_Gate205->ZN(_0459_);
		_0915_Gate205->faults=42;
		module_map[205] = _0915_Gate205;

		_0916_Gate206 = new NOR2_X1("_0916__instance206");
		_0916_Gate206->id = 206;
		_0916_Gate206->A1(_0442_);
		_0916_Gate206->A2(_0695_);
		_0916_Gate206->ZN(_0460_);
		_0916_Gate206->faults=42;
		module_map[206] = _0916_Gate206;

		_0917_Gate207 = new NOR2_X1("_0917__instance207");
		_0917_Gate207->id = 207;
		_0917_Gate207->A1(_0460_);
		_0917_Gate207->A2(_0445_);
		_0917_Gate207->ZN(_0461_);
		_0917_Gate207->faults=2;
		module_map[207] = _0917_Gate207;

		_0918_Gate208 = new INV1_X1("_0918__instance208");
		_0918_Gate208->id = 208;
		_0918_Gate208->A(_0461_);
		_0918_Gate208->ZN(_0463_);
		_0918_Gate208->faults=32;
		module_map[208] = _0918_Gate208;

		_0919_Gate209 = new NOR2_X1("_0919__instance209");
		_0919_Gate209->id = 209;
		_0919_Gate209->A1(_0463_);
		_0919_Gate209->A2(_0459_);
		_0919_Gate209->ZN(_0464_);
		_0919_Gate209->faults=0;
		module_map[209] = _0919_Gate209;

		_0920_Gate210 = new INV1_X1("_0920__instance210");
		_0920_Gate210->id = 210;
		_0920_Gate210->A(_0464_);
		_0920_Gate210->ZN(_0466_);
		_0920_Gate210->faults=32;
		module_map[210] = _0920_Gate210;

		_0921_Gate211 = new NOR2_X1("_0921__instance211");
		_0921_Gate211->id = 211;
		_0921_Gate211->A1(_0466_);
		_0921_Gate211->A2(_0458_);
		_0921_Gate211->ZN(_0468_);
		_0921_Gate211->faults=48;
		module_map[211] = _0921_Gate211;

		_0922_Gate212 = new INV1_X1("_0922__instance212");
		_0922_Gate212->id = 212;
		_0922_Gate212->A(_0468_);
		_0922_Gate212->ZN(_0470_);
		_0922_Gate212->faults=32;
		module_map[212] = _0922_Gate212;

		_0923_Gate213 = new NOR2_X1("_0923__instance213");
		_0923_Gate213->id = 213;
		_0923_Gate213->A1(_0470_);
		_0923_Gate213->A2(_0319_);
		_0923_Gate213->ZN(_0472_);
		_0923_Gate213->faults=50;
		module_map[213] = _0923_Gate213;

		_0924_Gate214 = new INV1_X1("_0924__instance214");
		_0924_Gate214->id = 214;
		_0924_Gate214->A(_0335_);
		_0924_Gate214->ZN(_0474_);
		_0924_Gate214->faults=48;
		module_map[214] = _0924_Gate214;

		_0925_Gate215 = new NOR2_X1("_0925__instance215");
		_0925_Gate215->id = 215;
		_0925_Gate215->A1(_0274_);
		_0925_Gate215->A2(_0474_);
		_0925_Gate215->ZN(_0476_);
		_0925_Gate215->faults=42;
		module_map[215] = _0925_Gate215;

		_0926_Gate216 = new NAND2_X1("_0926__instance216");
		_0926_Gate216->id = 216;
		_0926_Gate216->A1(_0437_);
		_0926_Gate216->A2(_0237_);
		_0926_Gate216->ZN(_0478_);
		_0926_Gate216->faults=21;
		module_map[216] = _0926_Gate216;

		_0927_Gate217 = new NOR2_X1("_0927__instance217");
		_0927_Gate217->id = 217;
		_0927_Gate217->A1(_0442_);
		_0927_Gate217->A2(_0698_);
		_0927_Gate217->ZN(_0479_);
		_0927_Gate217->faults=42;
		module_map[217] = _0927_Gate217;

		_0928_Gate218 = new NOR2_X1("_0928__instance218");
		_0928_Gate218->id = 218;
		_0928_Gate218->A1(_0479_);
		_0928_Gate218->A2(_0445_);
		_0928_Gate218->ZN(_0480_);
		_0928_Gate218->faults=18;
		module_map[218] = _0928_Gate218;

		_0929_Gate219 = new NAND2_X1("_0929__instance219");
		_0929_Gate219->id = 219;
		_0929_Gate219->A1(_0480_);
		_0929_Gate219->A2(_0478_);
		_0929_Gate219->ZN(_0481_);
		_0929_Gate219->faults=32;
		module_map[219] = _0929_Gate219;

		_0930_Gate220 = new NOR2_X1("_0930__instance220");
		_0930_Gate220->id = 220;
		_0930_Gate220->A1(_0481_);
		_0930_Gate220->A2(_0476_);
		_0930_Gate220->ZN(_0483_);
		_0930_Gate220->faults=48;
		module_map[220] = _0930_Gate220;

		_0931_Gate221 = new INV1_X1("_0931__instance221");
		_0931_Gate221->id = 221;
		_0931_Gate221->A(_0483_);
		_0931_Gate221->ZN(_0485_);
		_0931_Gate221->faults=32;
		module_map[221] = _0931_Gate221;

		_0932_Gate222 = new NOR2_X1("_0932__instance222");
		_0932_Gate222->id = 222;
		_0932_Gate222->A1(_0485_);
		_0932_Gate222->A2(_0332_);
		_0932_Gate222->ZN(_0486_);
		_0932_Gate222->faults=50;
		module_map[222] = _0932_Gate222;

		_0933_Gate223 = new INV1_X1("_0933__instance223");
		_0933_Gate223->id = 223;
		_0933_Gate223->A(_0345_);
		_0933_Gate223->ZN(_0488_);
		_0933_Gate223->faults=48;
		module_map[223] = _0933_Gate223;

		_0934_Gate224 = new INV1_X1("_0934__instance224");
		_0934_Gate224->id = 224;
		_0934_Gate224->A(_0258_);
		_0934_Gate224->ZN(_0491_);
		_0934_Gate224->faults=48;
		module_map[224] = _0934_Gate224;

		_0935_Gate225 = new NOR2_X1("_0935__instance225");
		_0935_Gate225->id = 225;
		_0935_Gate225->A1(_0274_);
		_0935_Gate225->A2(_0491_);
		_0935_Gate225->ZN(_0492_);
		_0935_Gate225->faults=42;
		module_map[225] = _0935_Gate225;

		_0936_Gate226 = new NOR2_X1("_0936__instance226");
		_0936_Gate226->id = 226;
		_0936_Gate226->A1(_0439_);
		_0936_Gate226->A2(_0241_);
		_0936_Gate226->ZN(_0494_);
		_0936_Gate226->faults=42;
		module_map[226] = _0936_Gate226;

		_0937_Gate227 = new NAND2_X1("_0937__instance227");
		_0937_Gate227->id = 227;
		_0937_Gate227->A1(_0349_);
		_0937_Gate227->A2(_0312_);
		_0937_Gate227->ZN(_0496_);
		_0937_Gate227->faults=1;
		module_map[227] = _0937_Gate227;

		_0938_Gate228 = new INV1_X1("_0938__instance228");
		_0938_Gate228->id = 228;
		_0938_Gate228->A(_0496_);
		_0938_Gate228->ZN(_0497_);
		_0938_Gate228->faults=32;
		module_map[228] = _0938_Gate228;

		_0939_Gate229 = new NOR2_X1("_0939__instance229");
		_0939_Gate229->id = 229;
		_0939_Gate229->A1(_0497_);
		_0939_Gate229->A2(_0445_);
		_0939_Gate229->ZN(_0499_);
		_0939_Gate229->faults=2;
		module_map[229] = _0939_Gate229;

		_0940_Gate230 = new INV1_X1("_0940__instance230");
		_0940_Gate230->id = 230;
		_0940_Gate230->A(_0499_);
		_0940_Gate230->ZN(_0501_);
		_0940_Gate230->faults=32;
		module_map[230] = _0940_Gate230;

		_0941_Gate231 = new NOR2_X1("_0941__instance231");
		_0941_Gate231->id = 231;
		_0941_Gate231->A1(_0501_);
		_0941_Gate231->A2(_0494_);
		_0941_Gate231->ZN(_0502_);
		_0941_Gate231->faults=0;
		module_map[231] = _0941_Gate231;

		_0942_Gate232 = new INV1_X1("_0942__instance232");
		_0942_Gate232->id = 232;
		_0942_Gate232->A(_0502_);
		_0942_Gate232->ZN(_0503_);
		_0942_Gate232->faults=32;
		module_map[232] = _0942_Gate232;

		_0943_Gate233 = new NOR2_X1("_0943__instance233");
		_0943_Gate233->id = 233;
		_0943_Gate233->A1(_0503_);
		_0943_Gate233->A2(_0492_);
		_0943_Gate233->ZN(_0504_);
		_0943_Gate233->faults=48;
		module_map[233] = _0943_Gate233;

		_0944_Gate234 = new NOR2_X1("_0944__instance234");
		_0944_Gate234->id = 234;
		_0944_Gate234->A1(_0504_);
		_0944_Gate234->A2(_0488_);
		_0944_Gate234->ZN(_0505_);
		_0944_Gate234->faults=58;
		module_map[234] = _0944_Gate234;

		_0945_Gate235 = new NAND2_X1("_0945__instance235");
		_0945_Gate235->id = 235;
		_0945_Gate235->A1(_0504_);
		_0945_Gate235->A2(_0488_);
		_0945_Gate235->ZN(_0506_);
		_0945_Gate235->faults=5;
		module_map[235] = _0945_Gate235;

		_0946_Gate236 = new INV1_X1("_0946__instance236");
		_0946_Gate236->id = 236;
		_0946_Gate236->A(_0506_);
		_0946_Gate236->ZN(_0507_);
		_0946_Gate236->faults=48;
		module_map[236] = _0946_Gate236;

		_0947_Gate237 = new NOR2_X1("_0947__instance237");
		_0947_Gate237->id = 237;
		_0947_Gate237->A1(_0370_);
		_0947_Gate237->A2(_0340_);
		_0947_Gate237->ZN(_0508_);
		_0947_Gate237->faults=42;
		module_map[237] = _0947_Gate237;

		_0948_Gate238 = new NOR2_X1("_0948__instance238");
		_0948_Gate238->id = 238;
		_0948_Gate238->A1(_0508_);
		_0948_Gate238->A2(_0338_);
		_0948_Gate238->ZN(_0509_);
		_0948_Gate238->faults=50;
		module_map[238] = _0948_Gate238;

		_0949_Gate239 = new NOR2_X1("_0949__instance239");
		_0949_Gate239->id = 239;
		_0949_Gate239->A1(_0509_);
		_0949_Gate239->A2(_0507_);
		_0949_Gate239->ZN(_0510_);
		_0949_Gate239->faults=42;
		module_map[239] = _0949_Gate239;

		_0950_Gate240 = new NOR2_X1("_0950__instance240");
		_0950_Gate240->id = 240;
		_0950_Gate240->A1(_0510_);
		_0950_Gate240->A2(_0505_);
		_0950_Gate240->ZN(_0511_);
		_0950_Gate240->faults=50;
		module_map[240] = _0950_Gate240;

		_0951_Gate241 = new NOR2_X1("_0951__instance241");
		_0951_Gate241->id = 241;
		_0951_Gate241->A1(_0511_);
		_0951_Gate241->A2(_0486_);
		_0951_Gate241->ZN(_0512_);
		_0951_Gate241->faults=58;
		module_map[241] = _0951_Gate241;

		_0952_Gate242 = new INV1_X1("_0952__instance242");
		_0952_Gate242->id = 242;
		_0952_Gate242->A(_0319_);
		_0952_Gate242->ZN(_0513_);
		_0952_Gate242->faults=48;
		module_map[242] = _0952_Gate242;

		_0953_Gate243 = new NOR2_X1("_0953__instance243");
		_0953_Gate243->id = 243;
		_0953_Gate243->A1(_0468_);
		_0953_Gate243->A2(_0513_);
		_0953_Gate243->ZN(_0514_);
		_0953_Gate243->faults=58;
		module_map[243] = _0953_Gate243;

		_0954_Gate244 = new INV1_X1("_0954__instance244");
		_0954_Gate244->id = 244;
		_0954_Gate244->A(_0514_);
		_0954_Gate244->ZN(_0516_);
		_0954_Gate244->faults=16;
		module_map[244] = _0954_Gate244;

		_0955_Gate245 = new INV1_X1("_0955__instance245");
		_0955_Gate245->id = 245;
		_0955_Gate245->A(_0332_);
		_0955_Gate245->ZN(_0517_);
		_0955_Gate245->faults=48;
		module_map[245] = _0955_Gate245;

		_0956_Gate246 = new NOR2_X1("_0956__instance246");
		_0956_Gate246->id = 246;
		_0956_Gate246->A1(_0483_);
		_0956_Gate246->A2(_0517_);
		_0956_Gate246->ZN(_0518_);
		_0956_Gate246->faults=58;
		module_map[246] = _0956_Gate246;

		_0957_Gate247 = new INV1_X1("_0957__instance247");
		_0957_Gate247->id = 247;
		_0957_Gate247->A(_0518_);
		_0957_Gate247->ZN(_0519_);
		_0957_Gate247->faults=48;
		module_map[247] = _0957_Gate247;

		_0958_Gate248 = new NAND2_X1("_0958__instance248");
		_0958_Gate248->id = 248;
		_0958_Gate248->A1(_0519_);
		_0958_Gate248->A2(_0516_);
		_0958_Gate248->ZN(_0520_);
		_0958_Gate248->faults=36;
		module_map[248] = _0958_Gate248;

		_0959_Gate249 = new NOR2_X1("_0959__instance249");
		_0959_Gate249->id = 249;
		_0959_Gate249->A1(_0520_);
		_0959_Gate249->A2(_0512_);
		_0959_Gate249->ZN(_0521_);
		_0959_Gate249->faults=34;
		module_map[249] = _0959_Gate249;

		_0960_Gate250 = new NOR2_X1("_0960__instance250");
		_0960_Gate250->id = 250;
		_0960_Gate250->A1(_0521_);
		_0960_Gate250->A2(_0472_);
		_0960_Gate250->ZN(_0522_);
		_0960_Gate250->faults=50;
		module_map[250] = _0960_Gate250;

		_0961_Gate251 = new NAND2_X1("_0961__instance251");
		_0961_Gate251->id = 251;
		_0961_Gate251->A1(_0522_);
		_0961_Gate251->A2(_0455_);
		_0961_Gate251->ZN(_0523_);
		_0961_Gate251->faults=21;
		module_map[251] = _0961_Gate251;

		_0962_Gate252 = new NAND2_X1("_0962__instance252");
		_0962_Gate252->id = 252;
		_0962_Gate252->A1(_0523_);
		_0962_Gate252->A2(_0454_);
		_0962_Gate252->ZN(_0369_);
		_0962_Gate252->faults=49;
		module_map[252] = _0962_Gate252;

		_0963_Gate253 = new NOR2_X1("_0963__instance253");
		_0963_Gate253->id = 253;
		_0963_Gate253->A1(_0507_);
		_0963_Gate253->A2(_0505_);
		_0963_Gate253->ZN(_0524_);
		_0963_Gate253->faults=58;
		module_map[253] = _0963_Gate253;

		_0964_Gate254 = new NAND2_X1("_0964__instance254");
		_0964_Gate254->id = 254;
		_0964_Gate254->A1(_0509_);
		_0964_Gate254->A2(_0677_);
		_0964_Gate254->ZN(_0525_);
		_0964_Gate254->faults=21;
		module_map[254] = _0964_Gate254;

		_0965_Gate255 = new NAND2_X1("_0965__instance255");
		_0965_Gate255->id = 255;
		_0965_Gate255->A1(_0525_);
		_0965_Gate255->A2(_0295_);
		_0965_Gate255->ZN(_0526_);
		_0965_Gate255->faults=17;
		module_map[255] = _0965_Gate255;

		_0966_Gate256 = new NAND2_X1("_0966__instance256");
		_0966_Gate256->id = 256;
		_0966_Gate256->A1(_0526_);
		_0966_Gate256->A2(_0524_);
		_0966_Gate256->ZN(_0527_);
		_0966_Gate256->faults=17;
		module_map[256] = _0966_Gate256;

		_0967_Gate257 = new NAND2_X1("_0967__instance257");
		_0967_Gate257->id = 257;
		_0967_Gate257->A1(_0505_);
		_0967_Gate257->A2(_0678_);
		_0967_Gate257->ZN(_0528_);
		_0967_Gate257->faults=21;
		module_map[257] = _0967_Gate257;

		_0968_Gate258 = new NOR2_X1("_0968__instance258");
		_0968_Gate258->id = 258;
		_0968_Gate258->A1(_0504_);
		_0968_Gate258->A2(_0302_);
		_0968_Gate258->ZN(_0529_);
		_0968_Gate258->faults=42;
		module_map[258] = _0968_Gate258;

		_0969_Gate259 = new NAND2_X1("_0969__instance259");
		_0969_Gate259->id = 259;
		_0969_Gate259->A1(_0311_);
		_0969_Gate259->A2(_0345_);
		_0969_Gate259->ZN(_0530_);
		_0969_Gate259->faults=21;
		module_map[259] = _0969_Gate259;

		_0970_Gate260 = new NAND2_X1("_0970__instance260");
		_0970_Gate260->id = 260;
		_0970_Gate260->A1(_0335_);
		_0970_Gate260->A2(_0686_);
		_0970_Gate260->ZN(_0531_);
		_0970_Gate260->faults=21;
		module_map[260] = _0970_Gate260;

		_0971_Gate261 = new NAND2_X1("_0971__instance261");
		_0971_Gate261->id = 261;
		_0971_Gate261->A1(_0531_);
		_0971_Gate261->A2(_0530_);
		_0971_Gate261->ZN(_0532_);
		_0971_Gate261->faults=32;
		module_map[261] = _0971_Gate261;

		_0972_Gate262 = new NOR2_X1("_0972__instance262");
		_0972_Gate262->id = 262;
		_0972_Gate262->A1(_0532_);
		_0972_Gate262->A2(_0529_);
		_0972_Gate262->ZN(_0533_);
		_0972_Gate262->faults=16;
		module_map[262] = _0972_Gate262;

		_0973_Gate263 = new NAND2_X1("_0973__instance263");
		_0973_Gate263->id = 263;
		_0973_Gate263->A1(_0533_);
		_0973_Gate263->A2(_0528_);
		_0973_Gate263->ZN(_0534_);
		_0973_Gate263->faults=32;
		module_map[263] = _0973_Gate263;

		_0974_Gate264 = new INV1_X1("_0974__instance264");
		_0974_Gate264->id = 264;
		_0974_Gate264->A(_0524_);
		_0974_Gate264->ZN(_0535_);
		_0974_Gate264->faults=16;
		module_map[264] = _0974_Gate264;

		_0975_Gate265 = new NAND2_X1("_0975__instance265");
		_0975_Gate265->id = 265;
		_0975_Gate265->A1(_0535_);
		_0975_Gate265->A2(_0677_);
		_0975_Gate265->ZN(_0536_);
		_0975_Gate265->faults=33;
		module_map[265] = _0975_Gate265;

		_0976_Gate266 = new NOR2_X1("_0976__instance266");
		_0976_Gate266->id = 266;
		_0976_Gate266->A1(_0536_);
		_0976_Gate266->A2(_0509_);
		_0976_Gate266->ZN(_0537_);
		_0976_Gate266->faults=34;
		module_map[266] = _0976_Gate266;

		_0977_Gate267 = new NOR2_X1("_0977__instance267");
		_0977_Gate267->id = 267;
		_0977_Gate267->A1(_0537_);
		_0977_Gate267->A2(_0534_);
		_0977_Gate267->ZN(_0538_);
		_0977_Gate267->faults=16;
		module_map[267] = _0977_Gate267;

		_0978_Gate268 = new NAND2_X1("_0978__instance268");
		_0978_Gate268->id = 268;
		_0978_Gate268->A1(_0538_);
		_0978_Gate268->A2(_0527_);
		_0978_Gate268->ZN(_0382_);
		_0978_Gate268->faults=48;
		module_map[268] = _0978_Gate268;

		_0979_Gate269 = new NAND2_X1("_0979__instance269");
		_0979_Gate269->id = 269;
		_0979_Gate269->A1(_0455_);
		_0979_Gate269->A2(_0454_);
		_0979_Gate269->ZN(_0539_);
		_0979_Gate269->faults=53;
		module_map[269] = _0979_Gate269;

		_0980_Gate270 = new INV1_X1("_0980__instance270");
		_0980_Gate270->id = 270;
		_0980_Gate270->A(_0539_);
		_0980_Gate270->ZN(_0540_);
		_0980_Gate270->faults=48;
		module_map[270] = _0980_Gate270;

		_0981_Gate271 = new NAND2_X1("_0981__instance271");
		_0981_Gate271->id = 271;
		_0981_Gate271->A1(_0540_);
		_0981_Gate271->A2(_0522_);
		_0981_Gate271->ZN(_0541_);
		_0981_Gate271->faults=21;
		module_map[271] = _0981_Gate271;

		_0982_Gate272 = new NOR2_X1("_0982__instance272");
		_0982_Gate272->id = 272;
		_0982_Gate272->A1(_0540_);
		_0982_Gate272->A2(_0522_);
		_0982_Gate272->ZN(_0542_);
		_0982_Gate272->faults=42;
		module_map[272] = _0982_Gate272;

		_0983_Gate273 = new NOR2_X1("_0983__instance273");
		_0983_Gate273->id = 273;
		_0983_Gate273->A1(_0542_);
		_0983_Gate273->A2(_0291_);
		_0983_Gate273->ZN(_0543_);
		_0983_Gate273->faults=18;
		module_map[273] = _0983_Gate273;

		_0984_Gate274 = new NAND2_X1("_0984__instance274");
		_0984_Gate274->id = 274;
		_0984_Gate274->A1(_0543_);
		_0984_Gate274->A2(_0541_);
		_0984_Gate274->ZN(_0545_);
		_0984_Gate274->faults=16;
		module_map[274] = _0984_Gate274;

		_0985_Gate275 = new NOR2_X1("_0985__instance275");
		_0985_Gate275->id = 275;
		_0985_Gate275->A1(_0539_);
		_0985_Gate275->A2(_0295_);
		_0985_Gate275->ZN(_0546_);
		_0985_Gate275->faults=42;
		module_map[275] = _0985_Gate275;

		_0986_Gate276 = new NAND2_X1("_0986__instance276");
		_0986_Gate276->id = 276;
		_0986_Gate276->A1(_0453_);
		_0986_Gate276->A2(_0678_);
		_0986_Gate276->ZN(_0547_);
		_0986_Gate276->faults=21;
		module_map[276] = _0986_Gate276;

		_0987_Gate277 = new NOR2_X1("_0987__instance277");
		_0987_Gate277->id = 277;
		_0987_Gate277->A1(_0451_);
		_0987_Gate277->A2(_0302_);
		_0987_Gate277->ZN(_0548_);
		_0987_Gate277->faults=42;
		module_map[277] = _0987_Gate277;

		_0988_Gate278 = new NAND2_X1("_0988__instance278");
		_0988_Gate278->id = 278;
		_0988_Gate278->A1(_0686_);
		_0988_Gate278->A2(_0564_);
		_0988_Gate278->ZN(_0549_);
		_0988_Gate278->faults=21;
		module_map[278] = _0988_Gate278;

		_0989_Gate279 = new NAND2_X1("_0989__instance279");
		_0989_Gate279->id = 279;
		_0989_Gate279->A1(_0311_);
		_0989_Gate279->A2(_0298_);
		_0989_Gate279->ZN(_0550_);
		_0989_Gate279->faults=21;
		module_map[279] = _0989_Gate279;

		_0990_Gate280 = new NAND2_X1("_0990__instance280");
		_0990_Gate280->id = 280;
		_0990_Gate280->A1(_0550_);
		_0990_Gate280->A2(_0549_);
		_0990_Gate280->ZN(_0551_);
		_0990_Gate280->faults=32;
		module_map[280] = _0990_Gate280;

		_0991_Gate281 = new NOR2_X1("_0991__instance281");
		_0991_Gate281->id = 281;
		_0991_Gate281->A1(_0551_);
		_0991_Gate281->A2(_0548_);
		_0991_Gate281->ZN(_0552_);
		_0991_Gate281->faults=16;
		module_map[281] = _0991_Gate281;

		_0992_Gate282 = new NAND2_X1("_0992__instance282");
		_0992_Gate282->id = 282;
		_0992_Gate282->A1(_0552_);
		_0992_Gate282->A2(_0547_);
		_0992_Gate282->ZN(_0553_);
		_0992_Gate282->faults=32;
		module_map[282] = _0992_Gate282;

		_0993_Gate283 = new NOR2_X1("_0993__instance283");
		_0993_Gate283->id = 283;
		_0993_Gate283->A1(_0553_);
		_0993_Gate283->A2(_0546_);
		_0993_Gate283->ZN(_0554_);
		_0993_Gate283->faults=16;
		module_map[283] = _0993_Gate283;

		_0994_Gate284 = new NAND2_X1("_0994__instance284");
		_0994_Gate284->id = 284;
		_0994_Gate284->A1(_0554_);
		_0994_Gate284->A2(_0545_);
		_0994_Gate284->ZN(_0393_);
		_0994_Gate284->faults=48;
		module_map[284] = _0994_Gate284;

		_0995_Gate285 = new NOR2_X1("_0995__instance285");
		_0995_Gate285->id = 285;
		_0995_Gate285->A1(_0514_);
		_0995_Gate285->A2(_0472_);
		_0995_Gate285->ZN(_0555_);
		_0995_Gate285->faults=10;
		module_map[285] = _0995_Gate285;

		_0996_Gate286 = new INV1_X1("_0996__instance286");
		_0996_Gate286->id = 286;
		_0996_Gate286->A(_0555_);
		_0996_Gate286->ZN(_0556_);
		_0996_Gate286->faults=48;
		module_map[286] = _0996_Gate286;

		_0997_Gate287 = new NOR2_X1("_0997__instance287");
		_0997_Gate287->id = 287;
		_0997_Gate287->A1(_0518_);
		_0997_Gate287->A2(_0512_);
		_0997_Gate287->ZN(_0557_);
		_0997_Gate287->faults=58;
		module_map[287] = _0997_Gate287;

		_0998_Gate288 = new NAND2_X1("_0998__instance288");
		_0998_Gate288->id = 288;
		_0998_Gate288->A1(_0557_);
		_0998_Gate288->A2(_0556_);
		_0998_Gate288->ZN(_0558_);
		_0998_Gate288->faults=21;
		module_map[288] = _0998_Gate288;

		_0999_Gate289 = new NOR2_X1("_0999__instance289");
		_0999_Gate289->id = 289;
		_0999_Gate289->A1(_0557_);
		_0999_Gate289->A2(_0556_);
		_0999_Gate289->ZN(_0559_);
		_0999_Gate289->faults=42;
		module_map[289] = _0999_Gate289;

		_1000_Gate290 = new NOR2_X1("_1000__instance290");
		_1000_Gate290->id = 290;
		_1000_Gate290->A1(_0559_);
		_1000_Gate290->A2(_0291_);
		_1000_Gate290->ZN(_0560_);
		_1000_Gate290->faults=18;
		module_map[290] = _1000_Gate290;

		_1001_Gate291 = new NAND2_X1("_1001__instance291");
		_1001_Gate291->id = 291;
		_1001_Gate291->A1(_0560_);
		_1001_Gate291->A2(_0558_);
		_1001_Gate291->ZN(_0561_);
		_1001_Gate291->faults=16;
		module_map[291] = _1001_Gate291;

		_1002_Gate292 = new NOR2_X1("_1002__instance292");
		_1002_Gate292->id = 292;
		_1002_Gate292->A1(_0556_);
		_1002_Gate292->A2(_0295_);
		_1002_Gate292->ZN(_0562_);
		_1002_Gate292->faults=42;
		module_map[292] = _1002_Gate292;

		_1003_Gate293 = new NAND2_X1("_1003__instance293");
		_1003_Gate293->id = 293;
		_1003_Gate293->A1(_0514_);
		_1003_Gate293->A2(_0678_);
		_1003_Gate293->ZN(_0563_);
		_1003_Gate293->faults=21;
		module_map[293] = _1003_Gate293;

		_1004_Gate294 = new NOR2_X1("_1004__instance294");
		_1004_Gate294->id = 294;
		_1004_Gate294->A1(_0468_);
		_1004_Gate294->A2(_0302_);
		_1004_Gate294->ZN(_0565_);
		_1004_Gate294->faults=42;
		module_map[294] = _1004_Gate294;

		_1005_Gate295 = new NAND2_X1("_1005__instance295");
		_1005_Gate295->id = 295;
		_1005_Gate295->A1(_0301_);
		_1005_Gate295->A2(_0686_);
		_1005_Gate295->ZN(_0566_);
		_1005_Gate295->faults=21;
		module_map[295] = _1005_Gate295;

		_1006_Gate296 = new NAND2_X1("_1006__instance296");
		_1006_Gate296->id = 296;
		_1006_Gate296->A1(_0311_);
		_1006_Gate296->A2(_0319_);
		_1006_Gate296->ZN(_0567_);
		_1006_Gate296->faults=21;
		module_map[296] = _1006_Gate296;

		_1007_Gate297 = new NAND2_X1("_1007__instance297");
		_1007_Gate297->id = 297;
		_1007_Gate297->A1(_0567_);
		_1007_Gate297->A2(_0566_);
		_1007_Gate297->ZN(_0568_);
		_1007_Gate297->faults=32;
		module_map[297] = _1007_Gate297;

		_1008_Gate298 = new NOR2_X1("_1008__instance298");
		_1008_Gate298->id = 298;
		_1008_Gate298->A1(_0568_);
		_1008_Gate298->A2(_0565_);
		_1008_Gate298->ZN(_0569_);
		_1008_Gate298->faults=16;
		module_map[298] = _1008_Gate298;

		_1009_Gate299 = new NAND2_X1("_1009__instance299");
		_1009_Gate299->id = 299;
		_1009_Gate299->A1(_0569_);
		_1009_Gate299->A2(_0563_);
		_1009_Gate299->ZN(_0570_);
		_1009_Gate299->faults=32;
		module_map[299] = _1009_Gate299;

		_1010_Gate300 = new NOR2_X1("_1010__instance300");
		_1010_Gate300->id = 300;
		_1010_Gate300->A1(_0570_);
		_1010_Gate300->A2(_0562_);
		_1010_Gate300->ZN(_0571_);
		_1010_Gate300->faults=16;
		module_map[300] = _1010_Gate300;

		_1011_Gate301 = new NAND2_X1("_1011__instance301");
		_1011_Gate301->id = 301;
		_1011_Gate301->A1(_0571_);
		_1011_Gate301->A2(_0561_);
		_1011_Gate301->ZN(_0405_);
		_1011_Gate301->faults=48;
		module_map[301] = _1011_Gate301;

		_1012_Gate302 = new INV1_X1("_1012__instance302");
		_1012_Gate302->id = 302;
		_1012_Gate302->A(_0486_);
		_1012_Gate302->ZN(_0572_);
		_1012_Gate302->faults=16;
		module_map[302] = _1012_Gate302;

		_1013_Gate303 = new NAND2_X1("_1013__instance303");
		_1013_Gate303->id = 303;
		_1013_Gate303->A1(_0519_);
		_1013_Gate303->A2(_0572_);
		_1013_Gate303->ZN(_0573_);
		_1013_Gate303->faults=52;
		module_map[303] = _1013_Gate303;

		_1014_Gate304 = new NAND2_X1("_1014__instance304");
		_1014_Gate304->id = 304;
		_1014_Gate304->A1(_0573_);
		_1014_Gate304->A2(_0511_);
		_1014_Gate304->ZN(_0574_);
		_1014_Gate304->faults=21;
		module_map[304] = _1014_Gate304;

		_1015_Gate305 = new NOR2_X1("_1015__instance305");
		_1015_Gate305->id = 305;
		_1015_Gate305->A1(_0573_);
		_1015_Gate305->A2(_0511_);
		_1015_Gate305->ZN(_0575_);
		_1015_Gate305->faults=42;
		module_map[305] = _1015_Gate305;

		_1016_Gate306 = new NOR2_X1("_1016__instance306");
		_1016_Gate306->id = 306;
		_1016_Gate306->A1(_0575_);
		_1016_Gate306->A2(_0291_);
		_1016_Gate306->ZN(_0576_);
		_1016_Gate306->faults=18;
		module_map[306] = _1016_Gate306;

		_1017_Gate307 = new NAND2_X1("_1017__instance307");
		_1017_Gate307->id = 307;
		_1017_Gate307->A1(_0576_);
		_1017_Gate307->A2(_0574_);
		_1017_Gate307->ZN(_0577_);
		_1017_Gate307->faults=16;
		module_map[307] = _1017_Gate307;

		_1018_Gate308 = new NOR2_X1("_1018__instance308");
		_1018_Gate308->id = 308;
		_1018_Gate308->A1(_0573_);
		_1018_Gate308->A2(_0295_);
		_1018_Gate308->ZN(_0578_);
		_1018_Gate308->faults=42;
		module_map[308] = _1018_Gate308;

		_1019_Gate309 = new NAND2_X1("_1019__instance309");
		_1019_Gate309->id = 309;
		_1019_Gate309->A1(_0518_);
		_1019_Gate309->A2(_0678_);
		_1019_Gate309->ZN(_0579_);
		_1019_Gate309->faults=21;
		module_map[309] = _1019_Gate309;

		_1020_Gate310 = new NOR2_X1("_1020__instance310");
		_1020_Gate310->id = 310;
		_1020_Gate310->A1(_0483_);
		_1020_Gate310->A2(_0302_);
		_1020_Gate310->ZN(_0580_);
		_1020_Gate310->faults=42;
		module_map[310] = _1020_Gate310;

		_1021_Gate311 = new NAND2_X1("_1021__instance311");
		_1021_Gate311->id = 311;
		_1021_Gate311->A1(_0322_);
		_1021_Gate311->A2(_0686_);
		_1021_Gate311->ZN(_0581_);
		_1021_Gate311->faults=21;
		module_map[311] = _1021_Gate311;

		_1022_Gate312 = new NAND2_X1("_1022__instance312");
		_1022_Gate312->id = 312;
		_1022_Gate312->A1(_0311_);
		_1022_Gate312->A2(_0332_);
		_1022_Gate312->ZN(_0582_);
		_1022_Gate312->faults=21;
		module_map[312] = _1022_Gate312;

		_1023_Gate313 = new NAND2_X1("_1023__instance313");
		_1023_Gate313->id = 313;
		_1023_Gate313->A1(_0582_);
		_1023_Gate313->A2(_0581_);
		_1023_Gate313->ZN(_0583_);
		_1023_Gate313->faults=32;
		module_map[313] = _1023_Gate313;

		_1024_Gate314 = new NOR2_X1("_1024__instance314");
		_1024_Gate314->id = 314;
		_1024_Gate314->A1(_0583_);
		_1024_Gate314->A2(_0580_);
		_1024_Gate314->ZN(_0585_);
		_1024_Gate314->faults=16;
		module_map[314] = _1024_Gate314;

		_1025_Gate315 = new NAND2_X1("_1025__instance315");
		_1025_Gate315->id = 315;
		_1025_Gate315->A1(_0585_);
		_1025_Gate315->A2(_0579_);
		_1025_Gate315->ZN(_0586_);
		_1025_Gate315->faults=32;
		module_map[315] = _1025_Gate315;

		_1026_Gate316 = new NOR2_X1("_1026__instance316");
		_1026_Gate316->id = 316;
		_1026_Gate316->A1(_0586_);
		_1026_Gate316->A2(_0578_);
		_1026_Gate316->ZN(_0587_);
		_1026_Gate316->faults=16;
		module_map[316] = _1026_Gate316;

		_1027_Gate317 = new NAND2_X1("_1027__instance317");
		_1027_Gate317->id = 317;
		_1027_Gate317->A1(_0587_);
		_1027_Gate317->A2(_0577_);
		_1027_Gate317->ZN(_0417_);
		_1027_Gate317->faults=48;
		module_map[317] = _1027_Gate317;

		_1028_Gate318 = new NAND2_X1("_1028__instance318");
		_1028_Gate318->id = 318;
		_1028_Gate318->A1(_0419_);
		_1028_Gate318->A2(_0515_);
		_1028_Gate318->ZN(_0588_);
		_1028_Gate318->faults=53;
		module_map[318] = _1028_Gate318;

		_1029_Gate319 = new NOR2_X1("_1029__instance319");
		_1029_Gate319->id = 319;
		_1029_Gate319->A1(_0588_);
		_1029_Gate319->A2(_0710_);
		_1029_Gate319->ZN(_0422_);
		_1029_Gate319->faults=58;
		module_map[319] = _1029_Gate319;

		_1030_Gate320 = new INV1_X1("_1030__instance320");
		_1030_Gate320->id = 320;
		_1030_Gate320->A(_0697_);
		_1030_Gate320->ZN(_0589_);
		_1030_Gate320->faults=32;
		module_map[320] = _1030_Gate320;

		_1031_Gate321 = new INV1_X1("_1031__instance321");
		_1031_Gate321->id = 321;
		_1031_Gate321->A(_0489_);
		_1031_Gate321->ZN(_0590_);
		_1031_Gate321->faults=48;
		module_map[321] = _1031_Gate321;

		_1032_Gate322 = new NOR2_X1("_1032__instance322");
		_1032_Gate322->id = 322;
		_1032_Gate322->A1(_0590_);
		_1032_Gate322->A2(_0589_);
		_1032_Gate322->ZN(_0591_);
		_1032_Gate322->faults=56;
		module_map[322] = _1032_Gate322;

		_1033_Gate323 = new NAND2_X1("_1033__instance323");
		_1033_Gate323->id = 323;
		_1033_Gate323->A1(_0591_);
		_1033_Gate323->A2(_0327_);
		_1033_Gate323->ZN(_0424_);
		_1033_Gate323->faults=53;
		module_map[323] = _1033_Gate323;

		_1034_Gate324 = new NAND2_X1("_1034__instance324");
		_1034_Gate324->id = 324;
		_1034_Gate324->A1(_0591_);
		_1034_Gate324->A2(_0419_);
		_1034_Gate324->ZN(_0427_);
		_1034_Gate324->faults=53;
		module_map[324] = _1034_Gate324;

		_1035_Gate325 = new INV1_X1("_1035__instance325");
		_1035_Gate325->id = 325;
		_1035_Gate325->A(_0701_);
		_1035_Gate325->ZN(_0592_);
		_1035_Gate325->faults=16;
		module_map[325] = _1035_Gate325;

		_1036_Gate326 = new NAND2_X1("_1036__instance326");
		_1036_Gate326->id = 326;
		_1036_Gate326->A1(_0592_);
		_1036_Gate326->A2(_0419_);
		_1036_Gate326->ZN(_0429_);
		_1036_Gate326->faults=49;
		module_map[326] = _1036_Gate326;

		_1037_Gate327 = new NAND2_X1("_1037__instance327");
		_1037_Gate327->id = 327;
		_1037_Gate327->A1(_0681_);
		_1037_Gate327->A2(_0515_);
		_1037_Gate327->ZN(_0593_);
		_1037_Gate327->faults=37;
		module_map[327] = _1037_Gate327;

		_1038_Gate328 = new NOR2_X1("_1038__instance328");
		_1038_Gate328->id = 328;
		_1038_Gate328->A1(_0593_);
		_1038_Gate328->A2(_0306_);
		_1038_Gate328->ZN(_0432_);
		_1038_Gate328->faults=50;
		module_map[328] = _1038_Gate328;

		_1039_Gate329 = new INV1_X1("_1039__instance329");
		_1039_Gate329->id = 329;
		_1039_Gate329->A(_0307_);
		_1039_Gate329->ZN(_0594_);
		_1039_Gate329->faults=16;
		module_map[329] = _1039_Gate329;

		_1040_Gate330 = new NAND2_X1("_1040__instance330");
		_1040_Gate330->id = 330;
		_1040_Gate330->A1(_0594_);
		_1040_Gate330->A2(_0435_);
		_1040_Gate330->ZN(_0595_);
		_1040_Gate330->faults=32;
		module_map[330] = _1040_Gate330;

		_1041_Gate331 = new NOR2_X1("_1041__instance331");
		_1041_Gate331->id = 331;
		_1041_Gate331->A1(_0595_);
		_1041_Gate331->A2(_0306_);
		_1041_Gate331->ZN(_0438_);
		_1041_Gate331->faults=50;
		module_map[331] = _1041_Gate331;

		_1042_Gate332 = new INV1_X1("_1042__instance332");
		_1042_Gate332->id = 332;
		_1042_Gate332->A(_0443_);
		_1042_Gate332->ZN(_0596_);
		_1042_Gate332->faults=48;
		module_map[332] = _1042_Gate332;

		_1043_Gate333 = new NOR2_X1("_1043__instance333");
		_1043_Gate333->id = 333;
		_1043_Gate333->A1(_0596_);
		_1043_Gate333->A2(_0335_);
		_1043_Gate333->ZN(_0597_);
		_1043_Gate333->faults=42;
		module_map[333] = _1043_Gate333;

		_1044_Gate334 = new NOR2_X1("_1044__instance334");
		_1044_Gate334->id = 334;
		_1044_Gate334->A1(_0443_);
		_1044_Gate334->A2(_0474_);
		_1044_Gate334->ZN(_0598_);
		_1044_Gate334->faults=42;
		module_map[334] = _1044_Gate334;

		_1045_Gate335 = new NOR2_X1("_1045__instance335");
		_1045_Gate335->id = 335;
		_1045_Gate335->A1(_0598_);
		_1045_Gate335->A2(_0597_);
		_1045_Gate335->ZN(_0599_);
		_1045_Gate335->faults=48;
		module_map[335] = _1045_Gate335;

		_1046_Gate336 = new INV1_X1("_1046__instance336");
		_1046_Gate336->id = 336;
		_1046_Gate336->A(_0599_);
		_1046_Gate336->ZN(_0600_);
		_1046_Gate336->faults=32;
		module_map[336] = _1046_Gate336;

		_1047_Gate337 = new NOR2_X1("_1047__instance337");
		_1047_Gate337->id = 337;
		_1047_Gate337->A1(_0600_);
		_1047_Gate337->A2(_0456_);
		_1047_Gate337->ZN(_0601_);
		_1047_Gate337->faults=34;
		module_map[337] = _1047_Gate337;

		_1048_Gate338 = new NOR2_X1("_1048__instance338");
		_1048_Gate338->id = 338;
		_1048_Gate338->A1(_0599_);
		_1048_Gate338->A2(_0322_);
		_1048_Gate338->ZN(_0602_);
		_1048_Gate338->faults=42;
		module_map[338] = _1048_Gate338;

		_1049_Gate339 = new NOR2_X1("_1049__instance339");
		_1049_Gate339->id = 339;
		_1049_Gate339->A1(_0602_);
		_1049_Gate339->A2(_0601_);
		_1049_Gate339->ZN(_0603_);
		_1049_Gate339->faults=48;
		module_map[339] = _1049_Gate339;

		_1050_Gate340 = new NOR2_X1("_1050__instance340");
		_1050_Gate340->id = 340;
		_1050_Gate340->A1(_0318_);
		_1050_Gate340->A2(_0265_);
		_1050_Gate340->ZN(_0604_);
		_1050_Gate340->faults=42;
		module_map[340] = _1050_Gate340;

		_1051_Gate341 = new NOR2_X1("_1051__instance341");
		_1051_Gate341->id = 341;
		_1051_Gate341->A1(_0687_);
		_1051_Gate341->A2(_0431_);
		_1051_Gate341->ZN(_0605_);
		_1051_Gate341->faults=42;
		module_map[341] = _1051_Gate341;

		_1052_Gate342 = new NOR2_X1("_1052__instance342");
		_1052_Gate342->id = 342;
		_1052_Gate342->A1(_0605_);
		_1052_Gate342->A2(_0604_);
		_1052_Gate342->ZN(_0606_);
		_1052_Gate342->faults=48;
		module_map[342] = _1052_Gate342;

		_1053_Gate343 = new INV1_X1("_1053__instance343");
		_1053_Gate343->id = 343;
		_1053_Gate343->A(_0606_);
		_1053_Gate343->ZN(_0607_);
		_1053_Gate343->faults=32;
		module_map[343] = _1053_Gate343;

		_1054_Gate344 = new NOR2_X1("_1054__instance344");
		_1054_Gate344->id = 344;
		_1054_Gate344->A1(_0301_);
		_1054_Gate344->A2(_0491_);
		_1054_Gate344->ZN(_0608_);
		_1054_Gate344->faults=42;
		module_map[344] = _1054_Gate344;

		_1055_Gate345 = new NOR2_X1("_1055__instance345");
		_1055_Gate345->id = 345;
		_1055_Gate345->A1(_0434_);
		_1055_Gate345->A2(_0258_);
		_1055_Gate345->ZN(_0609_);
		_1055_Gate345->faults=42;
		module_map[345] = _1055_Gate345;

		_1056_Gate346 = new NOR2_X1("_1056__instance346");
		_1056_Gate346->id = 346;
		_1056_Gate346->A1(_0609_);
		_1056_Gate346->A2(_0608_);
		_1056_Gate346->ZN(_0610_);
		_1056_Gate346->faults=48;
		module_map[346] = _1056_Gate346;

		_1057_Gate347 = new INV1_X1("_1057__instance347");
		_1057_Gate347->id = 347;
		_1057_Gate347->A(_0610_);
		_1057_Gate347->ZN(_0611_);
		_1057_Gate347->faults=32;
		module_map[347] = _1057_Gate347;

		_1058_Gate348 = new NOR2_X1("_1058__instance348");
		_1058_Gate348->id = 348;
		_1058_Gate348->A1(_0611_);
		_1058_Gate348->A2(_0607_);
		_1058_Gate348->ZN(_0612_);
		_1058_Gate348->faults=32;
		module_map[348] = _1058_Gate348;

		_1059_Gate349 = new NOR2_X1("_1059__instance349");
		_1059_Gate349->id = 349;
		_1059_Gate349->A1(_0610_);
		_1059_Gate349->A2(_0606_);
		_1059_Gate349->ZN(_0613_);
		_1059_Gate349->faults=42;
		module_map[349] = _1059_Gate349;

		_1060_Gate350 = new NOR2_X1("_1060__instance350");
		_1060_Gate350->id = 350;
		_1060_Gate350->A1(_0613_);
		_1060_Gate350->A2(_0612_);
		_1060_Gate350->ZN(_0614_);
		_1060_Gate350->faults=48;
		module_map[350] = _1060_Gate350;

		_1061_Gate351 = new NOR2_X1("_1061__instance351");
		_1061_Gate351->id = 351;
		_1061_Gate351->A1(_0449_);
		_1061_Gate351->A2(_0709_);
		_1061_Gate351->ZN(_0615_);
		_1061_Gate351->faults=42;
		module_map[351] = _1061_Gate351;

		_1062_Gate352 = new NAND2_X1("_1062__instance352");
		_1062_Gate352->id = 352;
		_1062_Gate352->A1(_0449_);
		_1062_Gate352->A2(_0709_);
		_1062_Gate352->ZN(_0616_);
		_1062_Gate352->faults=5;
		module_map[352] = _1062_Gate352;

		_1063_Gate353 = new INV1_X1("_1063__instance353");
		_1063_Gate353->id = 353;
		_1063_Gate353->A(_0616_);
		_1063_Gate353->ZN(_0617_);
		_1063_Gate353->faults=32;
		module_map[353] = _1063_Gate353;

		_1064_Gate354 = new NOR2_X1("_1064__instance354");
		_1064_Gate354->id = 354;
		_1064_Gate354->A1(_0617_);
		_1064_Gate354->A2(_0615_);
		_1064_Gate354->ZN(_0618_);
		_1064_Gate354->faults=48;
		module_map[354] = _1064_Gate354;

		_1065_Gate355 = new INV1_X1("_1065__instance355");
		_1065_Gate355->id = 355;
		_1065_Gate355->A(_0618_);
		_1065_Gate355->ZN(_0619_);
		_1065_Gate355->faults=32;
		module_map[355] = _1065_Gate355;

		_1066_Gate356 = new NOR2_X1("_1066__instance356");
		_1066_Gate356->id = 356;
		_1066_Gate356->A1(_0619_);
		_1066_Gate356->A2(_0329_);
		_1066_Gate356->ZN(_0620_);
		_1066_Gate356->faults=34;
		module_map[356] = _1066_Gate356;

		_1067_Gate357 = new NOR2_X1("_1067__instance357");
		_1067_Gate357->id = 357;
		_1067_Gate357->A1(_0618_);
		_1067_Gate357->A2(_0693_);
		_1067_Gate357->ZN(_0621_);
		_1067_Gate357->faults=42;
		module_map[357] = _1067_Gate357;

		_1068_Gate358 = new NOR2_X1("_1068__instance358");
		_1068_Gate358->id = 358;
		_1068_Gate358->A1(_0621_);
		_1068_Gate358->A2(_0620_);
		_1068_Gate358->ZN(_0622_);
		_1068_Gate358->faults=0;
		module_map[358] = _1068_Gate358;

		_1069_Gate359 = new INV1_X1("_1069__instance359");
		_1069_Gate359->id = 359;
		_1069_Gate359->A(_0622_);
		_1069_Gate359->ZN(_0623_);
		_1069_Gate359->faults=48;
		module_map[359] = _1069_Gate359;

		_1070_Gate360 = new NOR2_X1("_1070__instance360");
		_1070_Gate360->id = 360;
		_1070_Gate360->A1(_0623_);
		_1070_Gate360->A2(_0614_);
		_1070_Gate360->ZN(_0624_);
		_1070_Gate360->faults=42;
		module_map[360] = _1070_Gate360;

		_1071_Gate361 = new NAND2_X1("_1071__instance361");
		_1071_Gate361->id = 361;
		_1071_Gate361->A1(_0623_);
		_1071_Gate361->A2(_0614_);
		_1071_Gate361->ZN(_0625_);
		_1071_Gate361->faults=5;
		module_map[361] = _1071_Gate361;

		_1072_Gate362 = new INV1_X1("_1072__instance362");
		_1072_Gate362->id = 362;
		_1072_Gate362->A(_0625_);
		_1072_Gate362->ZN(_0626_);
		_1072_Gate362->faults=32;
		module_map[362] = _1072_Gate362;

		_1073_Gate363 = new NOR2_X1("_1073__instance363");
		_1073_Gate363->id = 363;
		_1073_Gate363->A1(_0626_);
		_1073_Gate363->A2(_0624_);
		_1073_Gate363->ZN(_0627_);
		_1073_Gate363->faults=48;
		module_map[363] = _1073_Gate363;

		_1074_Gate364 = new INV1_X1("_1074__instance364");
		_1074_Gate364->id = 364;
		_1074_Gate364->A(_0627_);
		_1074_Gate364->ZN(_0628_);
		_1074_Gate364->faults=32;
		module_map[364] = _1074_Gate364;

		_1075_Gate365 = new NOR2_X1("_1075__instance365");
		_1075_Gate365->id = 365;
		_1075_Gate365->A1(_0628_);
		_1075_Gate365->A2(_0603_);
		_1075_Gate365->ZN(_0629_);
		_1075_Gate365->faults=34;
		module_map[365] = _1075_Gate365;

		_1076_Gate366 = new INV1_X1("_1076__instance366");
		_1076_Gate366->id = 366;
		_1076_Gate366->A(_0603_);
		_1076_Gate366->ZN(_0630_);
		_1076_Gate366->faults=32;
		module_map[366] = _1076_Gate366;

		_1077_Gate367 = new NOR2_X1("_1077__instance367");
		_1077_Gate367->id = 367;
		_1077_Gate367->A1(_0627_);
		_1077_Gate367->A2(_0630_);
		_1077_Gate367->ZN(_0631_);
		_1077_Gate367->faults=40;
		module_map[367] = _1077_Gate367;

		_1078_Gate368 = new NOR2_X1("_1078__instance368");
		_1078_Gate368->id = 368;
		_1078_Gate368->A1(_0631_);
		_1078_Gate368->A2(_0629_);
		_1078_Gate368->ZN(_0452_);
		_1078_Gate368->faults=48;
		module_map[368] = _1078_Gate368;

		_1079_Gate369 = new INV1_X1("_1079__instance369");
		_1079_Gate369->id = 369;
		_1079_Gate369->A(_0462_);
		_1079_Gate369->ZN(_0632_);
		_1079_Gate369->faults=48;
		module_map[369] = _1079_Gate369;

		_1080_Gate370 = new NOR2_X1("_1080__instance370");
		_1080_Gate370->id = 370;
		_1080_Gate370->A1(_0354_);
		_1080_Gate370->A2(_0342_);
		_1080_Gate370->ZN(_0633_);
		_1080_Gate370->faults=42;
		module_map[370] = _1080_Gate370;

		_1081_Gate371 = new NOR2_X1("_1081__instance371");
		_1081_Gate371->id = 371;
		_1081_Gate371->A1(_0234_);
		_1081_Gate371->A2(_0702_);
		_1081_Gate371->ZN(_0634_);
		_1081_Gate371->faults=42;
		module_map[371] = _1081_Gate371;

		_1082_Gate372 = new NOR2_X1("_1082__instance372");
		_1082_Gate372->id = 372;
		_1082_Gate372->A1(_0634_);
		_1082_Gate372->A2(_0633_);
		_1082_Gate372->ZN(_0635_);
		_1082_Gate372->faults=48;
		module_map[372] = _1082_Gate372;

		_1083_Gate373 = new NOR2_X1("_1083__instance373");
		_1083_Gate373->id = 373;
		_1083_Gate373->A1(_0635_);
		_1083_Gate373->A2(_0632_);
		_1083_Gate373->ZN(_0636_);
		_1083_Gate373->faults=42;
		module_map[373] = _1083_Gate373;

		_1084_Gate374 = new NAND2_X1("_1084__instance374");
		_1084_Gate374->id = 374;
		_1084_Gate374->A1(_0635_);
		_1084_Gate374->A2(_0632_);
		_1084_Gate374->ZN(_0637_);
		_1084_Gate374->faults=5;
		module_map[374] = _1084_Gate374;

		_1085_Gate375 = new INV1_X1("_1085__instance375");
		_1085_Gate375->id = 375;
		_1085_Gate375->A(_0637_);
		_1085_Gate375->ZN(_0638_);
		_1085_Gate375->faults=32;
		module_map[375] = _1085_Gate375;

		_1086_Gate376 = new NOR2_X1("_1086__instance376");
		_1086_Gate376->id = 376;
		_1086_Gate376->A1(_0638_);
		_1086_Gate376->A2(_0636_);
		_1086_Gate376->ZN(_0639_);
		_1086_Gate376->faults=48;
		module_map[376] = _1086_Gate376;

		_1087_Gate377 = new INV1_X1("_1087__instance377");
		_1087_Gate377->id = 377;
		_1087_Gate377->A(_0639_);
		_1087_Gate377->ZN(_0640_);
		_1087_Gate377->faults=16;
		module_map[377] = _1087_Gate377;

		_1088_Gate378 = new NOR2_X1("_1088__instance378");
		_1088_Gate378->id = 378;
		_1088_Gate378->A1(_0328_);
		_1088_Gate378->A2(_0264_);
		_1088_Gate378->ZN(_0641_);
		_1088_Gate378->faults=42;
		module_map[378] = _1088_Gate378;

		_1089_Gate379 = new NOR2_X1("_1089__instance379");
		_1089_Gate379->id = 379;
		_1089_Gate379->A1(_0692_);
		_1089_Gate379->A2(_0231_);
		_1089_Gate379->ZN(_0642_);
		_1089_Gate379->faults=42;
		module_map[379] = _1089_Gate379;

		_1090_Gate380 = new NOR2_X1("_1090__instance380");
		_1090_Gate380->id = 380;
		_1090_Gate380->A1(_0642_);
		_1090_Gate380->A2(_0641_);
		_1090_Gate380->ZN(_0643_);
		_1090_Gate380->faults=48;
		module_map[380] = _1090_Gate380;

		_1091_Gate381 = new INV1_X1("_1091__instance381");
		_1091_Gate381->id = 381;
		_1091_Gate381->A(_0643_);
		_1091_Gate381->ZN(_0644_);
		_1091_Gate381->faults=32;
		module_map[381] = _1091_Gate381;

		_1092_Gate382 = new NOR2_X1("_1092__instance382");
		_1092_Gate382->id = 382;
		_1092_Gate382->A1(_0319_);
		_1092_Gate382->A2(_0433_);
		_1092_Gate382->ZN(_0645_);
		_1092_Gate382->faults=42;
		module_map[382] = _1092_Gate382;

		_1093_Gate383 = new NOR2_X1("_1093__instance383");
		_1093_Gate383->id = 383;
		_1093_Gate383->A1(_0513_);
		_1093_Gate383->A2(_0298_);
		_1093_Gate383->ZN(_0646_);
		_1093_Gate383->faults=42;
		module_map[383] = _1093_Gate383;

		_1094_Gate384 = new NOR2_X1("_1094__instance384");
		_1094_Gate384->id = 384;
		_1094_Gate384->A1(_0646_);
		_1094_Gate384->A2(_0645_);
		_1094_Gate384->ZN(_0647_);
		_1094_Gate384->faults=48;
		module_map[384] = _1094_Gate384;

		_1095_Gate385 = new INV1_X1("_1095__instance385");
		_1095_Gate385->id = 385;
		_1095_Gate385->A(_0647_);
		_1095_Gate385->ZN(_0648_);
		_1095_Gate385->faults=32;
		module_map[385] = _1095_Gate385;

		_1096_Gate386 = new NOR2_X1("_1096__instance386");
		_1096_Gate386->id = 386;
		_1096_Gate386->A1(_0648_);
		_1096_Gate386->A2(_0644_);
		_1096_Gate386->ZN(_0649_);
		_1096_Gate386->faults=32;
		module_map[386] = _1096_Gate386;

		_1097_Gate387 = new NOR2_X1("_1097__instance387");
		_1097_Gate387->id = 387;
		_1097_Gate387->A1(_0647_);
		_1097_Gate387->A2(_0643_);
		_1097_Gate387->ZN(_0650_);
		_1097_Gate387->faults=42;
		module_map[387] = _1097_Gate387;

		_1098_Gate388 = new NOR2_X1("_1098__instance388");
		_1098_Gate388->id = 388;
		_1098_Gate388->A1(_0650_);
		_1098_Gate388->A2(_0649_);
		_1098_Gate388->ZN(_0651_);
		_1098_Gate388->faults=48;
		module_map[388] = _1098_Gate388;

		_1099_Gate389 = new NOR2_X1("_1099__instance389");
		_1099_Gate389->id = 389;
		_1099_Gate389->A1(_0596_);
		_1099_Gate389->A2(_0345_);
		_1099_Gate389->ZN(_0652_);
		_1099_Gate389->faults=42;
		module_map[389] = _1099_Gate389;

		_1100_Gate390 = new NOR2_X1("_1100__instance390");
		_1100_Gate390->id = 390;
		_1100_Gate390->A1(_0443_);
		_1100_Gate390->A2(_0488_);
		_1100_Gate390->ZN(_0653_);
		_1100_Gate390->faults=42;
		module_map[390] = _1100_Gate390;

		_1101_Gate391 = new NOR2_X1("_1101__instance391");
		_1101_Gate391->id = 391;
		_1101_Gate391->A1(_0653_);
		_1101_Gate391->A2(_0652_);
		_1101_Gate391->ZN(_0654_);
		_1101_Gate391->faults=48;
		module_map[391] = _1101_Gate391;

		_1102_Gate392 = new NOR2_X1("_1102__instance392");
		_1102_Gate392->id = 392;
		_1102_Gate392->A1(_0654_);
		_1102_Gate392->A2(_0517_);
		_1102_Gate392->ZN(_0655_);
		_1102_Gate392->faults=42;
		module_map[392] = _1102_Gate392;

		_1103_Gate393 = new NAND2_X1("_1103__instance393");
		_1103_Gate393->id = 393;
		_1103_Gate393->A1(_0654_);
		_1103_Gate393->A2(_0517_);
		_1103_Gate393->ZN(_0656_);
		_1103_Gate393->faults=5;
		module_map[393] = _1103_Gate393;

		_1104_Gate394 = new INV1_X1("_1104__instance394");
		_1104_Gate394->id = 394;
		_1104_Gate394->A(_0656_);
		_1104_Gate394->ZN(_0657_);
		_1104_Gate394->faults=32;
		module_map[394] = _1104_Gate394;

		_1105_Gate395 = new NOR2_X1("_1105__instance395");
		_1105_Gate395->id = 395;
		_1105_Gate395->A1(_0657_);
		_1105_Gate395->A2(_0655_);
		_1105_Gate395->ZN(_0658_);
		_1105_Gate395->faults=0;
		module_map[395] = _1105_Gate395;

		_1106_Gate396 = new INV1_X1("_1106__instance396");
		_1106_Gate396->id = 396;
		_1106_Gate396->A(_0658_);
		_1106_Gate396->ZN(_0659_);
		_1106_Gate396->faults=48;
		module_map[396] = _1106_Gate396;

		_1107_Gate397 = new NOR2_X1("_1107__instance397");
		_1107_Gate397->id = 397;
		_1107_Gate397->A1(_0659_);
		_1107_Gate397->A2(_0651_);
		_1107_Gate397->ZN(_0660_);
		_1107_Gate397->faults=42;
		module_map[397] = _1107_Gate397;

		_1108_Gate398 = new NAND2_X1("_1108__instance398");
		_1108_Gate398->id = 398;
		_1108_Gate398->A1(_0659_);
		_1108_Gate398->A2(_0651_);
		_1108_Gate398->ZN(_0661_);
		_1108_Gate398->faults=5;
		module_map[398] = _1108_Gate398;

		_1109_Gate399 = new INV1_X1("_1109__instance399");
		_1109_Gate399->id = 399;
		_1109_Gate399->A(_0661_);
		_1109_Gate399->ZN(_0662_);
		_1109_Gate399->faults=32;
		module_map[399] = _1109_Gate399;

		_1110_Gate400 = new NOR2_X1("_1110__instance400");
		_1110_Gate400->id = 400;
		_1110_Gate400->A1(_0662_);
		_1110_Gate400->A2(_0660_);
		_1110_Gate400->ZN(_0663_);
		_1110_Gate400->faults=48;
		module_map[400] = _1110_Gate400;

		_1111_Gate401 = new INV1_X1("_1111__instance401");
		_1111_Gate401->id = 401;
		_1111_Gate401->A(_0663_);
		_1111_Gate401->ZN(_0664_);
		_1111_Gate401->faults=16;
		module_map[401] = _1111_Gate401;

		_1112_Gate402 = new NAND2_X1("_1112__instance402");
		_1112_Gate402->id = 402;
		_1112_Gate402->A1(_0664_);
		_1112_Gate402->A2(_0640_);
		_1112_Gate402->ZN(_0665_);
		_1112_Gate402->faults=16;
		module_map[402] = _1112_Gate402;

		_1113_Gate403 = new NAND2_X1("_1113__instance403");
		_1113_Gate403->id = 403;
		_1113_Gate403->A1(_0663_);
		_1113_Gate403->A2(_0639_);
		_1113_Gate403->ZN(_0666_);
		_1113_Gate403->faults=21;
		module_map[403] = _1113_Gate403;

		_1114_Gate404 = new NAND2_X1("_1114__instance404");
		_1114_Gate404->id = 404;
		_1114_Gate404->A1(_0666_);
		_1114_Gate404->A2(_0665_);
		_1114_Gate404->ZN(_0465_);
		_1114_Gate404->faults=48;
		module_map[404] = _1114_Gate404;

		_1115_Gate405 = new NAND2_X1("_1115__instance405");
		_1115_Gate405->id = 405;
		_1115_Gate405->A1(_0679_);
		_1115_Gate405->A2(_0255_);
		_1115_Gate405->ZN(_0667_);
		_1115_Gate405->faults=53;
		module_map[405] = _1115_Gate405;

		_1116_Gate406 = new NOR2_X1("_1116__instance406");
		_1116_Gate406->id = 406;
		_1116_Gate406->A1(_0667_);
		_1116_Gate406->A2(_0704_);
		_1116_Gate406->ZN(_0467_);
		_1116_Gate406->faults=58;
		module_map[406] = _1116_Gate406;

		_1117_Gate407 = new NOR2_X1("_1117__instance407");
		_1117_Gate407->id = 407;
		_1117_Gate407->A1(_0252_);
		_1117_Gate407->A2(_0710_);
		_1117_Gate407->ZN(_0469_);
		_1117_Gate407->faults=58;
		module_map[407] = _1117_Gate407;

		_1118_Gate408 = new NOR2_X1("_1118__instance408");
		_1118_Gate408->id = 408;
		_1118_Gate408->A1(_0588_);
		_1118_Gate408->A2(_0590_);
		_1118_Gate408->ZN(_0471_);
		_1118_Gate408->faults=58;
		module_map[408] = _1118_Gate408;

		_1119_Gate409 = new INV1_X1("_1119__instance409");
		_1119_Gate409->id = 409;
		_1119_Gate409->A(_0473_);
		_1119_Gate409->ZN(_0668_);
		_1119_Gate409->faults=32;
		module_map[409] = _1119_Gate409;

		_1120_Gate410 = new INV1_X1("_1120__instance410");
		_1120_Gate410->id = 410;
		_1120_Gate410->A(_0475_);
		_1120_Gate410->ZN(_0669_);
		_1120_Gate410->faults=32;
		module_map[410] = _1120_Gate410;

		_1121_Gate411 = new NOR2_X1("_1121__instance411");
		_1121_Gate411->id = 411;
		_1121_Gate411->A1(_0669_);
		_1121_Gate411->A2(_0668_);
		_1121_Gate411->ZN(_0477_);
		_1121_Gate411->faults=48;
		module_map[411] = _1121_Gate411;

		_1122_Gate412 = new INV1_X1("_1122__instance412");
		_1122_Gate412->id = 412;
		_1122_Gate412->A(_0422_);
		_1122_Gate412->ZN(_0670_);
		_1122_Gate412->faults=16;
		module_map[412] = _1122_Gate412;

		_1123_Gate413 = new NOR2_X1("_1123__instance413");
		_1123_Gate413->id = 413;
		_1123_Gate413->A1(_0667_);
		_1123_Gate413->A2(_0696_);
		_1123_Gate413->ZN(_0671_);
		_1123_Gate413->faults=58;
		module_map[413] = _1123_Gate413;

		_1124_Gate414 = new NAND2_X1("_1124__instance414");
		_1124_Gate414->id = 414;
		_1124_Gate414->A1(_0671_);
		_1124_Gate414->A2(_0670_);
		_1124_Gate414->ZN(_0482_);
		_1124_Gate414->faults=52;
		module_map[414] = _1124_Gate414;

		_1125_Gate415 = new INV1_X1("_1125__instance415");
		_1125_Gate415->id = 415;
		_1125_Gate415->A(_0484_);
		_1125_Gate415->ZN(_0673_);
		_1125_Gate415->faults=32;
		module_map[415] = _1125_Gate415;

		_1126_Gate416 = new NOR2_X1("_1126__instance416");
		_1126_Gate416->id = 416;
		_1126_Gate416->A1(_0490_);
		_1126_Gate416->A2(_0487_);
		_1126_Gate416->ZN(_0674_);
		_1126_Gate416->faults=48;
		module_map[416] = _1126_Gate416;

		_1127_Gate417 = new NOR2_X1("_1127__instance417");
		_1127_Gate417->id = 417;
		_1127_Gate417->A1(_0674_);
		_1127_Gate417->A2(_0673_);
		_1127_Gate417->ZN(_0493_);
		_1127_Gate417->faults=56;
		module_map[417] = _1127_Gate417;

		_1128_Gate418 = new INV1_X1("_1128__instance418");
		_1128_Gate418->id = 418;
		_1128_Gate418->A(_0495_);
		_1128_Gate418->ZN(_0675_);
		_1128_Gate418->faults=32;
		module_map[418] = _1128_Gate418;

		_1129_Gate419 = new NOR2_X1("_1129__instance419");
		_1129_Gate419->id = 419;
		_1129_Gate419->A1(_0674_);
		_1129_Gate419->A2(_0675_);
		_1129_Gate419->ZN(_0498_);
		_1129_Gate419->faults=56;
		module_map[419] = _1129_Gate419;

		_1130_Gate420 = new NAND2_X1("_1130__instance420");
		_1130_Gate420->id = 420;
		_1130_Gate420->A1(_0671_);
		_1130_Gate420->A2(_0422_);
		_1130_Gate420->ZN(_0500_);
		_1130_Gate420->faults=53;
		module_map[420] = _1130_Gate420;

		cout << "all gates are instantiated " << numOfGates << "\n";
		SC_THREAD(assignments);
		sensitive << N880 << N153 << _0296_ << N171 << _0498_ << N146 << N259 << N1 << _0432_ << _0422_ << _0683_ << N879 << N207 << N74 << _0493_ << N419 << N17 << N768 << _0477_ << N449 << N149 << N91 << N389 << N42 << N268 << N189 << N391 << N260 << _0382_ << N421 << _0424_ << N85 << N388 << N72 << _0482_ << N130 << N135 << N878 << N90 << N80 << _0452_ << N126 << _0691_ << N418 << N865 << _0438_ << N420 << _0393_ << N59 << N89 << N51 << N138 << N228 << N237 << N88 << N195 << N143 << N177 << N116 << _0469_ << _0500_ << _0282_ << N75 << N863 << N246 << _0465_ << N422 << N55 << N850 << N36 << _0427_ << N29 << N87 << N767 << N219 << N156 << N111 << _0467_ << _0266_ << N450 << N13 << N261 << N152 << N390 << N121 << N201 << _0429_ << N183 << _0405_ << N96 << _0369_ << N68 << N448 << N447 << N8 << N101 << N86 << N106 << N73 << _0471_ << N267 << N159 << N165 << N864 << N26 << N866 << N874 << _0417_ << N255 << N446 << N210 << N423;
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
