function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["LookupTable:5"] = "LookupTable";
    this.sidParentMap["LookupTable:2"] = "LookupTable";
    this.sidParentMap["LookupTable:4"] = "LookupTable";
    this.sidParentMap["LookupTable:6"] = "LookupTable";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
