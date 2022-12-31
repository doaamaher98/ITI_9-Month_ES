function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/InitValue */
	this.urlHashMap["DownCounter:14"] = "DownCounter.c:41,44&DownCounter.h:46";
	/* <Root>/InputParam */
	this.urlHashMap["DownCounter:15"] = "DownCounter.c:47,50&DownCounter.h:47";
	/* <Root>/Display */
	this.urlHashMap["DownCounter:7"] = "msg=rtwMsg_reducedBlock&block=DownCounter:7";
	/* <Root>/Scope */
	this.urlHashMap["DownCounter:8"] = "msg=rtwMsg_reducedBlock&block=DownCounter:8";
	/* <Root>/Subtract */
	this.urlHashMap["DownCounter:9"] = "DownCounter.c:40,44";
	/* <Root>/Switch */
	this.urlHashMap["DownCounter:1"] = "DownCounter.c:46,49,50,53";
	/* <Root>/Unit Delay */
	this.urlHashMap["DownCounter:6"] = "DownCounter.c:42,44,58,59&DownCounter.h:41";
	/* <Root>/OutParam */
	this.urlHashMap["DownCounter:16"] = "DownCounter.c:55,56&DownCounter.h:52";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "DownCounter"};
	this.sidHashMap["DownCounter"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/InitValue"] = {sid: "DownCounter:14"};
	this.sidHashMap["DownCounter:14"] = {rtwname: "<Root>/InitValue"};
	this.rtwnameHashMap["<Root>/InputParam"] = {sid: "DownCounter:15"};
	this.sidHashMap["DownCounter:15"] = {rtwname: "<Root>/InputParam"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "DownCounter:7"};
	this.sidHashMap["DownCounter:7"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "DownCounter:8"};
	this.sidHashMap["DownCounter:8"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<Root>/Subtract"] = {sid: "DownCounter:9"};
	this.sidHashMap["DownCounter:9"] = {rtwname: "<Root>/Subtract"};
	this.rtwnameHashMap["<Root>/Switch"] = {sid: "DownCounter:1"};
	this.sidHashMap["DownCounter:1"] = {rtwname: "<Root>/Switch"};
	this.rtwnameHashMap["<Root>/Unit Delay"] = {sid: "DownCounter:6"};
	this.sidHashMap["DownCounter:6"] = {rtwname: "<Root>/Unit Delay"};
	this.rtwnameHashMap["<Root>/OutParam"] = {sid: "DownCounter:16"};
	this.sidHashMap["DownCounter:16"] = {rtwname: "<Root>/OutParam"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
