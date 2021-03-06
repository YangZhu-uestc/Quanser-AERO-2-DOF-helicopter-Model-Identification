/*
 * Experiment_AERO_pitch_channel_identification_data.c
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

#include "Experiment_AERO_pitch_channel_identification.h"
#include "Experiment_AERO_pitch_channel_identification_private.h"

/* Block parameters (default storage) */
P_Experiment_AERO_pitch_chann_T Experiment_AERO_pitch_channel_P = {
  /* Variable: Dp
   * Referenced by:
   *   '<S2>/Gain1'
   *   '<S11>/Dp'
   */
  0.0056,

  /* Variable: Dy
   * Referenced by: '<S2>/Gain6'
   */
  0.022,

  /* Variable: Jp
   * Referenced by:
   *   '<S2>/Gain2'
   *   '<S11>/Ksp-Jp'
   */
  0.021886864828333335,

  /* Variable: Jy
   * Referenced by: '<S2>/Gain7'
   */
  0.021992064828333335,

  /* Variable: Kpp
   * Referenced by: '<S1>/Kpp'
   */
  0.00109,

  /* Variable: Ksp
   * Referenced by:
   *   '<S2>/Gain'
   *   '<S11>/Ksp-Jp'
   *   '<S12>/Ksp'
   */
  0.09,

  /* Variable: PitchAxisEnable
   * Referenced by: '<S2>/Pitch axis Enable'
   */
  1.0,

  /* Variable: PitchMotorEnable
   * Referenced by: '<S1>/Pitch Motor Enable'
   */
  1.0,

  /* Variable: YawAxisEnable
   * Referenced by: '<S2>/Yaw axis Enable'
   */
  0.0,

  /* Variable: YawMotorEnable
   * Referenced by: '<S1>/Yaw Enable Motor'
   */
  0.0,

  /* Variable: psi_dot_initial
   * Referenced by: '<S2>/psi_dot'
   */
  0.0,

  /* Variable: psi_initial
   * Referenced by: '<S2>/psi'
   */
  0.0,

  /* Variable: theta_dot_initial
   * Referenced by: '<S2>/theta_dot'
   */
  0.0,

  /* Variable: theta_initial
   * Referenced by: '<S2>/theta'
   */
  0.0,

  /* Mask Parameter: BaseLEDColour_color
   * Referenced by: '<S10>/Constant'
   */
  { 0.0, 1.0, 0.0 },

  /* Mask Parameter: HILRead_analog_channels
   * Referenced by: '<S3>/HIL Read'
   */
  { 0U, 1U },

  /* Mask Parameter: HILWrite_analog_channels
   * Referenced by: '<S3>/HIL Write'
   */
  { 0U, 1U },

  /* Mask Parameter: HILRead_digital_channels
   * Referenced by: '<S3>/HIL Read'
   */
  { 0U, 1U, 2U },

  /* Mask Parameter: HILWrite_digital_channels
   * Referenced by: '<S3>/HIL Write'
   */
  { 0U, 1U },

  /* Mask Parameter: HILRead_encoder_channels
   * Referenced by: '<S3>/HIL Read'
   */
  { 2U, 3U },

  /* Mask Parameter: HILRead_other_channels
   * Referenced by: '<S3>/HIL Read'
   */
  { 14000U, 14001U, 3000U, 3001U, 3002U, 4000U, 4001U, 4002U },

  /* Mask Parameter: HILWrite_other_channels
   * Referenced by: '<S3>/HIL Write'
   */
  { 11000U, 11001U, 11002U },

  /* Expression: 0
   * Referenced by: '<S1>/no input'
   */
  0.0,

  /* Expression: 24
   * Referenced by: '<S1>/Yaw cmd limit: +//- 24V'
   */
  24.0,

  /* Expression: -24
   * Referenced by: '<S1>/Yaw cmd limit: +//- 24V'
   */
  -24.0,

  /* Expression: 24
   * Referenced by: '<S1>/Pitch cmd limit: +//- 24V1'
   */
  24.0,

  /* Expression: 0
   * Referenced by: '<S1>/Pitch cmd limit: +//- 24V1'
   */
  0.0,

  /* Expression: 24
   * Referenced by: '<S1>/Pitch cmd limit: +//- 24V'
   */
  24.0,

  /* Expression: -24
   * Referenced by: '<S1>/Pitch cmd limit: +//- 24V'
   */
  -24.0,

  /* Expression: set_other_outputs_at_terminate
   * Referenced by: '<S3>/HIL Initialize'
   */
  1.0,

  /* Expression: set_other_outputs_at_switch_out
   * Referenced by: '<S3>/HIL Initialize'
   */
  0.0,

  /* Expression: set_other_outputs_at_start
   * Referenced by: '<S3>/HIL Initialize'
   */
  1.0,

  /* Expression: set_other_outputs_at_switch_in
   * Referenced by: '<S3>/HIL Initialize'
   */
  0.0,

  /* Expression: final_analog_outputs
   * Referenced by: '<S3>/HIL Initialize'
   */
  0.0,

  /* Expression: final_other_outputs
   * Referenced by: '<S3>/HIL Initialize'
   */
  { 1.0, 0.0, 0.0 },

  /* Expression: analog_input_maximums
   * Referenced by: '<S3>/HIL Initialize'
   */
  3.0,

  /* Expression: analog_input_minimums
   * Referenced by: '<S3>/HIL Initialize'
   */
  -3.0,

  /* Expression: analog_output_maximums
   * Referenced by: '<S3>/HIL Initialize'
   */
  24.0,

  /* Expression: analog_output_minimums
   * Referenced by: '<S3>/HIL Initialize'
   */
  -24.0,

  /* Expression: initial_analog_outputs
   * Referenced by: '<S3>/HIL Initialize'
   */
  0.0,

  /* Expression: watchdog_analog_outputs
   * Referenced by: '<S3>/HIL Initialize'
   */
  0.0,

  /* Expression: initial_other_outputs
   * Referenced by: '<S3>/HIL Initialize'
   */
  { 0.0, 1.0, 0.0 },

  /* Expression: watchdog_other_outputs
   * Referenced by: '<S3>/HIL Initialize'
   */
  { 0.0, 0.0, 1.0 },

  /* Expression: [1 -1 1]
   * Referenced by: '<S3>/Gyro Calibration'
   */
  { 1.0, -1.0, 1.0 },

  /* Expression: 2*pi/512/4
   * Referenced by: '<S3>/Pitch: counts to deg'
   */
  0.0030679615757712823,

  /* Expression: 1
   * Referenced by: '<S11>/sint'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S11>/sint'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S11>/sint'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S11>/sint'
   */
  0.0,

  /* Expression: 0.05
   * Referenced by: '<S11>/c2'
   */
  0.05,

  /* Expression: 1
   * Referenced by: '<S11>/cost'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S11>/cost'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S11>/cost'
   */
  1.0,

  /* Expression: pi/2
   * Referenced by: '<S11>/cost'
   */
  1.5707963267948966,

  /* Expression: 0.05
   * Referenced by: '<S11>/c2 '
   */
  0.05,

  /* Expression: 0
   * Referenced by: '<S9>/Gain2'
   */
  0.0,

  /* Expression: 0.2
   * Referenced by: '<S12>/c'
   */
  0.2,

  /* Expression: 1
   * Referenced by: '<S9>/Gain5'
   */
  1.0,

  /* Expression: 0.05
   * Referenced by: '<S1>/Pitch cmd limit: +//- 24V2'
   */
  0.05,

  /* Expression: 0
   * Referenced by: '<S1>/Pitch cmd limit: +//- 24V2'
   */
  0.0,

  /* Expression: -3.62e5
   * Referenced by: '<S1>/a'
   */
  -362000.0,

  /* Expression: 3.058e4
   * Referenced by: '<S1>/b'
   */
  30580.0,

  /* Expression: -862.1
   * Referenced by: '<S1>/c'
   */
  -862.1,

  /* Expression: 127.8
   * Referenced by: '<S1>/d'
   */
  127.8,

  /* Expression: 0
   * Referenced by: '<S1>/u = 0V(if not enabled)'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S1>/Switch'
   */
  0.5,

  /* Expression: 0.5
   * Referenced by: '<S1>/Switch1'
   */
  0.5,

  /* Expression: 1
   * Referenced by: '<Root>/Pitch Motor Enable'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Yaw Enable Motor'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<Root>/Integrator'
   */
  0.0,

  /* Computed Parameter: HPF_A
   * Referenced by: '<Root>/HPF'
   */
  -50.0,

  /* Computed Parameter: HPF_C
   * Referenced by: '<Root>/HPF'
   */
  -50.0,

  /* Computed Parameter: HPF_D
   * Referenced by: '<Root>/HPF'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S9>/Gain'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S9>/Gain3'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<S2>/not enable'
   */
  0.0,

  /* Expression: 0.5
   * Referenced by: '<S2>/Switch'
   */
  0.5,

  /* Expression: 0
   * Referenced by: '<S9>/Gain1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S12>/Constant1'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<S9>/Gain4'
   */
  1.0,

  /* Expression: 0.5
   * Referenced by: '<S2>/Switch1'
   */
  0.5,

  /* Expression: 180/pi
   * Referenced by: '<S7>/Gain'
   */
  57.295779513082323,

  /* Expression: 180/pi
   * Referenced by: '<S4>/Gain'
   */
  57.295779513082323,

  /* Expression: 180/pi
   * Referenced by: '<S8>/Gain'
   */
  57.295779513082323,

  /* Expression: 180/pi
   * Referenced by: '<S5>/Gain'
   */
  57.295779513082323,

  /* Expression: 180/pi
   * Referenced by: '<S6>/Gain'
   */
  57.295779513082323,

  /* Expression: 1/0.02
   * Referenced by: '<Root>/ 3'
   */
  50.0,

  /* Expression: 1/0.02
   * Referenced by: '<Root>/ 4'
   */
  50.0,

  /* Expression: 1
   * Referenced by: '<S2>/model uncertainty'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/taoy (uncontrolled)'
   */
  0.0,

  /* Computed Parameter: HILInitialize_CKChannels
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOWatchdog
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_EIInitial
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AIChannels
   * Referenced by: '<S3>/HIL Initialize'
   */
  { 0U, 1U },

  /* Computed Parameter: HILInitialize_AOChannels
   * Referenced by: '<S3>/HIL Initialize'
   */
  { 0U, 1U },

  /* Computed Parameter: HILInitialize_DOChannels
   * Referenced by: '<S3>/HIL Initialize'
   */
  { 0U, 1U },

  /* Computed Parameter: HILInitialize_EIChannels
   * Referenced by: '<S3>/HIL Initialize'
   */
  { 0U, 1U, 2U, 3U },

  /* Computed Parameter: HILInitialize_EIQuadrature
   * Referenced by: '<S3>/HIL Initialize'
   */
  4U,

  /* Computed Parameter: HILInitialize_OOChannels
   * Referenced by: '<S3>/HIL Initialize'
   */
  { 11000U, 11001U, 11002U },

  /* Computed Parameter: ToHostFile_Decimation
   * Referenced by: '<Root>/To Host File'
   */
  1U,

  /* Computed Parameter: ToHostFile_BitRate
   * Referenced by: '<Root>/To Host File'
   */
  2000000U,

  /* Computed Parameter: ToHostFile1_Decimation
   * Referenced by: '<Root>/To Host File1'
   */
  1U,

  /* Computed Parameter: ToHostFile1_BitRate
   * Referenced by: '<Root>/To Host File1'
   */
  2000000U,

  /* Computed Parameter: ToHostFile2_Decimation
   * Referenced by: '<Root>/To Host File2'
   */
  1U,

  /* Computed Parameter: ToHostFile2_BitRate
   * Referenced by: '<Root>/To Host File2'
   */
  2000000U,

  /* Computed Parameter: ToHostFile4_Decimation
   * Referenced by: '<Root>/To Host File4'
   */
  1U,

  /* Computed Parameter: ToHostFile4_BitRate
   * Referenced by: '<Root>/To Host File4'
   */
  2000000U,

  /* Computed Parameter: ToHostFile5_Decimation
   * Referenced by: '<Root>/To Host File5'
   */
  1U,

  /* Computed Parameter: ToHostFile5_BitRate
   * Referenced by: '<Root>/To Host File5'
   */
  2000000U,

  /* Computed Parameter: ToHostFile6_Decimation
   * Referenced by: '<Root>/To Host File6'
   */
  1U,

  /* Computed Parameter: ToHostFile6_BitRate
   * Referenced by: '<Root>/To Host File6'
   */
  2000000U,

  /* Computed Parameter: ToHostFile8_Decimation
   * Referenced by: '<Root>/To Host File8'
   */
  1U,

  /* Computed Parameter: ToHostFile8_BitRate
   * Referenced by: '<Root>/To Host File8'
   */
  2000000U,

  /* Computed Parameter: HILInitialize_Active
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOTerminate
   * Referenced by: '<S3>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_AOExit
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOTerminate
   * Referenced by: '<S3>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_DOExit
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POTerminate
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POExit
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKPStart
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKPEnter
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKStart
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_CKEnter
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AIPStart
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AIPEnter
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOPStart
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOPEnter
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOStart
   * Referenced by: '<S3>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_AOEnter
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_AOReset
   * Referenced by: '<S3>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_DOPStart
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOPEnter
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOStart
   * Referenced by: '<S3>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_DOEnter
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOReset
   * Referenced by: '<S3>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_EIPStart
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_EIPEnter
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_EIStart
   * Referenced by: '<S3>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_EIEnter
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POPStart
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POPEnter
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POStart
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POEnter
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_POReset
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_OOReset
   * Referenced by: '<S3>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILInitialize_DOFinal
   * Referenced by: '<S3>/HIL Initialize'
   */
  0,

  /* Computed Parameter: HILInitialize_DOInitial
   * Referenced by: '<S3>/HIL Initialize'
   */
  1,

  /* Computed Parameter: HILRead_Active
   * Referenced by: '<S3>/HIL Read'
   */
  1,

  /* Computed Parameter: HILWrite_Active
   * Referenced by: '<S3>/HIL Write'
   */
  0,

  /* Computed Parameter: ManualSwitch3_CurrentSetting
   * Referenced by: '<S1>/Manual Switch3'
   */
  0U,

  /* Expression: file_name_argument
   * Referenced by: '<Root>/To Host File'
   */
  { 76U, 111U, 103U, 95U, 83U, 101U, 110U, 115U, 111U, 114U, 95U, 77U, 101U, 97U,
    115U, 117U, 114U, 101U, 109U, 101U, 110U, 116U, 115U, 46U, 109U, 97U, 116U,
    0U },

  /* Expression: variable_name_argument
   * Referenced by: '<Root>/To Host File'
   */
  { 76U, 111U, 103U, 95U, 83U, 101U, 110U, 115U, 111U, 114U, 95U, 77U, 101U, 97U,
    115U, 117U, 114U, 101U, 109U, 101U, 110U, 116U, 115U, 0U },

  /* Computed Parameter: ToHostFile_FileFormat
   * Referenced by: '<Root>/To Host File'
   */
  2U,

  /* Expression: file_name_argument
   * Referenced by: '<Root>/To Host File1'
   */
  { 76U, 111U, 103U, 95U, 84U, 114U, 97U, 99U, 107U, 105U, 110U, 103U, 95U, 69U,
    114U, 114U, 46U, 109U, 97U, 116U, 0U },

  /* Expression: variable_name_argument
   * Referenced by: '<Root>/To Host File1'
   */
  { 76U, 111U, 103U, 95U, 84U, 114U, 97U, 99U, 107U, 105U, 110U, 103U, 95U, 69U,
    114U, 114U, 0U },

  /* Computed Parameter: ToHostFile1_FileFormat
   * Referenced by: '<Root>/To Host File1'
   */
  2U,

  /* Expression: file_name_argument
   * Referenced by: '<Root>/To Host File2'
   */
  { 76U, 111U, 103U, 95U, 84U, 104U, 101U, 116U, 97U, 95U, 82U, 101U, 115U, 112U,
    111U, 110U, 115U, 101U, 46U, 109U, 97U, 116U, 0U },

  /* Expression: variable_name_argument
   * Referenced by: '<Root>/To Host File2'
   */
  { 76U, 111U, 103U, 95U, 84U, 104U, 101U, 116U, 97U, 95U, 82U, 101U, 115U, 112U,
    111U, 110U, 115U, 101U, 0U },

  /* Computed Parameter: ToHostFile2_FileFormat
   * Referenced by: '<Root>/To Host File2'
   */
  2U,

  /* Expression: file_name_argument
   * Referenced by: '<Root>/To Host File4'
   */
  { 76U, 111U, 103U, 95U, 73U, 110U, 112U, 117U, 116U, 95U, 86U, 111U, 108U,
    116U, 97U, 103U, 101U, 46U, 109U, 97U, 116U, 0U },

  /* Expression: variable_name_argument
   * Referenced by: '<Root>/To Host File4'
   */
  { 76U, 111U, 103U, 95U, 73U, 110U, 112U, 117U, 116U, 95U, 86U, 111U, 108U,
    116U, 97U, 103U, 101U, 0U },

  /* Computed Parameter: ToHostFile4_FileFormat
   * Referenced by: '<Root>/To Host File4'
   */
  2U,

  /* Expression: file_name_argument
   * Referenced by: '<Root>/To Host File5'
   */
  { 76U, 111U, 103U, 95U, 73U, 110U, 112U, 117U, 116U, 95U, 84U, 111U, 114U,
    113U, 117U, 101U, 46U, 109U, 97U, 116U, 0U },

  /* Expression: variable_name_argument
   * Referenced by: '<Root>/To Host File5'
   */
  { 76U, 111U, 103U, 95U, 73U, 110U, 112U, 117U, 116U, 95U, 84U, 111U, 114U,
    113U, 117U, 101U, 0U },

  /* Computed Parameter: ToHostFile5_FileFormat
   * Referenced by: '<Root>/To Host File5'
   */
  2U,

  /* Expression: file_name_argument
   * Referenced by: '<Root>/To Host File6'
   */
  { 76U, 111U, 103U, 95U, 84U, 104U, 101U, 116U, 97U, 95U, 100U, 111U, 116U, 95U,
    82U, 101U, 115U, 112U, 111U, 110U, 115U, 101U, 46U, 109U, 97U, 116U, 0U },

  /* Expression: variable_name_argument
   * Referenced by: '<Root>/To Host File6'
   */
  { 76U, 111U, 103U, 95U, 84U, 104U, 101U, 116U, 97U, 95U, 100U, 111U, 116U, 95U,
    82U, 101U, 115U, 112U, 111U, 110U, 115U, 101U, 0U },

  /* Computed Parameter: ToHostFile6_FileFormat
   * Referenced by: '<Root>/To Host File6'
   */
  2U,

  /* Expression: file_name_argument
   * Referenced by: '<Root>/To Host File8'
   */
  { 76U, 111U, 103U, 95U, 84U, 97U, 99U, 104U, 95U, 67U, 117U, 114U, 114U, 101U,
    110U, 116U, 46U, 109U, 97U, 116U, 0U },

  /* Expression: variable_name_argument
   * Referenced by: '<Root>/To Host File8'
   */
  { 76U, 111U, 103U, 95U, 84U, 97U, 99U, 104U, 95U, 67U, 117U, 114U, 114U, 101U,
    110U, 116U, 0U },

  /* Computed Parameter: ToHostFile8_FileFormat
   * Referenced by: '<Root>/To Host File8'
   */
  2U
};
