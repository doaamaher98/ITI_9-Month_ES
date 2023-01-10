function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/parameter1 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:14"] = "CalculatorChart_GraphicalFunc.c:68,72,77,81,86,90,95,99&CalculatorChart_GraphicalFunc.h:41";
	/* <Root>/parameter2 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:15"] = "CalculatorChart_GraphicalFunc.c:69,73,78,82,87,91,96,100&CalculatorChart_GraphicalFunc.h:42";
	/* <Root>/Calculator */
	this.urlHashMap["CalculatorChart_GraphicalFunc:1"] = "CalculatorChart_GraphicalFunc.c:39,45,51,57,67,71,72,73,76,80,81,82,85,89,90,91,94,98,99,100";
	/* <Root>/Display */
	this.urlHashMap["CalculatorChart_GraphicalFunc:10"] = "msg=rtwMsg_reducedBlock&block=CalculatorChart_GraphicalFunc:10";
	/* <Root>/Display1 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:11"] = "msg=rtwMsg_reducedBlock&block=CalculatorChart_GraphicalFunc:11";
	/* <Root>/Display2 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:12"] = "msg=rtwMsg_reducedBlock&block=CalculatorChart_GraphicalFunc:12";
	/* <Root>/Display3 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:13"] = "msg=rtwMsg_reducedBlock&block=CalculatorChart_GraphicalFunc:13";
	/* <Root>/AddOut */
	this.urlHashMap["CalculatorChart_GraphicalFunc:16"] = "CalculatorChart_GraphicalFunc.c:66,71&CalculatorChart_GraphicalFunc.h:47";
	/* <Root>/SubOut */
	this.urlHashMap["CalculatorChart_GraphicalFunc:17"] = "CalculatorChart_GraphicalFunc.c:75,80&CalculatorChart_GraphicalFunc.h:48";
	/* <Root>/MulOut */
	this.urlHashMap["CalculatorChart_GraphicalFunc:18"] = "CalculatorChart_GraphicalFunc.c:84,89&CalculatorChart_GraphicalFunc.h:49";
	/* <Root>/DivOut */
	this.urlHashMap["CalculatorChart_GraphicalFunc:19"] = "CalculatorChart_GraphicalFunc.c:93,98&CalculatorChart_GraphicalFunc.h:50";
	/* <S1>:51 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:1:51"] = "CalculatorChart_GraphicalFunc.c:42";
	/* <S1>:78 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:1:78"] = "CalculatorChart_GraphicalFunc.c:60";
	/* <S1>:72 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:1:72"] = "CalculatorChart_GraphicalFunc.c:54";
	/* <S1>:66 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:1:66"] = "CalculatorChart_GraphicalFunc.c:48";
	/* <S1>:47 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:1:47"] = "msg=rtwMsg_optimizedSfObject&block=CalculatorChart_GraphicalFunc:1:47";
	/* <S1>:50 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:1:50"] = "msg=rtwMsg_optimizedSfObject&block=CalculatorChart_GraphicalFunc:1:50";
	/* <S1>:15 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:1:15"] = "CalculatorChart_GraphicalFunc.c:71,72,73,80,81,82,89,90,91,98,99,100";
	/* <S1>:53 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:1:53"] = "CalculatorChart_GraphicalFunc.c:42";
	/* <S1>:68 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:1:68"] = "CalculatorChart_GraphicalFunc.c:48";
	/* <S1>:74 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:1:74"] = "CalculatorChart_GraphicalFunc.c:54";
	/* <S1>:80 */
	this.urlHashMap["CalculatorChart_GraphicalFunc:1:80"] = "CalculatorChart_GraphicalFunc.c:60";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "CalculatorChart_GraphicalFunc"};
	this.sidHashMap["CalculatorChart_GraphicalFunc"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "CalculatorChart_GraphicalFunc:1"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/parameter1"] = {sid: "CalculatorChart_GraphicalFunc:14"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:14"] = {rtwname: "<Root>/parameter1"};
	this.rtwnameHashMap["<Root>/parameter2"] = {sid: "CalculatorChart_GraphicalFunc:15"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:15"] = {rtwname: "<Root>/parameter2"};
	this.rtwnameHashMap["<Root>/Calculator"] = {sid: "CalculatorChart_GraphicalFunc:1"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:1"] = {rtwname: "<Root>/Calculator"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "CalculatorChart_GraphicalFunc:10"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:10"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Display1"] = {sid: "CalculatorChart_GraphicalFunc:11"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:11"] = {rtwname: "<Root>/Display1"};
	this.rtwnameHashMap["<Root>/Display2"] = {sid: "CalculatorChart_GraphicalFunc:12"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:12"] = {rtwname: "<Root>/Display2"};
	this.rtwnameHashMap["<Root>/Display3"] = {sid: "CalculatorChart_GraphicalFunc:13"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:13"] = {rtwname: "<Root>/Display3"};
	this.rtwnameHashMap["<Root>/AddOut"] = {sid: "CalculatorChart_GraphicalFunc:16"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:16"] = {rtwname: "<Root>/AddOut"};
	this.rtwnameHashMap["<Root>/SubOut"] = {sid: "CalculatorChart_GraphicalFunc:17"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:17"] = {rtwname: "<Root>/SubOut"};
	this.rtwnameHashMap["<Root>/MulOut"] = {sid: "CalculatorChart_GraphicalFunc:18"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:18"] = {rtwname: "<Root>/MulOut"};
	this.rtwnameHashMap["<Root>/DivOut"] = {sid: "CalculatorChart_GraphicalFunc:19"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:19"] = {rtwname: "<Root>/DivOut"};
	this.rtwnameHashMap["<S1>:51"] = {sid: "CalculatorChart_GraphicalFunc:1:51"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:1:51"] = {rtwname: "<S1>:51"};
	this.rtwnameHashMap["<S1>:78"] = {sid: "CalculatorChart_GraphicalFunc:1:78"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:1:78"] = {rtwname: "<S1>:78"};
	this.rtwnameHashMap["<S1>:72"] = {sid: "CalculatorChart_GraphicalFunc:1:72"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:1:72"] = {rtwname: "<S1>:72"};
	this.rtwnameHashMap["<S1>:66"] = {sid: "CalculatorChart_GraphicalFunc:1:66"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:1:66"] = {rtwname: "<S1>:66"};
	this.rtwnameHashMap["<S1>:47"] = {sid: "CalculatorChart_GraphicalFunc:1:47"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:1:47"] = {rtwname: "<S1>:47"};
	this.rtwnameHashMap["<S1>:50"] = {sid: "CalculatorChart_GraphicalFunc:1:50"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:1:50"] = {rtwname: "<S1>:50"};
	this.rtwnameHashMap["<S1>:15"] = {sid: "CalculatorChart_GraphicalFunc:1:15"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:1:15"] = {rtwname: "<S1>:15"};
	this.rtwnameHashMap["<S1>:53"] = {sid: "CalculatorChart_GraphicalFunc:1:53"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:1:53"] = {rtwname: "<S1>:53"};
	this.rtwnameHashMap["<S1>:68"] = {sid: "CalculatorChart_GraphicalFunc:1:68"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:1:68"] = {rtwname: "<S1>:68"};
	this.rtwnameHashMap["<S1>:74"] = {sid: "CalculatorChart_GraphicalFunc:1:74"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:1:74"] = {rtwname: "<S1>:74"};
	this.rtwnameHashMap["<S1>:80"] = {sid: "CalculatorChart_GraphicalFunc:1:80"};
	this.sidHashMap["CalculatorChart_GraphicalFunc:1:80"] = {rtwname: "<S1>:80"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
