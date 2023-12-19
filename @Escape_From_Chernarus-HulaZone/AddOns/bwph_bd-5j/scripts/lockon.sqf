//////////////////////////////////////////////////////////////////
// script for arma2/operation arrowhead
// Created by: BWPH4273
//////////////////////////////////////////////////////////////////


private ["_plane","_lockon","_audio_on","_audio_off"];
_plane= _this select 0; 
_lockon=(_plane animationPhase "warnrlock")<0.5;
_audio_on=(_plane animationPhase "audioswitch")>0.5;
_audio_off=(_plane animationPhase "audioswitch")<0.5;


  if (_lockon) and _audio_on then {
    _plane animate ["warnrlock", 1];
	_plane vehicleRadio "BWPH_bd5j_lockon";
    sleep 3.5;
   _plane animate ["warnrlock", 0];
 };
  if (_lockon) and _audio_off then {
    _plane animate ["warnrlock", 1];
    sleep 3.5;
   _plane animate ["warnrlock", 0];
 };
 