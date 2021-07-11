Features:
Fast time
JIP Compatibility
Faster/Slower Night Cycle
Client -> Server sync every 10 minutes

Usage:
Interval: Minutes to Skip
Bool: False to use skipTime true to use setDate
Night Cycle: false to disable fast night true to enable fast night

[Interval,Bool, Night Cycle] execFSM "core_time.fsm";

Notes on Night Cycle:
If you set the night cycle to True by default the night cycle will double up on the current interval, if you want a custom night cycle interval then you would do:

[5,false,true,7] execFSM "core_time.fsm";

If you make the night cycle value lower then the primary interval then your night cycle will be slower thus making the night last longer.

Notes on skipTime/setDate:
In this update of the FSM I added the ability to use either the skipTime command, or the setDate command to make time go by faster. Below are notes on Skiptime from the wiki.
skipTime does not actually estimate weather changes beyond moving the clouds across the sky. Weather counters continue as if no time has passed. The setDate command can be used instead of skiptime to change the time without 
the visual give-away of the lower clouds jumping. 


Examples:

Skip 5 minutes, use skipTime, no custom night cycle.
[5,false,false] execFSM "core_time.fsm";

Skip 5 minutes, use setDate, enable faster night cycle (no params) making time at night go by 10 instead of 5.
[5,true,true] execFSM "core_time.fsm";

Skip 5 minutes, uses setDate, enable Night Cycle (with params) making time at night go by 7 instead of 5.
[5,true,true,7] execFSM "core_time.fsm";


Changelog:
Added: Safety check put in for clients that get 'stuttering' issues.
Added: Ability to use skipTime or setDate.
Added: Night Cycle making it faster or slower depending on configuration.

Problems? Contact me at Tonic@taw.net