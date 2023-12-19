inko_disposable_oa = false;

inko_disposable_fired = compile preProcessFileLineNumbers "inko_disposable\s\fired.sqf";

if !(isDedicated) then
{
	inko_disposable_throw = compile preProcessFileLineNumbers "inko_disposable\s\throw.sqf";
	"inko_disp_throw" addPublicVariableEventHandler {[(_this select 1) select 0,(_this select 1) select 1] call inko_disposable_throw};
	inko_disposable_ammo_player = execVM "inko_disposable\s\ammo_player.sqf";
};

inko_disposable_ammo_ai = execVM "inko_disposable\s\ammo_ai.sqf";

inko_disposable_oa = true;