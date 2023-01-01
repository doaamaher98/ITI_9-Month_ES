function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/InputParam */
	this.urlHashMap["While_Factorial:37"] = "While_Factorial.c:47,48,62,64&While_Factorial.h:40";
	/* <Root>/Display */
	this.urlHashMap["While_Factorial:9"] = "msg=rtwMsg_reducedBlock&block=While_Factorial:9";
	/* <Root>/Factorial */
	this.urlHashMap["While_Factorial:1"] = "While_Factorial.c:39,68";
	/* <Root>/OutResult */
	this.urlHashMap["While_Factorial:8"] = "While_Factorial.c:50,54,57,59&While_Factorial.h:45";
	/* <S1>/Display */
	this.urlHashMap["While_Factorial:36"] = "msg=rtwMsg_reducedBlock&block=While_Factorial:36";
	/* <S1>/Product */
	this.urlHashMap["While_Factorial:10"] = "While_Factorial.c:51,54";
	/* <S1>/Relational
Operator */
	this.urlHashMap["While_Factorial:35"] = "While_Factorial.c:61,64";
	/* <S1>/Unit Delay */
	this.urlHashMap["While_Factorial:11"] = "While_Factorial.c:44,45,52,54,56,59";
	/* <S1>/While Iterator */
	this.urlHashMap["While_Factorial:4"] = "While_Factorial.c:40,42,48,49,54,64,65";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "While_Factorial"};
	this.sidHashMap["While_Factorial"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "While_Factorial:1"};
	this.sidHashMap["While_Factorial:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/InputParam"] = {sid: "While_Factorial:37"};
	this.sidHashMap["While_Factorial:37"] = {rtwname: "<Root>/InputParam"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "While_Factorial:9"};
	this.sidHashMap["While_Factorial:9"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Factorial"] = {sid: "While_Factorial:1"};
	this.sidHashMap["While_Factorial:1"] = {rtwname: "<Root>/Factorial"};
	this.rtwnameHashMap["<Root>/OutResult"] = {sid: "While_Factorial:8"};
	this.sidHashMap["While_Factorial:8"] = {rtwname: "<Root>/OutResult"};
	this.rtwnameHashMap["<S1>/Condition"] = {sid: "While_Factorial:3"};
	this.sidHashMap["While_Factorial:3"] = {rtwname: "<S1>/Condition"};
	this.rtwnameHashMap["<S1>/Display"] = {sid: "While_Factorial:36"};
	this.sidHashMap["While_Factorial:36"] = {rtwname: "<S1>/Display"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "While_Factorial:10"};
	this.sidHashMap["While_Factorial:10"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Relational Operator"] = {sid: "While_Factorial:35"};
	this.sidHashMap["While_Factorial:35"] = {rtwname: "<S1>/Relational Operator"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "While_Factorial:11"};
	this.sidHashMap["While_Factorial:11"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/While Iterator"] = {sid: "While_Factorial:4"};
	this.sidHashMap["While_Factorial:4"] = {rtwname: "<S1>/While Iterator"};
	this.rtwnameHashMap["<S1>/Out"] = {sid: "While_Factorial:5"};
	this.sidHashMap["While_Factorial:5"] = {rtwname: "<S1>/Out"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
