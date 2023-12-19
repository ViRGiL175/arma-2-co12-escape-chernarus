// FR_t.sqf
// © SEPT 2011 - norrin
private ["_unit","_t","_message"];

_unit = _this select 0;
if (_unit != player) exitWith {};
_t = time + 15;
while {_t > time} do
{
	if (!Nor_optFR) then 
	{			
		_message = format ["Time remaining to select fast rope action: %1", round(_t - time)];
		titleText [_message, "PLAIN DOWN", 0.2];
	};
	sleep 1;
};
Nor_FR_AIcomplete = true;