function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Input1 */
	this.urlHashMap["Normal_Calc_SubSys:21"] = "Normal_Calc_SubSys.c:37,41,45,49,53,57,61,65,69,72,75,78,81,84,87,90,93,99,102,108&Normal_Calc_SubSys.h:42";
	/* <Root>/Input2 */
	this.urlHashMap["Normal_Calc_SubSys:22"] = "Normal_Calc_SubSys.c:38,42,46,50,54,58,62,66&Normal_Calc_SubSys.h:43";
	/* <Root>/Display */
	this.urlHashMap["Normal_Calc_SubSys:11"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc_SubSys:11";
	/* <Root>/Display1 */
	this.urlHashMap["Normal_Calc_SubSys:12"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc_SubSys:12";
	/* <Root>/Display2 */
	this.urlHashMap["Normal_Calc_SubSys:13"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc_SubSys:13";
	/* <Root>/Display3 */
	this.urlHashMap["Normal_Calc_SubSys:14"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc_SubSys:14";
	/* <Root>/Display4 */
	this.urlHashMap["Normal_Calc_SubSys:15"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc_SubSys:15";
	/* <Root>/Display5 */
	this.urlHashMap["Normal_Calc_SubSys:16"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc_SubSys:16";
	/* <Root>/Display6 */
	this.urlHashMap["Normal_Calc_SubSys:17"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc_SubSys:17";
	/* <Root>/Display7 */
	this.urlHashMap["Normal_Calc_SubSys:18"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc_SubSys:18";
	/* <Root>/Display8 */
	this.urlHashMap["Normal_Calc_SubSys:40"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc_SubSys:40";
	/* <Root>/Display9 */
	this.urlHashMap["Normal_Calc_SubSys:41"] = "msg=rtwMsg_reducedBlock&block=Normal_Calc_SubSys:41";
	/* <Root>/Out1 */
	this.urlHashMap["Normal_Calc_SubSys:23"] = "Normal_Calc_SubSys.c:36,41&Normal_Calc_SubSys.h:48";
	/* <Root>/Out2 */
	this.urlHashMap["Normal_Calc_SubSys:44"] = "Normal_Calc_SubSys.c:44,49&Normal_Calc_SubSys.h:49";
	/* <Root>/Out3 */
	this.urlHashMap["Normal_Calc_SubSys:45"] = "Normal_Calc_SubSys.c:52,57&Normal_Calc_SubSys.h:50";
	/* <Root>/Out4 */
	this.urlHashMap["Normal_Calc_SubSys:46"] = "Normal_Calc_SubSys.c:60,65&Normal_Calc_SubSys.h:51";
	/* <Root>/Out5 */
	this.urlHashMap["Normal_Calc_SubSys:47"] = "Normal_Calc_SubSys.c:68,72&Normal_Calc_SubSys.h:52";
	/* <Root>/Out6 */
	this.urlHashMap["Normal_Calc_SubSys:48"] = "Normal_Calc_SubSys.c:74,78&Normal_Calc_SubSys.h:53";
	/* <Root>/Out7 */
	this.urlHashMap["Normal_Calc_SubSys:49"] = "Normal_Calc_SubSys.c:80,84&Normal_Calc_SubSys.h:54";
	/* <Root>/Out8 */
	this.urlHashMap["Normal_Calc_SubSys:50"] = "Normal_Calc_SubSys.c:86,90&Normal_Calc_SubSys.h:55";
	/* <Root>/Out9 */
	this.urlHashMap["Normal_Calc_SubSys:51"] = "Normal_Calc_SubSys.c:92,99&Normal_Calc_SubSys.h:56";
	/* <Root>/Out10 */
	this.urlHashMap["Normal_Calc_SubSys:52"] = "Normal_Calc_SubSys.c:101,108&Normal_Calc_SubSys.h:57";
	/* <S1>/Add */
	this.urlHashMap["Normal_Calc_SubSys:1"] = "Normal_Calc_SubSys.c:39,41";
	/* <S1>/Cos */
	this.urlHashMap["Normal_Calc_SubSys:9"] = "Normal_Calc_SubSys.c:82,84";
	/* <S1>/Divide */
	this.urlHashMap["Normal_Calc_SubSys:6"] = "Normal_Calc_SubSys.c:63,65";
	/* <S1>/Log */
	this.urlHashMap["Normal_Calc_SubSys:37"] = "Normal_Calc_SubSys.c:94,96,99";
	/* <S1>/Log10 */
	this.urlHashMap["Normal_Calc_SubSys:38"] = "Normal_Calc_SubSys.c:103,105,108";
	/* <S1>/Product */
	this.urlHashMap["Normal_Calc_SubSys:5"] = "Normal_Calc_SubSys.c:55,57";
	/* <S1>/Sqrt */
	this.urlHashMap["Normal_Calc_SubSys:7"] = "Normal_Calc_SubSys.c:70,72";
	/* <S1>/Subtract */
	this.urlHashMap["Normal_Calc_SubSys:2"] = "Normal_Calc_SubSys.c:47,49";
	/* <S1>/Tan */
	this.urlHashMap["Normal_Calc_SubSys:10"] = "Normal_Calc_SubSys.c:76,78";
	/* <S1>/Trigonometric
Function */
	this.urlHashMap["Normal_Calc_SubSys:8"] = "Normal_Calc_SubSys.c:88,90";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Normal_Calc_SubSys"};
	this.sidHashMap["Normal_Calc_SubSys"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Normal_Calc_SubSys:53"};
	this.sidHashMap["Normal_Calc_SubSys:53"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Input1"] = {sid: "Normal_Calc_SubSys:21"};
	this.sidHashMap["Normal_Calc_SubSys:21"] = {rtwname: "<Root>/Input1"};
	this.rtwnameHashMap["<Root>/Input2"] = {sid: "Normal_Calc_SubSys:22"};
	this.sidHashMap["Normal_Calc_SubSys:22"] = {rtwname: "<Root>/Input2"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "Normal_Calc_SubSys:11"};
	this.sidHashMap["Normal_Calc_SubSys:11"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Display1"] = {sid: "Normal_Calc_SubSys:12"};
	this.sidHashMap["Normal_Calc_SubSys:12"] = {rtwname: "<Root>/Display1"};
	this.rtwnameHashMap["<Root>/Display2"] = {sid: "Normal_Calc_SubSys:13"};
	this.sidHashMap["Normal_Calc_SubSys:13"] = {rtwname: "<Root>/Display2"};
	this.rtwnameHashMap["<Root>/Display3"] = {sid: "Normal_Calc_SubSys:14"};
	this.sidHashMap["Normal_Calc_SubSys:14"] = {rtwname: "<Root>/Display3"};
	this.rtwnameHashMap["<Root>/Display4"] = {sid: "Normal_Calc_SubSys:15"};
	this.sidHashMap["Normal_Calc_SubSys:15"] = {rtwname: "<Root>/Display4"};
	this.rtwnameHashMap["<Root>/Display5"] = {sid: "Normal_Calc_SubSys:16"};
	this.sidHashMap["Normal_Calc_SubSys:16"] = {rtwname: "<Root>/Display5"};
	this.rtwnameHashMap["<Root>/Display6"] = {sid: "Normal_Calc_SubSys:17"};
	this.sidHashMap["Normal_Calc_SubSys:17"] = {rtwname: "<Root>/Display6"};
	this.rtwnameHashMap["<Root>/Display7"] = {sid: "Normal_Calc_SubSys:18"};
	this.sidHashMap["Normal_Calc_SubSys:18"] = {rtwname: "<Root>/Display7"};
	this.rtwnameHashMap["<Root>/Display8"] = {sid: "Normal_Calc_SubSys:40"};
	this.sidHashMap["Normal_Calc_SubSys:40"] = {rtwname: "<Root>/Display8"};
	this.rtwnameHashMap["<Root>/Display9"] = {sid: "Normal_Calc_SubSys:41"};
	this.sidHashMap["Normal_Calc_SubSys:41"] = {rtwname: "<Root>/Display9"};
	this.rtwnameHashMap["<Root>/Subsystem"] = {sid: "Normal_Calc_SubSys:53"};
	this.sidHashMap["Normal_Calc_SubSys:53"] = {rtwname: "<Root>/Subsystem"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Normal_Calc_SubSys:23"};
	this.sidHashMap["Normal_Calc_SubSys:23"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "Normal_Calc_SubSys:44"};
	this.sidHashMap["Normal_Calc_SubSys:44"] = {rtwname: "<Root>/Out2"};
	this.rtwnameHashMap["<Root>/Out3"] = {sid: "Normal_Calc_SubSys:45"};
	this.sidHashMap["Normal_Calc_SubSys:45"] = {rtwname: "<Root>/Out3"};
	this.rtwnameHashMap["<Root>/Out4"] = {sid: "Normal_Calc_SubSys:46"};
	this.sidHashMap["Normal_Calc_SubSys:46"] = {rtwname: "<Root>/Out4"};
	this.rtwnameHashMap["<Root>/Out5"] = {sid: "Normal_Calc_SubSys:47"};
	this.sidHashMap["Normal_Calc_SubSys:47"] = {rtwname: "<Root>/Out5"};
	this.rtwnameHashMap["<Root>/Out6"] = {sid: "Normal_Calc_SubSys:48"};
	this.sidHashMap["Normal_Calc_SubSys:48"] = {rtwname: "<Root>/Out6"};
	this.rtwnameHashMap["<Root>/Out7"] = {sid: "Normal_Calc_SubSys:49"};
	this.sidHashMap["Normal_Calc_SubSys:49"] = {rtwname: "<Root>/Out7"};
	this.rtwnameHashMap["<Root>/Out8"] = {sid: "Normal_Calc_SubSys:50"};
	this.sidHashMap["Normal_Calc_SubSys:50"] = {rtwname: "<Root>/Out8"};
	this.rtwnameHashMap["<Root>/Out9"] = {sid: "Normal_Calc_SubSys:51"};
	this.sidHashMap["Normal_Calc_SubSys:51"] = {rtwname: "<Root>/Out9"};
	this.rtwnameHashMap["<Root>/Out10"] = {sid: "Normal_Calc_SubSys:52"};
	this.sidHashMap["Normal_Calc_SubSys:52"] = {rtwname: "<Root>/Out10"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "Normal_Calc_SubSys:54"};
	this.sidHashMap["Normal_Calc_SubSys:54"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/In2"] = {sid: "Normal_Calc_SubSys:55"};
	this.sidHashMap["Normal_Calc_SubSys:55"] = {rtwname: "<S1>/In2"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "Normal_Calc_SubSys:1"};
	this.sidHashMap["Normal_Calc_SubSys:1"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Cos"] = {sid: "Normal_Calc_SubSys:9"};
	this.sidHashMap["Normal_Calc_SubSys:9"] = {rtwname: "<S1>/Cos"};
	this.rtwnameHashMap["<S1>/Divide"] = {sid: "Normal_Calc_SubSys:6"};
	this.sidHashMap["Normal_Calc_SubSys:6"] = {rtwname: "<S1>/Divide"};
	this.rtwnameHashMap["<S1>/Log"] = {sid: "Normal_Calc_SubSys:37"};
	this.sidHashMap["Normal_Calc_SubSys:37"] = {rtwname: "<S1>/Log"};
	this.rtwnameHashMap["<S1>/Log10"] = {sid: "Normal_Calc_SubSys:38"};
	this.sidHashMap["Normal_Calc_SubSys:38"] = {rtwname: "<S1>/Log10"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "Normal_Calc_SubSys:5"};
	this.sidHashMap["Normal_Calc_SubSys:5"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Sqrt"] = {sid: "Normal_Calc_SubSys:7"};
	this.sidHashMap["Normal_Calc_SubSys:7"] = {rtwname: "<S1>/Sqrt"};
	this.rtwnameHashMap["<S1>/Subtract"] = {sid: "Normal_Calc_SubSys:2"};
	this.sidHashMap["Normal_Calc_SubSys:2"] = {rtwname: "<S1>/Subtract"};
	this.rtwnameHashMap["<S1>/Tan"] = {sid: "Normal_Calc_SubSys:10"};
	this.sidHashMap["Normal_Calc_SubSys:10"] = {rtwname: "<S1>/Tan"};
	this.rtwnameHashMap["<S1>/Trigonometric Function"] = {sid: "Normal_Calc_SubSys:8"};
	this.sidHashMap["Normal_Calc_SubSys:8"] = {rtwname: "<S1>/Trigonometric Function"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "Normal_Calc_SubSys:56"};
	this.sidHashMap["Normal_Calc_SubSys:56"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S1>/Out2"] = {sid: "Normal_Calc_SubSys:57"};
	this.sidHashMap["Normal_Calc_SubSys:57"] = {rtwname: "<S1>/Out2"};
	this.rtwnameHashMap["<S1>/Out3"] = {sid: "Normal_Calc_SubSys:58"};
	this.sidHashMap["Normal_Calc_SubSys:58"] = {rtwname: "<S1>/Out3"};
	this.rtwnameHashMap["<S1>/Out4"] = {sid: "Normal_Calc_SubSys:59"};
	this.sidHashMap["Normal_Calc_SubSys:59"] = {rtwname: "<S1>/Out4"};
	this.rtwnameHashMap["<S1>/Out5"] = {sid: "Normal_Calc_SubSys:60"};
	this.sidHashMap["Normal_Calc_SubSys:60"] = {rtwname: "<S1>/Out5"};
	this.rtwnameHashMap["<S1>/Out6"] = {sid: "Normal_Calc_SubSys:61"};
	this.sidHashMap["Normal_Calc_SubSys:61"] = {rtwname: "<S1>/Out6"};
	this.rtwnameHashMap["<S1>/Out7"] = {sid: "Normal_Calc_SubSys:62"};
	this.sidHashMap["Normal_Calc_SubSys:62"] = {rtwname: "<S1>/Out7"};
	this.rtwnameHashMap["<S1>/Out8"] = {sid: "Normal_Calc_SubSys:63"};
	this.sidHashMap["Normal_Calc_SubSys:63"] = {rtwname: "<S1>/Out8"};
	this.rtwnameHashMap["<S1>/Out9"] = {sid: "Normal_Calc_SubSys:64"};
	this.sidHashMap["Normal_Calc_SubSys:64"] = {rtwname: "<S1>/Out9"};
	this.rtwnameHashMap["<S1>/Out10"] = {sid: "Normal_Calc_SubSys:65"};
	this.sidHashMap["Normal_Calc_SubSys:65"] = {rtwname: "<S1>/Out10"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
