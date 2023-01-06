function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["StateFloww:1"] = "StateFloww";
    this.sidParentMap["StateFloww:6"] = "StateFloww";
    this.sidParentMap["StateFloww:7"] = "StateFloww";
    this.sidParentMap["StateFloww:8"] = "StateFloww";
    this.sidParentMap["StateFloww:9"] = "StateFloww";
    this.sidParentMap["StateFloww:2"] = "StateFloww";
    this.sidParentMap["StateFloww:3"] = "StateFloww";
    this.sidParentMap["StateFloww:4"] = "StateFloww";
    this.sidParentMap["StateFloww:1:16"] = "StateFloww:1";
    this.sidParentMap["StateFloww:1:9"] = "StateFloww:1";
    this.sidParentMap["StateFloww:1:8"] = "StateFloww:1";
    this.sidParentMap["StateFloww:1:12"] = "StateFloww:1";
    this.sidParentMap["StateFloww:1:6"] = "StateFloww:1";
    this.sidParentMap["StateFloww:1:14"] = "StateFloww:1";
    this.sidParentMap["StateFloww:1:7"] = "StateFloww:1";
    this.sidParentMap["StateFloww:1:10"] = "StateFloww:1";
    this.sidParentMap["StateFloww:1:11"] = "StateFloww:1";
    this.sidParentMap["StateFloww:1:13"] = "StateFloww:1";
    this.sidParentMap["StateFloww:1:18"] = "StateFloww:1";
    this.sidParentMap["StateFloww:1:15"] = "StateFloww:1";
    this.sidParentMap["StateFloww:1:17"] = "StateFloww:1";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
