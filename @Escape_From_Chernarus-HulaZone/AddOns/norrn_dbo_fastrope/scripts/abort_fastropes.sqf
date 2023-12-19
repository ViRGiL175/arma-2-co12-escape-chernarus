// abort_fastropes.sqf
// © SEPTEMBER 2011 - norrin
private ["_heli"];

_heli = vehicle player;

if (player == driver _heli) then {_heli removeAction NORRN_fast_rope_abort};
_heli setVariable ["NORRN_fr_abort", true, true];


