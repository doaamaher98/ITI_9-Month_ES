function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["DownCounter:14"] = "DownCounter";
    this.sidParentMap["DownCounter:15"] = "DownCounter";
    this.sidParentMap["DownCounter:7"] = "DownCounter";
    this.sidParentMap["DownCounter:8"] = "DownCounter";
    this.sidParentMap["DownCounter:9"] = "DownCounter";
    this.sidParentMap["DownCounter:1"] = "DownCounter";
    this.sidParentMap["DownCounter:6"] = "DownCounter";
    this.sidParentMap["DownCounter:16"] = "DownCounter";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
