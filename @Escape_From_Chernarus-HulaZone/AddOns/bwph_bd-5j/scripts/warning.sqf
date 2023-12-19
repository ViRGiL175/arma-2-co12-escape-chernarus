// ----------------------------------------------------------------
// --   Typhoon- Bitching Betty Script by UNN and RKSL-Rock      --
// --                                                            --
// --  If you are going to use or modify this script for your    --
// --  own purposes please remember to provide                   --
// --              CREDIT WHERE CREDIT IS DUE                    --
// --                                                            --
// --  RKSL-Rock 09 July 2010                                    --
// --  www.RKSLSTUDIOS.info        
//                                                                  --
//                                                                     --
//   modified for  bd-5j by BWPH4273    --
//       all credit goes to original authors!!!                    --
// ----------------------------------------------------------------




private ["_speed","_alt","_gearUp","_dive15","_dive30a","_dive30","_dive45a","_dive45","_dive60a","_dive60","_plane","_audio_on","_audio_off"];
_plane= _this select 0;



waitUntil 
{
	
	_speed=speed _plane;
	_alt=(getPos _plane) select 2;
	_gearUp=(_plane animationPhase "Gear_1")>0.5;
	_dive15=(_plane animationPhase "HorizonDive") < -0.166665;	
	_dive30a=(_plane animationPhase "HorizonDive") > -0.333333;
	_dive30=(_plane animationPhase "HorizonDive")< -0.333333;
	_dive45a=(_plane animationPhase "HorizonDive")>-0.5;
	_dive45=(_plane animationPhase "HorizonDive")<-0.5;
	_dive60a=(_plane animationPhase "HorizonDive")>-0.666666;	
	_dive60=(_plane animationPhase "HorizonDive")<-0.666666;
    _audio_on=(_plane animationPhase "audioswitch")>0.5;
    _audio_off=(_plane animationPhase "audioswitch")<0.5;
	

	

				if ((_alt<25) and (_speed>300) and _gearUp and _audio_on ) then
				{
					_plane animate ["warnlightlalt", 1];
					_plane vehicleRadio "BWPH_bd5j_altitude";
					sleep 2;
					_plane animate ["warnlightlalt", 0];
					sleep 2;
					
				}
				else			
				{
				
				if ((_alt<60) and (_speed>399) and (_speed<599) and _dive15 and _dive30a and _gearUp and _audio_on ) then
				{
					_plane animate ["warnlightlalt", 1];
					_plane vehicleRadio "BWPH_bd5j_pull_up";
					sleep 2;
					_plane vehicleRadio "BWPH_bd5j_altitude";					
					_plane animate ["warnlightlalt", 0];
					sleep 2;
					
				}
				else			
				{
					
									if ((_alt<90) and (_speed>600) and (_speed<699) and _dive15 and _dive30a and _gearUp and _audio_on ) then
									{
										_plane animate ["warnlightlalt", 1];
										_plane vehicleRadio "BWPH_bd5j_pull_up";
										sleep 2;
										_plane animate ["warnlightlalt", 0];
										sleep 2;
									}
									else							
									{
										if ((_alt<160) and (_speed>700) and (_speed<899) and _dive15 and _dive30a and _gearUp and _audio_on ) then
										{
											_plane animate ["warnlightlalt", 1];
											_plane vehicleRadio "BWPH_bd5j_pull_up";
											sleep 2;
											_plane animate ["warnlightlalt", 0];
                                            sleep 2;											
										}
										else							
										{
											if ((_alt<200) and (_speed>900) and (_speed<1099) and _dive15 and _dive30a and _gearUp and _audio_on ) then
											{
												_plane animate ["warnlightlalt", 1];
												_plane vehicleRadio "BWPH_bd5j_pull_up";
												sleep 2;
												_plane animate ["warnlightlalt", 0];												
												sleep 2;
											}
											else							
											{
												if ((_alt<320) and (_speed>1100) and _dive15 and _dive30a and _gearUp and _audio_on ) then
												{
													_plane animate ["warnlightlalt", 1];
													_plane vehicleRadio "BWPH_bd5j_pull_up";
													sleep 2;
													_plane animate ["warnlightlalt", 0];
													sleep 2;
												}	
												else
												{
													if ((_alt<250) and (_speed>500) and (_speed>699) and _dive30 and _dive45a and _gearUp and _audio_on ) then
													{
														_plane animate ["warnlightlalt", 1];
														_plane vehicleRadio "BWPH_bd5j_pull_up";
														sleep 2;
														_plane animate ["warnlightlalt", 0];
														sleep 2;
													}
													else							
													{
														if ((_alt<350) and (_speed>700) and (_speed>899) and _dive30 and _dive45a and _gearUp and _audio_on ) then
														{					
															_plane animate ["warnlightlalt", 1];
															_plane vehicleRadio "BWPH_bd5j_pull_up";
															sleep 2;
															_plane animate ["warnlightlalt", 0];
															sleep 2;
														}
														else							
														{
															if ((_alt<410) and (_speed>900) and (_speed>1099) and _dive30 and _dive45a and _gearUp and _audio_on ) then
															{
																_plane animate ["warnlightlalt", 1];
																_plane vehicleRadio "BWPH_bd5j_pull_up";
																sleep 2;
																_plane animate ["warnlightlalt", 0];
																sleep 2;
															}
															else							
															{
																if ((_alt<500) and (_speed>1100) and _dive30 and _dive45a and _gearUp and _audio_on ) then
																{
																	_plane animate ["warnlightlalt", 1];
																	_plane vehicleRadio "BWPH_bd5j_pull_up";
																	sleep 2;
																	_plane animate ["warnlightlalt", 0];
																	sleep 2;
																}
																else
																{
																	if ((_alt<300) and (_speed>500) and (_speed<699) and _dive45 and _dive60a and _gearUp and _audio_on ) then
																	{
																		_plane animate ["warnlightlalt", 1];
																		_plane vehicleRadio "BWPH_bd5j_pull_up";
																		sleep 2;
																		_plane animate ["warnlightlalt", 0];
																		sleep 2;
																	}
																	else							
																	{
																		if ((_alt<400) and (_speed>700) and (_speed<899) and _dive45 and _dive60a and _gearUp and _audio_on ) then
																		{
																			_plane animate ["warnlightlalt", 1];
																			_plane vehicleRadio "BWPH_bd5j_pull_up";
																			sleep 2;
																			_plane animate ["warnlightlalt", 0];
																			sleep 2;
																		}
																		else							
																		{
																			if ((_alt<600) and (_speed>900) and (_speed<1099) and _dive45 and _dive60a and _gearUp and _audio_on ) then
																			{
																				_plane animate ["warnlightlalt", 1];
																				_plane vehicleRadio "BWPH_bd5j_pull_up";
																				sleep 2;
																				_plane animate ["warnlightlalt", 0];
																				sleep 2;
																			}
																			else							
																			{
																				if ((_alt<750) and (_speed>1100) and _dive45 and _dive60a and _gearUp and _audio_on ) then
																				{
       																					_plane animate ["warnlightlalt", 1];
																						_plane vehicleRadio "BWPH_bd5j_pull_up";
         																					sleep 2;
            																					_plane animate ["warnlightlalt", 0];
         																					sleep 2;
																				}
																				else	
																				{
       																					if ((_alt<650) and (_speed> 500) and (_speed<699) and _dive60 and _gearUp and _audio_on ) then
     																					{
																						_plane animate ["warnlightlalt", 1];
																						_plane vehicleRadio "BWPH_bd5j_pull_up";
																						sleep 2;
																						_plane animate ["warnlightlalt", 0];
																						sleep 2;
            																			}
      																					else							
     																					{
																						if ((_alt<900) and (_speed>700) and (_speed<899) and _dive60 and _gearUp and _audio_on ) then
																						{
																							_plane animate ["warnlightlalt", 1];
																							_plane vehicleRadio "BWPH_bd5j_pull_up";
																							sleep 2;
																							_plane animate ["warnlightlalt", 0];
																							sleep 2;
																						}
																						else							
																						{
																							if ((_alt<1000) and (_speed>900) and (_speed<1099) and _dive60 and _gearUp and _audio_on ) then
																							{
																								_plane animate ["warnlightlalt", 1];
																								_plane vehicleRadio "BWPH_bd5j_pull_up";
																								sleep 2;
																								_plane animate ["warnlightlalt", 0];
																								sleep 2;
																							}
																							else							
																							{
																								if ((_alt<1200) and (_speed>1100) and _dive60 and _gearUp and _audio_on ) then
																								{
																									_plane animate ["warnlightlalt", 1];
																									_plane vehicleRadio "BWPH_bd5j_pull_up";
																									sleep 2;
																									_plane animate ["warnlightlalt", 0];
																									sleep 2;
																								}
                                                                                              else							
																							 {	
																							 if (_alt>9950 and _audio_on ) then
																								{
																									_plane animate ["warnlighthalt", 1];
																									_plane vehicleRadio "BWPH_bd5j_high_alt";
																									sleep 3;
																									_plane animate ["warnlighthalt", 0];
																									sleep 3;
																							}
																							 else							

																							 {  
                                                                                                 if (_alt>1 and (_speed<125 ) and _gearUp and _audio_on ) then

																								{
																									_plane animate ["warnstall", 1];
																									_plane vehicleRadio "BWPH_bd5j_stall";
																									sleep 2;
																									_plane animate ["warnstall", 0];
																									sleep 2;
																						     	}
																								
					else							

				{  																			
					if ((_alt<25) and (_speed>300) and _gearUp and _audio_off ) then
				{
					_plane animate ["warnlightlalt", 1];
					sleep 2;
					_plane animate ["warnlightlalt", 0];
					sleep 2;
					
				}
				else			
				{
				
				if ((_alt<60) and (_speed>399) and (_speed<599) and _dive15 and _dive30a and _gearUp and _audio_off ) then
				{
					_plane animate ["warnlightlalt", 1];
					sleep 2;					
					_plane animate ["warnlightlalt", 0];
					sleep 2;
					
				}
				else			
				{
					
									if ((_alt<90) and (_speed>600) and (_speed<699) and _dive15 and _dive30a and _gearUp and _audio_off ) then
									{
										_plane animate ["warnlightlalt", 1];
										sleep 2;
										_plane animate ["warnlightlalt", 0];
										sleep 2;
									}
									else							
									{
										if ((_alt<160) and (_speed>700) and (_speed<899) and _dive15 and _dive30a and _gearUp and _audio_off ) then
										{
											_plane animate ["warnlightlalt", 1];
											sleep 2;
											_plane animate ["warnlightlalt", 0];
                                            sleep 2;											
										}
										else							
										{
											if ((_alt<200) and (_speed>900) and (_speed<1099) and _dive15 and _dive30a and _gearUp and _audio_off ) then
											{
												_plane animate ["warnlightlalt", 1];
												sleep 2;
												_plane animate ["warnlightlalt", 0];												
												sleep 2;
											}
											else							
											{
												if ((_alt<320) and (_speed>1100) and _dive15 and _dive30a and _gearUp and _audio_off ) then
												{
													_plane animate ["warnlightlalt", 1];
													sleep 2;
													_plane animate ["warnlightlalt", 0];
													sleep 2;
												}	
												else
												{
													if ((_alt<250) and (_speed>500) and (_speed>699) and _dive30 and _dive45a and _gearUp and _audio_off ) then
													{
														_plane animate ["warnlightlalt", 1];
														sleep 2;
														_plane animate ["warnlightlalt", 0];
														sleep 2;
													}
													else							
													{
														if ((_alt<350) and (_speed>700) and (_speed>899) and _dive30 and _dive45a and _gearUp and _audio_off ) then
														{					
															_plane animate ["warnlightlalt", 1];
															sleep 2;
															_plane animate ["warnlightlalt", 0];
															sleep 2;
														}
														else							
														{
															if ((_alt<410) and (_speed>900) and (_speed>1099) and _dive30 and _dive45a and _gearUp and _audio_off ) then
															{
																_plane animate ["warnlightlalt", 1];
																sleep 2;
																_plane animate ["warnlightlalt", 0];
																sleep 2;
															}
															else							
															{
																if ((_alt<500) and (_speed>1100) and _dive30 and _dive45a and _gearUp and _audio_off ) then
																{
																	_plane animate ["warnlightlalt", 1];
																	sleep 2;
																	_plane animate ["warnlightlalt", 0];
																	sleep 2;
																}
																else
																{
																	if ((_alt<300) and (_speed>500) and (_speed<699) and _dive45 and _dive60a and _gearUp and _audio_off ) then
																	{
																		_plane animate ["warnlightlalt", 1];
																		sleep 2;
																		_plane animate ["warnlightlalt", 0];
																		sleep 2;
																	}
																	else							
																	{
																		if ((_alt<400) and (_speed>700) and (_speed<899) and _dive45 and _dive60a and _gearUp and _audio_off ) then
																		{
																			_plane animate ["warnlightlalt", 1];
																			sleep 2;
																			_plane animate ["warnlightlalt", 0];
																			sleep 2;
																		}
																		else							
																		{
																			if ((_alt<600) and (_speed>900) and (_speed<1099) and _dive45 and _dive60a and _gearUp and _audio_off ) then
																			{
																				_plane animate ["warnlightlalt", 1];
																				sleep 2;
																				_plane animate ["warnlightlalt", 0];
																				sleep 2;
																			}
																			else							
																			{
																				if ((_alt<750) and (_speed>1100) and _dive45 and _dive60a and _gearUp and _audio_off ) then
																				{
       																					_plane animate ["warnlightlalt", 1];
         																					sleep 2;
            																					_plane animate ["warnlightlalt", 0];
         																					sleep 2;
																				}
																				else	
																				{
       																					if ((_alt<650) and (_speed> 500) and (_speed<699) and _dive60 and _gearUp and _audio_off ) then
     																					{
																						_plane animate ["warnlightlalt", 1];
																						sleep 2;
																						_plane animate ["warnlightlalt", 0];
																						sleep 2;
            																			}
      																					else							
     																					{
																						if ((_alt<900) and (_speed>700) and (_speed<899) and _dive60 and _gearUp and _audio_off ) then
																						{
																							_plane animate ["warnlightlalt", 1];
																							sleep 2;
																							_plane animate ["warnlightlalt", 0];
																							sleep 2;
																						}
																						else							
																						{
																							if ((_alt<1000) and (_speed>900) and (_speed<1099) and _dive60 and _gearUp and _audio_off ) then
																							{
																								_plane animate ["warnlightlalt", 1];
																								sleep 2;
																								_plane animate ["warnlightlalt", 0];
																								sleep 2;
																							}
																							else							
																							{
																								if ((_alt<1200) and (_speed>1100) and _dive60 and _gearUp and _audio_off ) then
																								{
																									_plane animate ["warnlightlalt", 1];
																									sleep 2;
																									_plane animate ["warnlightlalt", 0];
																									sleep 2;
																								}
                                                                                              else							
																							 {	
																							 if (_alt>9950 and _audio_off ) then
																								{
																									_plane animate ["warnlighthalt", 1];
																									sleep 3;
																									_plane animate ["warnlighthalt", 0];
																									sleep 3;
																							}
																							 else							

																							 {  
                                                                                                 if (_alt>1 and (_speed<125 ) and _gearUp and _audio_off ) then

																								{
																									_plane animate ["warnstall", 1];
																									sleep 2;
																									_plane animate ["warnstall", 0];
																									sleep 2;
																						     	}
											
       																				       };
																				       };
																			       };
																		       };
																	       };
																       };
															       };
														       };
													       };
												       };
											       };
										       };
									       };
								       };
							       };
						       };
					       };
				       };
			       };																							
											
       																				       };
																				       };
																			       };
																		       };
																	       };
																       };
															       };
														       };
													       };
												       };
											       };
										       };
									       };
								       };
							       };
						       };
					       };
				       };
			       };
	           };

};

	sleep 1;

