private ["_newCamPos","_microAirVehicle","_microAirVehicleCam","_ppBlur","_ppGrain","_displayEH_keydown","_caller","_markerMavCurrentTarget","_currentTimeYear","_currentTimeDay","_currentTimeHour","_currentTimeMinute","_displayTime","_dateMonth","_monitorHead","_cameraSelect","_currentVisionMode","_cameraFOVLevel","_upperBoxText","_instructions","_dspl","_batteryLevel","_batteryBoxText","_clockBoxText","_batteryDisplay","_markerMavCurrentTargetPos","_northLocationX","_northLocationY","_southLocationX","_southLocationY","_westLocationX","_westLocationY","_eastLocationX","_eastLocationY","_northOnDisplayPos","_northDisplayText","_southOnDisplayPos","_southDisplayText","_westOnDisplayPos","_westDisplayText","_eastOnDisplayPos","_eastDisplayText","_groupCaller"];
_caller = _this select 1;
_groupCaller = (group _caller);
_cameraSelect = _this select 3;



if (isNil{_caller getVariable "nameOfMAV"}) then
{
         hint "RQ-11 NOT DETECTED";
} else
{
         
         // if (vehicle _caller == _caller) then {_caller switchMove "M163_GUNNER"};
         
         _monitorHead = createVehicle ["MAV_RQ11MONITOR", position _caller,[],0,"NONE"];
         _monitorHead attachTo [_caller, [0.15,0,0],"lefthandmiddle1"];
         
         /*
         _monitorDir = 0; 
         _monitorAngle = -65;
         _monitorPitch = 0; 
         
         _vecdx = (sin(_monitorDir)) * (cos(_monitorAngle)); // 0
         _vecdy = (cos(_monitorDir)) * (cos(_monitorAngle)); // 0.42261826174069943618697848964773
         _vecdz = sin(_monitorAngle); // -0.906308
         
         _vecux = (cos(_monitorDir)) * (cos(_monitorAngle)) * (sin(_monitorPitch)); // 0
         _vecuy = (sin(_monitorDir)) * (cos(_monitorAngle)) * (sin(_monitorPitch)); // 0
         _vecuz = (cos(_monitorAngle)) * (cos(_monitorPitch)); // 0.42261826174069943618697848964773
         
         _monitorHead setVectorDirAndUp [ [_vecdx,_vecdy,_vecdz], [_vecux,_vecuy,_vecuz] ];
         */
         
         _monitorHead setVectorDirAndUp [ [0,0.42261826174069943618697848964773,-0.906308], [0,0,0.42261826174069943618697848964773] ];
         sleep 2;
         
         _microAirVehicle = _caller getVariable "nameOfMAV";
         // _markerMavCurrentTarget = _caller getVariable "mavCurrentTarget";
         _markerMavCurrentTarget = mavCurrentTarget;
         
         5004 cutText [" ","BLACK IN",4];
         
         if (_cameraSelect == 0) then
         {
                  hint "code to follow";
         };
         
         if (_cameraSelect == 1) then
         {
                  
                  _microAirVehicle hideObject true;
                  
                  
                  _microAirVehicleCam = "camera" camCreate (position _microAirVehicle);
                  
                  _newCamPos = position _microAirVehicle;
                  _microAirVehicleCam camPreparePos _newCamPos;
                  _microAirVehicleCam camPrepareTarget getMarkerPos _markerMavCurrentTarget;
                  _microAirVehicleCam cameraEffect ["Internal", "BACK"];
                  _microAirVehicleCam camCommitPrepared 0;
                  showCinemaBorder false;
                  // _caller setVariable ["mavCameraOn",1,true];
                  
                  switch (mavVisionMode) do
                  {
                           case 0 : {camUseNVG false;false setCamUseTi 1;false setCamUseTi 0;};
                           
                           case 1 : {camUseNVG true;false setCamUseTi 1;false setCamUseTi 0;};
                           
                           case 2 : {camUseNVG false;false setCamUseTi 1;true setCamUseTi 0;};
                           
                           case 3 : {camUseNVG false;false setCamUseTi 0;true setCamUseTi 1;};
                  };
                  
                  
                  
                  //======POSTPROCESS EFFECTS========================
                  _ppBlur = ppEffectCreate ["dynamicBlur", 505];
                  _ppBlur ppEffectEnable true;  
                  _ppBlur ppEffectAdjust [0.41]; //  [0.51] = version 1.1
                  _ppBlur ppEffectCommit 0;
                  
                  _ppGrain = ppEffectCreate ["filmGrain", 2005];
                  _ppGrain ppEffectEnable true;
                  _ppGrain ppEffectAdjust [0.44, 9.82, 0.36, 0.48, 10, true];
                  _ppGrain ppEffectCommit 0;
                  
                  
                  
                  //=====DISPLAY STUFF===INIT=========================
                  202020 cutRsc ["MAV_RQ11_display","PLAIN"];
                  disableSerialization;
                  waituntil {!isnil {uinamespace getvariable "d_MAV_RQ11_display"}};
                  progressLoadingScreen 0.5;
                  _dspl = uiNamespace getVariable "d_MAV_RQ11_display";
                  
                  sleep 0.01;
                  
                  //=====STATIC DISPLAY==BOTTOM WINDOW================
                  _instructions =
                  "<br />"+
                  "[RQ-11 CONTROLS]" + "<br />"
                  +"<br />"+
                  "· [X][C] · ZOOM"
                  +"<br />"+
                  "· [M] · MARKER"
                  +"<br />"+
                  "· [N] · VISION"
                  +"<br />"+
                  "· [A][D] · RADIUS"
                  +"<br />"+
                  "· [W][S] · ALT"
                  +"<br />"+
                  "· [I] · INSTRUCTS"
                  +"<br />"+
                  "· [G] · EXIT";
                  
                  (_dspl displayCtrl 2020667) ctrlSetStructuredText parseText _instructions;
                  
                  
                  
                  //=====CONTROLS WHILE IN CAMERA VIEW==================
                  
                  _displayEH_keydown = (finddisplay 46) displayaddeventhandler
                  [
                           "keydown","
                           _key = _this select 1;
                           
                           comment '--- N --- CHANGES VISION MODE';
                           if (_key == 49) then
                           {
                                    switch (mavVisionMode) do
                                    {
                                             case 0 : {camUseNVG true;mavVisionMode = 1;cutText ['NV','PLAIN DOWN',0]};
                                             case 1 : {camUseNVG false;true setCamUseTi 0;mavVisionMode = 2;cutText ['FLIR WHOT','PLAIN DOWN',0]};
                                             case 2 : {false setCamUseTi 0;true setCamUseTi 1;mavVisionMode = 3;cutText ['FLIR BHOT','PLAIN DOWN',0]};
                                             case 3 : {false setCamUseTi 1;mavVisionMode = 0;cutText ['DTV','PLAIN DOWN',0]};
                                    };
                                    
                           };
                           
                           comment '--- M --- SETS MARKER ON MAP';
                           if (_key == 50) then
                           {
                                    _id = 1;
                                    while {markertype format ['_user_defined_MAV_MARKER_%1',_id] != ''} do
                                    {
                                             _id = _id + 1;
                                    };
                                    _worldpos = screentoworld [0.5,0.5];
                                    _marker = createmarker [format ['_user_defined_MAV_MARKER_%1',_id],_worldpos];
                                    _gridPos = _worldpos call BIS_fnc_PosToGrid;
                                    hint format ['NEW MARKER SET AT GRID %1',_gridPos];
                                    _marker setmarkertype 'mil_destroy';
                                    _marker setmarkercolor 'colorred';
                                    _marker setmarkersize [0.5,0.5];
                                    _markertime = [daytime] call bis_fnc_timetostring;
                                    
                                    _marker setmarkertext format ['RQ-11 %1: %2',_id,_markertime];
                                    _markerCutText = format ['MAP MARK CREATED AT %1',_gridPos];
                                    
                                    cutText [_markerCutText,'PLAIN DOWN',0]
                           };
                           
                           comment '--- G --- TURNS OFF CAMERA';
                           if (_key == 34) then
                           {
                                    mavCameraOn = 0;
                           };
                           
                           
                           comment '--- X--- ZOOM IN';
                           if (_key == 45) then
                           {
                                    switch (cameraFOVLevel) do
                                    {
                                             case 1 : {cameraFOVLevel = 0.9;cutText ['ZOOM = 35mm','PLAIN DOWN',0]};
                                             case 0.9 : {cameraFOVLevel = 0.8;cutText ['ZOOM = 45mm','PLAIN DOWN',0]};
                                             case 0.8 : {cameraFOVLevel = 0.7;cutText ['ZOOM = 55mm','PLAIN DOWN',0]};
                                             case 0.7 : {cameraFOVLevel = 0.6;cutText ['ZOOM = 70mm','PLAIN DOWN',0]};
                                             case 0.6 : {cameraFOVLevel = 0.5;cutText ['ZOOM = 85mm','PLAIN DOWN',0]};
                                             case 0.5 : {cameraFOVLevel = 0.4;cutText ['ZOOM = 110mm','PLAIN DOWN',0]};
                                             case 0.4 : {cameraFOVLevel = 0.3;cutText ['ZOOM = 135mm','PLAIN DOWN',0]};
                                             case 0.3 : {cameraFOVLevel = 0.2;cutText ['ZOOM = 150mm','PLAIN DOWN',0]};
                                             case 0.2 : {cameraFOVLevel = 0.1;cutText ['ZOOM = 210mm','PLAIN DOWN',0]};
                                             case 0.1 : {cameraFOVLevel = 0.03;cutText ['ZOOM = 255mm','PLAIN DOWN',0]};
                                             case 0.03 : {cutText ['ZOOM LIMIT = 255mm','PLAIN DOWN',0]};
                                    };
                           };
                           
                           comment '--- C --- ZOOM OUT';
                           if (_key == 46) then
                           {
                                    switch (cameraFOVLevel) do
                                    {
                                             case 1 : {cutText ['ZOOM LIMIT = 24mm','PLAIN DOWN',0]};
                                             case 0.9 : {cameraFOVLevel = 1;cutText ['ZOOM = 24mm','PLAIN DOWN',0]};
                                             case 0.8 : {cameraFOVLevel = 0.9;cutText ['ZOOM = 35mm','PLAIN DOWN',0]};
                                             case 0.7 : {cameraFOVLevel = 0.8;cutText ['ZOOM = 45mm','PLAIN DOWN',0]};
                                             case 0.6 : {cameraFOVLevel = 0.7;cutText ['ZOOM = 55mm','PLAIN DOWN',0]};
                                             case 0.5 : {cameraFOVLevel = 0.6;cutText ['ZOOM = 70mm','PLAIN DOWN',0]};
                                             case 0.4 : {cameraFOVLevel = 0.5;cutText ['ZOOM = 85mm','PLAIN DOWN',0]};
                                             case 0.3 : {cameraFOVLevel = 0.4;cutText ['ZOOM = 110mm','PLAIN DOWN',0]};
                                             case 0.2 : {cameraFOVLevel = 0.3;cutText ['ZOOM = 135mm','PLAIN DOWN',0]};
                                             case 0.1 : {cameraFOVLevel = 0.2;cutText ['ZOOM = 150mm','PLAIN DOWN',0]};
                                             case 0.03 : {cameraFOVLevel = 0.1;cutText ['ZOOM = 210mm','PLAIN DOWN',0]};
                                    };
                           };
                           
                           
                           comment '--- W --- RAISES ALTITUDE';
                           if (_key == 17) then
                           {                        
                                    switch (mavCurrentHeight) do
                                    {
                                             case 30 : {mavCurrentHeight = 40;cutText ['RAISING ALTITUDE TO 40m','PLAIN DOWN',0]};
                                             case 40 : {mavCurrentHeight = 50;cutText ['RAISING ALTITUDE TO 50m','PLAIN DOWN',0]};
                                             case 50 : {mavCurrentHeight = 60;cutText ['RAISING ALTITUDE TO 60m','PLAIN DOWN',0]};
                                             case 60 : {mavCurrentHeight = 70;cutText ['RAISING ALTITUDE TO 70m','PLAIN DOWN',0]};
                                             case 70 : {mavCurrentHeight = 80;cutText ['RAISING ALTITUDE TO 80m','PLAIN DOWN',0]};
                                             case 80 : {mavCurrentHeight = 90;cutText ['RAISING ALTITUDE TO 90m','PLAIN DOWN',0]};
                                             case 90 : {mavCurrentHeight = 100;cutText ['RAISING ALTITUDE TO 100m','PLAIN DOWN',0]};
                                             case 100 : {mavCurrentHeight = 110;cutText ['RAISING ALTITUDE TO 110m','PLAIN DOWN',0]};
                                             case 110 : {mavCurrentHeight = 120;cutText ['RAISING ALTITUDE TO 120m','PLAIN DOWN',0]};
                                             case 120 : {mavCurrentHeight = 130;cutText ['RAISING ALTITUDE TO 130m','PLAIN DOWN',0]};
                                             case 130 : {mavCurrentHeight = 140;cutText ['RAISING ALTITUDE TO 140m','PLAIN DOWN',0]};
                                             case 140 : {mavCurrentHeight = 150;cutText ['RAISING ALTITUDE TO 150m','PLAIN DOWN',0]};
                                             case 150 : {mavCurrentHeight = 150;cutText ['MAX ALTITUDE IS 150m','PLAIN DOWN',0]};
                                    };
                           };
                           
                           comment '--- S --- LOWERS ALTITUDE';
                           if (_key == 31) then
                           {
                                    switch (mavCurrentHeight) do
                                    {
                                             
                                             case 30 : {mavCurrentHeight = 30;cutText ['MINIMUM ALTITUDE IS 30m','PLAIN DOWN',0]};
                                             case 40 : {mavCurrentHeight = 30;cutText ['LOWERING ALTITUDE TO 30m','PLAIN DOWN',0]};
                                             case 50 : {mavCurrentHeight = 40;cutText ['LOWERING ALTITUDE TO 40m','PLAIN DOWN',0]};
                                             case 60 : {mavCurrentHeight = 50;cutText ['LOWERING ALTITUDE TO 50m','PLAIN DOWN',0]};
                                             case 70 : {mavCurrentHeight = 60;cutText ['LOWERING ALTITUDE TO 60m','PLAIN DOWN',0]};
                                             case 80 : {mavCurrentHeight = 70;cutText ['LOWERING ALTITUDE TO 70m','PLAIN DOWN',0]};
                                             case 90 : {mavCurrentHeight = 80;cutText ['LOWERING ALTITUDE TO 80m','PLAIN DOWN',0]};
                                             case 100 : {mavCurrentHeight = 90;cutText ['LOWERING ALTITUDE TO 90m','PLAIN DOWN',0]};
                                             case 110 : {mavCurrentHeight = 100;cutText ['LOWERING ALTITUDE TO 100m','PLAIN DOWN',0]};
                                             case 120 : {mavCurrentHeight = 110;cutText ['LOWERING ALTITUDE TO 110m','PLAIN DOWN',0]};
                                             case 130 : {mavCurrentHeight = 120;cutText ['LOWERING ALTITUDE TO 120m','PLAIN DOWN',0]};
                                             case 140 : {mavCurrentHeight = 130;cutText ['LOWERING ALTITUDE TO 130m','PLAIN DOWN',0]};
                                             case 150 : {mavCurrentHeight = 140;cutText ['LOWERING ALTITUDE TO 140m','PLAIN DOWN',0]};
                                    };
                           };
                           
                           comment '--- A --- DECREASES TARGET RADIUS';
                           if (_key == 30) then
                           {                        
                                    switch (radiusMultiplier) do
                                    {
                                             case 1.5 : {radiusMultiplier = 1.5;cutText ['MINIMUM TARGET RADIUS IS 80m','PLAIN DOWN',0]};
                                             case 2.5 : {radiusMultiplier = 1.5;cutText ['DECREASING TARGET RADIUS TO 80m','PLAIN DOWN',0]};
                                             case 3.5 : {radiusMultiplier = 2.5;cutText ['DECREASING TARGET RADIUS TO 140m','PLAIN DOWN',0]};
                                             case 4.5 : {radiusMultiplier = 3.5;cutText ['DECREASING TARGET RADIUS TO 195m','PLAIN DOWN',0]};
                                             
                                    };
                           };
                           
                           comment '--- D --- INCREASES TARGET RADIUS';
                           if (_key == 32) then
                           {
                                    switch (radiusMultiplier) do
                                    {
                                             case 1.5 : {radiusMultiplier = 2.5;cutText ['INCREASING TARGET RADIUS TO 140m','PLAIN DOWN',0]};
                                             case 2.5 : {radiusMultiplier = 3.5;cutText ['INCREASING TARGET RADIUS TO 195m','PLAIN DOWN',0]};
                                             case 3.5 : {radiusMultiplier = 4.5;cutText ['INCREASING TARGET RADIUS TO 250m','PLAIN DOWN',0]};
                                             case 4.5 : {radiusMultiplier = 4.5;cutText ['MAXIMUM TARGET RADIUS IS 250m','PLAIN DOWN',0]};
                                    };
                           };
                           
                           
                           
                           
                           comment '--- I --- INSTRUCTIONS';
                           if (_key == 23) then
                           {
                                    cutText ['[X]zoom[C] · [M]mark · [N]vision mode · [A]radius[D] · [W]altitude[S] · [G]exit','PLAIN DOWN',0];
                           };
                           
                           "
                  ];
                  
                  // END STUFF FROM UAV  ===============================================
                  
                  
                  mavCameraOn = 1;
                  cutText ['[X]zoom[C] · [M]mark · [N]vision mode · [A]radius[D] · [W]altitude[S] · [G]exit','PLAIN DOWN',0];
                  
                  // The default zoom level is 0.7, 0.01 is the nearest and 2 the furthest zoom value
                  
                  while {(mavCameraOn > 0) and (alive _caller) and (_groupCaller getVariable "ravenBatteryLevel" > 0)} do
                  {
                           
                           _newCamPos = position _microAirVehicle;
                           _microAirVehicleCam camPreparePos _newCamPos;
                           if ((_caller getVariable "birdRecall") == 1) then {_microAirVehicleCam camPrepareTarget _caller};
                           _microAirVehicleCam camPrepareFov cameraFOVLevel;
                           _microAirVehicleCam camCommitPrepared 1;
                           
                           
                           sleep 0.5;
                           if ((!alive _caller) or (_groupCaller getVariable "ravenBatteryLevel" <=0)) exitWith {mavCameraOn=0};
                           
                           //================DISPLAY STUFF=======================
                           
                           //--- CURRENT DATE AND TIME DISPLAY
                           _currentTimeYear = date select 0; // [year, month, day, hour, minute]
                           
                           _dateMonth = date select 1;
                           switch (_dateMonth) do
                           {
                                    case 1 : {_dateMonth = "JAN"};
                                    case 2 : {_dateMonth = "FEB"};
                                    case 3 : {_dateMonth = "MAR"};
                                    case 4 : {_dateMonth = "APR"};
                                    case 5 : {_dateMonth = "MAY"};
                                    case 6 : {_dateMonth = "JUN"};
                                    case 7 : {_dateMonth = "JUL"};
                                    case 8 : {_dateMonth = "AUG"};
                                    case 9 : {_dateMonth = "SEP"};
                                    case 10 : {_dateMonth = "OCT"};
                                    case 11 : {_dateMonth = "NOV"};
                                    case 12 : {_dateMonth = "DEC"};
                           };
                           
                           _currentTimeDay = date select 2;
                           _currentTimeHour = date select 3;
                           _currentTimeMinute = date select 4;
                           
                           switch (_currentTimeMinute) do
                           {
                                    case 1 : {_currentTimeMinute = "01"};
                                    case 2 : {_currentTimeMinute = "02"};
                                    case 3 : {_currentTimeMinute = "03"};
                                    case 4 : {_currentTimeMinute = "04"};
                                    case 5 : {_currentTimeMinute = "05"};
                                    case 6 : {_currentTimeMinute = "06"};
                                    case 7 : {_currentTimeMinute = "07"};
                                    case 8 : {_currentTimeMinute = "08"};
                                    case 9 : {_currentTimeMinute = "09"};
                                    case 0 : {_currentTimeMinute = "00"};
                           };
                           
                           _displayTime = format ["%3 %2 %1 · %4:%5", _currentTimeYear,_dateMonth,_currentTimeDay,_currentTimeHour,_currentTimeMinute];
                           
                           // VISION MODE DISPLAY
                           switch (mavVisionMode) do
                           {
                                    case 0:{_currentVisionMode = "DTV"};
                                    case 1:{_currentVisionMode = "NV"};
                                    case 2:{_currentVisionMode = "FLIR W"};
                                    case 3:{_currentVisionMode = "FLIR B"};
                           };
                           
                           // CAMERA FOV DISPLAY
                           switch (cameraFOVLevel) do
                           {      
                                    case 0.03:{_cameraFOVLevel = "255mm"};
                                    case 0.1:{_cameraFOVLevel = "210mm"};
                                    case 0.2:{_cameraFOVLevel = "150mm"};
                                    case 0.3:{_cameraFOVLevel = "135mm"};
                                    case 0.4:{_cameraFOVLevel = "110mm"};
                                    case 0.5:{_cameraFOVLevel = "85mm"};
                                    case 0.6:{_cameraFOVLevel = "70mm"};
                                    case 0.7:{_cameraFOVLevel = "55mm"};
                                    case 0.8:{_cameraFOVLevel = "45mm"};
                                    case 0.9:{_cameraFOVLevel = "35mm"};
                                    case 1:{_cameraFOVLevel = "24mm"};
                           };
                           
                           
                           
                           _upperBoxText = "";
                           _upperBoxText = _upperBoxText + "<br />";
                           _upperBoxText = _upperBoxText + "<t  align='right'>[RQ-11 DATA STREAM]</t>"+ "<br />" + "<br />";
                           _upperBoxText = _upperBoxText + format ["<t  align='right'>%1 · POS ·</t>",(position _microAirVehicle) call BIS_fnc_PosToGrid] + "<br />";
                           _upperBoxText = _upperBoxText + format ["<t  align='right'>%1m · DIS ·</t>", round (_microAirVehicle distance _caller)] + "<br />";
                           _upperBoxText = _upperBoxText + format ["<t  align='right'>%1m AGL · ALT ·</t>",round (getPosATL _microAirVehicle select 2)] + "<br />";
                           _upperBoxText = _upperBoxText + format ["<t  align='right'>%1m ASL · ALT ·</t>",round (getPosASL _microAirVehicle select 2)] + "<br />";
                           _upperBoxText = _upperBoxText + format ["<t  align='right'>%1º · DIR ·</t>",round getDir _microAirVehicleCam] + "<br />";
                           _upperBoxText = _upperBoxText + format ["<t  align='right'>%1kph · SPD ·</t>",round speed _microAirVehicle] + "<br />";
                           _upperBoxText = _upperBoxText + format ["<t  align='right'>%1 · FOC ·</t>",_cameraFOVLevel]+ "<br />";
                           _upperBoxText = _upperBoxText + format ["<t  align='right'>%1 · VIS ·</t>",_currentVisionMode]+ "<br />";
                           
                           (_dspl displayCtrl 2020666) ctrlSetStructuredText parseText _upperBoxText;
                           
                           
                           // BATTERY DISPLAY
                           _batteryLevel = _groupCaller getVariable "ravenBatteryLevel";
                           
                           
                           switch (true) do
                           {
                                    case (_batteryLevel <= 5) : {_batteryDisplay = "BATTERY"};
                                    case (_batteryLevel <= 10) : {_batteryDisplay = "|<t color='#666666'>|||||||||</t>"};
                                    case (_batteryLevel <= 20) : {_batteryDisplay = "||<t color='#666666'>||||||||</t>"};
                                    case (_batteryLevel <= 30) : {_batteryDisplay = "|||<t color='#666666'>|||||||</t>"};
                                    case (_batteryLevel <= 40) : {_batteryDisplay = "||||<t color='#666666'>||||||</t>"};
                                    case (_batteryLevel <= 50) : {_batteryDisplay = "|||||<t color='#666666'>|||||</t>"};
                                    case (_batteryLevel <= 60) : {_batteryDisplay = "||||||<t color='#666666'>||||</t>"};
                                    case (_batteryLevel <= 70) : {_batteryDisplay = "|||||||<t color='#666666'>|||</t>"};
                                    case (_batteryLevel <= 80) : {_batteryDisplay = "||||||||<t color='#666666'>||</t>"};
                                    case (_batteryLevel <= 90) : {_batteryDisplay = "|||||||||<t color='#666666'>|</t>"};
                                    case (_batteryLevel <= 100) : {_batteryDisplay = "||||||||||<t color='#666666'></t>"};
                           };
                           
                           
                           
                           _batteryBoxText = "";
                           _batteryBoxText = _batteryBoxText + "<br />";
                           _batteryBoxText = _batteryBoxText + _batteryDisplay + format [" %1 MIN",((_batteryLevel * 36)/60)];
                           (_dspl displayCtrl 2020668) ctrlSetStructuredText parseText _batteryBoxText;
                           
                           
                           // CLOCK DISPLAY
                           _clockBoxText = "";
                           _clockBoxText = _clockBoxText + "<br />";
                           _clockBoxText = _clockBoxText + format ["<t  align='right'>%1</t>",_displayTime];
                           (_dspl displayCtrl 2020669) ctrlSetStructuredText parseText _clockBoxText;
                           
                           
                           // COMPASS DISPLAY
                           _markerMavCurrentTargetPos = getMarkerPos _markerMavCurrentTarget;
                           
                           _northLocationX = _markerMavCurrentTargetPos select 0;
                           _northLocationY = (_markerMavCurrentTargetPos select 1) + 5;
                           _southLocationX = _markerMavCurrentTargetPos select 0;
                           _southLocationY = (_markerMavCurrentTargetPos select 1) - 5;
                           _westLocationX = (_markerMavCurrentTargetPos select 0) - 5;
                           _westLocationY = _markerMavCurrentTargetPos select 1;
                           _eastLocationX = (_markerMavCurrentTargetPos select 0) + 5;
                           _eastLocationY = _markerMavCurrentTargetPos select 1;
                           
                           //=====NORTH
                           _northOnDisplayPos = worldToScreen [_northLocationX,_northLocationY];
                           _northDisplayText = "<t align='center' color='#FF0000' size='1.2' >N</t>";
                           (_dspl displayCtrl 2020662) ctrlSetStructuredText parseText _northDisplayText;
                           (_dspl displayCtrl 2020662) ctrlSetPosition _northOnDisplayPos;
                           (_dspl displayCtrl 2020662) ctrlCommit 0;
                           
                           //=====SOUTH
                           _southOnDisplayPos = worldToScreen [_southLocationX,_southLocationY];
                           _southDisplayText = "<t align='center' color='#00FF00' size='1.2' >S</t>";
                           (_dspl displayCtrl 2020663) ctrlSetStructuredText parseText _southDisplayText;
                           (_dspl displayCtrl 2020663) ctrlSetPosition _southOnDisplayPos;
                           (_dspl displayCtrl 2020663) ctrlCommit 0;
                           
                           //=====WEST
                           _westOnDisplayPos = worldToScreen [_westLocationX,_westLocationY];
                           _westDisplayText = "<t align='center' color='#00FF00' size='1.2' >W</t>";
                           (_dspl displayCtrl 2020664) ctrlSetStructuredText parseText _westDisplayText;
                           (_dspl displayCtrl 2020664) ctrlSetPosition _westOnDisplayPos;
                           (_dspl displayCtrl 2020664) ctrlCommit 0;
                           
                           //=====EAST
                           _eastOnDisplayPos = worldToScreen [_eastLocationX,_eastLocationY];
                           _eastDisplayText = "<t align='center' color='#00FF00' size='1.2' >E</t>";
                           (_dspl displayCtrl 2020665) ctrlSetStructuredText parseText _eastDisplayText;
                           (_dspl displayCtrl 2020665) ctrlSetPosition _eastOnDisplayPos;
                           (_dspl displayCtrl 2020665) ctrlCommit 0;
                           
                  };
                  
                  
                  //=====TERMINATE POST-PROCESSING EFFECTS=====================
                  
                  ppEffectDestroy _ppBlur;
                  ppEffectDestroy _ppGrain;
                  
                  
                  //=====END DISPLAY STUFF==================================
                  202020 cutText ["","PLAIN"];
                  (finddisplay 46) displayremoveeventhandler ["keydown",_displayEH_keydown];
                  
                  
                  camDestroy _microAirVehicleCam;
                  
                  _microAirVehicleCam cameraEffect ["Terminate", "BACK"];
                  _microAirVehicleCam camCommit 0;
                  camDestroy _microAirVehicleCam;
                  _microAirVehicle hideObject false;
                  
         };
         
         5004 cutText [" ","BLACK IN",2];
         
         sleep 2;
         
         deleteVehicle _monitorHead;
         // if (vehicle _caller == _caller) then {_caller switchMove ""};
};
