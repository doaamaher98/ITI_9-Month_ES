function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["While_Factorial:37"] = "While_Factorial";
    this.sidParentMap["While_Factorial:9"] = "While_Factorial";
    this.sidParentMap["While_Factorial:1"] = "While_Factorial";
    this.sidParentMap["While_Factorial:8"] = "While_Factorial";
    this.sidParentMap["While_Factorial:3"] = "While_Factorial:1";
    this.sidParentMap["While_Factorial:36"] = "While_Factorial:1";
    this.sidParentMap["While_Factorial:10"] = "While_Factorial:1";
    this.sidParentMap["While_Factorial:35"] = "While_Factorial:1";
    this.sidParentMap["While_Factorial:11"] = "While_Factorial:1";
    this.sidParentMap["While_Factorial:4"] = "While_Factorial:1";
    this.sidParentMap["While_Factorial:5"] = "While_Factorial:1";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
