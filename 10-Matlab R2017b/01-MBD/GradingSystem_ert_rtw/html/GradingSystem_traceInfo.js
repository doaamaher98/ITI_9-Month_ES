function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/InitCondition */
	this.urlHashMap["GradingSystem:1"] = "GradingSystem.c:36,38,45,48,55,58,65,68,75,85&GradingSystem.h:41";
	/* <Root>/If Condition */
	this.urlHashMap["GradingSystem:2"] = "GradingSystem.c:35,38,48,58,68,90";
	/* <Root>/If Excellent
Subsystem */
	this.urlHashMap["GradingSystem:3"] = "GradingSystem.c:39,47";
	/* <Root>/If Fail
Subsystem */
	this.urlHashMap["GradingSystem:23"] = "GradingSystem.c:79,87";
	/* <Root>/If Good
Subsystem */
	this.urlHashMap["GradingSystem:11"] = "GradingSystem.c:59,67";
	/* <Root>/If Pass
Subsystem */
	this.urlHashMap["GradingSystem:19"] = "GradingSystem.c:69,77";
	/* <Root>/If VeryGood
Subsystem */
	this.urlHashMap["GradingSystem:7"] = "GradingSystem.c:49,57";
	/* <Root>/OutResult */
	this.urlHashMap["GradingSystem:46"] = "GradingSystem.c:42,45&GradingSystem.h:46";
	/* <Root>/OutResult1 */
	this.urlHashMap["GradingSystem:49"] = "GradingSystem.c:52,55&GradingSystem.h:47";
	/* <Root>/OutResult2 */
	this.urlHashMap["GradingSystem:50"] = "GradingSystem.c:62,65&GradingSystem.h:48";
	/* <Root>/OutResult3 */
	this.urlHashMap["GradingSystem:51"] = "GradingSystem.c:72,75&GradingSystem.h:49";
	/* <Root>/OutResult4 */
	this.urlHashMap["GradingSystem:52"] = "GradingSystem.c:82,85&GradingSystem.h:50";
	/* <S1>/In1 */
	this.urlHashMap["GradingSystem:4"] = "GradingSystem.c:43,45";
	/* <S1>/Action Port */
	this.urlHashMap["GradingSystem:5"] = "GradingSystem.c:40";
	/* <S2>/In1 */
	this.urlHashMap["GradingSystem:24"] = "GradingSystem.c:83,85";
	/* <S2>/Action Port */
	this.urlHashMap["GradingSystem:25"] = "GradingSystem.c:80";
	/* <S3>/In1 */
	this.urlHashMap["GradingSystem:12"] = "GradingSystem.c:63,65";
	/* <S3>/Action Port */
	this.urlHashMap["GradingSystem:13"] = "GradingSystem.c:60";
	/* <S4>/In1 */
	this.urlHashMap["GradingSystem:20"] = "GradingSystem.c:73,75";
	/* <S4>/Action Port */
	this.urlHashMap["GradingSystem:21"] = "GradingSystem.c:70";
	/* <S5>/In1 */
	this.urlHashMap["GradingSystem:8"] = "GradingSystem.c:53,55";
	/* <S5>/Action Port */
	this.urlHashMap["GradingSystem:9"] = "GradingSystem.c:50";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "GradingSystem"};
	this.sidHashMap["GradingSystem"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "GradingSystem:3"};
	this.sidHashMap["GradingSystem:3"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "GradingSystem:23"};
	this.sidHashMap["GradingSystem:23"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "GradingSystem:11"};
	this.sidHashMap["GradingSystem:11"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "GradingSystem:19"};
	this.sidHashMap["GradingSystem:19"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "GradingSystem:7"};
	this.sidHashMap["GradingSystem:7"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<Root>/InitCondition"] = {sid: "GradingSystem:1"};
	this.sidHashMap["GradingSystem:1"] = {rtwname: "<Root>/InitCondition"};
	this.rtwnameHashMap["<Root>/If Condition"] = {sid: "GradingSystem:2"};
	this.sidHashMap["GradingSystem:2"] = {rtwname: "<Root>/If Condition"};
	this.rtwnameHashMap["<Root>/If Excellent Subsystem"] = {sid: "GradingSystem:3"};
	this.sidHashMap["GradingSystem:3"] = {rtwname: "<Root>/If Excellent Subsystem"};
	this.rtwnameHashMap["<Root>/If Fail Subsystem"] = {sid: "GradingSystem:23"};
	this.sidHashMap["GradingSystem:23"] = {rtwname: "<Root>/If Fail Subsystem"};
	this.rtwnameHashMap["<Root>/If Good Subsystem"] = {sid: "GradingSystem:11"};
	this.sidHashMap["GradingSystem:11"] = {rtwname: "<Root>/If Good Subsystem"};
	this.rtwnameHashMap["<Root>/If Pass Subsystem"] = {sid: "GradingSystem:19"};
	this.sidHashMap["GradingSystem:19"] = {rtwname: "<Root>/If Pass Subsystem"};
	this.rtwnameHashMap["<Root>/If VeryGood Subsystem"] = {sid: "GradingSystem:7"};
	this.sidHashMap["GradingSystem:7"] = {rtwname: "<Root>/If VeryGood Subsystem"};
	this.rtwnameHashMap["<Root>/OutResult"] = {sid: "GradingSystem:46"};
	this.sidHashMap["GradingSystem:46"] = {rtwname: "<Root>/OutResult"};
	this.rtwnameHashMap["<Root>/OutResult1"] = {sid: "GradingSystem:49"};
	this.sidHashMap["GradingSystem:49"] = {rtwname: "<Root>/OutResult1"};
	this.rtwnameHashMap["<Root>/OutResult2"] = {sid: "GradingSystem:50"};
	this.sidHashMap["GradingSystem:50"] = {rtwname: "<Root>/OutResult2"};
	this.rtwnameHashMap["<Root>/OutResult3"] = {sid: "GradingSystem:51"};
	this.sidHashMap["GradingSystem:51"] = {rtwname: "<Root>/OutResult3"};
	this.rtwnameHashMap["<Root>/OutResult4"] = {sid: "GradingSystem:52"};
	this.sidHashMap["GradingSystem:52"] = {rtwname: "<Root>/OutResult4"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "GradingSystem:4"};
	this.sidHashMap["GradingSystem:4"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Action Port"] = {sid: "GradingSystem:5"};
	this.sidHashMap["GradingSystem:5"] = {rtwname: "<S1>/Action Port"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "GradingSystem:6"};
	this.sidHashMap["GradingSystem:6"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "GradingSystem:24"};
	this.sidHashMap["GradingSystem:24"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Action Port"] = {sid: "GradingSystem:25"};
	this.sidHashMap["GradingSystem:25"] = {rtwname: "<S2>/Action Port"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "GradingSystem:26"};
	this.sidHashMap["GradingSystem:26"] = {rtwname: "<S2>/Out1"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "GradingSystem:12"};
	this.sidHashMap["GradingSystem:12"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Action Port"] = {sid: "GradingSystem:13"};
	this.sidHashMap["GradingSystem:13"] = {rtwname: "<S3>/Action Port"};
	this.rtwnameHashMap["<S3>/Out1"] = {sid: "GradingSystem:14"};
	this.sidHashMap["GradingSystem:14"] = {rtwname: "<S3>/Out1"};
	this.rtwnameHashMap["<S4>/In1"] = {sid: "GradingSystem:20"};
	this.sidHashMap["GradingSystem:20"] = {rtwname: "<S4>/In1"};
	this.rtwnameHashMap["<S4>/Action Port"] = {sid: "GradingSystem:21"};
	this.sidHashMap["GradingSystem:21"] = {rtwname: "<S4>/Action Port"};
	this.rtwnameHashMap["<S4>/Out1"] = {sid: "GradingSystem:22"};
	this.sidHashMap["GradingSystem:22"] = {rtwname: "<S4>/Out1"};
	this.rtwnameHashMap["<S5>/In1"] = {sid: "GradingSystem:8"};
	this.sidHashMap["GradingSystem:8"] = {rtwname: "<S5>/In1"};
	this.rtwnameHashMap["<S5>/Action Port"] = {sid: "GradingSystem:9"};
	this.sidHashMap["GradingSystem:9"] = {rtwname: "<S5>/Action Port"};
	this.rtwnameHashMap["<S5>/Out1"] = {sid: "GradingSystem:10"};
	this.sidHashMap["GradingSystem:10"] = {rtwname: "<S5>/Out1"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
