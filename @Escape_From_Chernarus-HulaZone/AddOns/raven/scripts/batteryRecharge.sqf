// =================================================================
// ==	BATTERY COUNTDOWN COUNTER				==
// ==	THIS IS A SCRIPT FOR RUNNING DOWN THE BATTERIES WHEN	==
// ==	THE RAVEN IS RUNNING				==
// ==	CREATED BY: Jon Hillenbrand (FEINT)			==
// ==	VERSION 1.0						==
// =================================================================

private ["_battlvl","_gen","_batteryLevelText","_caller"];
_gen = _this select 0;
_caller = _this select 1;

//  CHECK TO SEE IF THIS SCRIPT IS ALREADY RUNNING
if (isNil{_gen getVariable "batteryChargerIsRunning"}) then
{
        _gen setVariable ["batteryChargerIsRunning", 1, true];
        
        hint parseText "<t color='#FF0000' size='1.8' shadow='0' font='Zeppelin32'>-CHARGING-</t><br/>PLEASE WAIT...";
        
        // =====================================================START BATTERY COUNTDOWN LOOP
        
        while {(!isNil{_gen getVariable "batteryChargerIsRunning"}) and (alive _gen)} do
        {
                
                // GET BATTERY LEVEL
                if (isNil{_gen getVariable "ravenBatteryLevel"}) then
                {
                        _gen setVariable ["ravenBatteryLevel",100,true];
                };
                
                _battlvl = _gen getVariable "ravenBatteryLevel";
                
                
                // CHECK THE BATTERY LEVEL - IF IT IS AT ZERO THEN UPDATE THE RUNNING STATUS AND END THIS SCRIPT
                if (_battlvl >= 100) exitWith
                {
                        _gen setVariable ["batteryChargerIsRunning", nil, true];
                        2020999 cutText ["BATTERY FULLY RECHARGED","PLAIN DOWN",0];
                        sleep 4;
                        2020999 cutText ["","PLAIN DOWN",0];
                };
                
                // 3 SECONDS DELAY = 100% IN 5 MINUTES
                sleep 3;
                
                // INCREASE  BATTERY LEVEL BY 1 PERCENT
                _battlvl = _battlvl + 1;
                
                // UPDATE THE GLOBAL VARIABLE
                _gen setVariable ["ravenBatteryLevel",_battlvl,true];
                
                // IF YOU ARE HOLDING THE RECHARGING RAVEN - GIVE REALTIME READOUT OF THE BATTERY CHARGING LEVEL
                if ((_caller getVariable 'nameOfAttachedStaticRaven') == _gen) then
                {
                        _batteryLevelText = format ["BATTERY LEVEL = %1 %",_battlvl];
                        2020999 cutText [_batteryLevelText,"PLAIN DOWN",0];
                };
                
                
        };
} else
{hint parseText "<t color='#FF0000' size='1.8' shadow='0' font='Zeppelin32'>-BATTERY ERROR-</t><br/>BATTERY CHARGE IN PROGRESS<br/>PLEASE WAIT..."};


