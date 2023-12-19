_plane = _this select 0;
_wing_fold = (_plane animationPhase "wing_fold")<0.1;

   if (_wing_fold) then { 
	
	_plane animate ["wing_fold",1];
    _plane animate ["wing_fold_r",1];
    _plane animate ["wing_fold_l",1];
    _plane animate ["wing_move_r",1];
    _plane animate ["wing_move_l",1];
    _plane animate ["tail_fold_r",1];
    _plane animate ["tail_fold_l",1];
  sleep 1;
    _plane animate ["wing_rotate_r",1];
    _plane animate ["wing_rotate_l",1];
};





