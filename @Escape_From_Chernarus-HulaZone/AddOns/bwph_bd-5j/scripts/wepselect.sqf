_plane = _this select 0;

while {(alive _plane)} do {

  switch (toUpper (currentWeapon _plane))  do {

  // use uppercase for comparing !!
   case "BWPH_M2_GG": {
     _plane animate ["mselect", 0];
     _plane animate ["gselect", 1];
     _plane animate ["bomb_door_l", 0];
     _plane animate ["bomb_door_r", 0];
     _plane animate ["bselect", 0];
     _plane animate ["missile_hatch_l", 0];
     _plane animate ["missile_hatch_r", 0];
    
  };

   case "BWPH_AIM_35_LAUNCHER": {
     _plane animate ["mselect", 1];
     _plane animate ["gselect", 0];
     _plane animate ["bomb_door_l", 0];
     _plane animate ["bomb_door_r", 0];
     _plane animate ["bselect", 0];
     _plane animate ["missile_hatch_l", 1];
     _plane animate ["missile_hatch_r", 1];
     
   };
   
   case "BWPH_AIM_105_LAUNCHER": {
     _plane animate ["mselect", 1];
     _plane animate ["gselect", 0];
     _plane animate ["bomb_door_l", 1];
     _plane animate ["bomb_door_r", 1];
     _plane animate ["bselect", 0];
     _plane animate ["missile_hatch_l", 0];
     _plane animate ["missile_hatch_r", 0];
     
   };
   
   case "BWPH_AMG_40_LAUNCHER": {
     _plane animate ["mselect", 1];
     _plane animate ["gselect", 0];
     _plane animate ["bomb_door_l", 1];
     _plane animate ["bomb_door_r", 1];
     _plane animate ["bselect", 0];
     _plane animate ["missile_hatch_l", 0];
     _plane animate ["missile_hatch_r", 0];
     
   };
   
   case "BWPH_M25_LAUNCHER": {
     _plane animate ["mselect", 0];
     _plane animate ["gselect", 0];
     _plane animate ["bomb_door_l", 1];
     _plane animate ["bomb_door_r", 1];
     _plane animate ["bselect", 1];
     _plane animate ["missile_hatch_l", 0];
     _plane animate ["missile_hatch_r", 0];
     
   };
   
    case "BWPH_AT_57_LAUNCHER": {
     _plane animate ["mselect", 1];
     _plane animate ["gselect", 0];
     _plane animate ["bomb_door_l", 0];
     _plane animate ["bomb_door_r", 0];
     _plane animate ["bselect", 0];
     _plane animate ["missile_hatch_l", 1];
     _plane animate ["missile_hatch_r", 1];
     
   };

  default {};

  }; // end switch

  sleep 1;

}; //end while