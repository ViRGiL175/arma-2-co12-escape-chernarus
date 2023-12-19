//original exhaust script by CSJ
private ["_plane","_a1","_a2","_a3","_v1"];
_plane = _this select 0;

if (not alive _plane) exitwith {};
if !(isengineon _plane) exitwith {};
if ((getpos _plane select 2) > 2.0) exitwith {};

_life = 5;
_a1 = 0.3;
_a2 = 1.85;
_a3 = -1.0;
_v1 = 0.3;
//_pos1=[-0.8,2.3,-0.2];
//_pos2=[0.8,2.3,-0.2];
_velX = [0, -0.1, 0.1];
_size=[.2,.5,1 ];

if (player in _plane) then {addCamShake [3, 0.6, 10];};
drop [["\ca\Data\ParticleEffects\Universal\Universal", 16,7,5], "", "Billboard", 1, _life, [_a1,_a2,_a3], _velX , .1, 0.275, 0.2, 0.1, _size, [[0.06, 0.06, 0.06, 0.9], [0.06, 0.06, 0.06, 0.15], [0.06, 0.06, 0.06, 0.05]], [0, 1], .01, 0.05, "", "", _plane];
drop [["\ca\Data\ParticleEffects\Universal\Universal", 16,7,5], "", "Billboard", 1, _life, [_a1,_a2,_a3], _velX , .1, 0.275, 0.2, 0.1, _size, [[0.06, 0.06, 0.06, 0.9], [0.06, 0.06, 0.06, 0.15], [0.06, 0.06, 0.06, 0.05]], [0, 1], .01, 0.05, "", "", _plane];
sleep 0.5;

if (player in _plane) then {addCamShake [0.7, 4.6, 20];};
for [{_exhcount=0}, {_exhcount<20}, {_exhcount=_exhcount+1}] do
{
	sleep 0.2;
	drop [["\ca\Data\ParticleEffects\Universal\Universal", 16,7,5], "", "Billboard", 1, _life, [_a1,_a2,_a3], _velX , .1, 0.275, 0.2, 0.1, _size, [[0.06, 0.06, 0.06, 0.9], [0.06, 0.06, 0.06, 0.15], [0.06, 0.06, 0.06, 0.05]], [0, 1], .01, 0.05, "", "", _plane];
	drop [["\ca\Data\ParticleEffects\Universal\Universal", 16,7,5], "", "Billboard", 1, _life, [_a1,_a2,_a3], _velX , .1, 0.275, 0.2, 0.1, _size, [[0.06, 0.06, 0.06, 0.9], [0.06, 0.06, 0.06, 0.15], [0.06, 0.06, 0.06, 0.05]], [0, 1], .01, 0.05, "", "", _plane];
};