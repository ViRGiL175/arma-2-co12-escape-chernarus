//////////////////////////////////////////////////////////////////
// script for arma2/operation arrowhead
// Created by: BWPH4273
//////////////////////////////////////////////////////////////////


private ["_fuelstate","_plane","_audio_on","_audio_off"];
_plane = _this select 0;

 while {(alive _plane)} do
 {
	_fuelstate=fuel _plane;
	_audio_on=(_plane animationPhase "audioswitch")>0.5;
    _audio_off=(_plane animationPhase "audioswitch")<0.5;

if ((_fuelstate<0.32) and (_fuelstate>0.10) and _audio_on) then
{
_plane animate ["warnlightlfuel", 1];
_plane vehicleRadio "BWPH_bd5j_low_fuel";
sleep 3;
_plane animate ["warnlightlfuel", 0];
sleep 2;
};					
																									
if ((_fuelstate<0.10) and (_fuelstate>0.05) and _audio_on) then
{

_plane animate ["warnlightlfuel1", 1];
_plane animate ["warnlightlfuel", 0];
_plane vehicleRadio "BWPH_bd5j_warning_low_fuel";
sleep 2;
_plane animate ["warnlightlfuel1", 0];
_plane animate ["warnlightlfuel", 1];
sleep 2;
};

if ((_fuelstate<0.05) and _audio_on) then
{

_plane animate ["warnlightlfuel1", 1];
_plane animate ["warnlightlfuel", 1];
_plane vehicleRadio "BWPH_bd5j_warning_low_fuel";
sleep 6;
};

if ((_fuelstate<0.32) and (_fuelstate>0.10) and _audio_off) then
{
_plane animate ["warnlightlfuel", 1];
sleep 3;
_plane animate ["warnlightlfuel", 0];
sleep 2;
};					
																									
if ((_fuelstate<0.10) and (_fuelstate>0.05) and _audio_off) then
{

_plane animate ["warnlightlfuel1", 1];
_plane animate ["warnlightlfuel", 0];
sleep 2;
_plane animate ["warnlightlfuel1", 0];
_plane animate ["warnlightlfuel", 1];
sleep 2;
};

if ((_fuelstate<0.05) and _audio_off) then
{

_plane animate ["warnlightlfuel1", 1];
_plane animate ["warnlightlfuel", 1];
sleep 6;
};


if ((_fuelstate>0.99)) then
{

_plane animate ["warnlightlfuel1", 0];
_plane animate ["warnlightlfuel", 0];
};
sleep 2;
};