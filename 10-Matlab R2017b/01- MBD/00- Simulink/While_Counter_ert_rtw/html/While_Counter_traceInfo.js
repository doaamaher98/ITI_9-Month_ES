function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/InParam */
	this.urlHashMap["While_Counter:18"] = "While_Counter.c:56,60&While_Counter.h:46";
	/* <Root>/InitCondition */
	this.urlHashMap["While_Counter:19"] = "While_Counter.c:46,47&While_Counter.h:47";
	/* <Root>/Display */
	this.urlHashMap["While_Counter:16"] = "msg=rtwMsg_SimulationReducedBlock&block=While_Counter:16";
	/* <Root>/While_Counter */
	this.urlHashMap["While_Counter:1"] = "While_Counter.c:41,67";
	/* <Root>/Out */
	this.urlHashMap["While_Counter:15"] = "While_Counter.c:49,53&While_Counter.h:52";
	/* <S1>/Add */
	this.urlHashMap["While_Counter:8"] = "While_Counter.c:50,53";
	/* <S1>/Relational
Operator */
	this.urlHashMap["While_Counter:14"] = "While_Counter.c:55,59";
	/* <S1>/Unit Delay */
	this.urlHashMap["While_Counter:9"] = "While_Counter.c:51";
	/* <S1>/Unit Delay1 */
	this.urlHashMap["While_Counter:10"] = "While_Counter.c:57,59,62,63&While_Counter.h:41";
	/* <S1>/WhileLoop */
	this.urlHashMap["While_Counter:4"] = "While_Counter.c:42,44,47,48,53,63,64";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "While_Counter"};
	this.sidHashMap["While_Counter"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "While_Counter:1"};
	this.sidHashMap["While_Counter:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/InParam"] = {sid: "While_Counter:18"};
	this.sidHashMap["While_Counter:18"] = {rtwname: "<Root>/InParam"};
	this.rtwnameHashMap["<Root>/InitCondition"] = {sid: "While_Counter:19"};
	this.sidHashMap["While_Counter:19"] = {rtwname: "<Root>/InitCondition"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "While_Counter:16"};
	this.sidHashMap["While_Counter:16"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/While_Counter"] = {sid: "While_Counter:1"};
	this.sidHashMap["While_Counter:1"] = {rtwname: "<Root>/While_Counter"};
	this.rtwnameHashMap["<Root>/Out"] = {sid: "While_Counter:15"};
	this.sidHashMap["While_Counter:15"] = {rtwname: "<Root>/Out"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "While_Counter:2"};
	this.sidHashMap["While_Counter:2"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/IC"] = {sid: "While_Counter:3"};
	this.sidHashMap["While_Counter:3"] = {rtwname: "<S1>/IC"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "While_Counter:8"};
	this.sidHashMap["While_Counter:8"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Relational Operator"] = {sid: "While_Counter:14"};
	this.sidHashMap["While_Counter:14"] = {rtwname: "<S1>/Relational Operator"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "While_Counter:9"};
	this.sidHashMap["While_Counter:9"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/Unit Delay1"] = {sid: "While_Counter:10"};
	this.sidHashMap["While_Counter:10"] = {rtwname: "<S1>/Unit Delay1"};
	this.rtwnameHashMap["<S1>/WhileLoop"] = {sid: "While_Counter:4"};
	this.sidHashMap["While_Counter:4"] = {rtwname: "<S1>/WhileLoop"};
	this.rtwnameHashMap["<S1>/Output"] = {sid: "While_Counter:5"};
	this.sidHashMap["While_Counter:5"] = {rtwname: "<S1>/Output"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
