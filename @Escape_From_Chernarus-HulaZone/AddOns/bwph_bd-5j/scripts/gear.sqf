//////////////////////////////////////////////////////////////////
// script for arma2/operation arrowhead
// Created by: BWPH4273
//////////////////////////////////////////////////////////////////


private ["_plane","_speed","_alt","_gearUp","_gearDown","_audio_on","_audio_off"];
_plane = _this select 0;


 while {(alive _plane)} do
 {
    _speed=speed _plane;
	_alt=(getPos _plane) select 2;
	_gearUp=(_plane animationPhase "Gear_1")>0.5;
	_gearDown=(_plane animationPhase "Gear_1")<0.1;
	_audio_on=(_plane animationPhase "audioswitch")>0.5;
    _audio_off=(_plane animationPhase "audioswitch")<0.5;

  if (_gearUp and (_speed<190) and (_alt<150) and _audio_on) then
	{
		_plane animate ["warnlightgearup1", 1];
		_plane vehicleRadio "BWPH_bd5j_gear_up";
		sleep 0.6;
		_plane animate ["warnlightgearup1", 0];
		sleep 1.0;
	};
	
   if (_geardown and (_speed>210) and (_alt>150) and _audio_on) then
{
_plane animate ["warnlightgeardwn1", 1];
_plane vehicleRadio "BWPH_bd5j_gear_down";
sleep 0.6;
_plane animate ["warnlightgeardwn1", 0];
sleep 1.0;
};

if (_gearUp and (_speed<190) and (_alt<150) and _audio_off) then
	{
		_plane animate ["warnlightgearup1", 1];
		sleep 0.6;
		_plane animate ["warnlightgearup1", 0];
		sleep 1.0;
	};
	
   if (_geardown and (_speed>210) and (_alt>150) and _audio_off) then
{
_plane animate ["warnlightgeardwn1", 1];
sleep 0.6;
_plane animate ["warnlightgeardwn1", 0];
sleep 1.0;
};
																										
	if (_gearUp ) then
{
_plane animate ["warnlightgearup", 1];
_plane animate ["warnlightgeardwn", 0];
};
		
   if (_geardown) then
{
_plane animate ["warnlightgearup", 0];
_plane animate ["warnlightgeardwn", 1];
};
sleep 2;
};
