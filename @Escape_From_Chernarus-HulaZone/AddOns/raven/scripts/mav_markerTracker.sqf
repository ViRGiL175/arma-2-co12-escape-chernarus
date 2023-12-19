
private ["_marker","_markerTextString","_markerNameMAV","_microAirVehicle"];

_microAirVehicle = _this select 0;
// _caller = _this select 1;
_markerNameMAV = _this select 2;
// _caller setVariable ["mavCurrentTarget",_markerNameMAV,true];

while {alive _microAirVehicle} do
{
        _markerTextString = format ["RQ-11 (%1 m)",mavCurrentHeight];
        _marker = createMarker [_markerNameMAV, position _microAirVehicle];
        _marker setMarkerType "b_uav";
        _marker setMarkerDir getDir _microAirVehicle;
        _marker setMarkerText _markerTextString;
        _marker setMarkerColor "ColorGreen";
        sleep 2;
        
        
        
        deleteMarker _markerNameMAV;
        
};

deleteMarker _markerNameMAV;
