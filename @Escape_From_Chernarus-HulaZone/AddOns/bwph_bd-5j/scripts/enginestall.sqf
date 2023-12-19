//////////////////////////////////////////////////////////////////
// script for arma2/operation arrowhead
// Created by: BWPH4273
//////////////////////////////////////////////////////////////////

 
private ["_plane","_speed","_audio_on","_audio_off"];
_plane= _this select 0;       
	   
		   
		   while {(alive _plane)} do {
		   
		   _audio_on=(_plane animationPhase "audioswitch")>0.5;
		   _audio_off=(_plane animationPhase "audioswitch")<0.5;
		   _speed=speed _plane;	
		   
	           if ( ! (isengineon _plane) and (_speed>10)and _audio_on) then
				{
					_plane animate ["warnlightestall", 1];
					_plane vehicleRadio "BWPH_bd5j_eng_stall";
					sleep 5;
					_plane animate ["warnlightestall", 0];
					sleep 2;
			};
			 if ( ! (isengineon _plane) and (_speed>10)and _audio_off) then
				{
					_plane animate ["warnlightestall", 1];
					sleep 5;
					_plane animate ["warnlightestall", 0];
					sleep 2;
			};
};