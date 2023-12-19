//////////////////////////////////////////////////////////////////
// script for arma2/operation arrowhead
// Created by: BWPH4273
//////////////////////////////////////////////////////////////////


private ["_damage","_plane","_audio_on","_audio_off"];
_plane= _this select 0; 
  
  while {(alive _plane)} do
 {
    _damage=getDammage _plane;
	_audio_on=(_plane animationPhase "audioswitch")>0.5;
    _audio_off=(_plane animationPhase "audioswitch")<0.5;

	 if ((_damage>0.25) and (_damage<0.49)) then
 {
    _plane animate ["warndamg", 1];
    sleep 1;
   _plane animate ["warndamg", 0];
   sleep 1;
 };
   
   if ((_damage>0.50) and (_damage<0.7) and _audio_on ) then
 {
    _plane animate ["warndamg", 1];
	_plane vehicleRadio "BWPH_bd5j_damage";
    sleep 7;
   _plane animate ["warndamg", 0];
   sleep 1;
 };
 
 if ((_damage>0.50) and (_damage<0.7) and _audio_off ) then
 {
    _plane animate ["warndamg", 1];
    sleep 7;
   _plane animate ["warndamg", 0];
   sleep 1;
 };
 sleep 1;
 };
