  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 7;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Experiment_AERO_pitch_channel_P)
    ;%
      section.nData     = 15;
      section.data(15)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_P.Dp
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_P.Dy
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channel_P.Jp
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channel_P.Jy
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channel_P.Kpp
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channel_P.Ksp
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Experiment_AERO_pitch_channel_P.PitchAxisEnable
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Experiment_AERO_pitch_channel_P.PitchMotorEnable
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channel_P.YawAxisEnable
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Experiment_AERO_pitch_channel_P.YawMotorEnable
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Experiment_AERO_pitch_channel_P.psi_dot_initial
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channel_P.psi_initial
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channel_P.theta_dot_initial
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Experiment_AERO_pitch_channel_P.theta_initial
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Experiment_AERO_pitch_channel_P.BaseLEDColour_color
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 14;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_P.HILRead_analog_channels
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_P.HILWrite_analog_channels
	  section.data(2).logicalSrcIdx = 16;
	  section.data(2).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channel_P.HILRead_digital_channels
	  section.data(3).logicalSrcIdx = 17;
	  section.data(3).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channel_P.HILWrite_digital_channels
	  section.data(4).logicalSrcIdx = 18;
	  section.data(4).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channel_P.HILRead_encoder_channels
	  section.data(5).logicalSrcIdx = 19;
	  section.data(5).dtTransOffset = 9;
	
	  ;% Experiment_AERO_pitch_channel_P.HILRead_other_channels
	  section.data(6).logicalSrcIdx = 20;
	  section.data(6).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channel_P.HILWrite_other_channels
	  section.data(7).logicalSrcIdx = 21;
	  section.data(7).dtTransOffset = 19;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 68;
      section.data(68)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_P.noinput_Value
	  section.data(1).logicalSrcIdx = 22;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_P.Yawcmdlimit24V_UpperSat
	  section.data(2).logicalSrcIdx = 23;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channel_P.Yawcmdlimit24V_LowerSat
	  section.data(3).logicalSrcIdx = 24;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V1_UpperSat
	  section.data(4).logicalSrcIdx = 25;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V1_LowerSat
	  section.data(5).logicalSrcIdx = 26;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V_UpperSat
	  section.data(6).logicalSrcIdx = 27;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V_LowerSat
	  section.data(7).logicalSrcIdx = 28;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOTerminate
	  section.data(8).logicalSrcIdx = 29;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOExit
	  section.data(9).logicalSrcIdx = 30;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOStart
	  section.data(10).logicalSrcIdx = 31;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOEnter
	  section.data(11).logicalSrcIdx = 32;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOFinal
	  section.data(12).logicalSrcIdx = 33;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOFinal
	  section.data(13).logicalSrcIdx = 34;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AIHigh
	  section.data(14).logicalSrcIdx = 35;
	  section.data(14).dtTransOffset = 15;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AILow
	  section.data(15).logicalSrcIdx = 36;
	  section.data(15).dtTransOffset = 16;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOHigh
	  section.data(16).logicalSrcIdx = 37;
	  section.data(16).dtTransOffset = 17;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOLow
	  section.data(17).logicalSrcIdx = 38;
	  section.data(17).dtTransOffset = 18;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOInitial
	  section.data(18).logicalSrcIdx = 39;
	  section.data(18).dtTransOffset = 19;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOWatchdog
	  section.data(19).logicalSrcIdx = 40;
	  section.data(19).dtTransOffset = 20;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOInitial
	  section.data(20).logicalSrcIdx = 41;
	  section.data(20).dtTransOffset = 21;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOWatchdog
	  section.data(21).logicalSrcIdx = 42;
	  section.data(21).dtTransOffset = 24;
	
	  ;% Experiment_AERO_pitch_channel_P.GyroCalibration_Gain
	  section.data(22).logicalSrcIdx = 43;
	  section.data(22).dtTransOffset = 27;
	
	  ;% Experiment_AERO_pitch_channel_P.Pitchcountstodeg_Gain
	  section.data(23).logicalSrcIdx = 44;
	  section.data(23).dtTransOffset = 30;
	
	  ;% Experiment_AERO_pitch_channel_P.sint_Amp
	  section.data(24).logicalSrcIdx = 45;
	  section.data(24).dtTransOffset = 31;
	
	  ;% Experiment_AERO_pitch_channel_P.sint_Bias
	  section.data(25).logicalSrcIdx = 46;
	  section.data(25).dtTransOffset = 32;
	
	  ;% Experiment_AERO_pitch_channel_P.sint_Freq
	  section.data(26).logicalSrcIdx = 47;
	  section.data(26).dtTransOffset = 33;
	
	  ;% Experiment_AERO_pitch_channel_P.sint_Phase
	  section.data(27).logicalSrcIdx = 48;
	  section.data(27).dtTransOffset = 34;
	
	  ;% Experiment_AERO_pitch_channel_P.c2_Gain
	  section.data(28).logicalSrcIdx = 49;
	  section.data(28).dtTransOffset = 35;
	
	  ;% Experiment_AERO_pitch_channel_P.cost_Amp
	  section.data(29).logicalSrcIdx = 50;
	  section.data(29).dtTransOffset = 36;
	
	  ;% Experiment_AERO_pitch_channel_P.cost_Bias
	  section.data(30).logicalSrcIdx = 51;
	  section.data(30).dtTransOffset = 37;
	
	  ;% Experiment_AERO_pitch_channel_P.cost_Freq
	  section.data(31).logicalSrcIdx = 52;
	  section.data(31).dtTransOffset = 38;
	
	  ;% Experiment_AERO_pitch_channel_P.cost_Phase
	  section.data(32).logicalSrcIdx = 53;
	  section.data(32).dtTransOffset = 39;
	
	  ;% Experiment_AERO_pitch_channel_P.c2_Gain_n
	  section.data(33).logicalSrcIdx = 54;
	  section.data(33).dtTransOffset = 40;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain2_Gain
	  section.data(34).logicalSrcIdx = 55;
	  section.data(34).dtTransOffset = 41;
	
	  ;% Experiment_AERO_pitch_channel_P.c_Value
	  section.data(35).logicalSrcIdx = 56;
	  section.data(35).dtTransOffset = 42;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain5_Gain
	  section.data(36).logicalSrcIdx = 57;
	  section.data(36).dtTransOffset = 43;
	
	  ;% Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V2_UpperSat
	  section.data(37).logicalSrcIdx = 58;
	  section.data(37).dtTransOffset = 44;
	
	  ;% Experiment_AERO_pitch_channel_P.Pitchcmdlimit24V2_LowerSat
	  section.data(38).logicalSrcIdx = 59;
	  section.data(38).dtTransOffset = 45;
	
	  ;% Experiment_AERO_pitch_channel_P.a_Value
	  section.data(39).logicalSrcIdx = 60;
	  section.data(39).dtTransOffset = 46;
	
	  ;% Experiment_AERO_pitch_channel_P.b_Value
	  section.data(40).logicalSrcIdx = 61;
	  section.data(40).dtTransOffset = 47;
	
	  ;% Experiment_AERO_pitch_channel_P.c_Value_n
	  section.data(41).logicalSrcIdx = 62;
	  section.data(41).dtTransOffset = 48;
	
	  ;% Experiment_AERO_pitch_channel_P.d_Value
	  section.data(42).logicalSrcIdx = 63;
	  section.data(42).dtTransOffset = 49;
	
	  ;% Experiment_AERO_pitch_channel_P.u0Vifnotenabled_Value
	  section.data(43).logicalSrcIdx = 64;
	  section.data(43).dtTransOffset = 50;
	
	  ;% Experiment_AERO_pitch_channel_P.Switch_Threshold
	  section.data(44).logicalSrcIdx = 65;
	  section.data(44).dtTransOffset = 51;
	
	  ;% Experiment_AERO_pitch_channel_P.Switch1_Threshold
	  section.data(45).logicalSrcIdx = 66;
	  section.data(45).dtTransOffset = 52;
	
	  ;% Experiment_AERO_pitch_channel_P.PitchMotorEnable_Value
	  section.data(46).logicalSrcIdx = 67;
	  section.data(46).dtTransOffset = 53;
	
	  ;% Experiment_AERO_pitch_channel_P.YawEnableMotor_Value
	  section.data(47).logicalSrcIdx = 68;
	  section.data(47).dtTransOffset = 54;
	
	  ;% Experiment_AERO_pitch_channel_P.Integrator_IC
	  section.data(48).logicalSrcIdx = 69;
	  section.data(48).dtTransOffset = 55;
	
	  ;% Experiment_AERO_pitch_channel_P.HPF_A
	  section.data(49).logicalSrcIdx = 70;
	  section.data(49).dtTransOffset = 56;
	
	  ;% Experiment_AERO_pitch_channel_P.HPF_C
	  section.data(50).logicalSrcIdx = 71;
	  section.data(50).dtTransOffset = 57;
	
	  ;% Experiment_AERO_pitch_channel_P.HPF_D
	  section.data(51).logicalSrcIdx = 72;
	  section.data(51).dtTransOffset = 58;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain_Gain
	  section.data(52).logicalSrcIdx = 73;
	  section.data(52).dtTransOffset = 59;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain3_Gain
	  section.data(53).logicalSrcIdx = 74;
	  section.data(53).dtTransOffset = 60;
	
	  ;% Experiment_AERO_pitch_channel_P.notenable_Value
	  section.data(54).logicalSrcIdx = 75;
	  section.data(54).dtTransOffset = 61;
	
	  ;% Experiment_AERO_pitch_channel_P.Switch_Threshold_c
	  section.data(55).logicalSrcIdx = 76;
	  section.data(55).dtTransOffset = 62;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain1_Gain
	  section.data(56).logicalSrcIdx = 77;
	  section.data(56).dtTransOffset = 63;
	
	  ;% Experiment_AERO_pitch_channel_P.Constant1_Value
	  section.data(57).logicalSrcIdx = 78;
	  section.data(57).dtTransOffset = 64;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain4_Gain
	  section.data(58).logicalSrcIdx = 79;
	  section.data(58).dtTransOffset = 65;
	
	  ;% Experiment_AERO_pitch_channel_P.Switch1_Threshold_c
	  section.data(59).logicalSrcIdx = 80;
	  section.data(59).dtTransOffset = 66;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain_Gain_l
	  section.data(60).logicalSrcIdx = 81;
	  section.data(60).dtTransOffset = 67;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain_Gain_d
	  section.data(61).logicalSrcIdx = 82;
	  section.data(61).dtTransOffset = 68;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain_Gain_g
	  section.data(62).logicalSrcIdx = 83;
	  section.data(62).dtTransOffset = 69;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain_Gain_k
	  section.data(63).logicalSrcIdx = 84;
	  section.data(63).dtTransOffset = 70;
	
	  ;% Experiment_AERO_pitch_channel_P.Gain_Gain_h
	  section.data(64).logicalSrcIdx = 85;
	  section.data(64).dtTransOffset = 71;
	
	  ;% Experiment_AERO_pitch_channel_P.u_Gain
	  section.data(65).logicalSrcIdx = 86;
	  section.data(65).dtTransOffset = 72;
	
	  ;% Experiment_AERO_pitch_channel_P.u_Gain_b
	  section.data(66).logicalSrcIdx = 87;
	  section.data(66).dtTransOffset = 73;
	
	  ;% Experiment_AERO_pitch_channel_P.modeluncertainty_Gain
	  section.data(67).logicalSrcIdx = 88;
	  section.data(67).dtTransOffset = 74;
	
	  ;% Experiment_AERO_pitch_channel_P.taoyuncontrolled_Value
	  section.data(68).logicalSrcIdx = 89;
	  section.data(68).dtTransOffset = 75;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_CKChannels
	  section.data(1).logicalSrcIdx = 90;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOWatchdog
	  section.data(2).logicalSrcIdx = 91;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_EIInitial
	  section.data(3).logicalSrcIdx = 92;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(4) = section;
      clear section
      
      section.nData     = 20;
      section.data(20)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AIChannels
	  section.data(1).logicalSrcIdx = 93;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOChannels
	  section.data(2).logicalSrcIdx = 94;
	  section.data(2).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOChannels
	  section.data(3).logicalSrcIdx = 95;
	  section.data(3).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_EIChannels
	  section.data(4).logicalSrcIdx = 96;
	  section.data(4).dtTransOffset = 6;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_EIQuadrature
	  section.data(5).logicalSrcIdx = 97;
	  section.data(5).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOChannels
	  section.data(6).logicalSrcIdx = 98;
	  section.data(6).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile_Decimation
	  section.data(7).logicalSrcIdx = 99;
	  section.data(7).dtTransOffset = 14;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile_BitRate
	  section.data(8).logicalSrcIdx = 100;
	  section.data(8).dtTransOffset = 15;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile1_Decimation
	  section.data(9).logicalSrcIdx = 101;
	  section.data(9).dtTransOffset = 16;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile1_BitRate
	  section.data(10).logicalSrcIdx = 102;
	  section.data(10).dtTransOffset = 17;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile2_Decimation
	  section.data(11).logicalSrcIdx = 103;
	  section.data(11).dtTransOffset = 18;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile2_BitRate
	  section.data(12).logicalSrcIdx = 104;
	  section.data(12).dtTransOffset = 19;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile4_Decimation
	  section.data(13).logicalSrcIdx = 105;
	  section.data(13).dtTransOffset = 20;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile4_BitRate
	  section.data(14).logicalSrcIdx = 106;
	  section.data(14).dtTransOffset = 21;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile5_Decimation
	  section.data(15).logicalSrcIdx = 107;
	  section.data(15).dtTransOffset = 22;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile5_BitRate
	  section.data(16).logicalSrcIdx = 108;
	  section.data(16).dtTransOffset = 23;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile6_Decimation
	  section.data(17).logicalSrcIdx = 109;
	  section.data(17).dtTransOffset = 24;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile6_BitRate
	  section.data(18).logicalSrcIdx = 110;
	  section.data(18).dtTransOffset = 25;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile8_Decimation
	  section.data(19).logicalSrcIdx = 111;
	  section.data(19).dtTransOffset = 26;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile8_BitRate
	  section.data(20).logicalSrcIdx = 112;
	  section.data(20).dtTransOffset = 27;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(5) = section;
      clear section
      
      section.nData     = 37;
      section.data(37)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_Active
	  section.data(1).logicalSrcIdx = 113;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOTerminate
	  section.data(2).logicalSrcIdx = 114;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOExit
	  section.data(3).logicalSrcIdx = 115;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOTerminate
	  section.data(4).logicalSrcIdx = 116;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOExit
	  section.data(5).logicalSrcIdx = 117;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_POTerminate
	  section.data(6).logicalSrcIdx = 118;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_POExit
	  section.data(7).logicalSrcIdx = 119;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_CKPStart
	  section.data(8).logicalSrcIdx = 120;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_CKPEnter
	  section.data(9).logicalSrcIdx = 121;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_CKStart
	  section.data(10).logicalSrcIdx = 122;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_CKEnter
	  section.data(11).logicalSrcIdx = 123;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AIPStart
	  section.data(12).logicalSrcIdx = 124;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AIPEnter
	  section.data(13).logicalSrcIdx = 125;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOPStart
	  section.data(14).logicalSrcIdx = 126;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOPEnter
	  section.data(15).logicalSrcIdx = 127;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOStart
	  section.data(16).logicalSrcIdx = 128;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOEnter
	  section.data(17).logicalSrcIdx = 129;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_AOReset
	  section.data(18).logicalSrcIdx = 130;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOPStart
	  section.data(19).logicalSrcIdx = 131;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOPEnter
	  section.data(20).logicalSrcIdx = 132;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOStart
	  section.data(21).logicalSrcIdx = 133;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOEnter
	  section.data(22).logicalSrcIdx = 134;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOReset
	  section.data(23).logicalSrcIdx = 135;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_EIPStart
	  section.data(24).logicalSrcIdx = 136;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_EIPEnter
	  section.data(25).logicalSrcIdx = 137;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_EIStart
	  section.data(26).logicalSrcIdx = 138;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_EIEnter
	  section.data(27).logicalSrcIdx = 139;
	  section.data(27).dtTransOffset = 26;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_POPStart
	  section.data(28).logicalSrcIdx = 140;
	  section.data(28).dtTransOffset = 27;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_POPEnter
	  section.data(29).logicalSrcIdx = 141;
	  section.data(29).dtTransOffset = 28;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_POStart
	  section.data(30).logicalSrcIdx = 142;
	  section.data(30).dtTransOffset = 29;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_POEnter
	  section.data(31).logicalSrcIdx = 143;
	  section.data(31).dtTransOffset = 30;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_POReset
	  section.data(32).logicalSrcIdx = 144;
	  section.data(32).dtTransOffset = 31;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_OOReset
	  section.data(33).logicalSrcIdx = 145;
	  section.data(33).dtTransOffset = 32;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOFinal
	  section.data(34).logicalSrcIdx = 146;
	  section.data(34).dtTransOffset = 33;
	
	  ;% Experiment_AERO_pitch_channel_P.HILInitialize_DOInitial
	  section.data(35).logicalSrcIdx = 147;
	  section.data(35).dtTransOffset = 34;
	
	  ;% Experiment_AERO_pitch_channel_P.HILRead_Active
	  section.data(36).logicalSrcIdx = 148;
	  section.data(36).dtTransOffset = 35;
	
	  ;% Experiment_AERO_pitch_channel_P.HILWrite_Active
	  section.data(37).logicalSrcIdx = 149;
	  section.data(37).dtTransOffset = 36;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(6) = section;
      clear section
      
      section.nData     = 22;
      section.data(22)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_P.ManualSwitch3_CurrentSetting
	  section.data(1).logicalSrcIdx = 150;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile_file_name
	  section.data(2).logicalSrcIdx = 151;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile_VarName
	  section.data(3).logicalSrcIdx = 152;
	  section.data(3).dtTransOffset = 29;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile_FileFormat
	  section.data(4).logicalSrcIdx = 153;
	  section.data(4).dtTransOffset = 53;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile1_file_name
	  section.data(5).logicalSrcIdx = 154;
	  section.data(5).dtTransOffset = 54;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile1_VarName
	  section.data(6).logicalSrcIdx = 155;
	  section.data(6).dtTransOffset = 75;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile1_FileFormat
	  section.data(7).logicalSrcIdx = 156;
	  section.data(7).dtTransOffset = 92;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile2_file_name
	  section.data(8).logicalSrcIdx = 157;
	  section.data(8).dtTransOffset = 93;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile2_VarName
	  section.data(9).logicalSrcIdx = 158;
	  section.data(9).dtTransOffset = 116;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile2_FileFormat
	  section.data(10).logicalSrcIdx = 159;
	  section.data(10).dtTransOffset = 135;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile4_file_name
	  section.data(11).logicalSrcIdx = 160;
	  section.data(11).dtTransOffset = 136;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile4_VarName
	  section.data(12).logicalSrcIdx = 161;
	  section.data(12).dtTransOffset = 158;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile4_FileFormat
	  section.data(13).logicalSrcIdx = 162;
	  section.data(13).dtTransOffset = 176;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile5_file_name
	  section.data(14).logicalSrcIdx = 163;
	  section.data(14).dtTransOffset = 177;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile5_VarName
	  section.data(15).logicalSrcIdx = 164;
	  section.data(15).dtTransOffset = 198;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile5_FileFormat
	  section.data(16).logicalSrcIdx = 165;
	  section.data(16).dtTransOffset = 215;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile6_file_name
	  section.data(17).logicalSrcIdx = 166;
	  section.data(17).dtTransOffset = 216;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile6_VarName
	  section.data(18).logicalSrcIdx = 167;
	  section.data(18).dtTransOffset = 243;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile6_FileFormat
	  section.data(19).logicalSrcIdx = 168;
	  section.data(19).dtTransOffset = 266;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile8_file_name
	  section.data(20).logicalSrcIdx = 169;
	  section.data(20).dtTransOffset = 267;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile8_VarName
	  section.data(21).logicalSrcIdx = 170;
	  section.data(21).dtTransOffset = 288;
	
	  ;% Experiment_AERO_pitch_channel_P.ToHostFile8_FileFormat
	  section.data(22).logicalSrcIdx = 171;
	  section.data(22).dtTransOffset = 305;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(7) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Experiment_AERO_pitch_channel_B)
    ;%
      section.nData     = 35;
      section.data(35)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channel_B.HILRead_o1
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channel_B.HILRead_o8
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channel_B.HILRead_o13
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channel_B.HILRead_o15
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channel_B.GyroCalibration
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channel_B.Pitchcountstodeg
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain2
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 8;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain5
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 9;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum2
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channel_B.Switch
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channel_B.PitchaxisEnable
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 12;
	
	  ;% Experiment_AERO_pitch_channel_B.YawaxisEnable
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 13;
	
	  ;% Experiment_AERO_pitch_channel_B.Integrator
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 14;
	
	  ;% Experiment_AERO_pitch_channel_B.TrigonometricFunction
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 15;
	
	  ;% Experiment_AERO_pitch_channel_B.Integrator2
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 16;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum1
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 17;
	
	  ;% Experiment_AERO_pitch_channel_B.Integrator3
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 18;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain3
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 19;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 20;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum4
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 21;
	
	  ;% Experiment_AERO_pitch_channel_B.Switch_m
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 22;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain4
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 23;
	
	  ;% Experiment_AERO_pitch_channel_B.Sum1_k
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 24;
	
	  ;% Experiment_AERO_pitch_channel_B.theta_dot
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 25;
	
	  ;% Experiment_AERO_pitch_channel_B.Switch1
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 26;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 27;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain_h
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 30;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain_n
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 31;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain_j
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 38;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain_hk
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 41;
	
	  ;% Experiment_AERO_pitch_channel_B.u
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 42;
	
	  ;% Experiment_AERO_pitch_channel_B.u_o
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 43;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain2_p
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 44;
	
	  ;% Experiment_AERO_pitch_channel_B.psi_dot
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 45;
	
	  ;% Experiment_AERO_pitch_channel_B.Gain7
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 46;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 9;
    sectIdxOffset = 1;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (Experiment_AERO_pitch_channe_DW)
    ;%
      section.nData     = 10;
      section.data(10)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_AIMinimums
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_AIMaximums
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_AOMinimums
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_AOMaximums
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 6;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_AOVoltages
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 8;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_FilterFrequency
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILRead_AnalogBuffer
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 14;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILRead_OtherBuffer
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 16;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILWrite_AnalogBuffer
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 24;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILWrite_OtherBuffer
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 26;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 7;
      section.data(7)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile_PointsWritten
	  section.data(1).logicalSrcIdx = 10;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile1_PointsWritten
	  section.data(2).logicalSrcIdx = 11;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile2_PointsWritten
	  section.data(3).logicalSrcIdx = 12;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile4_PointsWritten
	  section.data(4).logicalSrcIdx = 13;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile5_PointsWritten
	  section.data(5).logicalSrcIdx = 14;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile6_PointsWritten
	  section.data(6).logicalSrcIdx = 15;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile8_PointsWritten
	  section.data(7).logicalSrcIdx = 16;
	  section.data(7).dtTransOffset = 6;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_Card
	  section.data(1).logicalSrcIdx = 17;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 27;
      section.data(27)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.HILRead_PWORK
	  section.data(1).logicalSrcIdx = 18;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILWrite_PWORK
	  section.data(2).logicalSrcIdx = 19;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channe_DW.Current_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 20;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channe_DW.PitchMoment_PWORK.LoggedData
	  section.data(4).logicalSrcIdx = 21;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channe_DW.PitchMotorV_PWORK.LoggedData
	  section.data(5).logicalSrcIdx = 22;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channe_DW.PitchSpeedrads_PWORK.LoggedData
	  section.data(6).logicalSrcIdx = 23;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile_PWORK
	  section.data(7).logicalSrcIdx = 24;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile1_PWORK
	  section.data(8).logicalSrcIdx = 25;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile2_PWORK
	  section.data(9).logicalSrcIdx = 26;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile4_PWORK
	  section.data(10).logicalSrcIdx = 27;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile5_PWORK
	  section.data(11).logicalSrcIdx = 28;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile6_PWORK
	  section.data(12).logicalSrcIdx = 29;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile8_PWORK
	  section.data(13).logicalSrcIdx = 30;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Experiment_AERO_pitch_channe_DW.filteredacc_PWORK.LoggedData
	  section.data(14).logicalSrcIdx = 31;
	  section.data(14).dtTransOffset = 13;
	
	  ;% Experiment_AERO_pitch_channe_DW.tach_PWORK.LoggedData
	  section.data(15).logicalSrcIdx = 32;
	  section.data(15).dtTransOffset = 14;
	
	  ;% Experiment_AERO_pitch_channe_DW.thetadeg1_PWORK.LoggedData
	  section.data(16).logicalSrcIdx = 33;
	  section.data(16).dtTransOffset = 15;
	
	  ;% Experiment_AERO_pitch_channe_DW.thetarad_PWORK.LoggedData
	  section.data(17).logicalSrcIdx = 34;
	  section.data(17).dtTransOffset = 16;
	
	  ;% Experiment_AERO_pitch_channe_DW.thetadotmeasurementsdeg1_PWORK.LoggedData
	  section.data(18).logicalSrcIdx = 35;
	  section.data(18).dtTransOffset = 17;
	
	  ;% Experiment_AERO_pitch_channe_DW.thetameasurementsdeg_PWORK.LoggedData
	  section.data(19).logicalSrcIdx = 36;
	  section.data(19).dtTransOffset = 18;
	
	  ;% Experiment_AERO_pitch_channe_DW.thetameasurementsrad_PWORK.LoggedData
	  section.data(20).logicalSrcIdx = 37;
	  section.data(20).dtTransOffset = 19;
	
	  ;% Experiment_AERO_pitch_channe_DW.theta_dotdegs_PWORK.LoggedData
	  section.data(21).logicalSrcIdx = 38;
	  section.data(21).dtTransOffset = 20;
	
	  ;% Experiment_AERO_pitch_channe_DW.theta_dotrads1_PWORK.LoggedData
	  section.data(22).logicalSrcIdx = 39;
	  section.data(22).dtTransOffset = 21;
	
	  ;% Experiment_AERO_pitch_channe_DW.theta_tildedeg_PWORK.LoggedData
	  section.data(23).logicalSrcIdx = 40;
	  section.data(23).dtTransOffset = 22;
	
	  ;% Experiment_AERO_pitch_channe_DW.xacc_PWORK.LoggedData
	  section.data(24).logicalSrcIdx = 41;
	  section.data(24).dtTransOffset = 23;
	
	  ;% Experiment_AERO_pitch_channe_DW.zacc_PWORK.LoggedData
	  section.data(25).logicalSrcIdx = 42;
	  section.data(25).dtTransOffset = 24;
	
	  ;% Experiment_AERO_pitch_channe_DW.tau_d1_PWORK.LoggedData
	  section.data(26).logicalSrcIdx = 43;
	  section.data(26).dtTransOffset = 25;
	
	  ;% Experiment_AERO_pitch_channe_DW.tau_d2_PWORK.LoggedData
	  section.data(27).logicalSrcIdx = 44;
	  section.data(27).dtTransOffset = 26;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_ClockModes
	  section.data(1).logicalSrcIdx = 45;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_DOStates
	  section.data(2).logicalSrcIdx = 46;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_QuadratureModes
	  section.data(3).logicalSrcIdx = 47;
	  section.data(3).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_InitialEICounts
	  section.data(4).logicalSrcIdx = 48;
	  section.data(4).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILRead_EncoderBuffer
	  section.data(5).logicalSrcIdx = 49;
	  section.data(5).dtTransOffset = 11;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 14;
      section.data(14)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile_SamplesCount
	  section.data(1).logicalSrcIdx = 50;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile_ArrayNameLength
	  section.data(2).logicalSrcIdx = 51;
	  section.data(2).dtTransOffset = 1;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile1_SamplesCount
	  section.data(3).logicalSrcIdx = 52;
	  section.data(3).dtTransOffset = 2;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile1_ArrayNameLength
	  section.data(4).logicalSrcIdx = 53;
	  section.data(4).dtTransOffset = 3;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile2_SamplesCount
	  section.data(5).logicalSrcIdx = 54;
	  section.data(5).dtTransOffset = 4;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile2_ArrayNameLength
	  section.data(6).logicalSrcIdx = 55;
	  section.data(6).dtTransOffset = 5;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile4_SamplesCount
	  section.data(7).logicalSrcIdx = 56;
	  section.data(7).dtTransOffset = 6;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile4_ArrayNameLength
	  section.data(8).logicalSrcIdx = 57;
	  section.data(8).dtTransOffset = 7;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile5_SamplesCount
	  section.data(9).logicalSrcIdx = 58;
	  section.data(9).dtTransOffset = 8;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile5_ArrayNameLength
	  section.data(10).logicalSrcIdx = 59;
	  section.data(10).dtTransOffset = 9;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile6_SamplesCount
	  section.data(11).logicalSrcIdx = 60;
	  section.data(11).dtTransOffset = 10;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile6_ArrayNameLength
	  section.data(12).logicalSrcIdx = 61;
	  section.data(12).dtTransOffset = 11;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile8_SamplesCount
	  section.data(13).logicalSrcIdx = 62;
	  section.data(13).dtTransOffset = 12;
	
	  ;% Experiment_AERO_pitch_channe_DW.ToHostFile8_ArrayNameLength
	  section.data(14).logicalSrcIdx = 63;
	  section.data(14).dtTransOffset = 13;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.Integrator2_IWORK
	  section.data(1).logicalSrcIdx = 64;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channe_DW.Integrator3_IWORK
	  section.data(2).logicalSrcIdx = 65;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.HILInitialize_DOBits
	  section.data(1).logicalSrcIdx = 66;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% Experiment_AERO_pitch_channe_DW.HILRead_DigitalBuffer
	  section.data(1).logicalSrcIdx = 67;
	  section.data(1).dtTransOffset = 0;
	
	  ;% Experiment_AERO_pitch_channe_DW.HILWrite_DigitalBuffer
	  section.data(2).logicalSrcIdx = 68;
	  section.data(2).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(9) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 705763401;
  targMap.checksum1 = 2897102011;
  targMap.checksum2 = 2978067022;
  targMap.checksum3 = 3762306955;

