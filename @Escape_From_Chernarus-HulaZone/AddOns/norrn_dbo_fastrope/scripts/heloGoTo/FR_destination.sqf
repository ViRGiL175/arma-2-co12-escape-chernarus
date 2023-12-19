//FR_destination.sqf
// © OCTOBER 2011 - norrin
private ["_heli","_pilot","_heliH","_base","_frPos","_unit","_mrker_pos","_mrkr_ex","_target","_dir","_wp_target"];
_heli  		= _this select 0;
_pilot 		= driver _heli;
if (!local _heli) exitWith {};
_heliH 		= objNull;
_base 		= _heli getVariable "NORRN_heloGoTo_basePos";
sleep 1;
_frPos = _heli getVariable "NORRN_FR_destPos";
_unit  = _heli getVariable "NORRN_FR_commandingUnit";
sleep 1;
// Create Marker
_mrker_pos = _frPos;
_mrkr_ex = format ["%1", _heli];
createMarker [_mrkr_ex, _mrker_pos];
_mrkr_ex setMarkerColor "ColorBlue";
_mrkr_ex setMarkerType "Flag";
_mrkr_ex setMarkerText "Fast rope destination";
_mrkr_ex setMarkerSize [1.0, 1.0];
// Create HeilH
_heliH = "HeliHEmpty" createVehicle (getMarkerPos _mrkr_ex); 
sleep 1; 
_heli engineOn true;
if ((getPos _heli) select 2 < 5) then {sleep 20};
// heli lifts off
_heli flyInHeight 50;
_heli setBehaviour "CARELESS";
_heli doMove getPos _heli;
//Create new move to point otherwise heli won't move to marker
_target = getPos _heliH;
_dir = ((_target select 0) - (getpos _heli select 0)) atan2 ((_target select 1) - (getpos _heli select 1));
_wp_target = [((_target select 0) + (75 * sin _dir)),((_target select 1) + (75 * cos _dir)),0]; 

while {((getPos _heli) select 2) < 20 && !(_heli getVariable "NORRN_heloGoto_cancel")} do {sleep 0.5};
sleep 5;
_heli doMove _wp_target;
sleep 5;
_heli setCaptive true;
if (_heli distance _wp_target > 70 && (_unit in crew _heli) && !(_heli getVariable "NORRN_heloGoto_cancel")) then
{ 	
	_heli doMove _wp_target;
	sleep 5;
};
while {_heli distance _heliH > 40 && !(_heli getVariable "NORRN_heloGoto_cancel")} do 
{
	_heli doMove _wp_target;
	_heli flyInHeight 30;
	sleep 5;
};
if (!(_heli getVariable "NORRN_heloGoto_cancel")) then
{ 		
	//remove unecessary actions
	if (local _unit) then 
	{
		[_unit] spawn Nor_HT_S6
	} else { 
		Nor_HT_S = [_unit, Nor_HT_S6];	
		publicVariable "Nor_HT_S";
	};
	sleep 1;
	_unit setVariable ["NORRN_FR_gotoHeli", _heli, true];	
	//Run fast rope scripts
	[_heli, 0, 25, "\norrn_dbo_fastrope\scripts\heloGoTo\rtb.sqf"] execVM "\norrn_dbo_fastrope\scripts\fast_rope_AI_pilot.sqf";
	sleep 15;
};
while {(_unit in crew _heli) && alive _heli && !(_heli getVariable "NORRN_heloGoto_cancel")} do {sleep 0.1};
sleep 5;
deleteVehicle _heliH;
deleteMarker _mrkr_ex;
