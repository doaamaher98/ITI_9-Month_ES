function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:36,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:73,type:"fcn"};
this.def["programmer_calc_U"] = {file: "programmer_calc_c.html",line:23,type:"var"};
this.def["programmer_calc_Y"] = {file: "programmer_calc_c.html",line:26,type:"var"};
this.def["programmer_calc_M_"] = {file: "programmer_calc_c.html",line:29,type:"var"};
this.def["programmer_calc_M"] = {file: "programmer_calc_c.html",line:30,type:"var"};
this.def["programmer_calc_step"] = {file: "programmer_calc_c.html",line:33,type:"fcn"};
this.def["programmer_calc_initialize"] = {file: "programmer_calc_c.html",line:101,type:"fcn"};
this.def["programmer_calc_terminate"] = {file: "programmer_calc_c.html",line:117,type:"fcn"};
this.def["ExtU_programmer_calc_T"] = {file: "programmer_calc_h.html",line:43,type:"type"};
this.def["ExtY_programmer_calc_T"] = {file: "programmer_calc_h.html",line:56,type:"type"};
this.def["RT_MODEL_programmer_calc_T"] = {file: "programmer_calc_types_h.html",line:23,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:55,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:56,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:57,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:69,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:70,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:71,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:81,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:86,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:91,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:98,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:105,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:112,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:119,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:126,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:133,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:151,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["programmer_calc_c.html"] = "../programmer_calc.c";
	this.html2Root["programmer_calc_c.html"] = "programmer_calc_c.html";
	this.html2SrcPath["programmer_calc_h.html"] = "../programmer_calc.h";
	this.html2Root["programmer_calc_h.html"] = "programmer_calc_h.html";
	this.html2SrcPath["programmer_calc_private_h.html"] = "../programmer_calc_private.h";
	this.html2Root["programmer_calc_private_h.html"] = "programmer_calc_private_h.html";
	this.html2SrcPath["programmer_calc_types_h.html"] = "../programmer_calc_types.h";
	this.html2Root["programmer_calc_types_h.html"] = "programmer_calc_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","programmer_calc_c.html","programmer_calc_h.html","programmer_calc_private_h.html","programmer_calc_types_h.html","rtwtypes_h.html"];
