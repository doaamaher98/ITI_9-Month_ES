function RTW_SidParentMap() {
    this.sidParentMap = new Array();
    this.sidParentMap["CalculatorChart_GraphicalFunc:14"] = "CalculatorChart_GraphicalFunc";
    this.sidParentMap["CalculatorChart_GraphicalFunc:15"] = "CalculatorChart_GraphicalFunc";
    this.sidParentMap["CalculatorChart_GraphicalFunc:1"] = "CalculatorChart_GraphicalFunc";
    this.sidParentMap["CalculatorChart_GraphicalFunc:10"] = "CalculatorChart_GraphicalFunc";
    this.sidParentMap["CalculatorChart_GraphicalFunc:11"] = "CalculatorChart_GraphicalFunc";
    this.sidParentMap["CalculatorChart_GraphicalFunc:12"] = "CalculatorChart_GraphicalFunc";
    this.sidParentMap["CalculatorChart_GraphicalFunc:13"] = "CalculatorChart_GraphicalFunc";
    this.sidParentMap["CalculatorChart_GraphicalFunc:16"] = "CalculatorChart_GraphicalFunc";
    this.sidParentMap["CalculatorChart_GraphicalFunc:17"] = "CalculatorChart_GraphicalFunc";
    this.sidParentMap["CalculatorChart_GraphicalFunc:18"] = "CalculatorChart_GraphicalFunc";
    this.sidParentMap["CalculatorChart_GraphicalFunc:19"] = "CalculatorChart_GraphicalFunc";
    this.sidParentMap["CalculatorChart_GraphicalFunc:1:51"] = "CalculatorChart_GraphicalFunc:1";
    this.sidParentMap["CalculatorChart_GraphicalFunc:1:78"] = "CalculatorChart_GraphicalFunc:1";
    this.sidParentMap["CalculatorChart_GraphicalFunc:1:72"] = "CalculatorChart_GraphicalFunc:1";
    this.sidParentMap["CalculatorChart_GraphicalFunc:1:66"] = "CalculatorChart_GraphicalFunc:1";
    this.sidParentMap["CalculatorChart_GraphicalFunc:1:47"] = "CalculatorChart_GraphicalFunc:1";
    this.sidParentMap["CalculatorChart_GraphicalFunc:1:50"] = "CalculatorChart_GraphicalFunc:1";
    this.sidParentMap["CalculatorChart_GraphicalFunc:1:15"] = "CalculatorChart_GraphicalFunc:1";
    this.sidParentMap["CalculatorChart_GraphicalFunc:1:53"] = "CalculatorChart_GraphicalFunc:1:51";
    this.sidParentMap["CalculatorChart_GraphicalFunc:1:68"] = "CalculatorChart_GraphicalFunc:1:66";
    this.sidParentMap["CalculatorChart_GraphicalFunc:1:74"] = "CalculatorChart_GraphicalFunc:1:72";
    this.sidParentMap["CalculatorChart_GraphicalFunc:1:80"] = "CalculatorChart_GraphicalFunc:1:78";
    this.getParentSid = function(sid) { return this.sidParentMap[sid];}
}
    RTW_SidParentMap.instance = new RTW_SidParentMap();
