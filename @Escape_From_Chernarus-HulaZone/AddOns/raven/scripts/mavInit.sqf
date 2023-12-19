
mavBaseStationActionName_00 = _this addAction [("<t color=""#9998CB"">" + ("Launch RQ-11 Raven") + "</t>"), "\raven\scripts\mavLaunch.sqf", [], 0, false, true, "", "(isNil{_this getVariable 'nameOfMAV'}) and (_target == _this)"];
mavBaseStationActionName_001 = _this addAction [("<t color=""#9998CB"">" + ("Drop RQ-11 Raven") + "</t>"), "\raven\scripts\mavDrop.sqf", [], 0, false, true, "", "(isNil{_this getVariable 'nameOfMAV'}) and (_target == _this)"];
mavBaseStationActionName_01 = _this addAction [("<t color=""#9998CB"">" + ("[RQ-11 MENU]") + "</t>"), "", [], 0, false, false, "", "(!isNil{_this getVariable 'nameOfMAV'}) and (_target == _this)"];
mavBaseStationActionName_02 = _this addAction [("<t color=""#9998CB"">" + ("  GCS - Side Camera") + "</t>"), "\raven\scripts\mavCameraOn2.sqf", (1), 0, false, true, "", "(!isNil{_this getVariable 'nameOfMAV'}) and (_target == _this)"];
mavBaseStationActionName_03 = _this addAction [("<t color=""#9998CB"">" + ("  GCS - New Target") + "</t>"), "\raven\scripts\mavNewTarget.sqf", [], 0, false, true, "", "(!isNil{_this getVariable 'nameOfMAV'}) and (_target == _this)"];
mavBaseStationActionName_04 = _this addAction [("<t color=""#9998CB"">" + ("  AutoLand RQ-11") + "</t>"), "\raven\scripts\mavRecall.sqf", [], 0, false, true, "", "(!isNil{_this getVariable 'nameOfMAV'}) and (_target == _this)"];


