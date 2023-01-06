function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["Saturation:7"] = "Saturation.c:36,38,41,46&Saturation.h:40";
	/* <Root>/Display */
	this.urlHashMap["Saturation:4"] = "msg=rtwMsg_SimulationReducedBlock&block=Saturation:4";
	/* <Root>/Saturation */
	this.urlHashMap["Saturation:1"] = "Saturation.c:35,38,40,41,43,46,49";
	/* <Root>/Out1 */
	this.urlHashMap["Saturation:8"] = "Saturation.c:39,40,42,43,45,46&Saturation.h:45";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Saturation"};
	this.sidHashMap["Saturation"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Saturation:7"};
	this.sidHashMap["Saturation:7"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "Saturation:4"};
	this.sidHashMap["Saturation:4"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Saturation"] = {sid: "Saturation:1"};
	this.sidHashMap["Saturation:1"] = {rtwname: "<Root>/Saturation"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Saturation:8"};
	this.sidHashMap["Saturation:8"] = {rtwname: "<Root>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
