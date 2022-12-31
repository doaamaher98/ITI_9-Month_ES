function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["IfElse:21"] = "IfElse";
    this.sidParentMap["IfElse:28"] = "IfElse";
    this.sidParentMap["IfElse:29"] = "IfElse";
    this.sidParentMap["IfElse:30"] = "IfElse";
    this.sidParentMap["IfElse:31"] = "IfElse";
    this.sidParentMap["IfElse:17"] = "IfElse";
    this.sidParentMap["IfElse:10"] = "IfElse";
    this.sidParentMap["IfElse:5"] = "IfElse";
    this.sidParentMap["IfElse:6"] = "IfElse";
    this.sidParentMap["IfElse:23"] = "IfElse";
    this.sidParentMap["IfElse:15"] = "IfElse";
    this.sidParentMap["IfElse:16"] = "IfElse";
    this.sidParentMap["IfElse:11"] = "IfElse:10";
    this.sidParentMap["IfElse:12"] = "IfElse:10";
    this.sidParentMap["IfElse:13"] = "IfElse:10";
    this.sidParentMap["IfElse:7"] = "IfElse:6";
    this.sidParentMap["IfElse:8"] = "IfElse:6";
    this.sidParentMap["IfElse:9"] = "IfElse:6";
    this.sidParentMap["IfElse:24"] = "IfElse:23";
    this.sidParentMap["IfElse:25"] = "IfElse:23";
    this.sidParentMap["IfElse:26"] = "IfElse:23";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
