/*
 * Experiment_AERO_pitch_channel_identification_dt.h
 *
 * Code generation for model "Experiment_AERO_pitch_channel_identification".
 *
 * Model version              : 1.305
 * Simulink Coder version : 8.14 (R2018a) 06-Feb-2018
 * C source code generated on : Sat Apr 11 15:39:09 2020
 *
 * Target selection: quarc_win64.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: 32-bit Generic
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(t_uint64),
  sizeof(t_card),
  sizeof(t_boolean)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "t_uint64",
  "t_card",
  "t_boolean"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&Experiment_AERO_pitch_channel_B.HILRead_o1), 0, 0, 47 }
  ,

  { (char_T *)(&Experiment_AERO_pitch_channe_DW.HILInitialize_AIMinimums[0]), 0,
    0, 29 },

  { (char_T *)(&Experiment_AERO_pitch_channe_DW.ToHostFile_PointsWritten), 14, 0,
    7 },

  { (char_T *)(&Experiment_AERO_pitch_channe_DW.HILInitialize_Card), 15, 0, 1 },

  { (char_T *)(&Experiment_AERO_pitch_channe_DW.HILRead_PWORK), 11, 0, 27 },

  { (char_T *)(&Experiment_AERO_pitch_channe_DW.HILInitialize_ClockModes), 6, 0,
    13 },

  { (char_T *)(&Experiment_AERO_pitch_channe_DW.ToHostFile_SamplesCount), 7, 0,
    14 },

  { (char_T *)(&Experiment_AERO_pitch_channe_DW.Integrator2_IWORK), 10, 0, 2 },

  { (char_T *)(&Experiment_AERO_pitch_channe_DW.HILInitialize_DOBits[0]), 8, 0,
    2 },

  { (char_T *)(&Experiment_AERO_pitch_channe_DW.HILRead_DigitalBuffer[0]), 16, 0,
    5 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  10U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&Experiment_AERO_pitch_channel_P.Dp), 0, 0, 17 },

  { (char_T *)(&Experiment_AERO_pitch_channel_P.HILRead_analog_channels[0]), 7,
    0, 22 },

  { (char_T *)(&Experiment_AERO_pitch_channel_P.noinput_Value), 0, 0, 76 },

  { (char_T *)(&Experiment_AERO_pitch_channel_P.HILInitialize_CKChannels), 6, 0,
    3 },

  { (char_T *)(&Experiment_AERO_pitch_channel_P.HILInitialize_AIChannels[0]), 7,
    0, 28 },

  { (char_T *)(&Experiment_AERO_pitch_channel_P.HILInitialize_Active), 8, 0, 37
  },

  { (char_T *)(&Experiment_AERO_pitch_channel_P.ManualSwitch3_CurrentSetting), 3,
    0, 306 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  7U,
  rtPTransitions
};

/* [EOF] Experiment_AERO_pitch_channel_identification_dt.h */
