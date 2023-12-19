private ["_caller"];
_caller = _this select 1;

 if (!isNil{_caller getVariable "birdRecall"}) then
{
         hint parseText "<t color='#FF0000' size='1.8' shadow='0' font='Zeppelin32'>-ERROR-</t><br/>RAVEN IS AUTOLANDING";
} else
{
        _caller setVariable ["birdRecall",1,true];
        hint "RQ-11 RETURNING TO CONTROL STATION";
};