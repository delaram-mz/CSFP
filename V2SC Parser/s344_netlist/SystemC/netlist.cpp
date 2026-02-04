#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");

void s344_netlist::assignments()
{
	while (true)
	{
		BMVS0N.write(READY);
		CT0.write(CNTVCO0);
		_050_.write(ACVQN3);
		P7.write(_051_);
		_122_.write(ACVQN2);
		P6.write(_128_);
		_131_.write(ACVQN1);
		P5.write(_134_);
		_138_.write(ACVQN0);
		P4.write(_149_);
		_165_.write(MRVQN3);
		P3.write(_179_);
		_052_.write(MRVQN2);
		P2.write(_062_);
		_072_.write(MRVQN1);
		P1.write(_081_);
		_090_.write(MRVQN0);
		P0.write(_099_);
		_109_.write(CNTVCO0);
		_121_.write(CT2);
		_123_.write(CT1);
		READY.write(_124_);
		CNTVCO2.write(_125_);
		CNTVCON2.write(_126_);
		_127_.write(START);
		_129_.write(AX0);
		_130_.write(AX1);
		ACVG1VD1.write(_132_);
		_133_.write(AX2);
		ACVG2VD1.write(_135_);
		_136_.write(AX3);
		ACVG4VD1.write(_142_);
		ACVG3VD1.write(_146_);
		CNTVG3VD.write(_147_);
		CNTVG2VD.write(_152_);
		CNTVG1VD.write(_154_);
		_156_.write(B3);
		MRVG4VD.write(_161_);
		_163_.write(B2);
		MRVG3VD.write(_168_);
		_170_.write(B1);
		MRVG2VD.write(_174_);
		_176_.write(B0);
		MRVG1VD.write(_180_);
		_183_.write(A3);
		AM3.write(_185_);
		_187_.write(A2);
		AM2.write(_189_);
		_191_.write(A1);
		AM1.write(_193_);
		_195_.write(A0);
		AM0.write(_197_);

		wait();
	}
}

