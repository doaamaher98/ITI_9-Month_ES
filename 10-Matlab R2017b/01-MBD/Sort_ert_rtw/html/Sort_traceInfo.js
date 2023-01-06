function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/In1 */
	this.urlHashMap["Sort:7"] = "Sort.c:36,42&Sort.h:41";
	/* <Root>/Display */
	this.urlHashMap["Sort:3"] = "msg=rtwMsg_reducedBlock&block=Sort:3";
	/* <Root>/Display1 */
	this.urlHashMap["Sort:4"] = "msg=rtwMsg_reducedBlock&block=Sort:4";
	/* <Root>/Sort */
	this.urlHashMap["Sort:1"] = "Sort.c:35,40,41,42,43,44,45,46,47";
	/* <Root>/Out1 */
	this.urlHashMap["Sort:5"] = "Sort.c:37,44&Sort.h:46";
	/* <Root>/Out2 */
	this.urlHashMap["Sort:6"] = "Sort.c:38,43&Sort.h:47";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Sort"};
	this.sidHashMap["Sort"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Sort:7"};
	this.sidHashMap["Sort:7"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "Sort:3"};
	this.sidHashMap["Sort:3"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Display1"] = {sid: "Sort:4"};
	this.sidHashMap["Sort:4"] = {rtwname: "<Root>/Display1"};
	this.rtwnameHashMap["<Root>/Sort"] = {sid: "Sort:1"};
	this.sidHashMap["Sort:1"] = {rtwname: "<Root>/Sort"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Sort:5"};
	this.sidHashMap["Sort:5"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<Root>/Out2"] = {sid: "Sort:6"};
	this.sidHashMap["Sort:6"] = {rtwname: "<Root>/Out2"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
