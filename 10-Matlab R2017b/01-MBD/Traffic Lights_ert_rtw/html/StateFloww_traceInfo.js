function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Chart */
	this.urlHashMap["StateFloww:1"] = "StateFloww.c:22,41,42,43,46,47,48,50,51,58,61,66,73,86,101,103,104&StateFloww.h:41,42,43";
	/* <Root>/Constant */
	this.urlHashMap["StateFloww:6"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=StateFloww:6";
	/* <Root>/Display */
	this.urlHashMap["StateFloww:7"] = "msg=rtwMsg_reducedBlock&block=StateFloww:7";
	/* <Root>/Display1 */
	this.urlHashMap["StateFloww:8"] = "msg=rtwMsg_reducedBlock&block=StateFloww:8";
	/* <Root>/Display2 */
	this.urlHashMap["StateFloww:9"] = "msg=rtwMsg_reducedBlock&block=StateFloww:9";
	/* <S1>:16 */
	this.urlHashMap["StateFloww:1:16"] = "StateFloww.c:52,53,54,79,80";
	/* <S1>:9 */
	this.urlHashMap["StateFloww:1:9"] = "msg=rtwMsg_optimizedSfObject&block=StateFloww:1:9";
	/* <S1>:8 */
	this.urlHashMap["StateFloww:1:8"] = "StateFloww.c:62,63,74";
	/* <S1>:12 */
	this.urlHashMap["StateFloww:1:12"] = "StateFloww.c:53,54,62,63,67,68,69";
	/* <S1>:6 */
	this.urlHashMap["StateFloww:1:6"] = "StateFloww.c:48,74";
	/* <S1>:14 */
	this.urlHashMap["StateFloww:1:14"] = "StateFloww.c:68,69,78,79,80,102";
	/* <S1>:7 */
	this.urlHashMap["StateFloww:1:7"] = "StateFloww.c:48";
	/* <S1>:10 */
	this.urlHashMap["StateFloww:1:10"] = "StateFloww.c:74";
	/* <S1>:11 */
	this.urlHashMap["StateFloww:1:11"] = "msg=rtwMsg_optimizedSfObject&block=StateFloww:1:11";
	/* <S1>:13 */
	this.urlHashMap["StateFloww:1:13"] = "StateFloww.c:62,63";
	/* <S1>:18 */
	this.urlHashMap["StateFloww:1:18"] = "StateFloww.c:52,53,54";
	/* <S1>:15 */
	this.urlHashMap["StateFloww:1:15"] = "StateFloww.c:67,68,69";
	/* <S1>:17 */
	this.urlHashMap["StateFloww:1:17"] = "StateFloww.c:78,79,80";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "StateFloww"};
	this.sidHashMap["StateFloww"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "StateFloww:1"};
	this.sidHashMap["StateFloww:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Chart"] = {sid: "StateFloww:1"};
	this.sidHashMap["StateFloww:1"] = {rtwname: "<Root>/Chart"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "StateFloww:6"};
	this.sidHashMap["StateFloww:6"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "StateFloww:7"};
	this.sidHashMap["StateFloww:7"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Display1"] = {sid: "StateFloww:8"};
	this.sidHashMap["StateFloww:8"] = {rtwname: "<Root>/Display1"};
	this.rtwnameHashMap["<Root>/Display2"] = {sid: "StateFloww:9"};
	this.sidHashMap["StateFloww:9"] = {rtwname: "<Root>/Display2"};
	this.rtwnameHashMap["<Root>/Lamp"] = {sid: "StateFloww:2"};
	this.sidHashMap["StateFloww:2"] = {rtwname: "<Root>/Lamp"};
	this.rtwnameHashMap["<Root>/Lamp1"] = {sid: "StateFloww:3"};
	this.sidHashMap["StateFloww:3"] = {rtwname: "<Root>/Lamp1"};
	this.rtwnameHashMap["<Root>/Lamp2"] = {sid: "StateFloww:4"};
	this.sidHashMap["StateFloww:4"] = {rtwname: "<Root>/Lamp2"};
	this.rtwnameHashMap["<S1>:16"] = {sid: "StateFloww:1:16"};
	this.sidHashMap["StateFloww:1:16"] = {rtwname: "<S1>:16"};
	this.rtwnameHashMap["<S1>:9"] = {sid: "StateFloww:1:9"};
	this.sidHashMap["StateFloww:1:9"] = {rtwname: "<S1>:9"};
	this.rtwnameHashMap["<S1>:8"] = {sid: "StateFloww:1:8"};
	this.sidHashMap["StateFloww:1:8"] = {rtwname: "<S1>:8"};
	this.rtwnameHashMap["<S1>:12"] = {sid: "StateFloww:1:12"};
	this.sidHashMap["StateFloww:1:12"] = {rtwname: "<S1>:12"};
	this.rtwnameHashMap["<S1>:6"] = {sid: "StateFloww:1:6"};
	this.sidHashMap["StateFloww:1:6"] = {rtwname: "<S1>:6"};
	this.rtwnameHashMap["<S1>:14"] = {sid: "StateFloww:1:14"};
	this.sidHashMap["StateFloww:1:14"] = {rtwname: "<S1>:14"};
	this.rtwnameHashMap["<S1>:7"] = {sid: "StateFloww:1:7"};
	this.sidHashMap["StateFloww:1:7"] = {rtwname: "<S1>:7"};
	this.rtwnameHashMap["<S1>:10"] = {sid: "StateFloww:1:10"};
	this.sidHashMap["StateFloww:1:10"] = {rtwname: "<S1>:10"};
	this.rtwnameHashMap["<S1>:11"] = {sid: "StateFloww:1:11"};
	this.sidHashMap["StateFloww:1:11"] = {rtwname: "<S1>:11"};
	this.rtwnameHashMap["<S1>:13"] = {sid: "StateFloww:1:13"};
	this.sidHashMap["StateFloww:1:13"] = {rtwname: "<S1>:13"};
	this.rtwnameHashMap["<S1>:18"] = {sid: "StateFloww:1:18"};
	this.sidHashMap["StateFloww:1:18"] = {rtwname: "<S1>:18"};
	this.rtwnameHashMap["<S1>:15"] = {sid: "StateFloww:1:15"};
	this.sidHashMap["StateFloww:1:15"] = {rtwname: "<S1>:15"};
	this.rtwnameHashMap["<S1>:17"] = {sid: "StateFloww:1:17"};
	this.sidHashMap["StateFloww:1:17"] = {rtwname: "<S1>:17"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
