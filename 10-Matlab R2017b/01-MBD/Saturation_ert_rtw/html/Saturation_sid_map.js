function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["Saturation:7"] = "Saturation";
    this.sidParentMap["Saturation:4"] = "Saturation";
    this.sidParentMap["Saturation:1"] = "Saturation";
    this.sidParentMap["Saturation:8"] = "Saturation";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
