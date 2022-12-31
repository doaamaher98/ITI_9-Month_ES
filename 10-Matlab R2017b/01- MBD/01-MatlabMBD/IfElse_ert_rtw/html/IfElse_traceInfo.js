function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/InputParam1 */
	this.urlHashMap["IfElse:21"] = "IfElse.c:36,38,48&IfElse.h:41";
	/* <Root>/InputParam2 */
	this.urlHashMap["IfElse:28"] = "IfElse.h:42";
	/* <Root>/IfInputParam */
	this.urlHashMap["IfElse:29"] = "IfElse.c:43,45&IfElse.h:43";
	/* <Root>/ElseIfInputParam */
	this.urlHashMap["IfElse:30"] = "IfElse.c:53,55&IfElse.h:44";
	/* <Root>/ElseInputParam */
	this.urlHashMap["IfElse:31"] = "IfElse.c:63,65&IfElse.h:45";
	/* <Root>/Display */
	this.urlHashMap["IfElse:17"] = "msg=rtwMsg_SimulationReducedBlock&block=IfElse:17";
	/* <Root>/Else */
	this.urlHashMap["IfElse:10"] = "IfElse.c:59,67";
	/* <Root>/If */
	this.urlHashMap["IfElse:5"] = "IfElse.c:35,38,45,48,55,70";
	/* <Root>/IfTrue */
	this.urlHashMap["IfElse:6"] = "IfElse.c:39,47";
	/* <Root>/IfTrue1 */
	this.urlHashMap["IfElse:23"] = "IfElse.c:49,57";
	/* <Root>/Merge */
	this.urlHashMap["IfElse:15"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=IfElse:15";
	/* <Root>/OutParam */
	this.urlHashMap["IfElse:16"] = "IfElse.c:42,45,52,55,62,65&IfElse.h:50";
	/* <S1>/Action Port */
	this.urlHashMap["IfElse:12"] = "IfElse.c:60";
	/* <S2>/Action Port */
	this.urlHashMap["IfElse:8"] = "IfElse.c:40";
	/* <S3>/Action Port */
	this.urlHashMap["IfElse:25"] = "IfElse.c:50";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "IfElse"};
	this.sidHashMap["IfElse"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "IfElse:10"};
	this.sidHashMap["IfElse:10"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "IfElse:6"};
	this.sidHashMap["IfElse:6"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "IfElse:23"};
	this.sidHashMap["IfElse:23"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<Root>/InputParam1"] = {sid: "IfElse:21"};
	this.sidHashMap["IfElse:21"] = {rtwname: "<Root>/InputParam1"};
	this.rtwnameHashMap["<Root>/InputParam2"] = {sid: "IfElse:28"};
	this.sidHashMap["IfElse:28"] = {rtwname: "<Root>/InputParam2"};
	this.rtwnameHashMap["<Root>/IfInputParam"] = {sid: "IfElse:29"};
	this.sidHashMap["IfElse:29"] = {rtwname: "<Root>/IfInputParam"};
	this.rtwnameHashMap["<Root>/ElseIfInputParam"] = {sid: "IfElse:30"};
	this.sidHashMap["IfElse:30"] = {rtwname: "<Root>/ElseIfInputParam"};
	this.rtwnameHashMap["<Root>/ElseInputParam"] = {sid: "IfElse:31"};
	this.sidHashMap["IfElse:31"] = {rtwname: "<Root>/ElseInputParam"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "IfElse:17"};
	this.sidHashMap["IfElse:17"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Else"] = {sid: "IfElse:10"};
	this.sidHashMap["IfElse:10"] = {rtwname: "<Root>/Else"};
	this.rtwnameHashMap["<Root>/If"] = {sid: "IfElse:5"};
	this.sidHashMap["IfElse:5"] = {rtwname: "<Root>/If"};
	this.rtwnameHashMap["<Root>/IfTrue"] = {sid: "IfElse:6"};
	this.sidHashMap["IfElse:6"] = {rtwname: "<Root>/IfTrue"};
	this.rtwnameHashMap["<Root>/IfTrue1"] = {sid: "IfElse:23"};
	this.sidHashMap["IfElse:23"] = {rtwname: "<Root>/IfTrue1"};
	this.rtwnameHashMap["<Root>/Merge"] = {sid: "IfElse:15"};
	this.sidHashMap["IfElse:15"] = {rtwname: "<Root>/Merge"};
	this.rtwnameHashMap["<Root>/OutParam"] = {sid: "IfElse:16"};
	this.sidHashMap["IfElse:16"] = {rtwname: "<Root>/OutParam"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "IfElse:11"};
	this.sidHashMap["IfElse:11"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Action Port"] = {sid: "IfElse:12"};
	this.sidHashMap["IfElse:12"] = {rtwname: "<S1>/Action Port"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "IfElse:13"};
	this.sidHashMap["IfElse:13"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "IfElse:7"};
	this.sidHashMap["IfElse:7"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Action Port"] = {sid: "IfElse:8"};
	this.sidHashMap["IfElse:8"] = {rtwname: "<S2>/Action Port"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "IfElse:9"};
	this.sidHashMap["IfElse:9"] = {rtwname: "<S2>/Out1"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "IfElse:24"};
	this.sidHashMap["IfElse:24"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Action Port"] = {sid: "IfElse:25"};
	this.sidHashMap["IfElse:25"] = {rtwname: "<S3>/Action Port"};
	this.rtwnameHashMap["<S3>/Out1"] = {sid: "IfElse:26"};
	this.sidHashMap["IfElse:26"] = {rtwname: "<S3>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
