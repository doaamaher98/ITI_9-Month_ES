function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["SubSystem:22"] = "SubSystem";
    this.sidParentMap["SubSystem:23"] = "SubSystem";
    this.sidParentMap["SubSystem:27"] = "SubSystem";
    this.sidParentMap["SubSystem:15"] = "SubSystem";
    this.sidParentMap["SubSystem:10"] = "SubSystem";
    this.sidParentMap["SubSystem:5"] = "SubSystem";
    this.sidParentMap["SubSystem:16"] = "SubSystem";
    this.sidParentMap["SubSystem:24"] = "SubSystem";
    this.sidParentMap["SubSystem:6"] = "SubSystem:5";
    this.sidParentMap["SubSystem:21"] = "SubSystem:5";
    this.sidParentMap["SubSystem:7"] = "SubSystem:5";
    this.sidParentMap["SubSystem:20"] = "SubSystem:5";
    this.sidParentMap["SubSystem:8"] = "SubSystem:5";
    this.sidParentMap["SubSystem:17"] = "SubSystem:16";
    this.sidParentMap["SubSystem:28"] = "SubSystem:16";
    this.sidParentMap["SubSystem:18"] = "SubSystem:16";
    this.sidParentMap["SubSystem:25"] = "SubSystem:16";
    this.sidParentMap["SubSystem:19"] = "SubSystem:16";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
