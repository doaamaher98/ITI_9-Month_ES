function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["If_Condition:6"] = "If_Condition";
    this.sidParentMap["If_Condition:9"] = "If_Condition";
    this.sidParentMap["If_Condition:10"] = "If_Condition";
    this.sidParentMap["If_Condition:5"] = "If_Condition";
    this.sidParentMap["If_Condition:4"] = "If_Condition";
    this.sidParentMap["If_Condition:11"] = "If_Condition";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
