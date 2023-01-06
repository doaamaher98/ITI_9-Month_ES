function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["SubSystem:22"] = "SubSystem.c:56,59&SubSystem.h:41";
	/* <Root>/In2 */
	this.urlHashMap["SubSystem:23"] = "SubSystem.c:57,59&SubSystem.h:42";
	/* <Root>/In3 */
	this.urlHashMap["SubSystem:27"] = "SubSystem.c:65,68&SubSystem.h:43";
	/* <Root>/Function-Call
Generator */
	this.urlHashMap["SubSystem:15"] = "SubSystem.c:53,59,61,68,70";
	/* <Root>/Function-Call
Subsystem */
	this.urlHashMap["SubSystem:5"] = "SubSystem.c:32,54,59";
	/* <Root>/Function-Call
Subsystem1 */
	this.urlHashMap["SubSystem:16"] = "SubSystem.c:40,62,68";
	/* <Root>/Out1 */
	this.urlHashMap["SubSystem:24"] = "SubSystem.c:66,68&SubSystem.h:48";
	/* <S1>/Add */
	this.urlHashMap["SubSystem:20"] = "SubSystem.c:36,37";
	/* <S2>/Subtract */
	this.urlHashMap["SubSystem:25"] = "SubSystem.c:44,45";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "SubSystem"};
	this.sidHashMap["SubSystem"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "SubSystem:5"};
	this.sidHashMap["SubSystem:5"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "SubSystem:16"};
	this.sidHashMap["SubSystem:16"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "SubSystem:22"};
	this.sidHashMap["SubSystem:22"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/In2"] = {sid: "SubSystem:23"};
	this.sidHashMap["SubSystem:23"] = {rtwname: "<Root>/In2"};
	this.rtwnameHashMap["<Root>/In3"] = {sid: "SubSystem:27"};
	this.sidHashMap["SubSystem:27"] = {rtwname: "<Root>/In3"};
	this.rtwnameHashMap["<Root>/Function-Call Generator"] = {sid: "SubSystem:15"};
	this.sidHashMap["SubSystem:15"] = {rtwname: "<Root>/Function-Call Generator"};
	this.rtwnameHashMap["<Root>/Function-Call Split"] = {sid: "SubSystem:10"};
	this.sidHashMap["SubSystem:10"] = {rtwname: "<Root>/Function-Call Split"};
	this.rtwnameHashMap["<Root>/Function-Call Subsystem"] = {sid: "SubSystem:5"};
	this.sidHashMap["SubSystem:5"] = {rtwname: "<Root>/Function-Call Subsystem"};
	this.rtwnameHashMap["<Root>/Function-Call Subsystem1"] = {sid: "SubSystem:16"};
	this.sidHashMap["SubSystem:16"] = {rtwname: "<Root>/Function-Call Subsystem1"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "SubSystem:24"};
	this.sidHashMap["SubSystem:24"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "SubSystem:6"};
	this.sidHashMap["SubSystem:6"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/In2"] = {sid: "SubSystem:21"};
	this.sidHashMap["SubSystem:21"] = {rtwname: "<S1>/In2"};
	this.rtwnameHashMap["<S1>/function"] = {sid: "SubSystem:7"};
	this.sidHashMap["SubSystem:7"] = {rtwname: "<S1>/function"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "SubSystem:20"};
	this.sidHashMap["SubSystem:20"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "SubSystem:8"};
	this.sidHashMap["SubSystem:8"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "SubSystem:17"};
	this.sidHashMap["SubSystem:17"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/In2"] = {sid: "SubSystem:28"};
	this.sidHashMap["SubSystem:28"] = {rtwname: "<S2>/In2"};
	this.rtwnameHashMap["<S2>/function"] = {sid: "SubSystem:18"};
	this.sidHashMap["SubSystem:18"] = {rtwname: "<S2>/function"};
	this.rtwnameHashMap["<S2>/Subtract"] = {sid: "SubSystem:25"};
	this.sidHashMap["SubSystem:25"] = {rtwname: "<S2>/Subtract"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "SubSystem:19"};
	this.sidHashMap["SubSystem:19"] = {rtwname: "<S2>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
