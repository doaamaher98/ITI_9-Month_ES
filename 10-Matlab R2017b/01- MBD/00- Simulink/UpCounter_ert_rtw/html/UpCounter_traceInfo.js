function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/InitConstant */
	this.urlHashMap["UpCounter:8"] = "UpCounter.c:41,44&UpCounter.h:46";
	/* <Root>/ReturnConstant */
	this.urlHashMap["UpCounter:10"] = "UpCounter.c:47,50&UpCounter.h:47";
	/* <Root>/Add */
	this.urlHashMap["UpCounter:4"] = "UpCounter.c:40,44";
	/* <Root>/Scope */
	this.urlHashMap["UpCounter:5"] = "msg=rtwMsg_SimulationReducedBlock&block=UpCounter:5";
	/* <Root>/Switch */
	this.urlHashMap["UpCounter:6"] = "UpCounter.c:46,49,50,53";
	/* <Root>/Unit Delay */
	this.urlHashMap["UpCounter:3"] = "UpCounter.c:42,44,58,59&UpCounter.h:41";
	/* <Root>/OutValue */
	this.urlHashMap["UpCounter:11"] = "UpCounter.c:55,56&UpCounter.h:52";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "UpCounter"};
	this.sidHashMap["UpCounter"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/InitConstant"] = {sid: "UpCounter:8"};
	this.sidHashMap["UpCounter:8"] = {rtwname: "<Root>/InitConstant"};
	this.rtwnameHashMap["<Root>/ReturnConstant"] = {sid: "UpCounter:10"};
	this.sidHashMap["UpCounter:10"] = {rtwname: "<Root>/ReturnConstant"};
	this.rtwnameHashMap["<Root>/Add"] = {sid: "UpCounter:4"};
	this.sidHashMap["UpCounter:4"] = {rtwname: "<Root>/Add"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "UpCounter:5"};
	this.sidHashMap["UpCounter:5"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<Root>/Switch"] = {sid: "UpCounter:6"};
	this.sidHashMap["UpCounter:6"] = {rtwname: "<Root>/Switch"};
	this.rtwnameHashMap["<Root>/Unit Delay"] = {sid: "UpCounter:3"};
	this.sidHashMap["UpCounter:3"] = {rtwname: "<Root>/Unit Delay"};
	this.rtwnameHashMap["<Root>/OutValue"] = {sid: "UpCounter:11"};
	this.sidHashMap["UpCounter:11"] = {rtwname: "<Root>/OutValue"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
