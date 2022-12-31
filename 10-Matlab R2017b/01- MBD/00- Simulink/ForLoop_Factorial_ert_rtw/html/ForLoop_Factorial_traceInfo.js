function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Display */
	this.urlHashMap["ForLoop_Factorial:2"] = "msg=rtwMsg_SimulationReducedBlock&block=ForLoop_Factorial:2";
	/* <Root>/Factorial */
	this.urlHashMap["ForLoop_Factorial:25"] = "ForLoop_Factorial.c:35,56";
	/* <Root>/InputParam */
	this.urlHashMap["ForLoop_Factorial:31"] = "ForLoop_Factorial.c:41,42,55";
	/* <Root>/OutParam */
	this.urlHashMap["ForLoop_Factorial:36"] = "ForLoop_Factorial.c:43,47,50,52&ForLoop_Factorial.h:40";
	/* <S1>/For Iterator */
	this.urlHashMap["ForLoop_Factorial:27"] = "ForLoop_Factorial.c:36,42,47";
	/* <S1>/Product */
	this.urlHashMap["ForLoop_Factorial:29"] = "ForLoop_Factorial.c:44,47";
	/* <S1>/Unit Delay */
	this.urlHashMap["ForLoop_Factorial:37"] = "ForLoop_Factorial.c:38,39,45,47,49,52";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "ForLoop_Factorial"};
	this.sidHashMap["ForLoop_Factorial"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "ForLoop_Factorial:25"};
	this.sidHashMap["ForLoop_Factorial:25"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "ForLoop_Factorial:2"};
	this.sidHashMap["ForLoop_Factorial:2"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Factorial"] = {sid: "ForLoop_Factorial:25"};
	this.sidHashMap["ForLoop_Factorial:25"] = {rtwname: "<Root>/Factorial"};
	this.rtwnameHashMap["<Root>/InputParam"] = {sid: "ForLoop_Factorial:31"};
	this.sidHashMap["ForLoop_Factorial:31"] = {rtwname: "<Root>/InputParam"};
	this.rtwnameHashMap["<Root>/OutParam"] = {sid: "ForLoop_Factorial:36"};
	this.sidHashMap["ForLoop_Factorial:36"] = {rtwname: "<Root>/OutParam"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "ForLoop_Factorial:26"};
	this.sidHashMap["ForLoop_Factorial:26"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/For Iterator"] = {sid: "ForLoop_Factorial:27"};
	this.sidHashMap["ForLoop_Factorial:27"] = {rtwname: "<S1>/For Iterator"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "ForLoop_Factorial:29"};
	this.sidHashMap["ForLoop_Factorial:29"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "ForLoop_Factorial:37"};
	this.sidHashMap["ForLoop_Factorial:37"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "ForLoop_Factorial:28"};
	this.sidHashMap["ForLoop_Factorial:28"] = {rtwname: "<S1>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
