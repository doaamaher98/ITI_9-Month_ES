function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["UpCounter:8"] = "UpCounter";
    this.sidParentMap["UpCounter:10"] = "UpCounter";
    this.sidParentMap["UpCounter:4"] = "UpCounter";
    this.sidParentMap["UpCounter:5"] = "UpCounter";
    this.sidParentMap["UpCounter:6"] = "UpCounter";
    this.sidParentMap["UpCounter:3"] = "UpCounter";
    this.sidParentMap["UpCounter:11"] = "UpCounter";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
