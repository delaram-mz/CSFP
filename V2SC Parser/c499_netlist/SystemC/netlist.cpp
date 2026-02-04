#include "netlist.h"
#include <cmath>
std::ofstream GIC_logFile("GIC_logFile.txt");

void c499_netlist::assignments()
{
	while (true)
	{
		_0156_.write(N17);
		_0157_.write(N1);
		_0403_.write(N49);
		_0510_.write(N33);
		_0806_.write(N137);
		_0879_.write(N129);
		_0158_.write(N69);
		_0170_.write(N65);
		_0192_.write(N77);
		_0204_.write(N73);
		_0246_.write(N85);
		_0260_.write(N81);
		_0287_.write(N93);
		_0302_.write(N89);
		_0371_.write(N29);
		_0382_.write(N13);
		_0404_.write(N61);
		_0415_.write(N45);
		_0446_.write(N132);
		_0467_.write(N117);
		_0478_.write(N113);
		_0499_.write(N125);
		_0511_.write(N121);
		_0572_.write(N25);
		_0583_.write(N9);
		_0604_.write(N57);
		_0615_.write(N41);
		_0646_.write(N131);
		_0667_.write(N101);
		_0678_.write(N97);
		_0698_.write(N109);
		_0707_.write(N105);
		_0768_.write(N21);
		_0777_.write(N5);
		_0797_.write(N53);
		_0807_.write(N37);
		_0833_.write(N130);
		_0894_.write(N133);
		_0167_.write(N134);
		_0184_.write(N135);
		_0194_.write(N136);
		N724.write(_0205_);
		N725.write(_0208_);
		N726.write(_0211_);
		N727.write(_0214_);
		N728.write(_0221_);
		N729.write(_0224_);
		N730.write(_0227_);
		N731.write(_0230_);
		N732.write(_0238_);
		N733.write(_0241_);
		N734.write(_0244_);
		N735.write(_0248_);
		N736.write(_0254_);
		N737.write(_0257_);
		N738.write(_0261_);
		N739.write(_0264_);
		N740.write(_0275_);
		N741.write(_0278_);
		N742.write(_0281_);
		N743.write(_0284_);
		N744.write(_0290_);
		N745.write(_0293_);
		N746.write(_0296_);
		N747.write(_0299_);
		N748.write(_0305_);
		N749.write(_0308_);
		N750.write(_0311_);
		N751.write(_0314_);
		N752.write(_0319_);
		N753.write(_0322_);
		N754.write(_0325_);
		N755.write(_0328_);

		wait();
	}
}

