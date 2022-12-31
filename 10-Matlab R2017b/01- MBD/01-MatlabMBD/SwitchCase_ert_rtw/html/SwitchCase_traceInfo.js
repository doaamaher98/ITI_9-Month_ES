function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/CounterInput */
	this.urlHashMap["SwitchCase:19"] = "SwitchCase.c:41,45&SwitchCase.h:51";
	/* <Root>/Case0Counter0 */
	this.urlHashMap["SwitchCase:59"] = "SwitchCase.c:59,62&SwitchCase.h:52";
	/* <Root>/Case1Counter1 */
	this.urlHashMap["SwitchCase:60"] = "SwitchCase.c:84,87&SwitchCase.h:53";
	/* <Root>/Case2Counter2 */
	this.urlHashMap["SwitchCase:61"] = "SwitchCase.c:110,113&SwitchCase.h:54";
	/* <Root>/DefaultCounter */
	this.urlHashMap["SwitchCase:62"] = "SwitchCase.c:42,134&SwitchCase.h:55";
	/* <Root>/Case(0) */
	this.urlHashMap["SwitchCase:3"] = "SwitchCase.c:55,76";
	/* <Root>/Case(1) */
	this.urlHashMap["SwitchCase:7"] = "SwitchCase.c:80,101";
	/* <Root>/Case(2) */
	this.urlHashMap["SwitchCase:11"] = "SwitchCase.c:106,127";
	/* <Root>/Default */
	this.urlHashMap["SwitchCase:15"] = "SwitchCase.c:131,136";
	/* <Root>/Merge */
	this.urlHashMap["SwitchCase:25"] = "msg=rtwMsg_CodeGenerationReducedBlock&block=SwitchCase:25";
	/* <Root>/Switch Case */
	this.urlHashMap["SwitchCase:2"] = "SwitchCase.c:40,45,46,47,49,52,53,54,79,140";
	/* <Root>/OutParam */
	this.urlHashMap["SwitchCase:26"] = "SwitchCase.c:142,143&SwitchCase.h:60";
	/* <S1>/Action Port */
	this.urlHashMap["SwitchCase:5"] = "SwitchCase.c:56";
	/* <S1>/Add */
	this.urlHashMap["SwitchCase:33"] = "SwitchCase.c:58,62";
	/* <S1>/Constant1 */
	this.urlHashMap["SwitchCase:37"] = "SwitchCase.c:65,68";
	/* <S1>/Scope */
	this.urlHashMap["SwitchCase:39"] = "msg=rtwMsg_reducedBlock&block=SwitchCase:39";
	/* <S1>/Switch */
	this.urlHashMap["SwitchCase:35"] = "SwitchCase.c:64,67,68,71";
	/* <S1>/Unit Delay */
	this.urlHashMap["SwitchCase:34"] = "SwitchCase.c:60,62,73,74&SwitchCase.h:46";
	/* <S2>/Action Port */
	this.urlHashMap["SwitchCase:9"] = "SwitchCase.c:81";
	/* <S2>/Add */
	this.urlHashMap["SwitchCase:44"] = "SwitchCase.c:83,87";
	/* <S2>/Constant1 */
	this.urlHashMap["SwitchCase:45"] = "SwitchCase.c:90,93";
	/* <S2>/Scope */
	this.urlHashMap["SwitchCase:46"] = "msg=rtwMsg_reducedBlock&block=SwitchCase:46";
	/* <S2>/Switch */
	this.urlHashMap["SwitchCase:47"] = "SwitchCase.c:89,92,93,96";
	/* <S2>/Unit Delay */
	this.urlHashMap["SwitchCase:48"] = "SwitchCase.c:85,87,98,99&SwitchCase.h:45";
	/* <S3>/Action Port */
	this.urlHashMap["SwitchCase:13"] = "SwitchCase.c:107";
	/* <S3>/Add */
	this.urlHashMap["SwitchCase:51"] = "SwitchCase.c:109,113";
	/* <S3>/Constant1 */
	this.urlHashMap["SwitchCase:52"] = "SwitchCase.c:116,119";
	/* <S3>/Scope */
	this.urlHashMap["SwitchCase:53"] = "msg=rtwMsg_reducedBlock&block=SwitchCase:53";
	/* <S3>/Switch */
	this.urlHashMap["SwitchCase:54"] = "SwitchCase.c:115,118,119,122";
	/* <S3>/Unit Delay */
	this.urlHashMap["SwitchCase:55"] = "SwitchCase.c:111,113,124,125&SwitchCase.h:44";
	/* <S4>/In1 */
	this.urlHashMap["SwitchCase:16"] = "SwitchCase.c:43,134";
	/* <S4>/Action Port */
	this.urlHashMap["SwitchCase:17"] = "SwitchCase.c:132";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "SwitchCase"};
	this.sidHashMap["SwitchCase"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "SwitchCase:3"};
	this.sidHashMap["SwitchCase:3"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "SwitchCase:7"};
	this.sidHashMap["SwitchCase:7"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "SwitchCase:11"};
	this.sidHashMap["SwitchCase:11"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "SwitchCase:15"};
	this.sidHashMap["SwitchCase:15"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<Root>/CounterInput"] = {sid: "SwitchCase:19"};
	this.sidHashMap["SwitchCase:19"] = {rtwname: "<Root>/CounterInput"};
	this.rtwnameHashMap["<Root>/Case0Counter0"] = {sid: "SwitchCase:59"};
	this.sidHashMap["SwitchCase:59"] = {rtwname: "<Root>/Case0Counter0"};
	this.rtwnameHashMap["<Root>/Case1Counter1"] = {sid: "SwitchCase:60"};
	this.sidHashMap["SwitchCase:60"] = {rtwname: "<Root>/Case1Counter1"};
	this.rtwnameHashMap["<Root>/Case2Counter2"] = {sid: "SwitchCase:61"};
	this.sidHashMap["SwitchCase:61"] = {rtwname: "<Root>/Case2Counter2"};
	this.rtwnameHashMap["<Root>/DefaultCounter"] = {sid: "SwitchCase:62"};
	this.sidHashMap["SwitchCase:62"] = {rtwname: "<Root>/DefaultCounter"};
	this.rtwnameHashMap["<Root>/Case(0)"] = {sid: "SwitchCase:3"};
	this.sidHashMap["SwitchCase:3"] = {rtwname: "<Root>/Case(0)"};
	this.rtwnameHashMap["<Root>/Case(1)"] = {sid: "SwitchCase:7"};
	this.sidHashMap["SwitchCase:7"] = {rtwname: "<Root>/Case(1)"};
	this.rtwnameHashMap["<Root>/Case(2)"] = {sid: "SwitchCase:11"};
	this.sidHashMap["SwitchCase:11"] = {rtwname: "<Root>/Case(2)"};
	this.rtwnameHashMap["<Root>/Default"] = {sid: "SwitchCase:15"};
	this.sidHashMap["SwitchCase:15"] = {rtwname: "<Root>/Default"};
	this.rtwnameHashMap["<Root>/Merge"] = {sid: "SwitchCase:25"};
	this.sidHashMap["SwitchCase:25"] = {rtwname: "<Root>/Merge"};
	this.rtwnameHashMap["<Root>/Switch Case"] = {sid: "SwitchCase:2"};
	this.sidHashMap["SwitchCase:2"] = {rtwname: "<Root>/Switch Case"};
	this.rtwnameHashMap["<Root>/OutParam"] = {sid: "SwitchCase:26"};
	this.sidHashMap["SwitchCase:26"] = {rtwname: "<Root>/OutParam"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "SwitchCase:4"};
	this.sidHashMap["SwitchCase:4"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Action Port"] = {sid: "SwitchCase:5"};
	this.sidHashMap["SwitchCase:5"] = {rtwname: "<S1>/Action Port"};
	this.rtwnameHashMap["<S1>/Add"] = {sid: "SwitchCase:33"};
	this.sidHashMap["SwitchCase:33"] = {rtwname: "<S1>/Add"};
	this.rtwnameHashMap["<S1>/Constant1"] = {sid: "SwitchCase:37"};
	this.sidHashMap["SwitchCase:37"] = {rtwname: "<S1>/Constant1"};
	this.rtwnameHashMap["<S1>/Scope"] = {sid: "SwitchCase:39"};
	this.sidHashMap["SwitchCase:39"] = {rtwname: "<S1>/Scope"};
	this.rtwnameHashMap["<S1>/Switch"] = {sid: "SwitchCase:35"};
	this.sidHashMap["SwitchCase:35"] = {rtwname: "<S1>/Switch"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "SwitchCase:34"};
	this.sidHashMap["SwitchCase:34"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "SwitchCase:6"};
	this.sidHashMap["SwitchCase:6"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "SwitchCase:8"};
	this.sidHashMap["SwitchCase:8"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Action Port"] = {sid: "SwitchCase:9"};
	this.sidHashMap["SwitchCase:9"] = {rtwname: "<S2>/Action Port"};
	this.rtwnameHashMap["<S2>/Add"] = {sid: "SwitchCase:44"};
	this.sidHashMap["SwitchCase:44"] = {rtwname: "<S2>/Add"};
	this.rtwnameHashMap["<S2>/Constant1"] = {sid: "SwitchCase:45"};
	this.sidHashMap["SwitchCase:45"] = {rtwname: "<S2>/Constant1"};
	this.rtwnameHashMap["<S2>/Scope"] = {sid: "SwitchCase:46"};
	this.sidHashMap["SwitchCase:46"] = {rtwname: "<S2>/Scope"};
	this.rtwnameHashMap["<S2>/Switch"] = {sid: "SwitchCase:47"};
	this.sidHashMap["SwitchCase:47"] = {rtwname: "<S2>/Switch"};
	this.rtwnameHashMap["<S2>/Unit Delay"] = {sid: "SwitchCase:48"};
	this.sidHashMap["SwitchCase:48"] = {rtwname: "<S2>/Unit Delay"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "SwitchCase:10"};
	this.sidHashMap["SwitchCase:10"] = {rtwname: "<S2>/Out1"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "SwitchCase:12"};
	this.sidHashMap["SwitchCase:12"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Action Port"] = {sid: "SwitchCase:13"};
	this.sidHashMap["SwitchCase:13"] = {rtwname: "<S3>/Action Port"};
	this.rtwnameHashMap["<S3>/Add"] = {sid: "SwitchCase:51"};
	this.sidHashMap["SwitchCase:51"] = {rtwname: "<S3>/Add"};
	this.rtwnameHashMap["<S3>/Constant1"] = {sid: "SwitchCase:52"};
	this.sidHashMap["SwitchCase:52"] = {rtwname: "<S3>/Constant1"};
	this.rtwnameHashMap["<S3>/Scope"] = {sid: "SwitchCase:53"};
	this.sidHashMap["SwitchCase:53"] = {rtwname: "<S3>/Scope"};
	this.rtwnameHashMap["<S3>/Switch"] = {sid: "SwitchCase:54"};
	this.sidHashMap["SwitchCase:54"] = {rtwname: "<S3>/Switch"};
	this.rtwnameHashMap["<S3>/Unit Delay"] = {sid: "SwitchCase:55"};
	this.sidHashMap["SwitchCase:55"] = {rtwname: "<S3>/Unit Delay"};
	this.rtwnameHashMap["<S3>/Out1"] = {sid: "SwitchCase:14"};
	this.sidHashMap["SwitchCase:14"] = {rtwname: "<S3>/Out1"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "SwitchCase:16"};
	this.sidHashMap["SwitchCase:16"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Action Port"] = {sid: "SwitchCase:17"};
	this.sidHashMap["SwitchCase:17"] = {rtwname: "<S4>/Action Port"};
	this.rtwnameHashMap["<S4>/Out1"] = {sid: "SwitchCase:18"};
	this.sidHashMap["SwitchCase:18"] = {rtwname: "<S4>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
