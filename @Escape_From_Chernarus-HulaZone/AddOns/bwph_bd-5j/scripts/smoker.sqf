
private ["_plane","_smoker","_smoker1","_smokepos"];
_plane = _this select 0;
_smokepos = getPos _plane; 
smoker = "SmokeShell" CreateVehicle _smokepos;
smoker1 = "SmokeShell" CreateVehicle _smokepos;
smoker attachTo [_plane,[0,0,0],"smoke1"];
smoker1 attachTo [_plane,[0,0,0],"smoke2"];






