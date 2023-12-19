// =================================================================
// ==	BATTERY COUNTDOWN COUNTER				==
// ==	THIS IS A SCRIPT FOR RUNNING DOWN THE BATTERIES WHEN	==
// ==	THE RAVEN IS RUNNING				==
// ==	CREATED BY: Jon Hillenbrand (FEINT)			==
// ==	VERSION 1.0						==
// =================================================================

private ["_battlvl","_caller","_groupCaller"];
_caller = _this select 1;
_groupCaller = (group _caller);

//  CHECK TO SEE IF THIS SCRIPT IS ALREADY RUNNING
if (isNil{_groupCaller getVariable "batteryCountdownIsRunning"}) then
{
        _groupCaller setVariable ["batteryCountdownIsRunning", 1, true];
        
        // =====================================================START BATTERY COUNTDOWN LOOP
        
        while {!(isNil{_groupCaller getVariable "batteryCountdownIsRunning"})} do
        {
                
                // GET BATTERY LEVEL
                _battlvl = _groupCaller getVariable "ravenBatteryLevel";
                                
                // THIS CHECKS TO SEE IF THE RAVEN ENGINE IS ON OR OFF
                if (mavSoundOn == 0) exitWith {_groupCaller setVariable ["batteryCountdownIsRunning", nil, true]};
                
                // CHECK THE BATTERY LEVEL - IF IT IS AT ZERO THEN EXIT
                if (_battlvl <= 0) exitWith {_groupCaller setVariable ["batteryCountdownIsRunning", nil, true]};
                
                // 9 SECONDS DELAY
                sleep 9;
                
                //REDUCE BATTERY LEVEL BY 0.25 PERCENT - 60 MINUTES FLIGHT TIME
                _battlvl = _battlvl - 0.25;
                
                // UPDATE THE VARIABLE
                _groupCaller setVariable ["ravenBatteryLevel",_battlvl,true];
    
        };
};