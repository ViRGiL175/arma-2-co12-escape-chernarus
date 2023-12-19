README
======
ASR AI addons v1.16.1
by Robalo

Component: sys_airearming
Description: AI units equip with weapons and ammo on their own.

Features:
- Take what's needed from about anywhere possible: crates, vehicles, stuff dropped on the ground, dead soldiers and their backpacks.
- Also rearming from their own backpack or from another (alive) AI's pack in the group.
- Equip with primary weapons, launchers and sidearms, ammo, frag grenades, smoke grenades, binoculars, NVGs.
- Take rocket launchers if not carrying a rucksack (OA or ACE) or the primary weapon is a sniper rifle, machinegun or automatic rifle.
- Grab a little extra ammo when using specialist weapons (sniper, MG, AR) since they won't take a launcher.
- Will only take items when there's space for them in the inventory unless the items are important (launcher ammo or medic kits).
- Will try and grab all useful items found in a place on a single run.
- Do not rearm if any of these conditions is met: option globally disabled / unit is: busy doing something / in a vehicle / captive / hiding / in combat / unconscious
- Units rearm even while in combat if they have no weapons to fight with (unless they're commanded to stay put).
- Configurable options can also be set at the beginning or during the mission by changing the global variables (turn rearming on/off or allow civilians to rearm etc.)
- Some options can also be set in game using the comms menu (0-8).

ACE mod features (auto-enabled when ACE mod is active)
- Also grab extra frags and smokeshells found in ACE.
- Rearming from own ACE backpacks or other AI's packs in the group.
If the ACE Wounding module is active:
- Take bandages. Medics will also take epi, morphine and medkits.
- Rearm from unconscious units.

This addon can be installed on clients, servers or both. It will configure only the AI local to the machine where it is installed.

Component: sys_aiskill
Description: AI skills and awareness improvements

Features:
- Gives every AI unit randomized skill levels for aiming accuracy, aiming shake, aiming speed, spotting distance,
spotting speed, courage, but within certain ranges, based on unit's type.
The goal was to make the AI better, more diverse and distinct. Some units will be better skilled than others.
For example, a team leader will usually be better than a regular grunt, a SF unit will have the highest skills, while
an armed villager will present the lowest threat.
Users can configure the other skills and set their own levels by editing a userconfig file.
All Arma2, OA, BAF, PMC and ACE units are fully supported by this addon but most 3rd party mods should be too, with 
exceptions, like when a regular or insurgent type unit is created based on a SF unit etc.
Third party verified mods: ACE, CWR2, Duala and Lingor units (partially), McNools's Tier1 ops.

- AI radio net (only for servers and single-player).
When a group learns enough about an enemy, it will broadcast information about that enemy over radio to all friendly
groups within a configured range. The info is sent with a delay, so to prevent breaking breaking stealth, quick takedowns
are required. Sending and receiving groups must have radios. No waypoints are set, no orders given, just information sent,
default game AI decides what to do with it.

- When crewmen or pilots have to bail out of their vehicle because it was damaged, they won't be as willing to charge
the enemy as before. They might flee or run for cover instead, until they get into another vehicle when they gain some
courage back.

- AI spotting distance automatically reduced at night (and restored at day). Default is half distance at night, can be changed
in userconfig.

- AI hears gunshots. Default distance is half the range defined for shooter's weapon sound range.
Coefficient can be set in userconfig.

- Dynamic view distance adjustment on dedicated servers. Based on the initial VD setting, servers will continually readjust VD 
depending on fog and darkness. Can be turned off in userconfig.

- AI use smoke grenades for concealment when wounded.

- AI detects and engages targets at greater distances, selecting apropriate weapon and fire mode according to their weapon's
performance and distance to target. They shoot more like human players do.

- AI can use grenade launchers like the M203 and GP-25. Without this, they almost always shoot them a few meters too far.

This addon can be installed on clients, servers or both. It will configure only the AI local to the machine where it is installed.


README CONTENTS
===============

01. VERSION HISTORY
02. COPYRIGHT STATEMENT
03. TERMS OF USE
04. LEGAL DISCLAIMER
05. INSTALLATION
06. REQUIRED ADDONS
07. NOTES
08. CHANGE HISTORY
09. THANKS


01. VERSION HISTORY
===================

1.16.1 | 07 DEC 2012 | Minor fixes and enhancements. See change history.
1.16   | 12 AUG 2012 | Features and enhancements. See change history.
1.16b2 | 26 JUL 2012 | Features and enhancements. See change history.
1.16b1 | 18 JUL 2012 | Features and enhancements. See change history.
1.15.1 | 23 JUN 2012 | Bugfixes and optimizations. See change history.
1.15   | 17 JUN 2012 | Features and enhancements. See change history.
1.14.1 | 26 MAY 2012 | Minor fixes and enhancements. See change history.
1.14   | 26 FEB 2012 | Features and enhancements. See change history.
1.13   | 23 DEC 2011 | Features and enhancements. See change history.
1.12.1 | 05 DEC 2011 | Improved building searching. See change history.
1.12   | 05 DEC 2011 | Features and enhancements. See change history.
1.11   | 21 SEP 2011 | Features and enhancements. See change history.
1.10   | 24 AUG 2011 | Features and enhancements. See change history.
1.9    | 03 AUG 2011 | New AI smoke feature and some minor fixes.
1.8    | 26 JUL 2011 | Features and enhancements. See change history.
1.7    | 12 JUL 2011 | Features and enhancements. See change history.
1.6    | 29 JUN 2011 | Features and enhancements. See change history.
1.5    | 31 MAY 2011 | Features and enhancements. See change history.
1.4    | 24 MAY 2011 | Features and enhancements. See change history.
1.3    | 20 MAY 2011 | Released rearming and skills as one pack. Features and optimizations. See change history.
1.2    | 18 OCT 2010 | Features and enhancements. See change history.
1.1    | 19 SEP 2010 | Minor changes and a MP fix. See change history.
1.0    | 15 SEP 2010 | First aiskill release
0.96   | 19 OCT 2010 | Bugfix. See change history.
0.95   | 11 OCT 2010 | Bugfixes, features and optimizations. See change history.
0.94   | 10 OCT 2010 | Features and optimizations. See change history.
0.93   | 07 OCT 2010 | Readme file added. More features and optimizations. See change history.
0.92   | 04 OCT 2010 | Features and optimizations. See change history.
0.91   | 03 OCT 2010 | Features and optimizations. See change history.
0.90   | 02 OCT 2010 | First airearming release

02. COPYRIGHT STATEMENT
=======================

(c)[ 2010-2012 ] Robalo. All rights reserved.



03. TERMS OF USE
================

This addon (hereafter 'Software') contains files to be used in the PC CD-ROM simulator "Armed Assault 2" (hereafter 'ArmA2'). To use the Software you must agree to the following conditions of use:

1. Robalo (hereafter 'The Author(s)') grant to you a personal, non-exclusive license to use the Software.

2. The commercial exploitation of the Software without written permission from The Author(s) is expressly prohibited.



04. LEGAL DISCLAIMER
====================

The Software is distributed without any warranty; without even the implied warranty of merchantability or fitness for a particular purpose. The Software is not an official addon or tool. Use of the Software (in whole or in part) is entirely at your own risk.



05. INSTALLATION
================

To begin using the Software:

1. Copy the .pbo and .bisign files to a mod (addon folder) and launch the game with that mod loaded. For more information about addon folders please check BIS Wiki here:

http://community.bistudio.com/wiki/Addons#ArmA_2

2. Copy the content of userconfig to a folder named userconfig in your main Arma2 folder.
Optionally, customize your user or server settings by editing the file asr_ai_settings.hpp that should be located in <main Arma2 folder>\userconfig\asr_ai\


06. REQUIREMENTS
================

Arma 2: Operation Arrowhead or Combined Operations updated to version 1.60 or newer.
The CBA mod version 0.8.3 build 175 or newer is required, it can be found on Six Updater or from this link: http://www.multiupload.com/R08J08SR8T


07. NOTES
=========

Comments and suggestions are welcome. 


08. CHANGE HISTORY
==================

1.16.1 | 07 DEC 2012
Fixed a config conflict with latest CWR2 mod (https://dev-heaven.net/issues/51181)
Fixed error when asr_ai_sys_aiskill scripted features were completely disabled in userconfig (https://dev-heaven.net/issues/62075)
Added a fix for AI not using laser marker to paint targets for airplanes.
Attacking AI uses a waypoint now, making it more reliable (it's still not going to be triggered unless AI has no other active waypoints).
Fixed scripted AI support reaction.
Reactions to danger take enemy vs. friendly strength ratio into account (is it wise to attack ? does that group need my help ?).
Gunshot hearing aid reduced when any units involved are in forests (balancing tweak).

1.16 | 12 AUG 2012
Added ACR DLC support

1.16 beta2 | 26 JUL 2012
Requires v1.62
Shortened max MG engagement range (800m instead of 1k, for mission compatibility)
Soldiers less audible
Faster aiming overall
Rearming compatible with the latest ACE medical module changes
AI no longer grabbing LD
Combat mode no longer forced for player-led groups.
Pre-danger mode restored when it's clear.
Auto-enabling weapon lights in combat for AI groups
New basic scripted reaction to danger: support (2 waypoints: 1 - support a near group that is taking casualties then 2 - SAD). This will be disabled by default in the final release, but enabled now to testing. Again, reactions are only for groups which have no waypoints or have completed all of them.
Gimps left behind try to crawl to the nearest medic.
Attempt to stop machinegunners until they finish their bursts (so far it seems improved but not completely fixed).
Only AR, MG or SF soldiers get the reduced recoil bonus (was all units).
AI no longer allowed to take command of joined groups (limiting potential issues).
Lots of other minor code tweaks.
Note: userconfig version bumped again.

1.16 beta1 | 18 JUL 2012
Improvements:

Rearming
- fixed missing rearming options in the comms menu for the player.
- fixed errors in sys_aiskill when rearming was disabled.
- MP checks: rearming runs only on units where the mod is installed.
- fixed unit getting missing primary weapon or ammo in combat mode.
- updated taking medical items for latest ACE wounding changes.

Skills
- MP checks: all units get the skills set by the server, including those belonging to players not running the mod.
- fixed night spotting skills not applied properly for spawned units.
- added a global variable "asr_ai_sys_aiskill_initialized" which changes from false to true after the first
iteration (can use it to test if all units got their custom skills set at the start of the mission).
- added default skills for I44 mod units.

Gunshot hearing
- range can vary for a weapon based on type of ammo.
- default range extended.
- detects JSRS sound mod and auto-adjusts for proper sound range as well.
- feature disabled for subsonic ammo fired with suppressors and for GLs.
- feature now applied for vehicle shooters (was foot soldiers only).

Others
- added a basic, customized danger.fsm which takes care of group to group info sharing and some reactions for AI without waypoints.
- AI react to incoming fire and enemy detection: switch to combat mode, try to move to near cover, may use empty static and vehicle weapons or simply attack.
- the surrendering module from BIS is auto-activated (has userconfig option).
- compatibility fixes for TPWC AI suppression system, Warfare games (BIS and Benny editions), DAC and MSO gtk caching module.
- houses are only searched once. Some positions may be randomly skipped also.
- aiming speed increased for all units.
- added faction skill coefficient in userconfig; note: version bumped, update it!
- many code fixes and performance tweaks.

1.15.1 | 23 JUN 2012
Performance optimizations.
Fixed bugs that caused some routines not to run or exit too soon.
All units less accurate by default.
Added debug option for the info sharing in userconfig (set radionet_debug to 1 to log stuff to RPT).
Fixed errors for users without betas.
Fixed a bug that caused the game to break with an out of date userconfig.
Added warning when player needs to update the userconfig.
Unit skill assignments moved to the main loop instead of init EHs. Every unit gets
set a "asr_ai_sys_siskill_configured" variable to true after it receives the new skills.

1.15 | 17 JUN 2012
AI uses a lower stance in combat - crouch more, shoot from prone with MG, AR, sniper rifles or other weapons with bipods (ACE) (userconfig: stayLow = 1).
Steadier AI machinegunners - less recoil based on firing position (userconfig: recoilMod = 1).
Recoil is increased for wounded AI units (userconfig: recoilMod = 1).
Added option to debug the gunshot hearing aid feature on screen (userconfig: gunshothearing_debug = 0).
Merged asr_ai_c_aigrenadierfix pbo with asr_ai_c_airof
Units unable to walk/run (wounded legs) are removed from their group unless they are healed in some time (userconfig: split_legged = 300).
They will also be excluded from group consolidation.
Optimised smoke throwing.
Lower stance for higher building positions, also snipers stay in them more.
Excluded a few buildings from the AI house patrol feature.
Added option for how many morphine and epi units will try to maintain (ACE mod, wounding module; userconfig: ACEmeds[] = {4,1}; meaning: {amountIfMedic,amountIfNotMedic}).
Fixed the slow AI aiming in the asr_ai_c_aiskill config addon.
Foot soldiers are 20% less detectable (all units can hide better).
Small adjustments of the default userconfig settings.

1.14.1 | 26 MAY 2012
Improved AI rate of fire - extra burst modes for a few more weapons, with better compatibility with sound mods
Improved support for latest Lingor units v1.3
Morale boost for lone units when they join other groups (cancels fleeing)
Units occupying buildings spend a bit more time inside them

1.14 | 26 FEB 2012
Reorganized the userconfig format to no longer contain code, making sure it works with future patches which might restrict that.
The global variable names are still mostly the same and can be used in mission scripts:
	asr_ai_sys_aiskill_{feature,civ,radionet,radiorange,nightspotting,gunshothearing,buildingSearching,buildingSearchingAlwaysUp}
	asr_ai_sys_aiskill_{throwsmoke,join_loners,join_loners_sameFaction,serverdvd,setskills,setskills_debug}
	asr_ai_sys_airearming_{feature,run,radius,civ,sidearm,binocs,launchers,grenades,smokes}
Aditionally, you can override the settings in a mission by including the asr_ai config class in description.ext
Tweaked the default skills to work better with v1.60 vanilla difficulty/precision settings
Bugfixed conditions that were preventing rearming and group consolidation from happening.
Lone units will join groups of the same side now by default, but can still be restricted to faction as before.
Pilots are better accurate by default but less after they bail out.
Gun shot detection helper limited to dismounted units.
Updated configs for latest CWR2 demo compatibility.
Removed CfgDifficulties configs.
Changed CfgAISkill config to close-to-vanilla values ({0, 0.1, 1, 1} for each skill type).
Fixed FAL selector for non-ACE users.
Addons signed with a new asr_ai.bikey.
Removed version checking.

1.13 | 23 DEC 2011
Civilians are now excluded by default from the scripted skill enhancements (can be re-enabled with asr_ai_sys_aiskill_civ = 1;)
New group consolidation/cleanup feature: AI groups left with one member to to others KIA will join near groups of the same faction
House searching further improved. New condition added not to send more than half of the team inside. Also the forced up stance
can now be turned off with asr_ai_sys_aiskill_buildingsearching_always_stand = 0;
Tried (set nightvision = 0 for the units, but without requiredAddons) to work around a config issue for CWR units with "implanted" NVG
- see http://dev-heaven.net/issues/26965
Also tried to make the AI crouch more in combat (crouchProbabilityCombat bumped from 0.4 (default) to 0.9 in config but seems to only slightly improve it)
More code tweaks to enhance performance.

1.12.1 | 07 DEC 2011
Improved house searching feature. Send only up to 3 men to search, less to small buildings, never the group leader.

1.12 | 05 DEC 2011
Fine-tuned revealed information for better awareness, based on the new v1.60 reveal command variant:
- shots are heard from a greater distance by default, but knowledge gained is now variable, determined from max sound range 
and distance to shooter.
- target information value (knowledge) is shared as is, except a small loss due to random comm equipment issues.
AI will randomly search nearby building when in combat mode.
Fixed: AI was not giving up a weapon with GL even after spending all mags if they still had some GL rounds.
AI taking binoculars is now optional (still enabled by default). To disable in userconfig set: asr_ai_sys_airearming_binocs = 0;
AI taking sidearms by default (beta fixed issues involving sidearms). To disable in userconfig set: asr_ai_sys_airearming_sidearm = 0;
Also they will no longer ignore sidearms if that's the only weapon available even if sidearm rearming is disabled by config.
Userconfig settings now uncommented by default for clarity.
Separated configs from scripted features into their own pbos.

1.11 | 21 SEP 2011
Performance optimizations. Requires newer CBA from Six Updater or from: http://www.multiupload.com/OCVJTLI340
Snipers and spotters see better. Snipers made more accurate.
Can now override the skill level for certain unit types by adding them to asr_ai_sys_aiskill_levels_units in userconfig.
Fixed a bug with radios not detected properly when using ACRE which resulted in AI groups not sharing target info.

1.10 | 24 AUG 2011
New configs for sensitivity (how well a unit sees) and camouflage (how easily a unit is seen) based on unit type and clothing.
Units are able to passively detect targets farther than before (about 400-600m depending on type and skill instead of about 300m).
Added configs for AI shooting (engagement ranges, fire mode selection and rate of fire).
Integrated my AI grenadier fix mod v1.3 (remove these addons if you have them: asr_cfgweapons_fix_grenadiers, asr_cfgweapons_fix_grenadiers_oa, asr_weaponreplacements).
Increased default accuracy skills a bit (they're tuned for use with latest betas).
Configured the recommended skill and precision defaults (open difficulty settings and hit default for them to be applied).
Disabled smoke when ACE Wounding module is enabled (redundant feature since last ACE update).
Added small delay (5-10 sec) before applying skills so we can set the "asr_ai_sys_aiskill_exclude" variable in advance (see v1.3 changelog notes).
Pilots and crewmen will no longer arm themselves with rocket launchers.
AI soldiers should not engage infantry with HEAT rockets.
Bugfixed: rearming from backpacks working again.
Bugfixed: was unable to re-enable rearming after disabling it during the mission.

1.9 | 03 AUG 2011
AI infantry can throw smoke when wounded for concealment. Can be disabled with asr_ai_sys_aiskill_throwsmoke = 0;

1.8 | 26 JUL 2011
AI rearming distance can be set in userconfig (asr_ai_sys_airearming_radius value in meters, default 50).
Enabled rearming from another AI unit's backpack on the same side (was limited to same group).
Getting primary ammo has better priority, should no longer change primary weapon if mags for it can be found.
Rearming from own backpack is faster.
AI skills revised. Recommended difficulty settings: between 0.5 and 1.0 for skill and 0.5 to 0.8 for precision.

1.7 | 12 JUL 2011
Dedicated servers will continually change the view distance based on the initial VD, time of day and fog conditions.
Can be disabled in userconfig with asr_ai_sys_aiskill_serverdvd = 0;
Cars removed from the list of units what were "helped" to hear gunshots. They're hardcore enough by default.
Doubled accuracy for AI snipers (they were too inaccurate) and machine gunners (reduced ff due to extreme spread).
Skills are now applied without delay, as soon as the units are initialized.
Simplified soldier cost config, only 3 target importance levels.
Improved AI rearming support for the CWR2 mod.

1.6 | 29 JUN 2011
AI are better able to detect gunshots. Default distance is half the range defined for shooter's weapon sound range.
Coefficient can be set in userconfig. Sound mods have effect over this, but the range is verified on the machine where
the hearing AI unit belongs (for example, most AI lives on the dedicated server in a coop game so it doesn't matter if a
player has some wacky sound mod configs).
Added configs to correctly assign skills to the CWR2 mod units.
If using the ACE mod and when AI have weapons with both IR and flashlight, at night they will select IR if using NVG,
otherwise switch to flashlight.
Reduced default AI comms range (for target sharing between groups) from 700 to 500 meters (can be set in userconfig).
Reduced AI dispersion coefficient (all units are slightly more accurate by default).

1.5 | 31 MAY 2011
AI spotting distance is reduced at night (and restored at day). Spotting distance coefficient can be
changed in userconfig (asr_ai_sys_aiskill_nightspotting = 0.5 default, which means half spotting
range at night). Setting this to 1 effectively disables this feature.
AI radio net now enabled all the time.
Half of the group rearming at once while the other waits.
When AI needs new weapon, and has choices (eg. weapon crate), will pick a better match for its unit class.
(sniper tries to get sniper rifle, machinegunner takes MG, Javelin dude takes Javelin etc.)
Snipers always taking pistols.
After taking a primary weapon, AI will switch to it immediately if it was holding a pistol.
Performance optimizations.

1.4 | 24 MAY 2011
AI in player's group checks for gear more often. 
They now also take binoculars and, if it's dark outside, NVGs.
Group leaders go back to their former position after rearming instead of remaining at the cache
(the other units are still regrouping at leader's position).
Now also counting items in the IFAK when ACE wounding is enabled.
Units can be individually prevented from rearming by setting a variable like this:
_unit setVariable ["asr_ai_sys_airearming_pause", 1]; (set back to 0 to resume rearming).
Never rearm in stealth mode, even if having no weapons or ammo.
In combat mode, rearm only if there's no more ammo for the primary weapon (all other modes allow
rearming - careless, safe, aware).
Performance optimizations.

1.3 | 20 MAY 2011
Merged the improved rearming and skillset addons into a single mod, asr_ai.
Added the AI radio net feature. Drastically changes AI battle awareness.
Configured a unique AI dispersion coefficient, making AI dispersion more clearly
dependent on weapon's accuracy and AI skill.
Better default skill levels, improving support for third party mod units.
With ACE wounding enabled, AI will now also take large bandages and medkits.
Added more options to be configured in userconfig:
 - each feature can be turned off completely
 - rearming can be prevented from running at mission start (but enabled later on)
 - list of launchers which the AI can grab can be extended in userconfig to support mods
 - same with grenades and smokeshells from mods - add them to the userconfig to allow AI to grab them
 - range for radio broadcasts can be set
All settings are global variables which can also be set by mission init.sqf.
Can skip skill assignment for some units by setting the exclude variable, eg: _unit setVariable ["asr_ai_sys_aiskill_exclude", true];

1.2 | 18 OCT 2010
Tank, heli and plane crews lose some courage when getting out of their damaged vehicle and gain some when they get back in a good one.
The addon should no longer auto-add itself to the mission.sqm required addons list.

1.1 | 19 SEP 2010
Lowered default infantry skills for the officers (commanders that aren't usually involved in combat directly).
Class levels 8 and 9 are now special pilot classes, with less infantry skills but very good spotting.
Addon is now preloaded to fix the "cannot play/edit error message in multiplayer".

1.0 | 15 SEP 2010
First aiskill release

0.96 | 19 OCT 2010
Mags were not properly counted for some weapons (specifically for rifles with GL, when used with ACE or with ASR Grenadier fix addons).

0.95 | 11 OCT 2010
Fixed a couple of bugs that prevented rearming in some situations.
AI can now rearm from own ACE pack or another alive AI's ACE pack in the group.
Visiting field hospitals for supplies too.

0.94 | 10 OCT 2010
Medics do not pick up launchers anymore.
Heavy launchers will only be picked up by respective specialists or units that start with them.
AI can now take magazines from own OA backpack or another (alive) AI's pack in same group.

0.93 | 07 OCT 2010
Performance tweaks - the full inventory check is done less often, 30-60 seconds for AI with a player in their group, 2-3 minutes otherwise.
Quick checks are done more often, each 10-20 seconds, if for example a unit needs a primary weapon.
Prevent units from moving to grab stuff out of the water.
Communications submenu that can be used to toggle rearming on/off. More options to be added there in the future.

0.92 | 04 OCT 2010
Ammo that goes into primary or secondary slots is handled separately. This means AI with a rifle GL will also grab GL ammo when found.
When looking for a weapon because the current one is empty, don't pick up same weapon

0.91 | 03 OCT 2010
Extra muzzle magazines are now also counted for primary weapons - means the AI might grab GL rounds as well.

0.90 | 02 OCT 2010
First airearming release


09. THANKS
==================
Victor Farbau for creating the original VFAI.Equipment addon and permission to modify his work, his gesture was the kickstart for the rearming addon rewrite.
SNKMAN for his Group Link 4 mod where I took the skill assignment by script idea from.
afp for his awareness script in BIS forums (http://forums.bistudio.com/showthread.php?t=92532) which inspired the AI radio net feature.
CarlGustaffa for the sun elevation function posted on BIS forums.
HeinBloed for his GDT Mod Server Grenadier where I saw the solution for fixing the AI grenadiers.
AlphaSquad team members for testing and sharing years of gaming fun.
BIS forum members that tested and provided constructive feedback.
BIS for making the best games.
