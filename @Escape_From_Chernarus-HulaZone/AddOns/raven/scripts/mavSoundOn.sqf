private ["_microAirVehicle"];
_microAirVehicle = _this;

sleep 6;

while {mavSoundOn == 1} do
{
        // [[player], "Alarm01"] call CBA_fnc_globalSay;
        // _microAirVehicle say ["prop_running02",1];
        [[_microAirVehicle],"prop_running02"] call CBA_fnc_globalSay;
        sleep 1.89; 
};