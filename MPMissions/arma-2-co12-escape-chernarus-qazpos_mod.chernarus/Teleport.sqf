player globalChat "Click on map to teleport";
onMapSingleClick "player setPos _pos; true; onMapSingleClick '';";
player addWeapon "ItemMap"