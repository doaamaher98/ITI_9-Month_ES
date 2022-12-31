function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/IfTrueParam */
	this.urlHashMap["If_Condition:6"] = "If_Condition.c:40,42&If_Condition.h:41";
	/* <Root>/ConditionParam */
	this.urlHashMap["If_Condition:9"] = "If_Condition.c:36,38&If_Condition.h:42";
	/* <Root>/ElseParam */
	this.urlHashMap["If_Condition:10"] = "If_Condition.c:45,47&If_Condition.h:43";
	/* <Root>/Display */
	this.urlHashMap["If_Condition:5"] = "msg=rtwMsg_SimulationReducedBlock&block=If_Condition:5";
	/* <Root>/Switch */
	this.urlHashMap["If_Condition:4"] = "If_Condition.c:35,38,42,50";
	/* <Root>/OutParam */
	this.urlHashMap["If_Condition:11"] = "If_Condition.c:39,42,44,47&If_Condition.h:48";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "If_Condition"};
	this.sidHashMap["If_Condition"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/IfTrueParam"] = {sid: "If_Condition:6"};
	this.sidHashMap["If_Condition:6"] = {rtwname: "<Root>/IfTrueParam"};
	this.rtwnameHashMap["<Root>/ConditionParam"] = {sid: "If_Condition:9"};
	this.sidHashMap["If_Condition:9"] = {rtwname: "<Root>/ConditionParam"};
	this.rtwnameHashMap["<Root>/ElseParam"] = {sid: "If_Condition:10"};
	this.sidHashMap["If_Condition:10"] = {rtwname: "<Root>/ElseParam"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "If_Condition:5"};
	this.sidHashMap["If_Condition:5"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Switch"] = {sid: "If_Condition:4"};
	this.sidHashMap["If_Condition:4"] = {rtwname: "<Root>/Switch"};
	this.rtwnameHashMap["<Root>/OutParam"] = {sid: "If_Condition:11"};
	this.sidHashMap["If_Condition:11"] = {rtwname: "<Root>/OutParam"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
