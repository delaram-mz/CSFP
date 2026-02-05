#include "Complex_NAgate_45.h"
SC_MODULE(s344_netlist)
{
	sc_in <sc_logic> clk;
	sc_in <sc_logic> rst;
	sc_in <sc_logic> PbarS;
	sc_in <sc_logic> Si;
	sc_out <sc_logic> So;

	sc_signal <sc_logic> sc_logic_1_signal, sc_logic_0_signal;

	sc_in <sc_logic> A0, A1, A2, A3, B0, B1, B2, B3, CK, GND, START, VDD;
	sc_out <sc_logic> CNTVCO2, CNTVCON2, P0, P1, P2, P3, P4, P5, P6, P7, READY;
	sc_signal <sc_logic> _000_, _001_, _002_, _003_, _004_, _005_, _006_, _007_, _008_, _009_, _010_, _011_, _012_, _013_, _014_, _015_, _016_, _017_, _018_, _019_, _020_, _021_, _022_, _023_, _024_, _025_, _026_, _027_, _028_, _029_, _030_, _031_, _032_, _033_, _034_, _035_, _036_, _037_, _038_, _039_, _040_, _041_, _042_, _043_, _044_, _045_, _046_, _047_, _048_, _049_, _050_, _051_, _052_, _053_, _054_, _055_, _056_, _057_, _058_, _059_, _060_, _061_, _062_, _063_, _064_, _065_, _066_, _067_, _068_, _069_, _070_, _071_, _072_, _073_, _074_, _075_, _076_, _077_, _078_, _079_, _080_, _081_, _082_, _083_, _084_, _085_, _086_, _087_, _088_, _089_, _090_, _091_, _092_, _093_, _094_, _095_, _096_, _097_, _098_, _099_, _100_, _101_, _102_, _103_, _104_, _105_, _106_, _107_, _108_, _109_, _110_, _111_, _112_, _113_, _114_, _115_, _116_, _117_, _118_, _119_, _120_, _121_, _122_, _123_, _124_, _125_, _126_, _127_, _128_, _129_, _130_, _131_, _132_, _133_, _134_, _135_, _136_, _137_, _138_, _139_, _140_, _141_, _142_, _143_, _144_, _145_, _146_, _147_, _148_, _149_, _150_, _151_, _152_, _153_, _154_, _155_, _156_, _157_, _158_, _159_, _160_, _161_, _162_, _163_, _164_, _165_, _166_, _167_, _168_, _169_, _170_, _171_, _172_, _173_, _174_, _175_, _176_, _177_, _178_, _179_, _180_, _181_, _182_, _183_, _184_, _185_, _186_, _187_, _188_, _189_, _190_, _191_, _192_, _193_, _194_, _195_, _196_, _197_, _198_, ACVG1VD1, ACVG2VD1, ACVG3VD1, ACVG4VD1, ACVQN0, ACVQN1, ACVQN2, ACVQN3, AM0, AM1, AM2, AM3, AX0, AX1, AX2, AX3, BMVS0N, CNTVCO0, CNTVG1VD, CNTVG2VD, CNTVG3VD, CT0, CT1, CT2, MRVG1VD, MRVG2VD, MRVG3VD, MRVG4VD, MRVQN0, MRVQN1, MRVQN2, MRVQN3;
	sc_in<sc_logic> endSim; 
	sc_in<sc_logic> newTV; 
	sc_uint<32> counter; 

	int numOfGates;
	int totalObservedCombs;
	double GIC_Coverage;

	INV1_X1* _199__Gate1;
	INV1_X1* _200__Gate2;
	INV1_X1* _201__Gate3;
	INV1_X1* _202__Gate4;
	INV1_X1* _203__Gate5;
	INV1_X1* _204__Gate6;
	INV1_X1* _205__Gate7;
	INV1_X1* _206__Gate8;
	INV1_X1* _207__Gate9;
	INV1_X1* _208__Gate10;
	NOR2_X1* _209__Gate11;
	INV1_X1* _210__Gate12;
	NOR2_X1* _211__Gate13;
	INV1_X1* _212__Gate14;
	NOR2_X1* _213__Gate15;
	INV1_X1* _214__Gate16;
	NOR2_X1* _215__Gate17;
	INV1_X1* _216__Gate18;
	INV1_X1* _217__Gate19;
	NOR2_X1* _218__Gate20;
	NAND2_X1* _219__Gate21;
	INV1_X1* _220__Gate22;
	NOR2_X1* _221__Gate23;
	NOR2_X1* _222__Gate24;
	NAND2_X1* _223__Gate25;
	NOR2_X1* _224__Gate26;
	NOR2_X1* _225__Gate27;
	NAND2_X1* _226__Gate28;
	NOR2_X1* _227__Gate29;
	NOR2_X1* _228__Gate30;
	NOR2_X1* _229__Gate31;
	NOR2_X1* _230__Gate32;
	NOR2_X1* _231__Gate33;
	NOR2_X1* _232__Gate34;
	NAND2_X1* _233__Gate35;
	INV1_X1* _234__Gate36;
	NOR2_X1* _235__Gate37;
	NOR2_X1* _236__Gate38;
	NAND2_X1* _237__Gate39;
	NAND2_X1* _238__Gate40;
	NOR2_X1* _239__Gate41;
	INV1_X1* _240__Gate42;
	NAND2_X1* _241__Gate43;
	NAND2_X1* _242__Gate44;
	NOR2_X1* _243__Gate45;
	NOR2_X1* _244__Gate46;
	NAND2_X1* _245__Gate47;
	INV1_X1* _246__Gate48;
	NOR2_X1* _247__Gate49;
	NAND2_X1* _248__Gate50;
	NAND2_X1* _249__Gate51;
	NAND2_X1* _250__Gate52;
	NOR2_X1* _251__Gate53;
	NOR2_X1* _252__Gate54;
	NAND2_X1* _253__Gate55;
	NOR2_X1* _254__Gate56;
	NAND2_X1* _255__Gate57;
	NOR2_X1* _256__Gate58;
	NOR2_X1* _257__Gate59;
	NAND2_X1* _258__Gate60;
	NOR2_X1* _259__Gate61;
	NOR2_X1* _260__Gate62;
	NOR2_X1* _261__Gate63;
	NAND2_X1* _262__Gate64;
	INV1_X1* _263__Gate65;
	NOR2_X1* _264__Gate66;
	NOR2_X1* _265__Gate67;
	NAND2_X1* _266__Gate68;
	NOR2_X1* _267__Gate69;
	NOR2_X1* _268__Gate70;
	NAND2_X1* _269__Gate71;
	NOR2_X1* _270__Gate72;
	NOR2_X1* _271__Gate73;
	NAND2_X1* _272__Gate74;
	INV1_X1* _273__Gate75;
	NAND2_X1* _274__Gate76;
	NAND2_X1* _275__Gate77;
	NOR2_X1* _276__Gate78;
	NOR2_X1* _277__Gate79;
	NAND2_X1* _278__Gate80;
	NOR2_X1* _279__Gate81;
	NOR2_X1* _280__Gate82;
	NAND2_X1* _281__Gate83;
	INV1_X1* _282__Gate84;
	INV1_X1* _283__Gate85;
	NAND2_X1* _284__Gate86;
	NAND2_X1* _285__Gate87;
	NAND2_X1* _286__Gate88;
	INV1_X1* _287__Gate89;
	NAND2_X1* _288__Gate90;
	NAND2_X1* _289__Gate91;
	NAND2_X1* _290__Gate92;
	NAND2_X1* _291__Gate93;
	NOR2_X1* _292__Gate94;
	NOR2_X1* _293__Gate95;
	NAND2_X1* _294__Gate96;
	NAND2_X1* _295__Gate97;
	NOR2_X1* _296__Gate98;
	NOR2_X1* _297__Gate99;
	NOR2_X1* _298__Gate100;
	NOR2_X1* _299__Gate101;
	NAND2_X1* _300__Gate102;
	NAND2_X1* _301__Gate103;
	NOR2_X1* _302__Gate104;
	NOR2_X1* _303__Gate105;
	NOR2_X1* _304__Gate106;
	NOR2_X1* _305__Gate107;
	NAND2_X1* _306__Gate108;
	NAND2_X1* _307__Gate109;
	NOR2_X1* _308__Gate110;
	NOR2_X1* _309__Gate111;
	NAND2_X1* _310__Gate112;
	INV1_X1* _311__Gate113;
	NOR2_X1* _312__Gate114;
	NOR2_X1* _313__Gate115;
	NOR2_X1* _314__Gate116;
	NOR2_X1* _315__Gate117;
	NOR2_X1* _316__Gate118;
	NOR2_X1* _317__Gate119;
	NOR2_X1* _318__Gate120;
	NOR2_X1* _319__Gate121;
	NOR2_X1* _320__Gate122;
	NOR2_X1* _321__Gate123;
	NOR2_X1* _322__Gate124;
	NOR2_X1* _323__Gate125;
	dff* DFF_0_Gate126;
	dff* DFF_1_Gate127;
	dff* DFF_10_Gate128;
	dff* DFF_11_Gate129;
	dff* DFF_12_Gate130;
	dff* DFF_13_Gate131;
	dff* DFF_14_Gate132;
	dff* DFF_2_Gate133;
	dff* DFF_3_Gate134;
	dff* DFF_4_Gate135;
	dff* DFF_5_Gate136;
	dff* DFF_6_Gate137;
	dff* DFF_7_Gate138;
	dff* DFF_8_Gate139;
	dff* DFF_9_Gate140;

	SC_CTOR(s344_netlist)
	{
		numOfGates = 140;

		_199__Gate1 = new INV1_X1("_199__instance1");
		_199__Gate1->A(_050_);
		_199__Gate1->ZN(_051_);

		_200__Gate2 = new INV1_X1("_200__instance2");
		_200__Gate2->A(_122_);
		_200__Gate2->ZN(_128_);

		_201__Gate3 = new INV1_X1("_201__instance3");
		_201__Gate3->A(_131_);
		_201__Gate3->ZN(_134_);

		_202__Gate4 = new INV1_X1("_202__instance4");
		_202__Gate4->A(_138_);
		_202__Gate4->ZN(_149_);

		_203__Gate5 = new INV1_X1("_203__instance5");
		_203__Gate5->A(_165_);
		_203__Gate5->ZN(_179_);

		_204__Gate6 = new INV1_X1("_204__instance6");
		_204__Gate6->A(_052_);
		_204__Gate6->ZN(_062_);

		_205__Gate7 = new INV1_X1("_205__instance7");
		_205__Gate7->A(_072_);
		_205__Gate7->ZN(_081_);

		_206__Gate8 = new INV1_X1("_206__instance8");
		_206__Gate8->A(_090_);
		_206__Gate8->ZN(_099_);

		_207__Gate9 = new INV1_X1("_207__instance9");
		_207__Gate9->A(_109_);
		_207__Gate9->ZN(_137_);

		_208__Gate10 = new INV1_X1("_208__instance10");
		_208__Gate10->A(_121_);
		_208__Gate10->ZN(_139_);

		_209__Gate11 = new NOR2_X1("_209__instance11");
		_209__Gate11->A1(_123_);
		_209__Gate11->A2(_139_);
		_209__Gate11->ZN(_140_);

		_210__Gate12 = new INV1_X1("_210__instance12");
		_210__Gate12->A(_140_);
		_210__Gate12->ZN(_141_);

		_211__Gate13 = new NOR2_X1("_211__instance13");
		_211__Gate13->A1(_141_);
		_211__Gate13->A2(_137_);
		_211__Gate13->ZN(_124_);

		_212__Gate14 = new INV1_X1("_212__instance14");
		_212__Gate14->A(_123_);
		_212__Gate14->ZN(_143_);

		_213__Gate15 = new NOR2_X1("_213__instance15");
		_213__Gate15->A1(_143_);
		_213__Gate15->A2(_137_);
		_213__Gate15->ZN(_144_);

		_214__Gate16 = new INV1_X1("_214__instance16");
		_214__Gate16->A(_144_);
		_214__Gate16->ZN(_145_);

		_215__Gate17 = new NOR2_X1("_215__instance17");
		_215__Gate17->A1(_145_);
		_215__Gate17->A2(_139_);
		_215__Gate17->ZN(_125_);

		_216__Gate18 = new INV1_X1("_216__instance18");
		_216__Gate18->A(_125_);
		_216__Gate18->ZN(_126_);

		_217__Gate19 = new INV1_X1("_217__instance19");
		_217__Gate19->A(_129_);
		_217__Gate19->ZN(_148_);

		_218__Gate20 = new NOR2_X1("_218__instance20");
		_218__Gate20->A1(_148_);
		_218__Gate20->A2(_090_);
		_218__Gate20->ZN(_150_);

		_219__Gate21 = new NAND2_X1("_219__instance21");
		_219__Gate21->A1(_150_);
		_219__Gate21->A2(_149_);
		_219__Gate21->ZN(_151_);

		_220__Gate22 = new INV1_X1("_220__instance22");
		_220__Gate22->A(_130_);
		_220__Gate22->ZN(_153_);

		_221__Gate23 = new NOR2_X1("_221__instance23");
		_221__Gate23->A1(_153_);
		_221__Gate23->A2(_090_);
		_221__Gate23->ZN(_155_);

		_222__Gate24 = new NOR2_X1("_222__instance24");
		_222__Gate24->A1(_155_);
		_222__Gate24->A2(_134_);
		_222__Gate24->ZN(_157_);

		_223__Gate25 = new NAND2_X1("_223__instance25");
		_223__Gate25->A1(_130_);
		_223__Gate25->A2(_099_);
		_223__Gate25->ZN(_158_);

		_224__Gate26 = new NOR2_X1("_224__instance26");
		_224__Gate26->A1(_158_);
		_224__Gate26->A2(_131_);
		_224__Gate26->ZN(_159_);

		_225__Gate27 = new NOR2_X1("_225__instance27");
		_225__Gate27->A1(_159_);
		_225__Gate27->A2(_157_);
		_225__Gate27->ZN(_160_);

		_226__Gate28 = new NAND2_X1("_226__instance28");
		_226__Gate28->A1(_160_);
		_226__Gate28->A2(_151_);
		_226__Gate28->ZN(_162_);

		_227__Gate29 = new NOR2_X1("_227__instance29");
		_227__Gate29->A1(_123_);
		_227__Gate29->A2(_121_);
		_227__Gate29->ZN(_164_);

		_228__Gate30 = new NOR2_X1("_228__instance30");
		_228__Gate30->A1(_164_);
		_228__Gate30->A2(_109_);
		_228__Gate30->ZN(_166_);

		_229__Gate31 = new NOR2_X1("_229__instance31");
		_229__Gate31->A1(_140_);
		_229__Gate31->A2(_137_);
		_229__Gate31->ZN(_167_);

		_230__Gate32 = new NOR2_X1("_230__instance32");
		_230__Gate32->A1(_167_);
		_230__Gate32->A2(_166_);
		_230__Gate32->ZN(_169_);

		_231__Gate33 = new NOR2_X1("_231__instance33");
		_231__Gate33->A1(_160_);
		_231__Gate33->A2(_151_);
		_231__Gate33->ZN(_171_);

		_232__Gate34 = new NOR2_X1("_232__instance34");
		_232__Gate34->A1(_171_);
		_232__Gate34->A2(_169_);
		_232__Gate34->ZN(_172_);

		_233__Gate35 = new NAND2_X1("_233__instance35");
		_233__Gate35->A1(_172_);
		_233__Gate35->A2(_162_);
		_233__Gate35->ZN(_173_);

		_234__Gate36 = new INV1_X1("_234__instance36");
		_234__Gate36->A(_169_);
		_234__Gate36->ZN(_175_);

		_235__Gate37 = new NOR2_X1("_235__instance37");
		_235__Gate37->A1(_175_);
		_235__Gate37->A2(_149_);
		_235__Gate37->ZN(_177_);

		_236__Gate38 = new NOR2_X1("_236__instance38");
		_236__Gate38->A1(_177_);
		_236__Gate38->A2(_127_);
		_236__Gate38->ZN(_178_);

		_237__Gate39 = new NAND2_X1("_237__instance39");
		_237__Gate39->A1(_178_);
		_237__Gate39->A2(_173_);
		_237__Gate39->ZN(_132_);

		_238__Gate40 = new NAND2_X1("_238__instance40");
		_238__Gate40->A1(_133_);
		_238__Gate40->A2(_099_);
		_238__Gate40->ZN(_181_);

		_239__Gate41 = new NOR2_X1("_239__instance41");
		_239__Gate41->A1(_181_);
		_239__Gate41->A2(_122_);
		_239__Gate41->ZN(_182_);

		_240__Gate42 = new INV1_X1("_240__instance42");
		_240__Gate42->A(_182_);
		_240__Gate42->ZN(_184_);

		_241__Gate43 = new NAND2_X1("_241__instance43");
		_241__Gate43->A1(_181_);
		_241__Gate43->A2(_122_);
		_241__Gate43->ZN(_186_);

		_242__Gate44 = new NAND2_X1("_242__instance44");
		_242__Gate44->A1(_186_);
		_242__Gate44->A2(_184_);
		_242__Gate44->ZN(_188_);

		_243__Gate45 = new NOR2_X1("_243__instance45");
		_243__Gate45->A1(_157_);
		_243__Gate45->A2(_151_);
		_243__Gate45->ZN(_190_);

		_244__Gate46 = new NOR2_X1("_244__instance46");
		_244__Gate46->A1(_190_);
		_244__Gate46->A2(_159_);
		_244__Gate46->ZN(_192_);

		_245__Gate47 = new NAND2_X1("_245__instance47");
		_245__Gate47->A1(_192_);
		_245__Gate47->A2(_188_);
		_245__Gate47->ZN(_194_);

		_246__Gate48 = new INV1_X1("_246__instance48");
		_246__Gate48->A(_186_);
		_246__Gate48->ZN(_196_);

		_247__Gate49 = new NOR2_X1("_247__instance49");
		_247__Gate49->A1(_192_);
		_247__Gate49->A2(_196_);
		_247__Gate49->ZN(_198_);

		_248__Gate50 = new NAND2_X1("_248__instance50");
		_248__Gate50->A1(_198_);
		_248__Gate50->A2(_184_);
		_248__Gate50->ZN(_053_);

		_249__Gate51 = new NAND2_X1("_249__instance51");
		_249__Gate51->A1(_053_);
		_249__Gate51->A2(_194_);
		_249__Gate51->ZN(_054_);

		_250__Gate52 = new NAND2_X1("_250__instance52");
		_250__Gate52->A1(_054_);
		_250__Gate52->A2(_175_);
		_250__Gate52->ZN(_055_);

		_251__Gate53 = new NOR2_X1("_251__instance53");
		_251__Gate53->A1(_175_);
		_251__Gate53->A2(_134_);
		_251__Gate53->ZN(_056_);

		_252__Gate54 = new NOR2_X1("_252__instance54");
		_252__Gate54->A1(_056_);
		_252__Gate54->A2(_127_);
		_252__Gate54->ZN(_057_);

		_253__Gate55 = new NAND2_X1("_253__instance55");
		_253__Gate55->A1(_057_);
		_253__Gate55->A2(_055_);
		_253__Gate55->ZN(_135_);

		_254__Gate56 = new NOR2_X1("_254__instance56");
		_254__Gate56->A1(_198_);
		_254__Gate56->A2(_182_);
		_254__Gate56->ZN(_058_);

		_255__Gate57 = new NAND2_X1("_255__instance57");
		_255__Gate57->A1(_136_);
		_255__Gate57->A2(_099_);
		_255__Gate57->ZN(_059_);

		_256__Gate58 = new NOR2_X1("_256__instance58");
		_256__Gate58->A1(_059_);
		_256__Gate58->A2(_050_);
		_256__Gate58->ZN(_060_);

		_257__Gate59 = new NOR2_X1("_257__instance59");
		_257__Gate59->A1(_060_);
		_257__Gate59->A2(_169_);
		_257__Gate59->ZN(_061_);

		_258__Gate60 = new NAND2_X1("_258__instance60");
		_258__Gate60->A1(_061_);
		_258__Gate60->A2(_058_);
		_258__Gate60->ZN(_063_);

		_259__Gate61 = new NOR2_X1("_259__instance61");
		_259__Gate61->A1(_059_);
		_259__Gate61->A2(_169_);
		_259__Gate61->ZN(_064_);

		_260__Gate62 = new NOR2_X1("_260__instance62");
		_260__Gate62->A1(_064_);
		_260__Gate62->A2(_051_);
		_260__Gate62->ZN(_065_);

		_261__Gate63 = new NOR2_X1("_261__instance63");
		_261__Gate63->A1(_065_);
		_261__Gate63->A2(_127_);
		_261__Gate63->ZN(_066_);

		_262__Gate64 = new NAND2_X1("_262__instance64");
		_262__Gate64->A1(_066_);
		_262__Gate64->A2(_063_);
		_262__Gate64->ZN(_142_);

		_263__Gate65 = new INV1_X1("_263__instance65");
		_263__Gate65->A(_059_);
		_263__Gate65->ZN(_067_);

		_264__Gate66 = new NOR2_X1("_264__instance66");
		_264__Gate66->A1(_067_);
		_264__Gate66->A2(_051_);
		_264__Gate66->ZN(_068_);

		_265__Gate67 = new NOR2_X1("_265__instance67");
		_265__Gate67->A1(_068_);
		_265__Gate67->A2(_060_);
		_265__Gate67->ZN(_069_);

		_266__Gate68 = new NAND2_X1("_266__instance68");
		_266__Gate68->A1(_069_);
		_266__Gate68->A2(_058_);
		_266__Gate68->ZN(_070_);

		_267__Gate69 = new NOR2_X1("_267__instance69");
		_267__Gate69->A1(_069_);
		_267__Gate69->A2(_058_);
		_267__Gate69->ZN(_071_);

		_268__Gate70 = new NOR2_X1("_268__instance70");
		_268__Gate70->A1(_071_);
		_268__Gate70->A2(_169_);
		_268__Gate70->ZN(_073_);

		_269__Gate71 = new NAND2_X1("_269__instance71");
		_269__Gate71->A1(_073_);
		_269__Gate71->A2(_070_);
		_269__Gate71->ZN(_074_);

		_270__Gate72 = new NOR2_X1("_270__instance72");
		_270__Gate72->A1(_175_);
		_270__Gate72->A2(_128_);
		_270__Gate72->ZN(_075_);

		_271__Gate73 = new NOR2_X1("_271__instance73");
		_271__Gate73->A1(_075_);
		_271__Gate73->A2(_127_);
		_271__Gate73->ZN(_076_);

		_272__Gate74 = new NAND2_X1("_272__instance74");
		_272__Gate74->A1(_076_);
		_272__Gate74->A2(_074_);
		_272__Gate74->ZN(_146_);

		_273__Gate75 = new INV1_X1("_273__instance75");
		_273__Gate75->A(_127_);
		_273__Gate75->ZN(_077_);

		_274__Gate76 = new NAND2_X1("_274__instance76");
		_274__Gate76->A1(_145_);
		_274__Gate76->A2(_139_);
		_274__Gate76->ZN(_078_);

		_275__Gate77 = new NAND2_X1("_275__instance77");
		_275__Gate77->A1(_078_);
		_275__Gate77->A2(_077_);
		_275__Gate77->ZN(_079_);

		_276__Gate78 = new NOR2_X1("_276__instance78");
		_276__Gate78->A1(_079_);
		_276__Gate78->A2(_125_);
		_276__Gate78->ZN(_147_);

		_277__Gate79 = new NOR2_X1("_277__instance79");
		_277__Gate79->A1(_167_);
		_277__Gate79->A2(_123_);
		_277__Gate79->ZN(_080_);

		_278__Gate80 = new NAND2_X1("_278__instance80");
		_278__Gate80->A1(_145_);
		_278__Gate80->A2(_077_);
		_278__Gate80->ZN(_082_);

		_279__Gate81 = new NOR2_X1("_279__instance81");
		_279__Gate81->A1(_082_);
		_279__Gate81->A2(_080_);
		_279__Gate81->ZN(_152_);

		_280__Gate82 = new NOR2_X1("_280__instance82");
		_280__Gate82->A1(_167_);
		_280__Gate82->A2(_127_);
		_280__Gate82->ZN(_154_);

		_281__Gate83 = new NAND2_X1("_281__instance83");
		_281__Gate83->A1(_124_);
		_281__Gate83->A2(_165_);
		_281__Gate83->ZN(_083_);

		_282__Gate84 = new INV1_X1("_282__instance84");
		_282__Gate84->A(_156_);
		_282__Gate84->ZN(_084_);

		_283__Gate85 = new INV1_X1("_283__instance85");
		_283__Gate85->A(_124_);
		_283__Gate85->ZN(_085_);

		_284__Gate86 = new NAND2_X1("_284__instance86");
		_284__Gate86->A1(_085_);
		_284__Gate86->A2(_084_);
		_284__Gate86->ZN(_086_);

		_285__Gate87 = new NAND2_X1("_285__instance87");
		_285__Gate87->A1(_086_);
		_285__Gate87->A2(_083_);
		_285__Gate87->ZN(_087_);

		_286__Gate88 = new NAND2_X1("_286__instance88");
		_286__Gate88->A1(_087_);
		_286__Gate88->A2(_169_);
		_286__Gate88->ZN(_088_);

		_287__Gate89 = new INV1_X1("_287__instance89");
		_287__Gate89->A(_150_);
		_287__Gate89->ZN(_089_);

		_288__Gate90 = new NAND2_X1("_288__instance90");
		_288__Gate90->A1(_089_);
		_288__Gate90->A2(_138_);
		_288__Gate90->ZN(_091_);

		_289__Gate91 = new NAND2_X1("_289__instance91");
		_289__Gate91->A1(_091_);
		_289__Gate91->A2(_151_);
		_289__Gate91->ZN(_092_);

		_290__Gate92 = new NAND2_X1("_290__instance92");
		_290__Gate92->A1(_092_);
		_290__Gate92->A2(_175_);
		_290__Gate92->ZN(_093_);

		_291__Gate93 = new NAND2_X1("_291__instance93");
		_291__Gate93->A1(_093_);
		_291__Gate93->A2(_088_);
		_291__Gate93->ZN(_161_);

		_292__Gate94 = new NOR2_X1("_292__instance94");
		_292__Gate94->A1(_169_);
		_292__Gate94->A2(_165_);
		_292__Gate94->ZN(_094_);

		_293__Gate95 = new NOR2_X1("_293__instance95");
		_293__Gate95->A1(_124_);
		_293__Gate95->A2(_163_);
		_293__Gate95->ZN(_095_);

		_294__Gate96 = new NAND2_X1("_294__instance96");
		_294__Gate96->A1(_124_);
		_294__Gate96->A2(_052_);
		_294__Gate96->ZN(_096_);

		_295__Gate97 = new NAND2_X1("_295__instance97");
		_295__Gate97->A1(_096_);
		_295__Gate97->A2(_169_);
		_295__Gate97->ZN(_097_);

		_296__Gate98 = new NOR2_X1("_296__instance98");
		_296__Gate98->A1(_097_);
		_296__Gate98->A2(_095_);
		_296__Gate98->ZN(_098_);

		_297__Gate99 = new NOR2_X1("_297__instance99");
		_297__Gate99->A1(_098_);
		_297__Gate99->A2(_094_);
		_297__Gate99->ZN(_168_);

		_298__Gate100 = new NOR2_X1("_298__instance100");
		_298__Gate100->A1(_169_);
		_298__Gate100->A2(_052_);
		_298__Gate100->ZN(_100_);

		_299__Gate101 = new NOR2_X1("_299__instance101");
		_299__Gate101->A1(_124_);
		_299__Gate101->A2(_170_);
		_299__Gate101->ZN(_101_);

		_300__Gate102 = new NAND2_X1("_300__instance102");
		_300__Gate102->A1(_124_);
		_300__Gate102->A2(_072_);
		_300__Gate102->ZN(_102_);

		_301__Gate103 = new NAND2_X1("_301__instance103");
		_301__Gate103->A1(_102_);
		_301__Gate103->A2(_169_);
		_301__Gate103->ZN(_103_);

		_302__Gate104 = new NOR2_X1("_302__instance104");
		_302__Gate104->A1(_103_);
		_302__Gate104->A2(_101_);
		_302__Gate104->ZN(_104_);

		_303__Gate105 = new NOR2_X1("_303__instance105");
		_303__Gate105->A1(_104_);
		_303__Gate105->A2(_100_);
		_303__Gate105->ZN(_174_);

		_304__Gate106 = new NOR2_X1("_304__instance106");
		_304__Gate106->A1(_169_);
		_304__Gate106->A2(_072_);
		_304__Gate106->ZN(_105_);

		_305__Gate107 = new NOR2_X1("_305__instance107");
		_305__Gate107->A1(_124_);
		_305__Gate107->A2(_176_);
		_305__Gate107->ZN(_106_);

		_306__Gate108 = new NAND2_X1("_306__instance108");
		_306__Gate108->A1(_124_);
		_306__Gate108->A2(_090_);
		_306__Gate108->ZN(_107_);

		_307__Gate109 = new NAND2_X1("_307__instance109");
		_307__Gate109->A1(_107_);
		_307__Gate109->A2(_169_);
		_307__Gate109->ZN(_108_);

		_308__Gate110 = new NOR2_X1("_308__instance110");
		_308__Gate110->A1(_108_);
		_308__Gate110->A2(_106_);
		_308__Gate110->ZN(_110_);

		_309__Gate111 = new NOR2_X1("_309__instance111");
		_309__Gate111->A1(_110_);
		_309__Gate111->A2(_105_);
		_309__Gate111->ZN(_180_);

		_310__Gate112 = new NAND2_X1("_310__instance112");
		_310__Gate112->A1(_164_);
		_310__Gate112->A2(_137_);
		_310__Gate112->ZN(_111_);

		_311__Gate113 = new INV1_X1("_311__instance113");
		_311__Gate113->A(_111_);
		_311__Gate113->ZN(_112_);

		_312__Gate114 = new NOR2_X1("_312__instance114");
		_312__Gate114->A1(_112_);
		_312__Gate114->A2(_136_);
		_312__Gate114->ZN(_113_);

		_313__Gate115 = new NOR2_X1("_313__instance115");
		_313__Gate115->A1(_111_);
		_313__Gate115->A2(_183_);
		_313__Gate115->ZN(_114_);

		_314__Gate116 = new NOR2_X1("_314__instance116");
		_314__Gate116->A1(_114_);
		_314__Gate116->A2(_113_);
		_314__Gate116->ZN(_185_);

		_315__Gate117 = new NOR2_X1("_315__instance117");
		_315__Gate117->A1(_112_);
		_315__Gate117->A2(_133_);
		_315__Gate117->ZN(_115_);

		_316__Gate118 = new NOR2_X1("_316__instance118");
		_316__Gate118->A1(_111_);
		_316__Gate118->A2(_187_);
		_316__Gate118->ZN(_116_);

		_317__Gate119 = new NOR2_X1("_317__instance119");
		_317__Gate119->A1(_116_);
		_317__Gate119->A2(_115_);
		_317__Gate119->ZN(_189_);

		_318__Gate120 = new NOR2_X1("_318__instance120");
		_318__Gate120->A1(_112_);
		_318__Gate120->A2(_130_);
		_318__Gate120->ZN(_117_);

		_319__Gate121 = new NOR2_X1("_319__instance121");
		_319__Gate121->A1(_111_);
		_319__Gate121->A2(_191_);
		_319__Gate121->ZN(_118_);

		_320__Gate122 = new NOR2_X1("_320__instance122");
		_320__Gate122->A1(_118_);
		_320__Gate122->A2(_117_);
		_320__Gate122->ZN(_193_);

		_321__Gate123 = new NOR2_X1("_321__instance123");
		_321__Gate123->A1(_112_);
		_321__Gate123->A2(_129_);
		_321__Gate123->ZN(_119_);

		_322__Gate124 = new NOR2_X1("_322__instance124");
		_322__Gate124->A1(_111_);
		_322__Gate124->A2(_195_);
		_322__Gate124->ZN(_120_);

		_323__Gate125 = new NOR2_X1("_323__instance125");
		_323__Gate125->A1(_120_);
		_323__Gate125->A2(_119_);
		_323__Gate125->ZN(_197_);

		DFF_0_Gate126 = new dff("DFF_0_instance1");
		DFF_0_Gate126->C(CK);
		DFF_0_Gate126->CE(sc_logic_1_signal);
		DFF_0_Gate126->CLR(rst);
		DFF_0_Gate126->D(CNTVG3VD);
		DFF_0_Gate126->NbarT(PbarS);
		DFF_0_Gate126->PRE(sc_logic_0_signal);
		DFF_0_Gate126->Si();
		DFF_0_Gate126->global_reset(sc_logic_0_signal);
		DFF_0_Gate126->Q(CT2);

		DFF_1_Gate127 = new dff("DFF_1_instance2");
		DFF_1_Gate127->C(CK);
		DFF_1_Gate127->CE(sc_logic_1_signal);
		DFF_1_Gate127->CLR(rst);
		DFF_1_Gate127->D(CNTVG2VD);
		DFF_1_Gate127->NbarT(PbarS);
		DFF_1_Gate127->PRE(sc_logic_0_signal);
		DFF_1_Gate127->Si();
		DFF_1_Gate127->global_reset(sc_logic_0_signal);
		DFF_1_Gate127->Q(CT1);

		DFF_10_Gate128 = new dff("DFF_10_instance3");
		DFF_10_Gate128->C(CK);
		DFF_10_Gate128->CE(sc_logic_1_signal);
		DFF_10_Gate128->CLR(rst);
		DFF_10_Gate128->D(MRVG1VD);
		DFF_10_Gate128->NbarT(PbarS);
		DFF_10_Gate128->PRE(sc_logic_0_signal);
		DFF_10_Gate128->Si();
		DFF_10_Gate128->global_reset(sc_logic_0_signal);
		DFF_10_Gate128->Q(MRVQN0);

		DFF_11_Gate129 = new dff("DFF_11_instance4");
		DFF_11_Gate129->C(CK);
		DFF_11_Gate129->CE(sc_logic_1_signal);
		DFF_11_Gate129->CLR(rst);
		DFF_11_Gate129->D(AM3);
		DFF_11_Gate129->NbarT(PbarS);
		DFF_11_Gate129->PRE(sc_logic_0_signal);
		DFF_11_Gate129->Si();
		DFF_11_Gate129->global_reset(sc_logic_0_signal);
		DFF_11_Gate129->Q(AX3);

		DFF_12_Gate130 = new dff("DFF_12_instance5");
		DFF_12_Gate130->C(CK);
		DFF_12_Gate130->CE(sc_logic_1_signal);
		DFF_12_Gate130->CLR(rst);
		DFF_12_Gate130->D(AM2);
		DFF_12_Gate130->NbarT(PbarS);
		DFF_12_Gate130->PRE(sc_logic_0_signal);
		DFF_12_Gate130->Si();
		DFF_12_Gate130->global_reset(sc_logic_0_signal);
		DFF_12_Gate130->Q(AX2);

		DFF_13_Gate131 = new dff("DFF_13_instance6");
		DFF_13_Gate131->C(CK);
		DFF_13_Gate131->CE(sc_logic_1_signal);
		DFF_13_Gate131->CLR(rst);
		DFF_13_Gate131->D(AM1);
		DFF_13_Gate131->NbarT(PbarS);
		DFF_13_Gate131->PRE(sc_logic_0_signal);
		DFF_13_Gate131->Si();
		DFF_13_Gate131->global_reset(sc_logic_0_signal);
		DFF_13_Gate131->Q(AX1);

		DFF_14_Gate132 = new dff("DFF_14_instance7");
		DFF_14_Gate132->C(CK);
		DFF_14_Gate132->CE(sc_logic_1_signal);
		DFF_14_Gate132->CLR(rst);
		DFF_14_Gate132->D(AM0);
		DFF_14_Gate132->NbarT(PbarS);
		DFF_14_Gate132->PRE(sc_logic_0_signal);
		DFF_14_Gate132->Si();
		DFF_14_Gate132->global_reset(sc_logic_0_signal);
		DFF_14_Gate132->Q(AX0);

		DFF_2_Gate133 = new dff("DFF_2_instance8");
		DFF_2_Gate133->C(CK);
		DFF_2_Gate133->CE(sc_logic_1_signal);
		DFF_2_Gate133->CLR(rst);
		DFF_2_Gate133->D(CNTVG1VD);
		DFF_2_Gate133->NbarT(PbarS);
		DFF_2_Gate133->PRE(sc_logic_0_signal);
		DFF_2_Gate133->Si();
		DFF_2_Gate133->global_reset(sc_logic_0_signal);
		DFF_2_Gate133->Q(CNTVCO0);

		DFF_3_Gate134 = new dff("DFF_3_instance9");
		DFF_3_Gate134->C(CK);
		DFF_3_Gate134->CE(sc_logic_1_signal);
		DFF_3_Gate134->CLR(rst);
		DFF_3_Gate134->D(ACVG4VD1);
		DFF_3_Gate134->NbarT(PbarS);
		DFF_3_Gate134->PRE(sc_logic_0_signal);
		DFF_3_Gate134->Si();
		DFF_3_Gate134->global_reset(sc_logic_0_signal);
		DFF_3_Gate134->Q(ACVQN3);

		DFF_4_Gate135 = new dff("DFF_4_instance10");
		DFF_4_Gate135->C(CK);
		DFF_4_Gate135->CE(sc_logic_1_signal);
		DFF_4_Gate135->CLR(rst);
		DFF_4_Gate135->D(ACVG3VD1);
		DFF_4_Gate135->NbarT(PbarS);
		DFF_4_Gate135->PRE(sc_logic_0_signal);
		DFF_4_Gate135->Si();
		DFF_4_Gate135->global_reset(sc_logic_0_signal);
		DFF_4_Gate135->Q(ACVQN2);

		DFF_5_Gate136 = new dff("DFF_5_instance11");
		DFF_5_Gate136->C(CK);
		DFF_5_Gate136->CE(sc_logic_1_signal);
		DFF_5_Gate136->CLR(rst);
		DFF_5_Gate136->D(ACVG2VD1);
		DFF_5_Gate136->NbarT(PbarS);
		DFF_5_Gate136->PRE(sc_logic_0_signal);
		DFF_5_Gate136->Si();
		DFF_5_Gate136->global_reset(sc_logic_0_signal);
		DFF_5_Gate136->Q(ACVQN1);

		DFF_6_Gate137 = new dff("DFF_6_instance12");
		DFF_6_Gate137->C(CK);
		DFF_6_Gate137->CE(sc_logic_1_signal);
		DFF_6_Gate137->CLR(rst);
		DFF_6_Gate137->D(ACVG1VD1);
		DFF_6_Gate137->NbarT(PbarS);
		DFF_6_Gate137->PRE(sc_logic_0_signal);
		DFF_6_Gate137->Si();
		DFF_6_Gate137->global_reset(sc_logic_0_signal);
		DFF_6_Gate137->Q(ACVQN0);

		DFF_7_Gate138 = new dff("DFF_7_instance13");
		DFF_7_Gate138->C(CK);
		DFF_7_Gate138->CE(sc_logic_1_signal);
		DFF_7_Gate138->CLR(rst);
		DFF_7_Gate138->D(MRVG4VD);
		DFF_7_Gate138->NbarT(PbarS);
		DFF_7_Gate138->PRE(sc_logic_0_signal);
		DFF_7_Gate138->Si();
		DFF_7_Gate138->global_reset(sc_logic_0_signal);
		DFF_7_Gate138->Q(MRVQN3);

		DFF_8_Gate139 = new dff("DFF_8_instance14");
		DFF_8_Gate139->C(CK);
		DFF_8_Gate139->CE(sc_logic_1_signal);
		DFF_8_Gate139->CLR(rst);
		DFF_8_Gate139->D(MRVG3VD);
		DFF_8_Gate139->NbarT(PbarS);
		DFF_8_Gate139->PRE(sc_logic_0_signal);
		DFF_8_Gate139->Si();
		DFF_8_Gate139->global_reset(sc_logic_0_signal);
		DFF_8_Gate139->Q(MRVQN2);

		DFF_9_Gate140 = new dff("DFF_9_instance15");
		DFF_9_Gate140->C(CK);
		DFF_9_Gate140->CE(sc_logic_1_signal);
		DFF_9_Gate140->CLR(rst);
		DFF_9_Gate140->D(MRVG2VD);
		DFF_9_Gate140->NbarT(PbarS);
		DFF_9_Gate140->PRE(sc_logic_0_signal);
		DFF_9_Gate140->Si();
		DFF_9_Gate140->global_reset(sc_logic_0_signal);
		DFF_9_Gate140->Q(MRVQN1);

		cout << "all gates are instantiated " << numOfGates << "\n";
		SC_METHOD(sc_logic_signal_assignments);
		SC_THREAD(assignments);
		sensitive << A2 << _189_ << _051_ << _126_ << _132_ << _142_ << _146_ << B3 << _081_ << B0 << ACVQN1 << AX3 << A1 << _124_ << _062_ << _161_ << MRVQN3 << MRVQN2 << CT2 << _149_ << A3 << MRVQN0 << _168_ << _135_ << READY << _185_ << MRVQN1 << AX2 << _125_ << A0 << _099_ << B2 << _152_ << _174_ << CT1 << _180_ << _197_ << ACVQN0 << ACVQN3 << AX0 << _179_ << ACVQN2 << START << _128_ << B1 << _193_ << AX1 << _134_ << _154_ << _147_ << CNTVCO0;
		SC_METHOD(GIC_Coverage_Calculator);
		sensitive << endSim<< newTV;

	}
	void ini();
	void assignments();
	void GIC_Coverage_Calculator();
	void sc_logic_signal_assignments(){
		sc_logic_1_signal.write(SC_LOGIC_1);
		sc_logic_0_signal.write(SC_LOGIC_0);
	}

};
