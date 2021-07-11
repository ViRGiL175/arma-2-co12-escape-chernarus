private ["_isJipPlayer"];

_isJipPlayer = _this select 0;

drn_rendesvouzTasks = [];
drn_hijackTasks = [];

drn_SetTaskStateEventArgs = []; // taskName, state

drn_SetTaskStateLocal = {
	private ["_taskList", "_state"];
	private ["_code"];

	_taskList = _this select 0;
	_state = _this select 1;
	
	_code = "{_x setTaskState """ + _state + """} foreach " + _taskList + ";";
    diag_log _code;
	call compile _code;

	if (isServer) then {
		private ["_code2"];

		_code2 = _taskList + "Status = """ + _state + """; publicVariable """ + _taskList + "Status"";";
        diag_log _code2;
		call compile _code2;
	};
};

"drn_SetTaskStateEventArgs" addPublicVariableEventHandler {
	drn_SetTaskStateEventArgs call drn_SetTaskStateLocal;
};

drn_SetTaskStateOnAllMachines = {
	private ["_taskList", "_state"];

	_taskList = _this select 0;
	_state = _this select 1;

	drn_SetTaskStateEventArgs = [_taskList, _state];
	publicVariable "drn_SetTaskStateEventArgs";
	drn_SetTaskStateEventArgs call drn_SetTaskStateLocal;
};

if (isServer) then {
    drn_rendesvouzTasksStatus = "CREATED";
    publicVariable "drn_rendesvouzTasksStatus";
    
    drn_hijackTasksStatus = "CREATED";
    publicVariable "drn_hijackTasksStatus";
};

{
    if (!isNil "_x") then {
        private ["_task"];

        _task = _x createSimpleTask ["Hijack a communication center"];
        _task setSimpleTaskDescription ["Hijack a communication center.", "Hijack a communication center", ""];
        drn_hijackTasks set [count drn_hijackTasks, _task];
		
        _task = _x createSimpleTask ["Rendesvouz with allied forces."];
        _task setSimpleTaskDescription ["Rendesvouz with allied forces.", "Rendesvouz with allied forces.", ""];
        drn_rendesvouzTasks set [count drn_rendesvouzTasks, _task];

        _x createDiaryRecord ["Diary", ["Background", "In preparation for the invasion of Chernarus a group of highly skilled army specialists were sent into the heart of the enemy's territory. The goal of their mission was to gather intelligence of outmost priority of the Red Star Movement's defenses. While the mission itself was successful and revealed even more information than what was hoped for, the exfiltration from Chernarus was not. The night before the exfiltration the door was suddenly unlocked and you woke up to the smell of chloroform."]];		
        _x createDiaryRecord ["Diary", ["Journal", "The guards padded us down carefully and took everything we had, weapons, maps, compasses, backpacks, supplies, everything, they even got to my hidden blade.<br /><br />If we manage to escape from this ramshackle holding pen the Chedaki will surely do everything in their power to hunt us down, they might even call upon their friends in the Ministerstvo Vnutrennikh Del (MVD, the Russian ministry of internal affairs).<br /><br />Propaganda about the daring capture of a Special Forces team, sent out by “the Western oppressors”, has been broadcasted all day on the Chedaki intercom, along with the spoils of war to be given to our captors. If we should ever be spotted by the Chedaki they will surely contact their headquarters within a matter of seconds. We will have to act quickly or silently unless we want word of our position to reach their headquarters.<br /><br />Our intel, and previous experience, suggests that if, or rather when, our position is reported an insurgent search leader will swoop down to search the immediate vicinity. If we are lucky enough to lose them for a while they will surely assume we are still close by, and widen the search area.<br /><br />Chernarus, this hell-hole of a country, is at least in one regard just like any other country: it is full of innocent civilians. We are in luck that they currently have their hands full with the pillaging and ravaging Red Star Movement as most will probably be willing to turn a blind eye to their enemy’s enemy. However, if one of them should be caught in crossfire and shot to dead the rumors, and a change of heart, will most likely spread like wildfire. I don’t think NAPA (the Guerilla) will take a liking such an event either, but they do understand that sometimes collateral damage is inescapable, albeit at the cost of our reputation.<br /><br />We need to establish contact with HQ and request an extraction if we ever want to escape from this hell-hole. Hijacking a Chedaki communication center is probably our best bet at acquiring a secure frequency. From what we’ve gathered they should be marked with the Red Star Movement flag on their maps.<br /><br />The com-centers will probably be heavily guarded and they will surely take some time to hijack. Luckily we have that whiz-kid spotter with us, who should be able to get around their systems a whole lot quicker.<br /><br />To be able to rapidly deploy around the country the Red Star Movement have stockpiled large amounts of armaments in ammunition depots scattered across the countryside (they should be marked on their maps with a standard depot marker). These depots have been continuously stockpiled since well before their coup d’état, with arms imported from shady arms-dealers from other satellite states all over Eastern Europe, in addition to the frequent weapon deliveries hailing from their recuperated ally, the Russian Bear. Raiding them should be a good way to up our arsenal.<br /><br />Unless we somehow manage to run across them by chance, we should try to get our hands on a Chedaki map to find the ammo-depots and com-centers ASAP.<br /><br />Martial prowess and sound strategies might bring us victory in the short term, but our esprit de corps is what ensures our survival in the long run and is an important part of our reputation; we have to beware of friendly fire lest we lose it."]];
        _x createDiaryRecord ["Diary", ["Situation", "You are held prisoner in an temporary holding pen. Armed guards are watching your every move while waiting for Chedaki officers and representatives from the MVD to arrive for your questioning. At best you will be treated as a prisoner of war, but having seen the scars those exposed to the Red Star Movement's interrogation methods, you suspect that you might not make it out of the interrogation room alive, neither physically nor mentally. Since the guards that captured you by now know too much of your intentions, in addition the mirage of the extravagant price set on your heads, you are treated as a high priority prisoners. Add to that the value of the intelligence you have, which could prove to completely shift the tide of the upcoming invasion. With this in mind you surely want to keep your eyes open for a good occasion to escape before they take you off to a maximum security prison deep inside a bunker somewhere. Maybe you will have your window of opportunity. In fact, the guard watching you inside the holding pen seems like an easy enough fellow to overpower..."]];

        
    };
} foreach call drn_fnc_Escape_GetPlayers;

// If JIP player then set completed tasks
if (_isJipPlayer) then {
    diag_log "DEBUG START";
    if (!isNil "drn_rendesvouzTasksStatus") then {
        diag_log ("[drn_rendesvouzTasks, " + str drn_rendesvouzTasksStatus + "]");
        ["drn_rendesvouzTasks", drn_rendesvouzTasksStatus] call drn_SetTaskStateLocal;
    };
    
    if (!isNil "drn_hijackTasksStatus") then {
        diag_log ("[drn_hijackTasks, " + str drn_hijackTasksStatus + "]");
        ["drn_hijackTasks", drn_hijackTasksStatus] call drn_SetTaskStateLocal;
    };
};



