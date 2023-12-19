//////////////////////////////////////////////////////////////////
// script for arma2/operation arrowhead
// Created by: BWPH4273
//////////////////////////////////////////////////////////////////


private ["_plane"];
_plane= _this select 0;

waitUntil {

    if ((_plane ammo "BWPH_M2_GG")<250 and ( _plane ammo "BWPH_AIM_35_LAUNCHER") <2 and (_plane ammo "BWPH_AT_57_LAUNCHER")<2 and (_plane ammo "BWPH_M25_LAUNCHER")<2) then
 {
 
    _plane animate ["warnlammo", 1];
    sleep 10;				
	_plane animate ["warnlammo", 0];
	sleep 1;
	}
	else
	{
	
   if ((_plane ammo "BWPH_M2_GG")>250 and ( _plane ammo "BWPH_AIM_35_LAUNCHER") >2 and (_plane ammo "BWPH_AT_57_LAUNCHER")>2 and (_plane ammo "BWPH_M25_LAUNCHER")>2) then
 {
 
    _plane animate ["warnlammo", 0];
	}
	
};
sleep 1;
};