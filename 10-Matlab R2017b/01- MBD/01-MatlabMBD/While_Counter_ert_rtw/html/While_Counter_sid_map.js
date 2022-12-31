function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["While_Counter:18"] = "While_Counter";
    this.sidParentMap["While_Counter:19"] = "While_Counter";
    this.sidParentMap["While_Counter:16"] = "While_Counter";
    this.sidParentMap["While_Counter:1"] = "While_Counter";
    this.sidParentMap["While_Counter:15"] = "While_Counter";
    this.sidParentMap["While_Counter:2"] = "While_Counter:1";
    this.sidParentMap["While_Counter:3"] = "While_Counter:1";
    this.sidParentMap["While_Counter:8"] = "While_Counter:1";
    this.sidParentMap["While_Counter:14"] = "While_Counter:1";
    this.sidParentMap["While_Counter:9"] = "While_Counter:1";
    this.sidParentMap["While_Counter:10"] = "While_Counter:1";
    this.sidParentMap["While_Counter:4"] = "While_Counter:1";
    this.sidParentMap["While_Counter:5"] = "While_Counter:1";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