void s344_netlist::GIC_Coverage_Calculator()
{
	totalObservedCombs =
	_199__Gate1->numOfObservedCombs +
	_200__Gate2->numOfObservedCombs +
	_201__Gate3->numOfObservedCombs +
	_202__Gate4->numOfObservedCombs +
	_203__Gate5->numOfObservedCombs +
	_204__Gate6->numOfObservedCombs +
	_205__Gate7->numOfObservedCombs +
	_206__Gate8->numOfObservedCombs +
	_207__Gate9->numOfObservedCombs +
	_208__Gate10->numOfObservedCombs +
	_209__Gate11->numOfObservedCombs +
	_210__Gate12->numOfObservedCombs +
	_211__Gate13->numOfObservedCombs +
	_212__Gate14->numOfObservedCombs +
	_213__Gate15->numOfObservedCombs +
	_214__Gate16->numOfObservedCombs +
	_215__Gate17->numOfObservedCombs +
	_216__Gate18->numOfObservedCombs +
	_217__Gate19->numOfObservedCombs +
	_218__Gate20->numOfObservedCombs +
	_219__Gate21->numOfObservedCombs +
	_220__Gate22->numOfObservedCombs +
	_221__Gate23->numOfObservedCombs +
	_222__Gate24->numOfObservedCombs +
	_223__Gate25->numOfObservedCombs +
	_224__Gate26->numOfObservedCombs +
	_225__Gate27->numOfObservedCombs +
	_226__Gate28->numOfObservedCombs +
	_227__Gate29->numOfObservedCombs +
	_228__Gate30->numOfObservedCombs +
	_229__Gate31->numOfObservedCombs +
	_230__Gate32->numOfObservedCombs +
	_231__Gate33->numOfObservedCombs +
	_232__Gate34->numOfObservedCombs +
	_233__Gate35->numOfObservedCombs +
	_234__Gate36->numOfObservedCombs +
	_235__Gate37->numOfObservedCombs +
	_236__Gate38->numOfObservedCombs +
	_237__Gate39->numOfObservedCombs +
	_238__Gate40->numOfObservedCombs +
	_239__Gate41->numOfObservedCombs +
	_240__Gate42->numOfObservedCombs +
	_241__Gate43->numOfObservedCombs +
	_242__Gate44->numOfObservedCombs +
	_243__Gate45->numOfObservedCombs +
	_244__Gate46->numOfObservedCombs +
	_245__Gate47->numOfObservedCombs +
	_246__Gate48->numOfObservedCombs +
	_247__Gate49->numOfObservedCombs +
	_248__Gate50->numOfObservedCombs +
	_249__Gate51->numOfObservedCombs +
	_250__Gate52->numOfObservedCombs +
	_251__Gate53->numOfObservedCombs +
	_252__Gate54->numOfObservedCombs +
	_253__Gate55->numOfObservedCombs +
	_254__Gate56->numOfObservedCombs +
	_255__Gate57->numOfObservedCombs +
	_256__Gate58->numOfObservedCombs +
	_257__Gate59->numOfObservedCombs +
	_258__Gate60->numOfObservedCombs +
	_259__Gate61->numOfObservedCombs +
	_260__Gate62->numOfObservedCombs +
	_261__Gate63->numOfObservedCombs +
	_262__Gate64->numOfObservedCombs +
	_263__Gate65->numOfObservedCombs +
	_264__Gate66->numOfObservedCombs +
	_265__Gate67->numOfObservedCombs +
	_266__Gate68->numOfObservedCombs +
	_267__Gate69->numOfObservedCombs +
	_268__Gate70->numOfObservedCombs +
	_269__Gate71->numOfObservedCombs +
	_270__Gate72->numOfObservedCombs +
	_271__Gate73->numOfObservedCombs +
	_272__Gate74->numOfObservedCombs +
	_273__Gate75->numOfObservedCombs +
	_274__Gate76->numOfObservedCombs +
	_275__Gate77->numOfObservedCombs +
	_276__Gate78->numOfObservedCombs +
	_277__Gate79->numOfObservedCombs +
	_278__Gate80->numOfObservedCombs +
	_279__Gate81->numOfObservedCombs +
	_280__Gate82->numOfObservedCombs +
	_281__Gate83->numOfObservedCombs +
	_282__Gate84->numOfObservedCombs +
	_283__Gate85->numOfObservedCombs +
	_284__Gate86->numOfObservedCombs +
	_285__Gate87->numOfObservedCombs +
	_286__Gate88->numOfObservedCombs +
	_287__Gate89->numOfObservedCombs +
	_288__Gate90->numOfObservedCombs +
	_289__Gate91->numOfObservedCombs +
	_290__Gate92->numOfObservedCombs +
	_291__Gate93->numOfObservedCombs +
	_292__Gate94->numOfObservedCombs +
	_293__Gate95->numOfObservedCombs +
	_294__Gate96->numOfObservedCombs +
	_295__Gate97->numOfObservedCombs +
	_296__Gate98->numOfObservedCombs +
	_297__Gate99->numOfObservedCombs +
	_298__Gate100->numOfObservedCombs +
	_299__Gate101->numOfObservedCombs +
	_300__Gate102->numOfObservedCombs +
	_301__Gate103->numOfObservedCombs +
	_302__Gate104->numOfObservedCombs +
	_303__Gate105->numOfObservedCombs +
	_304__Gate106->numOfObservedCombs +
	_305__Gate107->numOfObservedCombs +
	_306__Gate108->numOfObservedCombs +
	_307__Gate109->numOfObservedCombs +
	_308__Gate110->numOfObservedCombs +
	_309__Gate111->numOfObservedCombs +
	_310__Gate112->numOfObservedCombs +
	_311__Gate113->numOfObservedCombs +
	_312__Gate114->numOfObservedCombs +
	_313__Gate115->numOfObservedCombs +
	_314__Gate116->numOfObservedCombs +
	_315__Gate117->numOfObservedCombs +
	_316__Gate118->numOfObservedCombs +
	_317__Gate119->numOfObservedCombs +
	_318__Gate120->numOfObservedCombs +
	_319__Gate121->numOfObservedCombs +
	_320__Gate122->numOfObservedCombs +
	_321__Gate123->numOfObservedCombs +
	_322__Gate124->numOfObservedCombs +
	_323__Gate125->numOfObservedCombs +
	DFF_0_Gate126->numOfObservedCombs +
	DFF_1_Gate127->numOfObservedCombs +
	DFF_1_Gate128->numOfObservedCombs +
	DFF_1_Gate129->numOfObservedCombs +
	DFF_1_Gate130->numOfObservedCombs +
	DFF_1_Gate131->numOfObservedCombs +
	DFF_1_Gate132->numOfObservedCombs +
	DFF_2_Gate133->numOfObservedCombs +
	DFF_3_Gate134->numOfObservedCombs +
	DFF_4_Gate135->numOfObservedCombs +
	DFF_5_Gate136->numOfObservedCombs +
	DFF_6_Gate137->numOfObservedCombs +
	DFF_7_Gate138->numOfObservedCombs +
	DFF_8_Gate139->numOfObservedCombs +
	DFF_9_Gate140->numOfObservedCombs;
	cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	cout << "GIC Coverage = " << GIC_Coverage << "\n";

}