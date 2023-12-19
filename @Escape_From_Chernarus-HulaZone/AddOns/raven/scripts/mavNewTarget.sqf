

private ["_caller","_rangeMarker"];
_caller = _this select 1;


 if (!isNil{_caller getVariable "birdRecall"}) then
{
         hint parseText "<t color='#FF0000' size='1.8' shadow='0' font='Zeppelin32'>-ERROR-</t><br/>RAVEN IS AUTOLANDING";
} else
{
        openMap true;
        
        if !(visibleMap) then
        {
                hint "YOU HAVE NO MAP";
        } else
        {
                // CREATE RANGE MARKER
                _rangeMarker = createMarkerLocal ["rangeMarker",position _caller];
                _rangeMarker setMarkerShapeLocal "ELLIPSE";
                _rangeMarker setMarkerSizeLocal [8000,8000];
                _rangeMarker setMarkerBrushLocal "border";
                _rangeMarker setMarkerColorLocal "ColorBlack";
                
                onMapSingleClick
                {
                        
                        if ((player distance _pos) >= 8000) then
                        {
                                hint parseText "<t color='#FF0000' size='1.8' shadow='0' font='Zeppelin32'>-RANGE ERROR-</t><br/>MAX RANGE = 8km<br/>CHOOSE NEW TARGET";
                        } else
                        {
                                
                                // DELETE THE OLD TARGET MARKER
                                deleteMarker mavCurrentTarget;
                                
                                // CREATE THE NEW TARGET MARKER
                                _randomNumber = round (random 999999);
                                _markerNameMavTarget = format ["%1_mavMarkerTarget",_randomNumber];
                                
                                hint format ["NEW RQ-11 TARGET AT GRID %1",_pos call BIS_fnc_PosToGrid];
                                _marker = createMarker [_markerNameMavTarget, _pos];
                                _marker setMarkerType 'selector_selectable';
                                // _marker setMarkerText 'M.A.V. Target';
                                _marker setMarkerColor "ColorBlack";
                                
                                mavCurrentTarget = _markerNameMavTarget;
                                deleteMarkerLocal "rangeMarker";
                                
                                onMapSingleClick {};
                                true;
                        };
                        
                };
                
                
                
                
                
        };
};