function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Input1 */
	this.urlHashMap["Normal_Calc:21"] = "Normal_Calc.c:36,40,43,47,50,54,57,61,64,67,70,73,76,79,82,85,88,94,97,103&Normal_Calc.h:42";
	/* <Root>/Input2 */
	this.urlHashMap["Normal_Calc:22"] = "Normal_Calc.c:37,40,44,47,51,54,58,61&Normal_Calc.h:43";
	/* <Root>/Add */
	this.urlHashMap["Normal_Calc:1"] = "Normal_Calc.c:38,40";
	/* <Root>/Cos */
	this.urlHashMap["Normal_Calc:9"] = "Normal_Calc.c:77,79";
	/* <Root>/Display */
	this.urlHashMap["Normal_Calc:11"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc:11";
	/* <Root>/Display1 */
	this.urlHashMap["Normal_Calc:12"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc:12";
	/* <Root>/Display2 */
	this.urlHashMap["Normal_Calc:13"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc:13";
	/* <Root>/Display3 */
	this.urlHashMap["Normal_Calc:14"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc:14";
	/* <Root>/Display4 */
	this.urlHashMap["Normal_Calc:15"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc:15";
	/* <Root>/Display5 */
	this.urlHashMap["Normal_Calc:16"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc:16";
	/* <Root>/Display6 */
	this.urlHashMap["Normal_Calc:17"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc:17";
	/* <Root>/Display7 */
	this.urlHashMap["Normal_Calc:18"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc:18";
	/* <Root>/Display8 */
	this.urlHashMap["Normal_Calc:40"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc:40";
	/* <Root>/Display9 */
	this.urlHashMap["Normal_Calc:41"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc:41";
	/* <Root>/Divide */
	this.urlHashMap["Normal_Calc:6"] = "Normal_Calc.c:59,61";
	/* <Root>/Log */
	this.urlHashMap["Normal_Calc:37"] = "Normal_Calc.c:89,91,94";
	/* <Root>/Log10 */
	this.urlHashMap["Normal_Calc:38"] = "Normal_Calc.c:98,100,103";
	/* <Root>/Product */
	this.urlHashMap["Normal_Calc:5"] = "Normal_Calc.c:52,54";
	/* <Root>/Sqrt */
	this.urlHashMap["Normal_Calc:7"] = "Normal_Calc.c:65,67";
	/* <Root>/Subtract */
	this.urlHashMap["Normal_Calc:2"] = "Normal_Calc.c:45,47";
	/* <Root>/Tan */
	this.urlHashMap["Normal_Calc:10"] = "Normal_Calc.c:71,73";
	/* <Root>/Trigonometric
Function */
	this.urlHashMap["Normal_Calc:8"] = "Normal_Calc.c:83,85";
	/* <Root>/Out1 */
	this.urlHashMap["Normal_Calc:23"] = "Normal_Calc.c:35,40&Normal_Calc.h:48";
	/* <Root>/Out2 */
	this.urlHashMap["Normal_Calc:44"] = "Normal_Calc.c:42,47&Normal_Calc.h:49";
	/* <Root>/Out3 */
	this.urlHashMap["Normal_Calc:45"] = "Normal_Calc.c:49,54&Normal_Calc.h:50";
	/* <Root>/Out4 */
	this.urlHashMap["Normal_Calc:46"] = "Normal_Calc.c:56,61&Normal_Calc.h:51";
	/* <Root>/Out5 */
	this.urlHashMap["Normal_Calc:47"] = "Normal_Calc.c:63,67&Normal_Calc.h:52";
	/* <Root>/Out6 */
	this.urlHashMap["Normal_Calc:48"] = "Normal_Calc.c:69,73&Normal_Calc.h:53";
	/* <Root>/Out7 */
	this.urlHashMap["Normal_Calc:49"] = "Normal_Calc.c:75,79&Normal_Calc.h:54";
	/* <Root>/Out8 */
	this.urlHashMap["Normal_Calc:50"] = "Normal_Calc.c:81,85&Normal_Calc.h:55";
	/* <Root>/Out9 */
	this.urlHashMap["Normal_Calc:51"] = "Normal_Calc.c:87,94&Normal_Calc.h:56";
	/* <Root>/Out10 */
	this.urlHashMap["Normal_Calc:52"] = "Normal_Calc.c:96,103&Normal_Calc.h:57";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Normal_Calc"};
	this.sidHashMap["Normal_Calc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Input1"] = {sid: "Normal_Calc:21"};
	this.sidHashMap["Normal_Calc:21"] = {rtwname: "<Root>/Input1"};
	this.rtwnameHashMap["<Root>/Input2"] = {sid: "Normal_Calc:22"};
	this.sidHashMap["Normal_Calc:22"] = {rtwname: "<Root>/Input2"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "Normal_Calc:1"};
	this.sidHashMap["Normal_Calc:1"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Cos"] = {sid: "Normal_Calc:9"};
	this.sidHashMap["Normal_Calc:9"] = {rtwname: "<Root>/Cos"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "Normal_Calc:11"};
	this.sidHashMap["Normal_Calc:11"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Display1"] = {sid: "Normal_Calc:12"};
	this.sidHashMap["Normal_Calc:12"] = {rtwname: "<Root>/Display1"};
	this.rtwnameHashMap["<Root>/Display2"] = {sid: "Normal_Calc:13"};
	this.sidHashMap["Normal_Calc:13"] = {rtwname: "<Root>/Display2"};
	this.rtwnameHashMap["<Root>/Display3"] = {sid: "Normal_Calc:14"};
	this.sidHashMap["Normal_Calc:14"] = {rtwname: "<Root>/Display3"};
	this.rtwnameHashMap["<Root>/Display4"] = {sid: "Normal_Calc:15"};
	this.sidHashMap["Normal_Calc:15"] = {rtwname: "<Root>/Display4"};
	this.rtwnameHashMap["<Root>/Display5"] = {sid: "Normal_Calc:16"};
	this.sidHashMap["Normal_Calc:16"] = {rtwname: "<Root>/Display5"};
	this.rtwnameHashMap["<Root>/Display6"] = {sid: "Normal_Calc:17"};
	this.sidHashMap["Normal_Calc:17"] = {rtwname: "<Root>/Display6"};
	this.rtwnameHashMap["<Root>/Display7"] = {sid: "Normal_Calc:18"};
	this.sidHashMap["Normal_Calc:18"] = {rtwname: "<Root>/Display7"};
	this.rtwnameHashMap["<Root>/Display8"] = {sid: "Normal_Calc:40"};
	this.sidHashMap["Normal_Calc:40"] = {rtwname: "<Root>/Display8"};
	this.rtwnameHashMap["<Root>/Display9"] = {sid: "Normal_Calc:41"};
	this.sidHashMap["Normal_Calc:41"] = {rtwname: "<Root>/Display9"};
	this.rtwnameHashMap["<Root>/Divide"] = {sid: "Normal_Calc:6"};
	this.sidHashMap["Normal_Calc:6"] = {rtwname: "<Root>/Divide"};
	this.rtwnameHashMap["<Root>/Log"] = {sid: "Normal_Calc:37"};
	this.sidHashMap["Normal_Calc:37"] = {rtwname: "<Root>/Log"};
	this.rtwnameHashMap["<Root>/Log10"] = {sid: "Normal_Calc:38"};
	this.sidHashMap["Normal_Calc:38"] = {rtwname: "<Root>/Log10"};
	this.rtwnameHashMap["<Root>/Product"] = {sid: "Normal_Calc:5"};
	this.sidHashMap["Normal_Calc:5"] = {rtwname: "<Root>/Product"};
	this.rtwnameHashMap["<Root>/Sqrt"] = {sid: "Normal_Calc:7"};
	this.sidHashMap["Normal_Calc:7"] = {rtwname: "<Root>/Sqrt"};
	this.rtwnameHashMap["<Root>/Subtract"] = {sid: "Normal_Calc:2"};
	this.sidHashMap["Normal_Calc:2"] = {rtwname: "<Root>/Subtract"};
	this.rtwnameHashMap["<Root>/Tan"] = {sid: "Normal_Calc:10"};
	this.sidHashMap["Normal_Calc:10"] = {rtwname: "<Root>/Tan"};
	this.rtwnameHashMap["<Root>/Trigonometric Function"] = {sid: "Normal_Calc:8"};
	this.sidHashMap["Normal_Calc:8"] = {rtwname: "<Root>/Trigonometric Function"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Normal_Calc:23"};
	this.sidHashMap["Normal_Calc:23"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "Normal_Calc:44"};
	this.sidHashMap["Normal_Calc:44"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "Normal_Calc:45"};
	this.sidHashMap["Normal_Calc:45"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "Normal_Calc:46"};
	this.sidHashMap["Normal_Calc:46"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<Root>/Out5"] = {sid: "Normal_Calc:47"};
	this.sidHashMap["Normal_Calc:47"] = {rtwname: "<Root>/Out5"};
	this.rtwnameHashMap["<Root>/Out6"] = {sid: "Normal_Calc:48"};
	this.sidHashMap["Normal_Calc:48"] = {rtwname: "<Root>/Out6"};
	this.rtwnameHashMap["<Root>/Out7"] = {sid: "Normal_Calc:49"};
	this.sidHashMap["Normal_Calc:49"] = {rtwname: "<Root>/Out7"};
	this.rtwnameHashMap["<Root>/Out8"] = {sid: "Normal_Calc:50"};
	this.sidHashMap["Normal_Calc:50"] = {rtwname: "<Root>/Out8"};
	this.rtwnameHashMap["<Root>/Out9"] = {sid: "Normal_Calc:51"};
	this.sidHashMap["Normal_Calc:51"] = {rtwname: "<Root>/Out9"};
	this.rtwnameHashMap["<Root>/Out10"] = {sid: "Normal_Calc:52"};
	this.sidHashMap["Normal_Calc:52"] = {rtwname: "<Root>/Out10"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
