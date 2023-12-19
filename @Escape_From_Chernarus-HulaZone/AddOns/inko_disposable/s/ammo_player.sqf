#define __config configFile >> "CfgWeapons" >> _weapon

while {true} do
{
	while {true} do
	{
		waitUntil {alive player};
		
		_weapon = secondaryWeapon player;
		if (_weapon != "") then
		{
			if (getNumber (__config >> "inko_disposable") == 1) then
			{
				_magazine = (getArray (__config >> "magazines")) select 0;
				while {currentWeapon player == _weapon} do
				{
					if !(_magazine in magazines player) then
					{
						player addMagazine _magazine;
					};
					sleep 0.3;
				};
				if (_magazine in magazines player) then
				{
					player removeMagazines _magazine;
				};
			};
		};
		sleep 1.5;
	};
};