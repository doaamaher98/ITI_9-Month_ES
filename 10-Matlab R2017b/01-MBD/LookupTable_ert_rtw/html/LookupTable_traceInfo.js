function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["LookupTable:5"] = "LookupTable.c:90,93&LookupTable.h:53";
	/* <Root>/1-D Lookup
Table */
	this.urlHashMap["LookupTable:2"] = "LookupTable.c:91,93,94,95&LookupTable.h:41,46&LookupTable_data.c:25,30";
	/* <Root>/Display */
	this.urlHashMap["LookupTable:4"] = "msg=rtwMsg_SimulationReducedBlock&block=LookupTable:4";
	/* <Root>/Out1 */
	this.urlHashMap["LookupTable:6"] = "LookupTable.c:89,93&LookupTable.h:58";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "LookupTable"};
	this.sidHashMap["LookupTable"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "LookupTable:5"};
	this.sidHashMap["LookupTable:5"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/1-D Lookup Table"] = {sid: "LookupTable:2"};
	this.sidHashMap["LookupTable:2"] = {rtwname: "<Root>/1-D Lookup Table"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "LookupTable:4"};
	this.sidHashMap["LookupTable:4"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "LookupTable:6"};
	this.sidHashMap["LookupTable:6"] = {rtwname: "<Root>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