void c499_netlist::GIC_Coverage_Calculator()
{
	totalObservedCombs =
	_0901_Gate1->numOfObservedCombs +
	_0902_Gate2->numOfObservedCombs +
	_0903_Gate3->numOfObservedCombs +
	_0904_Gate4->numOfObservedCombs +
	_0905_Gate5->numOfObservedCombs +
	_0906_Gate6->numOfObservedCombs +
	_0907_Gate7->numOfObservedCombs +
	_0908_Gate8->numOfObservedCombs +
	_0909_Gate9->numOfObservedCombs +
	_0910_Gate10->numOfObservedCombs +
	_0911_Gate11->numOfObservedCombs +
	_0912_Gate12->numOfObservedCombs +
	_0913_Gate13->numOfObservedCombs +
	_0914_Gate14->numOfObservedCombs +
	_0915_Gate15->numOfObservedCombs +
	_0916_Gate16->numOfObservedCombs +
	_0917_Gate17->numOfObservedCombs +
	_0918_Gate18->numOfObservedCombs +
	_0919_Gate19->numOfObservedCombs +
	_0920_Gate20->numOfObservedCombs +
	_0921_Gate21->numOfObservedCombs +
	_0922_Gate22->numOfObservedCombs +
	_0923_Gate23->numOfObservedCombs +
	_0924_Gate24->numOfObservedCombs +
	_0925_Gate25->numOfObservedCombs +
	_0926_Gate26->numOfObservedCombs +
	_0927_Gate27->numOfObservedCombs +
	_0928_Gate28->numOfObservedCombs +
	_0929_Gate29->numOfObservedCombs +
	_0930_Gate30->numOfObservedCombs +
	_0931_Gate31->numOfObservedCombs +
	_0932_Gate32->numOfObservedCombs +
	_0933_Gate33->numOfObservedCombs +
	_0934_Gate34->numOfObservedCombs +
	_0935_Gate35->numOfObservedCombs +
	_0936_Gate36->numOfObservedCombs +
	_0937_Gate37->numOfObservedCombs +
	_0938_Gate38->numOfObservedCombs +
	_0939_Gate39->numOfObservedCombs +
	_0940_Gate40->numOfObservedCombs +
	_0941_Gate41->numOfObservedCombs +
	_0942_Gate42->numOfObservedCombs +
	_0943_Gate43->numOfObservedCombs +
	_0944_Gate44->numOfObservedCombs +
	_0945_Gate45->numOfObservedCombs +
	_0946_Gate46->numOfObservedCombs +
	_0947_Gate47->numOfObservedCombs +
	_0948_Gate48->numOfObservedCombs +
	_0949_Gate49->numOfObservedCombs +
	_0950_Gate50->numOfObservedCombs +
	_0951_Gate51->numOfObservedCombs +
	_0952_Gate52->numOfObservedCombs +
	_0953_Gate53->numOfObservedCombs +
	_0954_Gate54->numOfObservedCombs +
	_0955_Gate55->numOfObservedCombs +
	_0956_Gate56->numOfObservedCombs +
	_0957_Gate57->numOfObservedCombs +
	_0958_Gate58->numOfObservedCombs +
	_0959_Gate59->numOfObservedCombs +
	_0960_Gate60->numOfObservedCombs +
	_0961_Gate61->numOfObservedCombs +
	_0962_Gate62->numOfObservedCombs +
	_0963_Gate63->numOfObservedCombs +
	_0964_Gate64->numOfObservedCombs +
	_0965_Gate65->numOfObservedCombs +
	_0966_Gate66->numOfObservedCombs +
	_0967_Gate67->numOfObservedCombs +
	_0968_Gate68->numOfObservedCombs +
	_0969_Gate69->numOfObservedCombs +
	_0970_Gate70->numOfObservedCombs +
	_0971_Gate71->numOfObservedCombs +
	_0972_Gate72->numOfObservedCombs +
	_0973_Gate73->numOfObservedCombs +
	_0974_Gate74->numOfObservedCombs +
	_0975_Gate75->numOfObservedCombs +
	_0976_Gate76->numOfObservedCombs +
	_0977_Gate77->numOfObservedCombs +
	_0978_Gate78->numOfObservedCombs +
	_0979_Gate79->numOfObservedCombs +
	_0980_Gate80->numOfObservedCombs +
	_0981_Gate81->numOfObservedCombs +
	_0982_Gate82->numOfObservedCombs +
	_0983_Gate83->numOfObservedCombs +
	_0984_Gate84->numOfObservedCombs +
	_0985_Gate85->numOfObservedCombs +
	_0986_Gate86->numOfObservedCombs +
	_0987_Gate87->numOfObservedCombs +
	_0988_Gate88->numOfObservedCombs +
	_0989_Gate89->numOfObservedCombs +
	_0990_Gate90->numOfObservedCombs +
	_0991_Gate91->numOfObservedCombs +
	_0992_Gate92->numOfObservedCombs +
	_0993_Gate93->numOfObservedCombs +
	_0994_Gate94->numOfObservedCombs +
	_0995_Gate95->numOfObservedCombs +
	_0996_Gate96->numOfObservedCombs +
	_0997_Gate97->numOfObservedCombs +
	_0998_Gate98->numOfObservedCombs +
	_0999_Gate99->numOfObservedCombs +
	_1000_Gate100->numOfObservedCombs +
	_1001_Gate101->numOfObservedCombs +
	_1002_Gate102->numOfObservedCombs +
	_1003_Gate103->numOfObservedCombs +
	_1004_Gate104->numOfObservedCombs +
	_1005_Gate105->numOfObservedCombs +
	_1006_Gate106->numOfObservedCombs +
	_1007_Gate107->numOfObservedCombs +
	_1008_Gate108->numOfObservedCombs +
	_1009_Gate109->numOfObservedCombs +
	_1010_Gate110->numOfObservedCombs +
	_1011_Gate111->numOfObservedCombs +
	_1012_Gate112->numOfObservedCombs +
	_1013_Gate113->numOfObservedCombs +
	_1014_Gate114->numOfObservedCombs +
	_1015_Gate115->numOfObservedCombs +
	_1016_Gate116->numOfObservedCombs +
	_1017_Gate117->numOfObservedCombs +
	_1018_Gate118->numOfObservedCombs +
	_1019_Gate119->numOfObservedCombs +
	_1020_Gate120->numOfObservedCombs +
	_1021_Gate121->numOfObservedCombs +
	_1022_Gate122->numOfObservedCombs +
	_1023_Gate123->numOfObservedCombs +
	_1024_Gate124->numOfObservedCombs +
	_1025_Gate125->numOfObservedCombs +
	_1026_Gate126->numOfObservedCombs +
	_1027_Gate127->numOfObservedCombs +
	_1028_Gate128->numOfObservedCombs +
	_1029_Gate129->numOfObservedCombs +
	_1030_Gate130->numOfObservedCombs +
	_1031_Gate131->numOfObservedCombs +
	_1032_Gate132->numOfObservedCombs +
	_1033_Gate133->numOfObservedCombs +
	_1034_Gate134->numOfObservedCombs +
	_1035_Gate135->numOfObservedCombs +
	_1036_Gate136->numOfObservedCombs +
	_1037_Gate137->numOfObservedCombs +
	_1038_Gate138->numOfObservedCombs +
	_1039_Gate139->numOfObservedCombs +
	_1040_Gate140->numOfObservedCombs +
	_1041_Gate141->numOfObservedCombs +
	_1042_Gate142->numOfObservedCombs +
	_1043_Gate143->numOfObservedCombs +
	_1044_Gate144->numOfObservedCombs +
	_1045_Gate145->numOfObservedCombs +
	_1046_Gate146->numOfObservedCombs +
	_1047_Gate147->numOfObservedCombs +
	_1048_Gate148->numOfObservedCombs +
	_1049_Gate149->numOfObservedCombs +
	_1050_Gate150->numOfObservedCombs +
	_1051_Gate151->numOfObservedCombs +
	_1052_Gate152->numOfObservedCombs +
	_1053_Gate153->numOfObservedCombs +
	_1054_Gate154->numOfObservedCombs +
	_1055_Gate155->numOfObservedCombs +
	_1056_Gate156->numOfObservedCombs +
	_1057_Gate157->numOfObservedCombs +
	_1058_Gate158->numOfObservedCombs +
	_1059_Gate159->numOfObservedCombs +
	_1060_Gate160->numOfObservedCombs +
	_1061_Gate161->numOfObservedCombs +
	_1062_Gate162->numOfObservedCombs +
	_1063_Gate163->numOfObservedCombs +
	_1064_Gate164->numOfObservedCombs +
	_1065_Gate165->numOfObservedCombs +
	_1066_Gate166->numOfObservedCombs +
	_1067_Gate167->numOfObservedCombs +
	_1068_Gate168->numOfObservedCombs +
	_1069_Gate169->numOfObservedCombs +
	_1070_Gate170->numOfObservedCombs +
	_1071_Gate171->numOfObservedCombs +
	_1072_Gate172->numOfObservedCombs +
	_1073_Gate173->numOfObservedCombs +
	_1074_Gate174->numOfObservedCombs +
	_1075_Gate175->numOfObservedCombs +
	_1076_Gate176->numOfObservedCombs +
	_1077_Gate177->numOfObservedCombs +
	_1078_Gate178->numOfObservedCombs +
	_1079_Gate179->numOfObservedCombs +
	_1080_Gate180->numOfObservedCombs +
	_1081_Gate181->numOfObservedCombs +
	_1082_Gate182->numOfObservedCombs +
	_1083_Gate183->numOfObservedCombs +
	_1084_Gate184->numOfObservedCombs +
	_1085_Gate185->numOfObservedCombs +
	_1086_Gate186->numOfObservedCombs +
	_1087_Gate187->numOfObservedCombs +
	_1088_Gate188->numOfObservedCombs +
	_1089_Gate189->numOfObservedCombs +
	_1090_Gate190->numOfObservedCombs +
	_1091_Gate191->numOfObservedCombs +
	_1092_Gate192->numOfObservedCombs +
	_1093_Gate193->numOfObservedCombs +
	_1094_Gate194->numOfObservedCombs +
	_1095_Gate195->numOfObservedCombs +
	_1096_Gate196->numOfObservedCombs +
	_1097_Gate197->numOfObservedCombs +
	_1098_Gate198->numOfObservedCombs +
	_1099_Gate199->numOfObservedCombs +
	_1100_Gate200->numOfObservedCombs +
	_1101_Gate201->numOfObservedCombs +
	_1102_Gate202->numOfObservedCombs +
	_1103_Gate203->numOfObservedCombs +
	_1104_Gate204->numOfObservedCombs +
	_1105_Gate205->numOfObservedCombs +
	_1106_Gate206->numOfObservedCombs +
	_1107_Gate207->numOfObservedCombs +
	_1108_Gate208->numOfObservedCombs +
	_1109_Gate209->numOfObservedCombs +
	_1110_Gate210->numOfObservedCombs +
	_1111_Gate211->numOfObservedCombs +
	_1112_Gate212->numOfObservedCombs +
	_1113_Gate213->numOfObservedCombs +
	_1114_Gate214->numOfObservedCombs +
	_1115_Gate215->numOfObservedCombs +
	_1116_Gate216->numOfObservedCombs +
	_1117_Gate217->numOfObservedCombs +
	_1118_Gate218->numOfObservedCombs +
	_1119_Gate219->numOfObservedCombs +
	_1120_Gate220->numOfObservedCombs +
	_1121_Gate221->numOfObservedCombs +
	_1122_Gate222->numOfObservedCombs +
	_1123_Gate223->numOfObservedCombs +
	_1124_Gate224->numOfObservedCombs +
	_1125_Gate225->numOfObservedCombs +
	_1126_Gate226->numOfObservedCombs +
	_1127_Gate227->numOfObservedCombs +
	_1128_Gate228->numOfObservedCombs +
	_1129_Gate229->numOfObservedCombs +
	_1130_Gate230->numOfObservedCombs +
	_1131_Gate231->numOfObservedCombs +
	_1132_Gate232->numOfObservedCombs +
	_1133_Gate233->numOfObservedCombs +
	_1134_Gate234->numOfObservedCombs +
	_1135_Gate235->numOfObservedCombs +
	_1136_Gate236->numOfObservedCombs +
	_1137_Gate237->numOfObservedCombs +
	_1138_Gate238->numOfObservedCombs +
	_1139_Gate239->numOfObservedCombs +
	_1140_Gate240->numOfObservedCombs +
	_1141_Gate241->numOfObservedCombs +
	_1142_Gate242->numOfObservedCombs +
	_1143_Gate243->numOfObservedCombs +
	_1144_Gate244->numOfObservedCombs +
	_1145_Gate245->numOfObservedCombs +
	_1146_Gate246->numOfObservedCombs +
	_1147_Gate247->numOfObservedCombs +
	_1148_Gate248->numOfObservedCombs +
	_1149_Gate249->numOfObservedCombs +
	_1150_Gate250->numOfObservedCombs +
	_1151_Gate251->numOfObservedCombs +
	_1152_Gate252->numOfObservedCombs +
	_1153_Gate253->numOfObservedCombs +
	_1154_Gate254->numOfObservedCombs +
	_1155_Gate255->numOfObservedCombs +
	_1156_Gate256->numOfObservedCombs +
	_1157_Gate257->numOfObservedCombs +
	_1158_Gate258->numOfObservedCombs +
	_1159_Gate259->numOfObservedCombs +
	_1160_Gate260->numOfObservedCombs +
	_1161_Gate261->numOfObservedCombs +
	_1162_Gate262->numOfObservedCombs +
	_1163_Gate263->numOfObservedCombs +
	_1164_Gate264->numOfObservedCombs +
	_1165_Gate265->numOfObservedCombs +
	_1166_Gate266->numOfObservedCombs +
	_1167_Gate267->numOfObservedCombs +
	_1168_Gate268->numOfObservedCombs +
	_1169_Gate269->numOfObservedCombs +
	_1170_Gate270->numOfObservedCombs +
	_1171_Gate271->numOfObservedCombs +
	_1172_Gate272->numOfObservedCombs +
	_1173_Gate273->numOfObservedCombs +
	_1174_Gate274->numOfObservedCombs +
	_1175_Gate275->numOfObservedCombs +
	_1176_Gate276->numOfObservedCombs +
	_1177_Gate277->numOfObservedCombs +
	_1178_Gate278->numOfObservedCombs +
	_1179_Gate279->numOfObservedCombs +
	_1180_Gate280->numOfObservedCombs +
	_1181_Gate281->numOfObservedCombs +
	_1182_Gate282->numOfObservedCombs +
	_1183_Gate283->numOfObservedCombs +
	_1184_Gate284->numOfObservedCombs +
	_1185_Gate285->numOfObservedCombs +
	_1186_Gate286->numOfObservedCombs +
	_1187_Gate287->numOfObservedCombs +
	_1188_Gate288->numOfObservedCombs +
	_1189_Gate289->numOfObservedCombs +
	_1190_Gate290->numOfObservedCombs +
	_1191_Gate291->numOfObservedCombs +
	_1192_Gate292->numOfObservedCombs +
	_1193_Gate293->numOfObservedCombs +
	_1194_Gate294->numOfObservedCombs +
	_1195_Gate295->numOfObservedCombs +
	_1196_Gate296->numOfObservedCombs +
	_1197_Gate297->numOfObservedCombs +
	_1198_Gate298->numOfObservedCombs +
	_1199_Gate299->numOfObservedCombs +
	_1200_Gate300->numOfObservedCombs +
	_1201_Gate301->numOfObservedCombs +
	_1202_Gate302->numOfObservedCombs +
	_1203_Gate303->numOfObservedCombs +
	_1204_Gate304->numOfObservedCombs +
	_1205_Gate305->numOfObservedCombs +
	_1206_Gate306->numOfObservedCombs +
	_1207_Gate307->numOfObservedCombs +
	_1208_Gate308->numOfObservedCombs +
	_1209_Gate309->numOfObservedCombs +
	_1210_Gate310->numOfObservedCombs +
	_1211_Gate311->numOfObservedCombs +
	_1212_Gate312->numOfObservedCombs +
	_1213_Gate313->numOfObservedCombs +
	_1214_Gate314->numOfObservedCombs +
	_1215_Gate315->numOfObservedCombs +
	_1216_Gate316->numOfObservedCombs +
	_1217_Gate317->numOfObservedCombs +
	_1218_Gate318->numOfObservedCombs +
	_1219_Gate319->numOfObservedCombs +
	_1220_Gate320->numOfObservedCombs +
	_1221_Gate321->numOfObservedCombs +
	_1222_Gate322->numOfObservedCombs +
	_1223_Gate323->numOfObservedCombs +
	_1224_Gate324->numOfObservedCombs +
	_1225_Gate325->numOfObservedCombs +
	_1226_Gate326->numOfObservedCombs +
	_1227_Gate327->numOfObservedCombs +
	_1228_Gate328->numOfObservedCombs +
	_1229_Gate329->numOfObservedCombs +
	_1230_Gate330->numOfObservedCombs +
	_1231_Gate331->numOfObservedCombs +
	_1232_Gate332->numOfObservedCombs +
	_1233_Gate333->numOfObservedCombs +
	_1234_Gate334->numOfObservedCombs +
	_1235_Gate335->numOfObservedCombs +
	_1236_Gate336->numOfObservedCombs +
	_1237_Gate337->numOfObservedCombs +
	_1238_Gate338->numOfObservedCombs +
	_1239_Gate339->numOfObservedCombs +
	_1240_Gate340->numOfObservedCombs +
	_1241_Gate341->numOfObservedCombs +
	_1242_Gate342->numOfObservedCombs +
	_1243_Gate343->numOfObservedCombs +
	_1244_Gate344->numOfObservedCombs +
	_1245_Gate345->numOfObservedCombs +
	_1246_Gate346->numOfObservedCombs +
	_1247_Gate347->numOfObservedCombs +
	_1248_Gate348->numOfObservedCombs +
	_1249_Gate349->numOfObservedCombs +
	_1250_Gate350->numOfObservedCombs +
	_1251_Gate351->numOfObservedCombs +
	_1252_Gate352->numOfObservedCombs +
	_1253_Gate353->numOfObservedCombs +
	_1254_Gate354->numOfObservedCombs +
	_1255_Gate355->numOfObservedCombs +
	_1256_Gate356->numOfObservedCombs +
	_1257_Gate357->numOfObservedCombs +
	_1258_Gate358->numOfObservedCombs +
	_1259_Gate359->numOfObservedCombs +
	_1260_Gate360->numOfObservedCombs +
	_1261_Gate361->numOfObservedCombs +
	_1262_Gate362->numOfObservedCombs +
	_1263_Gate363->numOfObservedCombs +
	_1264_Gate364->numOfObservedCombs +
	_1265_Gate365->numOfObservedCombs +
	_1266_Gate366->numOfObservedCombs +
	_1267_Gate367->numOfObservedCombs +
	_1268_Gate368->numOfObservedCombs +
	_1269_Gate369->numOfObservedCombs +
	_1270_Gate370->numOfObservedCombs +
	_1271_Gate371->numOfObservedCombs +
	_1272_Gate372->numOfObservedCombs +
	_1273_Gate373->numOfObservedCombs +
	_1274_Gate374->numOfObservedCombs +
	_1275_Gate375->numOfObservedCombs +
	_1276_Gate376->numOfObservedCombs +
	_1277_Gate377->numOfObservedCombs +
	_1278_Gate378->numOfObservedCombs +
	_1279_Gate379->numOfObservedCombs +
	_1280_Gate380->numOfObservedCombs +
	_1281_Gate381->numOfObservedCombs +
	_1282_Gate382->numOfObservedCombs +
	_1283_Gate383->numOfObservedCombs +
	_1284_Gate384->numOfObservedCombs +
	_1285_Gate385->numOfObservedCombs +
	_1286_Gate386->numOfObservedCombs +
	_1287_Gate387->numOfObservedCombs +
	_1288_Gate388->numOfObservedCombs +
	_1289_Gate389->numOfObservedCombs +
	_1290_Gate390->numOfObservedCombs +
	_1291_Gate391->numOfObservedCombs +
	_1292_Gate392->numOfObservedCombs +
	_1293_Gate393->numOfObservedCombs +
	_1294_Gate394->numOfObservedCombs +
	_1295_Gate395->numOfObservedCombs +
	_1296_Gate396->numOfObservedCombs +
	_1297_Gate397->numOfObservedCombs +
	_1298_Gate398->numOfObservedCombs +
	_1299_Gate399->numOfObservedCombs +
	_1300_Gate400->numOfObservedCombs +
	_1301_Gate401->numOfObservedCombs +
	_1302_Gate402->numOfObservedCombs +
	_1303_Gate403->numOfObservedCombs +
	_1304_Gate404->numOfObservedCombs +
	_1305_Gate405->numOfObservedCombs +
	_1306_Gate406->numOfObservedCombs +
	_1307_Gate407->numOfObservedCombs +
	_1308_Gate408->numOfObservedCombs +
	_1309_Gate409->numOfObservedCombs +
	_1310_Gate410->numOfObservedCombs +
	_1311_Gate411->numOfObservedCombs +
	_1312_Gate412->numOfObservedCombs +
	_1313_Gate413->numOfObservedCombs +
	_1314_Gate414->numOfObservedCombs +
	_1315_Gate415->numOfObservedCombs +
	_1316_Gate416->numOfObservedCombs +
	_1317_Gate417->numOfObservedCombs +
	_1318_Gate418->numOfObservedCombs +
	_1319_Gate419->numOfObservedCombs +
	_1320_Gate420->numOfObservedCombs +
	_1321_Gate421->numOfObservedCombs +
	_1322_Gate422->numOfObservedCombs +
	_1323_Gate423->numOfObservedCombs +
	_1324_Gate424->numOfObservedCombs +
	_1325_Gate425->numOfObservedCombs +
	_1326_Gate426->numOfObservedCombs +
	_1327_Gate427->numOfObservedCombs +
	_1328_Gate428->numOfObservedCombs +
	_1329_Gate429->numOfObservedCombs +
	_1330_Gate430->numOfObservedCombs +
	_1331_Gate431->numOfObservedCombs +
	_1332_Gate432->numOfObservedCombs +
	_1333_Gate433->numOfObservedCombs +
	_1334_Gate434->numOfObservedCombs +
	_1335_Gate435->numOfObservedCombs +
	_1336_Gate436->numOfObservedCombs +
	_1337_Gate437->numOfObservedCombs +
	_1338_Gate438->numOfObservedCombs +
	_1339_Gate439->numOfObservedCombs +
	_1340_Gate440->numOfObservedCombs +
	_1341_Gate441->numOfObservedCombs +
	_1342_Gate442->numOfObservedCombs +
	_1343_Gate443->numOfObservedCombs +
	_1344_Gate444->numOfObservedCombs +
	_1345_Gate445->numOfObservedCombs +
	_1346_Gate446->numOfObservedCombs +
	_1347_Gate447->numOfObservedCombs +
	_1348_Gate448->numOfObservedCombs +
	_1349_Gate449->numOfObservedCombs +
	_1350_Gate450->numOfObservedCombs +
	_1351_Gate451->numOfObservedCombs +
	_1352_Gate452->numOfObservedCombs +
	_1353_Gate453->numOfObservedCombs +
	_1354_Gate454->numOfObservedCombs +
	_1355_Gate455->numOfObservedCombs +
	_1356_Gate456->numOfObservedCombs +
	_1357_Gate457->numOfObservedCombs +
	_1358_Gate458->numOfObservedCombs +
	_1359_Gate459->numOfObservedCombs +
	_1360_Gate460->numOfObservedCombs +
	_1361_Gate461->numOfObservedCombs +
	_1362_Gate462->numOfObservedCombs +
	_1363_Gate463->numOfObservedCombs +
	_1364_Gate464->numOfObservedCombs +
	_1365_Gate465->numOfObservedCombs +
	_1366_Gate466->numOfObservedCombs +
	_1367_Gate467->numOfObservedCombs +
	_1368_Gate468->numOfObservedCombs +
	_1369_Gate469->numOfObservedCombs +
	_1370_Gate470->numOfObservedCombs +
	_1371_Gate471->numOfObservedCombs +
	_1372_Gate472->numOfObservedCombs +
	_1373_Gate473->numOfObservedCombs +
	_1374_Gate474->numOfObservedCombs +
	_1375_Gate475->numOfObservedCombs +
	_1376_Gate476->numOfObservedCombs +
	_1377_Gate477->numOfObservedCombs +
	_1378_Gate478->numOfObservedCombs +
	_1379_Gate479->numOfObservedCombs +
	_1380_Gate480->numOfObservedCombs +
	_1381_Gate481->numOfObservedCombs +
	_1382_Gate482->numOfObservedCombs +
	_1383_Gate483->numOfObservedCombs +
	_1384_Gate484->numOfObservedCombs +
	_1385_Gate485->numOfObservedCombs +
	_1386_Gate486->numOfObservedCombs +
	_1387_Gate487->numOfObservedCombs +
	_1388_Gate488->numOfObservedCombs +
	_1389_Gate489->numOfObservedCombs +
	_1390_Gate490->numOfObservedCombs +
	_1391_Gate491->numOfObservedCombs +
	_1392_Gate492->numOfObservedCombs +
	_1393_Gate493->numOfObservedCombs +
	_1394_Gate494->numOfObservedCombs +
	_1395_Gate495->numOfObservedCombs +
	_1396_Gate496->numOfObservedCombs +
	_1397_Gate497->numOfObservedCombs +
	_1398_Gate498->numOfObservedCombs +
	_1399_Gate499->numOfObservedCombs +
	_1400_Gate500->numOfObservedCombs +
	_1401_Gate501->numOfObservedCombs +
	_1402_Gate502->numOfObservedCombs +
	_1403_Gate503->numOfObservedCombs +
	_1404_Gate504->numOfObservedCombs +
	_1405_Gate505->numOfObservedCombs +
	_1406_Gate506->numOfObservedCombs +
	_1407_Gate507->numOfObservedCombs +
	_1408_Gate508->numOfObservedCombs +
	_1409_Gate509->numOfObservedCombs +
	_1410_Gate510->numOfObservedCombs +
	_1411_Gate511->numOfObservedCombs +
	_1412_Gate512->numOfObservedCombs +
	_1413_Gate513->numOfObservedCombs +
	_1414_Gate514->numOfObservedCombs +
	_1415_Gate515->numOfObservedCombs +
	_1416_Gate516->numOfObservedCombs +
	_1417_Gate517->numOfObservedCombs +
	_1418_Gate518->numOfObservedCombs +
	_1419_Gate519->numOfObservedCombs +
	_1420_Gate520->numOfObservedCombs +
	_1421_Gate521->numOfObservedCombs +
	_1422_Gate522->numOfObservedCombs +
	_1423_Gate523->numOfObservedCombs +
	_1424_Gate524->numOfObservedCombs +
	_1425_Gate525->numOfObservedCombs +
	_1426_Gate526->numOfObservedCombs +
	_1427_Gate527->numOfObservedCombs +
	_1428_Gate528->numOfObservedCombs +
	_1429_Gate529->numOfObservedCombs +
	_1430_Gate530->numOfObservedCombs +
	_1431_Gate531->numOfObservedCombs +
	_1432_Gate532->numOfObservedCombs +
	_1433_Gate533->numOfObservedCombs +
	_1434_Gate534->numOfObservedCombs +
	_1435_Gate535->numOfObservedCombs +
	_1436_Gate536->numOfObservedCombs +
	_1437_Gate537->numOfObservedCombs +
	_1438_Gate538->numOfObservedCombs +
	_1439_Gate539->numOfObservedCombs +
	_1440_Gate540->numOfObservedCombs +
	_1441_Gate541->numOfObservedCombs +
	_1442_Gate542->numOfObservedCombs +
	_1443_Gate543->numOfObservedCombs +
	_1444_Gate544->numOfObservedCombs +
	_1445_Gate545->numOfObservedCombs +
	_1446_Gate546->numOfObservedCombs +
	_1447_Gate547->numOfObservedCombs +
	_1448_Gate548->numOfObservedCombs +
	_1449_Gate549->numOfObservedCombs +
	_1450_Gate550->numOfObservedCombs +
	_1451_Gate551->numOfObservedCombs +
	_1452_Gate552->numOfObservedCombs +
	_1453_Gate553->numOfObservedCombs +
	_1454_Gate554->numOfObservedCombs +
	_1455_Gate555->numOfObservedCombs +
	_1456_Gate556->numOfObservedCombs +
	_1457_Gate557->numOfObservedCombs +
	_1458_Gate558->numOfObservedCombs +
	_1459_Gate559->numOfObservedCombs +
	_1460_Gate560->numOfObservedCombs +
	_1461_Gate561->numOfObservedCombs +
	_1462_Gate562->numOfObservedCombs +
	_1463_Gate563->numOfObservedCombs +
	_1464_Gate564->numOfObservedCombs +
	_1465_Gate565->numOfObservedCombs +
	_1466_Gate566->numOfObservedCombs +
	_1467_Gate567->numOfObservedCombs +
	_1468_Gate568->numOfObservedCombs +
	_1469_Gate569->numOfObservedCombs +
	_1470_Gate570->numOfObservedCombs +
	_1471_Gate571->numOfObservedCombs +
	_1472_Gate572->numOfObservedCombs +
	_1473_Gate573->numOfObservedCombs +
	_1474_Gate574->numOfObservedCombs +
	_1475_Gate575->numOfObservedCombs +
	_1476_Gate576->numOfObservedCombs +
	_1477_Gate577->numOfObservedCombs +
	_1478_Gate578->numOfObservedCombs +
	_1479_Gate579->numOfObservedCombs +
	_1480_Gate580->numOfObservedCombs +
	_1481_Gate581->numOfObservedCombs +
	_1482_Gate582->numOfObservedCombs +
	_1483_Gate583->numOfObservedCombs +
	_1484_Gate584->numOfObservedCombs +
	_1485_Gate585->numOfObservedCombs +
	_1486_Gate586->numOfObservedCombs +
	_1487_Gate587->numOfObservedCombs +
	_1488_Gate588->numOfObservedCombs +
	_1489_Gate589->numOfObservedCombs +
	_1490_Gate590->numOfObservedCombs +
	_1491_Gate591->numOfObservedCombs +
	_1492_Gate592->numOfObservedCombs +
	_1493_Gate593->numOfObservedCombs +
	_1494_Gate594->numOfObservedCombs +
	_1495_Gate595->numOfObservedCombs +
	_1496_Gate596->numOfObservedCombs +
	_1497_Gate597->numOfObservedCombs +
	_1498_Gate598->numOfObservedCombs +
	_1499_Gate599->numOfObservedCombs +
	_1500_Gate600->numOfObservedCombs +
	_1501_Gate601->numOfObservedCombs +
	_1502_Gate602->numOfObservedCombs +
	_1503_Gate603->numOfObservedCombs +
	_1504_Gate604->numOfObservedCombs +
	_1505_Gate605->numOfObservedCombs +
	_1506_Gate606->numOfObservedCombs +
	_1507_Gate607->numOfObservedCombs +
	_1508_Gate608->numOfObservedCombs +
	_1509_Gate609->numOfObservedCombs +
	_1510_Gate610->numOfObservedCombs +
	_1511_Gate611->numOfObservedCombs +
	_1512_Gate612->numOfObservedCombs +
	_1513_Gate613->numOfObservedCombs +
	_1514_Gate614->numOfObservedCombs +
	_1515_Gate615->numOfObservedCombs +
	_1516_Gate616->numOfObservedCombs +
	_1517_Gate617->numOfObservedCombs +
	_1518_Gate618->numOfObservedCombs +
	_1519_Gate619->numOfObservedCombs +
	_1520_Gate620->numOfObservedCombs +
	_1521_Gate621->numOfObservedCombs +
	_1522_Gate622->numOfObservedCombs +
	_1523_Gate623->numOfObservedCombs +
	_1524_Gate624->numOfObservedCombs +
	_1525_Gate625->numOfObservedCombs +
	_1526_Gate626->numOfObservedCombs +
	_1527_Gate627->numOfObservedCombs +
	_1528_Gate628->numOfObservedCombs +
	_1529_Gate629->numOfObservedCombs +
	_1530_Gate630->numOfObservedCombs +
	_1531_Gate631->numOfObservedCombs +
	_1532_Gate632->numOfObservedCombs +
	_1533_Gate633->numOfObservedCombs +
	_1534_Gate634->numOfObservedCombs +
	_1535_Gate635->numOfObservedCombs +
	_1536_Gate636->numOfObservedCombs +
	_1537_Gate637->numOfObservedCombs +
	_1538_Gate638->numOfObservedCombs +
	_1539_Gate639->numOfObservedCombs +
	_1540_Gate640->numOfObservedCombs +
	_1541_Gate641->numOfObservedCombs +
	_1542_Gate642->numOfObservedCombs +
	_1543_Gate643->numOfObservedCombs +
	_1544_Gate644->numOfObservedCombs +
	_1545_Gate645->numOfObservedCombs +
	_1546_Gate646->numOfObservedCombs +
	_1547_Gate647->numOfObservedCombs +
	_1548_Gate648->numOfObservedCombs +
	_1549_Gate649->numOfObservedCombs +
	_1550_Gate650->numOfObservedCombs +
	_1551_Gate651->numOfObservedCombs +
	_1552_Gate652->numOfObservedCombs +
	_1553_Gate653->numOfObservedCombs +
	_1554_Gate654->numOfObservedCombs +
	_1555_Gate655->numOfObservedCombs +
	_1556_Gate656->numOfObservedCombs +
	_1557_Gate657->numOfObservedCombs +
	_1558_Gate658->numOfObservedCombs +
	_1559_Gate659->numOfObservedCombs +
	_1560_Gate660->numOfObservedCombs +
	_1561_Gate661->numOfObservedCombs +
	_1562_Gate662->numOfObservedCombs +
	_1563_Gate663->numOfObservedCombs +
	_1564_Gate664->numOfObservedCombs +
	_1565_Gate665->numOfObservedCombs +
	_1566_Gate666->numOfObservedCombs +
	_1567_Gate667->numOfObservedCombs +
	_1568_Gate668->numOfObservedCombs +
	_1569_Gate669->numOfObservedCombs +
	_1570_Gate670->numOfObservedCombs +
	_1571_Gate671->numOfObservedCombs +
	_1572_Gate672->numOfObservedCombs +
	_1573_Gate673->numOfObservedCombs +
	_1574_Gate674->numOfObservedCombs +
	_1575_Gate675->numOfObservedCombs +
	_1576_Gate676->numOfObservedCombs +
	_1577_Gate677->numOfObservedCombs +
	_1578_Gate678->numOfObservedCombs +
	_1579_Gate679->numOfObservedCombs +
	_1580_Gate680->numOfObservedCombs +
	_1581_Gate681->numOfObservedCombs +
	_1582_Gate682->numOfObservedCombs +
	_1583_Gate683->numOfObservedCombs +
	_1584_Gate684->numOfObservedCombs +
	_1585_Gate685->numOfObservedCombs +
	_1586_Gate686->numOfObservedCombs +
	_1587_Gate687->numOfObservedCombs +
	_1588_Gate688->numOfObservedCombs +
	_1589_Gate689->numOfObservedCombs +
	_1590_Gate690->numOfObservedCombs +
	_1591_Gate691->numOfObservedCombs +
	_1592_Gate692->numOfObservedCombs +
	_1593_Gate693->numOfObservedCombs +
	_1594_Gate694->numOfObservedCombs +
	_1595_Gate695->numOfObservedCombs +
	_1596_Gate696->numOfObservedCombs +
	_1597_Gate697->numOfObservedCombs +
	_1598_Gate698->numOfObservedCombs +
	_1599_Gate699->numOfObservedCombs +
	_1600_Gate700->numOfObservedCombs +
	_1601_Gate701->numOfObservedCombs +
	_1602_Gate702->numOfObservedCombs +
	_1603_Gate703->numOfObservedCombs +
	_1604_Gate704->numOfObservedCombs;
	cout << "END OF SIM=> Total Observed Combs = " << totalObservedCombs << "\n";
	cout << "GIC Coverage = " << GIC_Coverage << "\n";

}