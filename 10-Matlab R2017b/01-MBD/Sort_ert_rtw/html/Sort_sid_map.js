function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["Sort:7"] = "Sort";
    this.sidParentMap["Sort:3"] = "Sort";
    this.sidParentMap["Sort:4"] = "Sort";
    this.sidParentMap["Sort:1"] = "Sort";
    this.sidParentMap["Sort:5"] = "Sort";
    this.sidParentMap["Sort:6"] = "Sort";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
