
private ["_marker","_gen","_markerNameBase"];

_gen = _this select 0;
_markerNameBase = _this select 1;
_gen setVariable ["markerNameBase",_markerNameBase,true];

while {alive _gen} do
{
        
        _marker = createMarker [_markerNameBase, position _gen];
        _marker setMarkerType "depot";
        _marker setMarkerText "RQ-11 G.C.S.";
        sleep 2;
        deleteMarker _markerNameBase;
};

deleteMarker _markerNameBase;

_gen removeAction mavBaseStationActionName_01;
_gen removeAction mavBaseStationActionName_02;
_gen removeAction mavBaseStationActionName_03;
_gen removeAction mavBaseStationActionName_04;
// _gen removeAction mavBaseStationActionName_05;
// _gen removeAction mavBaseStationActionName_06;