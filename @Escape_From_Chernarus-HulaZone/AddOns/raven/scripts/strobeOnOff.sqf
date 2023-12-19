
private ["_source","_color","_brightness","_light1","_onOffStatus","_ravenWithStrobe"];
_ravenWithStrobe = _this select 0;
_onOffStatus = _this select 3;

if (_onOffStatus == 1) then
{
        _ravenWithStrobe setVariable ["mavStrobeOn",1,true];
}
else
{
        _ravenWithStrobe setVariable ["mavStrobeOn",nil,true];
};

if (isNil{_ravenWithStrobe getVariable "strobeScriptRunning"}) then
{
        _ravenWithStrobe setVariable ["strobeScriptRunning",1,true];
        while {((alive _ravenWithStrobe) and (!isNil{_ravenWithStrobe getVariable "mavStrobeOn"}))} do
        {
                
                _source = createVehicle ["baseball",(getpos  _ravenWithStrobe),[],0,"CAN_COLLIDE"];
                hideObject _source;
                
                _source attachto [_ravenWithStrobe,[0,0,0.25]];
                
                
                _color = [255,255,255];
                _brightness = 0.002;
                
                _light1 = createVehicle ["#lightpoint", position _source,[],0,"CAN_COLLIDE"];
                _light1 lightAttachObject [_source, [0, 0, 0.1]];
                _light1 setlightcolor _color;
                _light1 setlightambient [1,1,1];
                _light1 setlightbrightness _brightness;
                
                sleep 0.1;
                
                deletevehicle _light1;
                
                _light1 = createVehicle ["#lightpoint", position _source,[],0,"CAN_COLLIDE"];
                _light1 lightAttachObject [_source, [0, 0, 0.1]];
                _light1 setlightcolor _color;
                _light1 setlightambient [1,1,1];
                _light1 setlightbrightness _brightness;
                
                // [[player], "Alarm01"] call CBA_fnc_globalSay;
                [[_ravenWithStrobe], "watchBeep_single"]call CBA_fnc_globalSay;
                
                sleep 0.1;
                
                deletevehicle _light1;
                deletevehicle _source;
                
                sleep 2;
                
        };
        _ravenWithStrobe setVariable ["mavStrobeOn",nil,true];
        _ravenWithStrobe setVariable ["strobeScriptRunning",nil,true];
};
