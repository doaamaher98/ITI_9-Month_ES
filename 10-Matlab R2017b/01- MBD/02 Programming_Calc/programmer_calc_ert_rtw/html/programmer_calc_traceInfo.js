function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Input1 */
	this.urlHashMap["programmer_calc:1"] = "programmer_calc.c:39,43,51,55,73,77,80,83,86,89&programmer_calc.h:41";
	/* <Root>/Input2 */
	this.urlHashMap["programmer_calc:2"] = "programmer_calc.c:40,43,52,55,74,77,81,83&programmer_calc.h:42";
	/* <Root>/Display */
	this.urlHashMap["programmer_calc:5"] = "msg=rtwMsg_reducedBlock&block=programmer_calc:5";
	/* <Root>/Display1 */
	this.urlHashMap["programmer_calc:6"] = "msg=rtwMsg_reducedBlock&block=programmer_calc:6";
	/* <Root>/Display2 */
	this.urlHashMap["programmer_calc:7"] = "msg=rtwMsg_reducedBlock&block=programmer_calc:7";
	/* <Root>/Display3 */
	this.urlHashMap["programmer_calc:8"] = "msg=rtwMsg_reducedBlock&block=programmer_calc:8";
	/* <Root>/Display4 */
	this.urlHashMap["programmer_calc:9"] = "msg=rtwMsg_reducedBlock&block=programmer_calc:9";
	/* <Root>/Display5 */
	this.urlHashMap["programmer_calc:10"] = "msg=rtwMsg_reducedBlock&block=programmer_calc:10";
	/* <Root>/Display6 */
	this.urlHashMap["programmer_calc:11"] = "msg=rtwMsg_reducedBlock&block=programmer_calc:11";
	/* <Root>/Display7 */
	this.urlHashMap["programmer_calc:12"] = "msg=rtwMsg_reducedBlock&block=programmer_calc:12";
	/* <Root>/Display8 */
	this.urlHashMap["programmer_calc:13"] = "msg=rtwMsg_reducedBlock&block=programmer_calc:13";
	/* <Root>/Logical
Operator */
	this.urlHashMap["programmer_calc:34"] = "programmer_calc.c:38,43,46,48";
	/* <Root>/Logical
Operator1 */
	this.urlHashMap["programmer_calc:36"] = "programmer_calc.c:50,55,58,60";
	/* <Root>/Logical
Operator2 */
	this.urlHashMap["programmer_calc:37"] = "programmer_calc.c:41,43,63,65";
	/* <Root>/Logical
Operator3 */
	this.urlHashMap["programmer_calc:38"] = "programmer_calc.c:53,55,68,70";
	/* <Root>/Logical
Operator4 */
	this.urlHashMap["programmer_calc:39"] = "programmer_calc.c:75,77";
	/* <Root>/Logical
Operator5 */
	this.urlHashMap["programmer_calc:40"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=programmer_calc:40";
	/* <Root>/Logical
Operator6 */
	this.urlHashMap["programmer_calc:41"] = "programmer_calc.c:87,89";
	/* <Root>/Out1 */
	this.urlHashMap["programmer_calc:23"] = "programmer_calc.c:45,48&programmer_calc.h:47";
	/* <Root>/Out2 */
	this.urlHashMap["programmer_calc:59"] = "programmer_calc.c:57,60&programmer_calc.h:48";
	/* <Root>/Out3 */
	this.urlHashMap["programmer_calc:60"] = "programmer_calc.c:62,65&programmer_calc.h:49";
	/* <Root>/Out4 */
	this.urlHashMap["programmer_calc:61"] = "programmer_calc.c:67,70&programmer_calc.h:50";
	/* <Root>/Out5 */
	this.urlHashMap["programmer_calc:62"] = "programmer_calc.c:72,77&programmer_calc.h:51";
	/* <Root>/Out6 */
	this.urlHashMap["programmer_calc:63"] = "programmer_calc.c:79,83&programmer_calc.h:52";
	/* <Root>/Out7 */
	this.urlHashMap["programmer_calc:64"] = "programmer_calc.c:85,89&programmer_calc.h:53";
	/* <Root>/Out8 */
	this.urlHashMap["programmer_calc:65"] = "programmer_calc.c:91,94&programmer_calc.h:54";
	/* <Root>/Out9 */
	this.urlHashMap["programmer_calc:66"] = "programmer_calc.c:96,97&programmer_calc.h:55";
	/* <S1>/FixPt
Bitwise
Operator3 */
	this.urlHashMap["programmer_calc:43:2"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=programmer_calc:43:2";
	/* <S1>/FixPt
Bitwise
Operator4 */
	this.urlHashMap["programmer_calc:43:3"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=programmer_calc:43:3";
	/* <S1>/FixPt
Bitwise
Operator5 */
	this.urlHashMap["programmer_calc:43:4"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=programmer_calc:43:4";
	/* <S2>/FixPt
Bitwise
Operator1 */
	this.urlHashMap["programmer_calc:42:2"] = "programmer_calc.c:92,94";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "programmer_calc"};
	this.sidHashMap["programmer_calc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "programmer_calc:43"};
	this.sidHashMap["programmer_calc:43"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "programmer_calc:42"};
	this.sidHashMap["programmer_calc:42"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/Input1"] = {sid: "programmer_calc:1"};
	this.sidHashMap["programmer_calc:1"] = {rtwname: "<Root>/Input1"};
	this.rtwnameHashMap["<Root>/Input2"] = {sid: "programmer_calc:2"};
	this.sidHashMap["programmer_calc:2"] = {rtwname: "<Root>/Input2"};
	this.rtwnameHashMap["<Root>/Bit Clear"] = {sid: "programmer_calc:43"};
	this.sidHashMap["programmer_calc:43"] = {rtwname: "<Root>/Bit Clear"};
	this.rtwnameHashMap["<Root>/Bit Set"] = {sid: "programmer_calc:42"};
	this.sidHashMap["programmer_calc:42"] = {rtwname: "<Root>/Bit Set"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "programmer_calc:5"};
	this.sidHashMap["programmer_calc:5"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Display1"] = {sid: "programmer_calc:6"};
	this.sidHashMap["programmer_calc:6"] = {rtwname: "<Root>/Display1"};
	this.rtwnameHashMap["<Root>/Display2"] = {sid: "programmer_calc:7"};
	this.sidHashMap["programmer_calc:7"] = {rtwname: "<Root>/Display2"};
	this.rtwnameHashMap["<Root>/Display3"] = {sid: "programmer_calc:8"};
	this.sidHashMap["programmer_calc:8"] = {rtwname: "<Root>/Display3"};
	this.rtwnameHashMap["<Root>/Display4"] = {sid: "programmer_calc:9"};
	this.sidHashMap["programmer_calc:9"] = {rtwname: "<Root>/Display4"};
	this.rtwnameHashMap["<Root>/Display5"] = {sid: "programmer_calc:10"};
	this.sidHashMap["programmer_calc:10"] = {rtwname: "<Root>/Display5"};
	this.rtwnameHashMap["<Root>/Display6"] = {sid: "programmer_calc:11"};
	this.sidHashMap["programmer_calc:11"] = {rtwname: "<Root>/Display6"};
	this.rtwnameHashMap["<Root>/Display7"] = {sid: "programmer_calc:12"};
	this.sidHashMap["programmer_calc:12"] = {rtwname: "<Root>/Display7"};
	this.rtwnameHashMap["<Root>/Display8"] = {sid: "programmer_calc:13"};
	this.sidHashMap["programmer_calc:13"] = {rtwname: "<Root>/Display8"};
	this.rtwnameHashMap["<Root>/Logical Operator"] = {sid: "programmer_calc:34"};
	this.sidHashMap["programmer_calc:34"] = {rtwname: "<Root>/Logical Operator"};
	this.rtwnameHashMap["<Root>/Logical Operator1"] = {sid: "programmer_calc:36"};
	this.sidHashMap["programmer_calc:36"] = {rtwname: "<Root>/Logical Operator1"};
	this.rtwnameHashMap["<Root>/Logical Operator2"] = {sid: "programmer_calc:37"};
	this.sidHashMap["programmer_calc:37"] = {rtwname: "<Root>/Logical Operator2"};
	this.rtwnameHashMap["<Root>/Logical Operator3"] = {sid: "programmer_calc:38"};
	this.sidHashMap["programmer_calc:38"] = {rtwname: "<Root>/Logical Operator3"};
	this.rtwnameHashMap["<Root>/Logical Operator4"] = {sid: "programmer_calc:39"};
	this.sidHashMap["programmer_calc:39"] = {rtwname: "<Root>/Logical Operator4"};
	this.rtwnameHashMap["<Root>/Logical Operator5"] = {sid: "programmer_calc:40"};
	this.sidHashMap["programmer_calc:40"] = {rtwname: "<Root>/Logical Operator5"};
	this.rtwnameHashMap["<Root>/Logical Operator6"] = {sid: "programmer_calc:41"};
	this.sidHashMap["programmer_calc:41"] = {rtwname: "<Root>/Logical Operator6"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "programmer_calc:23"};
	this.sidHashMap["programmer_calc:23"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "programmer_calc:59"};
	this.sidHashMap["programmer_calc:59"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "programmer_calc:60"};
	this.sidHashMap["programmer_calc:60"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "programmer_calc:61"};
	this.sidHashMap["programmer_calc:61"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<Root>/Out5"] = {sid: "programmer_calc:62"};
	this.sidHashMap["programmer_calc:62"] = {rtwname: "<Root>/Out5"};
	this.rtwnameHashMap["<Root>/Out6"] = {sid: "programmer_calc:63"};
	this.sidHashMap["programmer_calc:63"] = {rtwname: "<Root>/Out6"};
	this.rtwnameHashMap["<Root>/Out7"] = {sid: "programmer_calc:64"};
	this.sidHashMap["programmer_calc:64"] = {rtwname: "<Root>/Out7"};
	this.rtwnameHashMap["<Root>/Out8"] = {sid: "programmer_calc:65"};
	this.sidHashMap["programmer_calc:65"] = {rtwname: "<Root>/Out8"};
	this.rtwnameHashMap["<Root>/Out9"] = {sid: "programmer_calc:66"};
	this.sidHashMap["programmer_calc:66"] = {rtwname: "<Root>/Out9"};
	this.rtwnameHashMap["<S1>/u"] = {sid: "programmer_calc:43:1"};
	this.sidHashMap["programmer_calc:43:1"] = {rtwname: "<S1>/u"};
	this.rtwnameHashMap["<S1>/FixPt Bitwise Operator3"] = {sid: "programmer_calc:43:2"};
	this.sidHashMap["programmer_calc:43:2"] = {rtwname: "<S1>/FixPt Bitwise Operator3"};
	this.rtwnameHashMap["<S1>/FixPt Bitwise Operator4"] = {sid: "programmer_calc:43:3"};
	this.sidHashMap["programmer_calc:43:3"] = {rtwname: "<S1>/FixPt Bitwise Operator4"};
	this.rtwnameHashMap["<S1>/FixPt Bitwise Operator5"] = {sid: "programmer_calc:43:4"};
	this.sidHashMap["programmer_calc:43:4"] = {rtwname: "<S1>/FixPt Bitwise Operator5"};
	this.rtwnameHashMap["<S1>/y"] = {sid: "programmer_calc:43:5"};
	this.sidHashMap["programmer_calc:43:5"] = {rtwname: "<S1>/y"};
	this.rtwnameHashMap["<S2>/u"] = {sid: "programmer_calc:42:1"};
	this.sidHashMap["programmer_calc:42:1"] = {rtwname: "<S2>/u"};
	this.rtwnameHashMap["<S2>/FixPt Bitwise Operator1"] = {sid: "programmer_calc:42:2"};
	this.sidHashMap["programmer_calc:42:2"] = {rtwname: "<S2>/FixPt Bitwise Operator1"};
	this.rtwnameHashMap["<S2>/y"] = {sid: "programmer_calc:42:3"};
	this.sidHashMap["programmer_calc:42:3"] = {rtwname: "<S2>/y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
