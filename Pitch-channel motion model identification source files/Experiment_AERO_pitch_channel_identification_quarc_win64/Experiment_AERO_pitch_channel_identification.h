/*
 * Experiment_AERO_pitch_channel_identification.h
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

#ifndef RTW_HEADER_Experiment_AERO_pitch_channel_identification_h_
#define RTW_HEADER_Experiment_AERO_pitch_channel_identification_h_
#include <math.h>
#include <string.h>
#ifndef Experiment_AERO_pitch_channel_identification_COMMON_INCLUDES_
# define Experiment_AERO_pitch_channel_identification_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "dt_info.h"
#include "ext_work.h"
#include "hil.h"
#include "quanser_messages.h"
#include "quanser_extern.h"
#endif                                 /* Experiment_AERO_pitch_channel_identification_COMMON_INCLUDES_ */

#include "Experiment_AERO_pitch_channel_identification_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetBlockIO
# define rtmGetBlockIO(rtm)            ((rtm)->blockIO)
#endif

#ifndef rtmSetBlockIO
# define rtmSetBlockIO(rtm, val)       ((rtm)->blockIO = (val))
#endif

#ifndef rtmGetChecksums
# define rtmGetChecksums(rtm)          ((rtm)->Sizes.checksums)
#endif

#ifndef rtmSetChecksums
# define rtmSetChecksums(rtm, val)     ((rtm)->Sizes.checksums = (val))
#endif

#ifndef rtmGetConstBlockIO
# define rtmGetConstBlockIO(rtm)       ((rtm)->constBlockIO)
#endif

#ifndef rtmSetConstBlockIO
# define rtmSetConstBlockIO(rtm, val)  ((rtm)->constBlockIO = (val))
#endif

#ifndef rtmGetContStateDisabled
# define rtmGetContStateDisabled(rtm)  ((rtm)->contStateDisabled)
#endif

#ifndef rtmSetContStateDisabled
# define rtmSetContStateDisabled(rtm, val) ((rtm)->contStateDisabled = (val))
#endif

#ifndef rtmGetContStates
# define rtmGetContStates(rtm)         ((rtm)->contStates)
#endif

#ifndef rtmSetContStates
# define rtmSetContStates(rtm, val)    ((rtm)->contStates = (val))
#endif

#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
# define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetCtrlRateMdlRefTiming
# define rtmGetCtrlRateMdlRefTiming(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTiming
# define rtmSetCtrlRateMdlRefTiming(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateMdlRefTimingPtr
# define rtmGetCtrlRateMdlRefTimingPtr(rtm) ()
#endif

#ifndef rtmSetCtrlRateMdlRefTimingPtr
# define rtmSetCtrlRateMdlRefTimingPtr(rtm, val) ()
#endif

#ifndef rtmGetCtrlRateNumTicksToNextHit
# define rtmGetCtrlRateNumTicksToNextHit(rtm) ()
#endif

#ifndef rtmSetCtrlRateNumTicksToNextHit
# define rtmSetCtrlRateNumTicksToNextHit(rtm, val) ()
#endif

#ifndef rtmGetDataMapInfo
# define rtmGetDataMapInfo(rtm)        ()
#endif

#ifndef rtmSetDataMapInfo
# define rtmSetDataMapInfo(rtm, val)   ()
#endif

#ifndef rtmGetDefaultParam
# define rtmGetDefaultParam(rtm)       ((rtm)->defaultParam)
#endif

#ifndef rtmSetDefaultParam
# define rtmSetDefaultParam(rtm, val)  ((rtm)->defaultParam = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
# define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
# define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetDirectFeedThrough
# define rtmGetDirectFeedThrough(rtm)  ((rtm)->Sizes.sysDirFeedThru)
#endif

#ifndef rtmSetDirectFeedThrough
# define rtmSetDirectFeedThrough(rtm, val) ((rtm)->Sizes.sysDirFeedThru = (val))
#endif

#ifndef rtmGetErrorStatusFlag
# define rtmGetErrorStatusFlag(rtm)    ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatusFlag
# define rtmSetErrorStatusFlag(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetFinalTime
# define rtmSetFinalTime(rtm, val)     ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetFirstInitCondFlag
# define rtmGetFirstInitCondFlag(rtm)  ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmSetFirstInitCondFlag
# define rtmSetFirstInitCondFlag(rtm, val) ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmGetIntgData
# define rtmGetIntgData(rtm)           ((rtm)->intgData)
#endif

#ifndef rtmSetIntgData
# define rtmSetIntgData(rtm, val)      ((rtm)->intgData = (val))
#endif

#ifndef rtmGetMdlRefGlobalTID
# define rtmGetMdlRefGlobalTID(rtm)    ()
#endif

#ifndef rtmSetMdlRefGlobalTID
# define rtmSetMdlRefGlobalTID(rtm, val) ()
#endif

#ifndef rtmGetMdlRefTriggerTID
# define rtmGetMdlRefTriggerTID(rtm)   ()
#endif

#ifndef rtmSetMdlRefTriggerTID
# define rtmSetMdlRefTriggerTID(rtm, val) ()
#endif

#ifndef rtmGetModelMappingInfo
# define rtmGetModelMappingInfo(rtm)   ((rtm)->SpecialInfo.mappingInfo)
#endif

#ifndef rtmSetModelMappingInfo
# define rtmSetModelMappingInfo(rtm, val) ((rtm)->SpecialInfo.mappingInfo = (val))
#endif

#ifndef rtmGetModelName
# define rtmGetModelName(rtm)          ((rtm)->modelName)
#endif

#ifndef rtmSetModelName
# define rtmSetModelName(rtm, val)     ((rtm)->modelName = (val))
#endif

#ifndef rtmGetNonInlinedSFcns
# define rtmGetNonInlinedSFcns(rtm)    ()
#endif

#ifndef rtmSetNonInlinedSFcns
# define rtmSetNonInlinedSFcns(rtm, val) ()
#endif

#ifndef rtmGetNumBlockIO
# define rtmGetNumBlockIO(rtm)         ((rtm)->Sizes.numBlockIO)
#endif

#ifndef rtmSetNumBlockIO
# define rtmSetNumBlockIO(rtm, val)    ((rtm)->Sizes.numBlockIO = (val))
#endif

#ifndef rtmGetNumBlockParams
# define rtmGetNumBlockParams(rtm)     ((rtm)->Sizes.numBlockPrms)
#endif

#ifndef rtmSetNumBlockParams
# define rtmSetNumBlockParams(rtm, val) ((rtm)->Sizes.numBlockPrms = (val))
#endif

#ifndef rtmGetNumBlocks
# define rtmGetNumBlocks(rtm)          ((rtm)->Sizes.numBlocks)
#endif

#ifndef rtmSetNumBlocks
# define rtmSetNumBlocks(rtm, val)     ((rtm)->Sizes.numBlocks = (val))
#endif

#ifndef rtmGetNumContStates
# define rtmGetNumContStates(rtm)      ((rtm)->Sizes.numContStates)
#endif

#ifndef rtmSetNumContStates
# define rtmSetNumContStates(rtm, val) ((rtm)->Sizes.numContStates = (val))
#endif

#ifndef rtmGetNumDWork
# define rtmGetNumDWork(rtm)           ((rtm)->Sizes.numDwork)
#endif

#ifndef rtmSetNumDWork
# define rtmSetNumDWork(rtm, val)      ((rtm)->Sizes.numDwork = (val))
#endif

#ifndef rtmGetNumInputPorts
# define rtmGetNumInputPorts(rtm)      ((rtm)->Sizes.numIports)
#endif

#ifndef rtmSetNumInputPorts
# define rtmSetNumInputPorts(rtm, val) ((rtm)->Sizes.numIports = (val))
#endif

#ifndef rtmGetNumNonSampledZCs
# define rtmGetNumNonSampledZCs(rtm)   ((rtm)->Sizes.numNonSampZCs)
#endif

#ifndef rtmSetNumNonSampledZCs
# define rtmSetNumNonSampledZCs(rtm, val) ((rtm)->Sizes.numNonSampZCs = (val))
#endif

#ifndef rtmGetNumOutputPorts
# define rtmGetNumOutputPorts(rtm)     ((rtm)->Sizes.numOports)
#endif

#ifndef rtmSetNumOutputPorts
# define rtmSetNumOutputPorts(rtm, val) ((rtm)->Sizes.numOports = (val))
#endif

#ifndef rtmGetNumPeriodicContStates
# define rtmGetNumPeriodicContStates(rtm) ((rtm)->Sizes.numPeriodicContStates)
#endif

#ifndef rtmSetNumPeriodicContStates
# define rtmSetNumPeriodicContStates(rtm, val) ((rtm)->Sizes.numPeriodicContStates = (val))
#endif

#ifndef rtmGetNumSFcnParams
# define rtmGetNumSFcnParams(rtm)      ((rtm)->Sizes.numSFcnPrms)
#endif

#ifndef rtmSetNumSFcnParams
# define rtmSetNumSFcnParams(rtm, val) ((rtm)->Sizes.numSFcnPrms = (val))
#endif

#ifndef rtmGetNumSFunctions
# define rtmGetNumSFunctions(rtm)      ((rtm)->Sizes.numSFcns)
#endif

#ifndef rtmSetNumSFunctions
# define rtmSetNumSFunctions(rtm, val) ((rtm)->Sizes.numSFcns = (val))
#endif

#ifndef rtmGetNumSampleTimes
# define rtmGetNumSampleTimes(rtm)     ((rtm)->Sizes.numSampTimes)
#endif

#ifndef rtmSetNumSampleTimes
# define rtmSetNumSampleTimes(rtm, val) ((rtm)->Sizes.numSampTimes = (val))
#endif

#ifndef rtmGetNumU
# define rtmGetNumU(rtm)               ((rtm)->Sizes.numU)
#endif

#ifndef rtmSetNumU
# define rtmSetNumU(rtm, val)          ((rtm)->Sizes.numU = (val))
#endif

#ifndef rtmGetNumY
# define rtmGetNumY(rtm)               ((rtm)->Sizes.numY)
#endif

#ifndef rtmSetNumY
# define rtmSetNumY(rtm, val)          ((rtm)->Sizes.numY = (val))
#endif

#ifndef rtmGetOdeF
# define rtmGetOdeF(rtm)               ((rtm)->odeF)
#endif

#ifndef rtmSetOdeF
# define rtmSetOdeF(rtm, val)          ((rtm)->odeF = (val))
#endif

#ifndef rtmGetOdeY
# define rtmGetOdeY(rtm)               ((rtm)->odeY)
#endif

#ifndef rtmSetOdeY
# define rtmSetOdeY(rtm, val)          ((rtm)->odeY = (val))
#endif

#ifndef rtmGetOffsetTimeArray
# define rtmGetOffsetTimeArray(rtm)    ((rtm)->Timing.offsetTimesArray)
#endif

#ifndef rtmSetOffsetTimeArray
# define rtmSetOffsetTimeArray(rtm, val) ((rtm)->Timing.offsetTimesArray = (val))
#endif

#ifndef rtmGetOffsetTimePtr
# define rtmGetOffsetTimePtr(rtm)      ((rtm)->Timing.offsetTimes)
#endif

#ifndef rtmSetOffsetTimePtr
# define rtmSetOffsetTimePtr(rtm, val) ((rtm)->Timing.offsetTimes = (val))
#endif

#ifndef rtmGetOptions
# define rtmGetOptions(rtm)            ((rtm)->Sizes.options)
#endif

#ifndef rtmSetOptions
# define rtmSetOptions(rtm, val)       ((rtm)->Sizes.options = (val))
#endif

#ifndef rtmGetParamIsMalloced
# define rtmGetParamIsMalloced(rtm)    ()
#endif

#ifndef rtmSetParamIsMalloced
# define rtmSetParamIsMalloced(rtm, val) ()
#endif

#ifndef rtmGetPath
# define rtmGetPath(rtm)               ((rtm)->path)
#endif

#ifndef rtmSetPath
# define rtmSetPath(rtm, val)          ((rtm)->path = (val))
#endif

#ifndef rtmGetPerTaskSampleHits
# define rtmGetPerTaskSampleHits(rtm)  ()
#endif

#ifndef rtmSetPerTaskSampleHits
# define rtmSetPerTaskSampleHits(rtm, val) ()
#endif

#ifndef rtmGetPerTaskSampleHitsArray
# define rtmGetPerTaskSampleHitsArray(rtm) ((rtm)->Timing.perTaskSampleHitsArray)
#endif

#ifndef rtmSetPerTaskSampleHitsArray
# define rtmSetPerTaskSampleHitsArray(rtm, val) ((rtm)->Timing.perTaskSampleHitsArray = (val))
#endif

#ifndef rtmGetPerTaskSampleHitsPtr
# define rtmGetPerTaskSampleHitsPtr(rtm) ((rtm)->Timing.perTaskSampleHits)
#endif

#ifndef rtmSetPerTaskSampleHitsPtr
# define rtmSetPerTaskSampleHitsPtr(rtm, val) ((rtm)->Timing.perTaskSampleHits = (val))
#endif

#ifndef rtmGetPeriodicContStateIndices
# define rtmGetPeriodicContStateIndices(rtm) ((rtm)->periodicContStateIndices)
#endif

#ifndef rtmSetPeriodicContStateIndices
# define rtmSetPeriodicContStateIndices(rtm, val) ((rtm)->periodicContStateIndices = (val))
#endif

#ifndef rtmGetPeriodicContStateRanges
# define rtmGetPeriodicContStateRanges(rtm) ((rtm)->periodicContStateRanges)
#endif

#ifndef rtmSetPeriodicContStateRanges
# define rtmSetPeriodicContStateRanges(rtm, val) ((rtm)->periodicContStateRanges = (val))
#endif

#ifndef rtmGetPrevZCSigState
# define rtmGetPrevZCSigState(rtm)     ((rtm)->prevZCSigState)
#endif

#ifndef rtmSetPrevZCSigState
# define rtmSetPrevZCSigState(rtm, val) ((rtm)->prevZCSigState = (val))
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmSetRTWExtModeInfo
# define rtmSetRTWExtModeInfo(rtm, val) ((rtm)->extModeInfo = (val))
#endif

#ifndef rtmGetRTWGeneratedSFcn
# define rtmGetRTWGeneratedSFcn(rtm)   ((rtm)->Sizes.rtwGenSfcn)
#endif

#ifndef rtmSetRTWGeneratedSFcn
# define rtmSetRTWGeneratedSFcn(rtm, val) ((rtm)->Sizes.rtwGenSfcn = (val))
#endif

#ifndef rtmGetRTWLogInfo
# define rtmGetRTWLogInfo(rtm)         ()
#endif

#ifndef rtmSetRTWLogInfo
# define rtmSetRTWLogInfo(rtm, val)    ()
#endif

#ifndef rtmGetRTWRTModelMethodsInfo
# define rtmGetRTWRTModelMethodsInfo(rtm) ()
#endif

#ifndef rtmSetRTWRTModelMethodsInfo
# define rtmSetRTWRTModelMethodsInfo(rtm, val) ()
#endif

#ifndef rtmGetRTWSfcnInfo
# define rtmGetRTWSfcnInfo(rtm)        ((rtm)->sfcnInfo)
#endif

#ifndef rtmSetRTWSfcnInfo
# define rtmSetRTWSfcnInfo(rtm, val)   ((rtm)->sfcnInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfo
# define rtmGetRTWSolverInfo(rtm)      ((rtm)->solverInfo)
#endif

#ifndef rtmSetRTWSolverInfo
# define rtmSetRTWSolverInfo(rtm, val) ((rtm)->solverInfo = (val))
#endif

#ifndef rtmGetRTWSolverInfoPtr
# define rtmGetRTWSolverInfoPtr(rtm)   ((rtm)->solverInfoPtr)
#endif

#ifndef rtmSetRTWSolverInfoPtr
# define rtmSetRTWSolverInfoPtr(rtm, val) ((rtm)->solverInfoPtr = (val))
#endif

#ifndef rtmGetReservedForXPC
# define rtmGetReservedForXPC(rtm)     ((rtm)->SpecialInfo.xpcData)
#endif

#ifndef rtmSetReservedForXPC
# define rtmSetReservedForXPC(rtm, val) ((rtm)->SpecialInfo.xpcData = (val))
#endif

#ifndef rtmGetRootDWork
# define rtmGetRootDWork(rtm)          ((rtm)->dwork)
#endif

#ifndef rtmSetRootDWork
# define rtmSetRootDWork(rtm, val)     ((rtm)->dwork = (val))
#endif

#ifndef rtmGetSFunctions
# define rtmGetSFunctions(rtm)         ((rtm)->childSfunctions)
#endif

#ifndef rtmSetSFunctions
# define rtmSetSFunctions(rtm, val)    ((rtm)->childSfunctions = (val))
#endif

#ifndef rtmGetSampleHitArray
# define rtmGetSampleHitArray(rtm)     ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmSetSampleHitArray
# define rtmSetSampleHitArray(rtm, val) ((rtm)->Timing.sampleHitArray = (val))
#endif

#ifndef rtmGetSampleHitPtr
# define rtmGetSampleHitPtr(rtm)       ((rtm)->Timing.sampleHits)
#endif

#ifndef rtmSetSampleHitPtr
# define rtmSetSampleHitPtr(rtm, val)  ((rtm)->Timing.sampleHits = (val))
#endif

#ifndef rtmGetSampleTimeArray
# define rtmGetSampleTimeArray(rtm)    ((rtm)->Timing.sampleTimesArray)
#endif

#ifndef rtmSetSampleTimeArray
# define rtmSetSampleTimeArray(rtm, val) ((rtm)->Timing.sampleTimesArray = (val))
#endif

#ifndef rtmGetSampleTimePtr
# define rtmGetSampleTimePtr(rtm)      ((rtm)->Timing.sampleTimes)
#endif

#ifndef rtmSetSampleTimePtr
# define rtmSetSampleTimePtr(rtm, val) ((rtm)->Timing.sampleTimes = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDArray
# define rtmGetSampleTimeTaskIDArray(rtm) ((rtm)->Timing.sampleTimeTaskIDArray)
#endif

#ifndef rtmSetSampleTimeTaskIDArray
# define rtmSetSampleTimeTaskIDArray(rtm, val) ((rtm)->Timing.sampleTimeTaskIDArray = (val))
#endif

#ifndef rtmGetSampleTimeTaskIDPtr
# define rtmGetSampleTimeTaskIDPtr(rtm) ((rtm)->Timing.sampleTimeTaskIDPtr)
#endif

#ifndef rtmSetSampleTimeTaskIDPtr
# define rtmSetSampleTimeTaskIDPtr(rtm, val) ((rtm)->Timing.sampleTimeTaskIDPtr = (val))
#endif

#ifndef rtmGetSelf
# define rtmGetSelf(rtm)               ()
#endif

#ifndef rtmSetSelf
# define rtmSetSelf(rtm, val)          ()
#endif

#ifndef rtmGetSimMode
# define rtmGetSimMode(rtm)            ((rtm)->simMode)
#endif

#ifndef rtmSetSimMode
# define rtmSetSimMode(rtm, val)       ((rtm)->simMode = (val))
#endif

#ifndef rtmGetSimTimeStep
# define rtmGetSimTimeStep(rtm)        ((rtm)->Timing.simTimeStep)
#endif

#ifndef rtmSetSimTimeStep
# define rtmSetSimTimeStep(rtm, val)   ((rtm)->Timing.simTimeStep = (val))
#endif

#ifndef rtmGetStartTime
# define rtmGetStartTime(rtm)          ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetStartTime
# define rtmSetStartTime(rtm, val)     ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetStepSize
# define rtmGetStepSize(rtm)           ((rtm)->Timing.stepSize)
#endif

#ifndef rtmSetStepSize
# define rtmSetStepSize(rtm, val)      ((rtm)->Timing.stepSize = (val))
#endif

#ifndef rtmGetStopRequestedFlag
# define rtmGetStopRequestedFlag(rtm)  ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedFlag
# define rtmSetStopRequestedFlag(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetTaskCounters
# define rtmGetTaskCounters(rtm)       ()
#endif

#ifndef rtmSetTaskCounters
# define rtmSetTaskCounters(rtm, val)  ()
#endif

#ifndef rtmGetTaskTimeArray
# define rtmGetTaskTimeArray(rtm)      ((rtm)->Timing.tArray)
#endif

#ifndef rtmSetTaskTimeArray
# define rtmSetTaskTimeArray(rtm, val) ((rtm)->Timing.tArray = (val))
#endif

#ifndef rtmGetTimePtr
# define rtmGetTimePtr(rtm)            ((rtm)->Timing.t)
#endif

#ifndef rtmSetTimePtr
# define rtmSetTimePtr(rtm, val)       ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTimingData
# define rtmGetTimingData(rtm)         ((rtm)->Timing.timingData)
#endif

#ifndef rtmSetTimingData
# define rtmSetTimingData(rtm, val)    ((rtm)->Timing.timingData = (val))
#endif

#ifndef rtmGetU
# define rtmGetU(rtm)                  ((rtm)->inputs)
#endif

#ifndef rtmSetU
# define rtmSetU(rtm, val)             ((rtm)->inputs = (val))
#endif

#ifndef rtmGetVarNextHitTimesListPtr
# define rtmGetVarNextHitTimesListPtr(rtm) ((rtm)->Timing.varNextHitTimesList)
#endif

#ifndef rtmSetVarNextHitTimesListPtr
# define rtmSetVarNextHitTimesListPtr(rtm, val) ((rtm)->Timing.varNextHitTimesList = (val))
#endif

#ifndef rtmGetY
# define rtmGetY(rtm)                  ((rtm)->outputs)
#endif

#ifndef rtmSetY
# define rtmSetY(rtm, val)             ((rtm)->outputs = (val))
#endif

#ifndef rtmGetZCCacheNeedsReset
# define rtmGetZCCacheNeedsReset(rtm)  ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
# define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGetZCSignalValues
# define rtmGetZCSignalValues(rtm)     ((rtm)->zcSignalValues)
#endif

#ifndef rtmSetZCSignalValues
# define rtmSetZCSignalValues(rtm, val) ((rtm)->zcSignalValues = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
# define rtmGet_TimeOfLastOutput(rtm)  ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmSet_TimeOfLastOutput
# define rtmSet_TimeOfLastOutput(rtm, val) ((rtm)->Timing.timeOfLastOutput = (val))
#endif

#ifndef rtmGetdX
# define rtmGetdX(rtm)                 ((rtm)->derivs)
#endif

#ifndef rtmSetdX
# define rtmSetdX(rtm, val)            ((rtm)->derivs = (val))
#endif

#ifndef rtmGettimingBridge
# define rtmGettimingBridge(rtm)       ()
#endif

#ifndef rtmSettimingBridge
# define rtmSettimingBridge(rtm, val)  ()
#endif

#ifndef rtmGetChecksumVal
# define rtmGetChecksumVal(rtm, idx)   ((rtm)->Sizes.checksums[idx])
#endif

#ifndef rtmSetChecksumVal
# define rtmSetChecksumVal(rtm, idx, val) ((rtm)->Sizes.checksums[idx] = (val))
#endif

#ifndef rtmGetDWork
# define rtmGetDWork(rtm, idx)         ((rtm)->dwork[idx])
#endif

#ifndef rtmSetDWork
# define rtmSetDWork(rtm, idx, val)    ((rtm)->dwork[idx] = (val))
#endif

#ifndef rtmGetOffsetTime
# define rtmGetOffsetTime(rtm, idx)    ((rtm)->Timing.offsetTimes[idx])
#endif

#ifndef rtmSetOffsetTime
# define rtmSetOffsetTime(rtm, idx, val) ((rtm)->Timing.offsetTimes[idx] = (val))
#endif

#ifndef rtmGetSFunction
# define rtmGetSFunction(rtm, idx)     ((rtm)->childSfunctions[idx])
#endif

#ifndef rtmSetSFunction
# define rtmSetSFunction(rtm, idx, val) ((rtm)->childSfunctions[idx] = (val))
#endif

#ifndef rtmGetSampleTime
# define rtmGetSampleTime(rtm, idx)    ((rtm)->Timing.sampleTimes[idx])
#endif

#ifndef rtmSetSampleTime
# define rtmSetSampleTime(rtm, idx, val) ((rtm)->Timing.sampleTimes[idx] = (val))
#endif

#ifndef rtmGetSampleTimeTaskID
# define rtmGetSampleTimeTaskID(rtm, idx) ((rtm)->Timing.sampleTimeTaskIDPtr[idx])
#endif

#ifndef rtmSetSampleTimeTaskID
# define rtmSetSampleTimeTaskID(rtm, idx, val) ((rtm)->Timing.sampleTimeTaskIDPtr[idx] = (val))
#endif

#ifndef rtmGetVarNextHitTimeList
# define rtmGetVarNextHitTimeList(rtm, idx) ((rtm)->Timing.varNextHitTimesList[idx])
#endif

#ifndef rtmSetVarNextHitTimeList
# define rtmSetVarNextHitTimeList(rtm, idx, val) ((rtm)->Timing.varNextHitTimesList[idx] = (val))
#endif

#ifndef rtmIsContinuousTask
# define rtmIsContinuousTask(rtm, tid) ((tid) == 0)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmSetFirstInitCond
# define rtmSetFirstInitCond(rtm, val) ((rtm)->Timing.firstInitCondFlag = (val))
#endif

#ifndef rtmIsFirstInitCond
# define rtmIsFirstInitCond(rtm)       ((rtm)->Timing.firstInitCondFlag)
#endif

#ifndef rtmIsMajorTimeStep
# define rtmIsMajorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
# define rtmIsMinorTimeStep(rtm)       (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmIsSampleHit
# define rtmIsSampleHit(rtm, sti, tid) ((rtmIsMajorTimeStep((rtm)) && (rtm)->Timing.sampleHits[(rtm)->Timing.sampleTimeTaskIDPtr[sti]]))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmSetT
# define rtmSetT(rtm, val)                                       /* Do Nothing */
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmSetTFinal
# define rtmSetTFinal(rtm, val)        ((rtm)->Timing.tFinal = (val))
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               ((rtm)->Timing.t)
#endif

#ifndef rtmSetTPtr
# define rtmSetTPtr(rtm, val)          ((rtm)->Timing.t = (val))
#endif

#ifndef rtmGetTStart
# define rtmGetTStart(rtm)             ((rtm)->Timing.tStart)
#endif

#ifndef rtmSetTStart
# define rtmSetTStart(rtm, val)        ((rtm)->Timing.tStart = (val))
#endif

#ifndef rtmGetTaskTime
# define rtmGetTaskTime(rtm, sti)      (rtmGetTPtr((rtm))[(rtm)->Timing.sampleTimeTaskIDPtr[sti]])
#endif

#ifndef rtmSetTaskTime
# define rtmSetTaskTime(rtm, sti, val) (rtmGetTPtr((rtm))[sti] = (val))
#endif

#ifndef rtmGetTimeOfLastOutput
# define rtmGetTimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifdef rtmGetRTWSolverInfo
#undef rtmGetRTWSolverInfo
#endif

#define rtmGetRTWSolverInfo(rtm)       &((rtm)->solverInfo)

/* Definition for use in the target main file */
#define Experiment_AERO_pitch_channel_identification_rtModel RT_MODEL_Experiment_AERO_pitc_T

/* Block signals (default storage) */
typedef struct {
  real_T HILRead_o1;                   /* '<S3>/HIL Read' */
  real_T HILRead_o8;                   /* '<S3>/HIL Read' */
  real_T HILRead_o13;                  /* '<S3>/HIL Read' */
  real_T HILRead_o15;                  /* '<S3>/HIL Read' */
  real_T GyroCalibration[3];           /* '<S3>/Gyro Calibration' */
  real_T Pitchcountstodeg;             /* '<S3>/Pitch: counts to deg' */
  real_T Gain2;                        /* '<S9>/Gain2' */
  real_T Gain5;                        /* '<S9>/Gain5' */
  real_T Sum2;                         /* '<S9>/Sum2' */
  real_T Switch;                       /* '<S1>/Switch' */
  real_T PitchaxisEnable;              /* '<S2>/Pitch axis Enable' */
  real_T YawaxisEnable;                /* '<S2>/Yaw axis Enable' */
  real_T Integrator;                   /* '<Root>/Integrator' */
  real_T TrigonometricFunction;        /* '<Root>/Trigonometric Function' */
  real_T Integrator2;                  /* '<Root>/Integrator2' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T Integrator3;                  /* '<Root>/Integrator3' */
  real_T Gain3;                        /* '<S9>/Gain3' */
  real_T Sum;                          /* '<S9>/Sum' */
  real_T Sum4;                         /* '<Root>/Sum4' */
  real_T Switch_m;                     /* '<S2>/Switch' */
  real_T Gain4;                        /* '<S9>/Gain4' */
  real_T Sum1_k;                       /* '<S9>/Sum1' */
  real_T theta_dot;                    /* '<S2>/theta_dot' */
  real_T Switch1;                      /* '<S2>/Switch1' */
  real_T Gain[3];                      /* '<S7>/Gain' */
  real_T Gain_h;                       /* '<S4>/Gain' */
  real_T Gain_n[7];                    /* '<S8>/Gain' */
  real_T Gain_j[3];                    /* '<S5>/Gain' */
  real_T Gain_hk;                      /* '<S6>/Gain' */
  real_T u;                            /* '<Root>/ 3' */
  real_T u_o;                          /* '<Root>/ 4' */
  real_T Gain2_p;                      /* '<S2>/Gain2' */
  real_T psi_dot;                      /* '<S2>/psi_dot' */
  real_T Gain7;                        /* '<S2>/Gain7' */
} B_Experiment_AERO_pitch_chann_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T HILInitialize_AIMinimums[2];  /* '<S3>/HIL Initialize' */
  real_T HILInitialize_AIMaximums[2];  /* '<S3>/HIL Initialize' */
  real_T HILInitialize_AOMinimums[2];  /* '<S3>/HIL Initialize' */
  real_T HILInitialize_AOMaximums[2];  /* '<S3>/HIL Initialize' */
  real_T HILInitialize_AOVoltages[2];  /* '<S3>/HIL Initialize' */
  real_T HILInitialize_FilterFrequency[4];/* '<S3>/HIL Initialize' */
  real_T HILRead_AnalogBuffer[2];      /* '<S3>/HIL Read' */
  real_T HILRead_OtherBuffer[8];       /* '<S3>/HIL Read' */
  real_T HILWrite_AnalogBuffer[2];     /* '<S3>/HIL Write' */
  real_T HILWrite_OtherBuffer[3];      /* '<S3>/HIL Write' */
  t_uint64 ToHostFile_PointsWritten;   /* '<Root>/To Host File' */
  t_uint64 ToHostFile1_PointsWritten;  /* '<Root>/To Host File1' */
  t_uint64 ToHostFile2_PointsWritten;  /* '<Root>/To Host File2' */
  t_uint64 ToHostFile4_PointsWritten;  /* '<Root>/To Host File4' */
  t_uint64 ToHostFile5_PointsWritten;  /* '<Root>/To Host File5' */
  t_uint64 ToHostFile6_PointsWritten;  /* '<Root>/To Host File6' */
  t_uint64 ToHostFile8_PointsWritten;  /* '<Root>/To Host File8' */
  t_card HILInitialize_Card;           /* '<S3>/HIL Initialize' */
  void *HILRead_PWORK;                 /* '<S3>/HIL Read' */
  void *HILWrite_PWORK;                /* '<S3>/HIL Write' */
  struct {
    void *LoggedData;
  } Current_PWORK;                     /* '<Root>/Current' */

  struct {
    void *LoggedData;
  } PitchMoment_PWORK;                 /* '<Root>/Pitch Moment' */

  struct {
    void *LoggedData;
  } PitchMotorV_PWORK;                 /* '<Root>/Pitch Motor (V)' */

  struct {
    void *LoggedData;
  } PitchSpeedrads_PWORK;              /* '<Root>/Pitch Speed (rad//s)' */

  void *ToHostFile_PWORK;              /* '<Root>/To Host File' */
  void *ToHostFile1_PWORK;             /* '<Root>/To Host File1' */
  void *ToHostFile2_PWORK;             /* '<Root>/To Host File2' */
  void *ToHostFile4_PWORK;             /* '<Root>/To Host File4' */
  void *ToHostFile5_PWORK;             /* '<Root>/To Host File5' */
  void *ToHostFile6_PWORK;             /* '<Root>/To Host File6' */
  void *ToHostFile8_PWORK;             /* '<Root>/To Host File8' */
  struct {
    void *LoggedData;
  } filteredacc_PWORK;                 /* '<Root>/filtered acc' */

  struct {
    void *LoggedData;
  } tach_PWORK;                        /* '<Root>/tach' */

  struct {
    void *LoggedData;
  } thetadeg1_PWORK;                   /* '<Root>/theta (deg)1' */

  struct {
    void *LoggedData;
  } thetarad_PWORK;                    /* '<Root>/theta (rad)' */

  struct {
    void *LoggedData;
  } thetadotmeasurementsdeg1_PWORK;    /* '<Root>/theta dot measurements (deg)1' */

  struct {
    void *LoggedData;
  } thetameasurementsdeg_PWORK;        /* '<Root>/theta measurements (deg)' */

  struct {
    void *LoggedData;
  } thetameasurementsrad_PWORK;        /* '<Root>/theta measurements (rad)' */

  struct {
    void *LoggedData;
  } theta_dotdegs_PWORK;               /* '<Root>/theta_dot (deg//s)' */

  struct {
    void *LoggedData;
  } theta_dotrads1_PWORK;              /* '<Root>/theta_dot (rad//s)1' */

  struct {
    void *LoggedData;
  } theta_tildedeg_PWORK;              /* '<Root>/theta_tilde (deg)' */

  struct {
    void *LoggedData;
  } xacc_PWORK;                        /* '<Root>/x acc' */

  struct {
    void *LoggedData;
  } zacc_PWORK;                        /* '<Root>/z acc' */

  struct {
    void *LoggedData;
  } tau_d1_PWORK;                      /* '<S9>/tau_d1' */

  struct {
    void *LoggedData;
  } tau_d2_PWORK;                      /* '<S9>/tau_d2' */

  int32_T HILInitialize_ClockModes;    /* '<S3>/HIL Initialize' */
  int32_T HILInitialize_DOStates[2];   /* '<S3>/HIL Initialize' */
  int32_T HILInitialize_QuadratureModes[4];/* '<S3>/HIL Initialize' */
  int32_T HILInitialize_InitialEICounts[4];/* '<S3>/HIL Initialize' */
  int32_T HILRead_EncoderBuffer[2];    /* '<S3>/HIL Read' */
  uint32_T ToHostFile_SamplesCount;    /* '<Root>/To Host File' */
  uint32_T ToHostFile_ArrayNameLength; /* '<Root>/To Host File' */
  uint32_T ToHostFile1_SamplesCount;   /* '<Root>/To Host File1' */
  uint32_T ToHostFile1_ArrayNameLength;/* '<Root>/To Host File1' */
  uint32_T ToHostFile2_SamplesCount;   /* '<Root>/To Host File2' */
  uint32_T ToHostFile2_ArrayNameLength;/* '<Root>/To Host File2' */
  uint32_T ToHostFile4_SamplesCount;   /* '<Root>/To Host File4' */
  uint32_T ToHostFile4_ArrayNameLength;/* '<Root>/To Host File4' */
  uint32_T ToHostFile5_SamplesCount;   /* '<Root>/To Host File5' */
  uint32_T ToHostFile5_ArrayNameLength;/* '<Root>/To Host File5' */
  uint32_T ToHostFile6_SamplesCount;   /* '<Root>/To Host File6' */
  uint32_T ToHostFile6_ArrayNameLength;/* '<Root>/To Host File6' */
  uint32_T ToHostFile8_SamplesCount;   /* '<Root>/To Host File8' */
  uint32_T ToHostFile8_ArrayNameLength;/* '<Root>/To Host File8' */
  int_T Integrator2_IWORK;             /* '<Root>/Integrator2' */
  int_T Integrator3_IWORK;             /* '<Root>/Integrator3' */
  boolean_T HILInitialize_DOBits[2];   /* '<S3>/HIL Initialize' */
  t_boolean HILRead_DigitalBuffer[3];  /* '<S3>/HIL Read' */
  t_boolean HILWrite_DigitalBuffer[2]; /* '<S3>/HIL Write' */
} DW_Experiment_AERO_pitch_chan_T;

/* Continuous states (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
  real_T Integrator2_CSTATE;           /* '<Root>/Integrator2' */
  real_T HPF_CSTATE;                   /* '<Root>/HPF' */
  real_T Integrator3_CSTATE;           /* '<Root>/Integrator3' */
  real_T theta_CSTATE;                 /* '<S2>/theta' */
  real_T theta_dot_CSTATE;             /* '<S2>/theta_dot' */
  real_T psi_dot_CSTATE;               /* '<S2>/psi_dot' */
  real_T psi_CSTATE;                   /* '<S2>/psi' */
} X_Experiment_AERO_pitch_chann_T;

/* State derivatives (default storage) */
typedef struct {
  real_T Integrator_CSTATE;            /* '<Root>/Integrator' */
  real_T Integrator2_CSTATE;           /* '<Root>/Integrator2' */
  real_T HPF_CSTATE;                   /* '<Root>/HPF' */
  real_T Integrator3_CSTATE;           /* '<Root>/Integrator3' */
  real_T theta_CSTATE;                 /* '<S2>/theta' */
  real_T theta_dot_CSTATE;             /* '<S2>/theta_dot' */
  real_T psi_dot_CSTATE;               /* '<S2>/psi_dot' */
  real_T psi_CSTATE;                   /* '<S2>/psi' */
} XDot_Experiment_AERO_pitch_ch_T;

/* State disabled  */
typedef struct {
  boolean_T Integrator_CSTATE;         /* '<Root>/Integrator' */
  boolean_T Integrator2_CSTATE;        /* '<Root>/Integrator2' */
  boolean_T HPF_CSTATE;                /* '<Root>/HPF' */
  boolean_T Integrator3_CSTATE;        /* '<Root>/Integrator3' */
  boolean_T theta_CSTATE;              /* '<S2>/theta' */
  boolean_T theta_dot_CSTATE;          /* '<S2>/theta_dot' */
  boolean_T psi_dot_CSTATE;            /* '<S2>/psi_dot' */
  boolean_T psi_CSTATE;                /* '<S2>/psi' */
} XDis_Experiment_AERO_pitch_ch_T;

#ifndef ODE4_INTG
#define ODE4_INTG

/* ODE4 Integration Data */
typedef struct {
  real_T *y;                           /* output */
  real_T *f[4];                        /* derivatives */
} ODE4_IntgData;

#endif

/* Backward compatible GRT Identifiers */
#define rtB                            Experiment_AERO_pitch_channel_B
#define BlockIO                        B_Experiment_AERO_pitch_chann_T
#define rtX                            Experiment_AERO_pitch_channel_X
#define ContinuousStates               X_Experiment_AERO_pitch_chann_T
#define rtXdot                         Experiment_AERO_pitch_chan_XDot
#define StateDerivatives               XDot_Experiment_AERO_pitch_ch_T
#define tXdis                          Experiment_AERO_pitch_chan_XDis
#define StateDisabled                  XDis_Experiment_AERO_pitch_ch_T
#define rtP                            Experiment_AERO_pitch_channel_P
#define Parameters                     P_Experiment_AERO_pitch_chann_T
#define rtDWork                        Experiment_AERO_pitch_channe_DW
#define D_Work                         DW_Experiment_AERO_pitch_chan_T

/* Parameters (default storage) */
struct P_Experiment_AERO_pitch_chann_T_ {
  real_T Dp;                           /* Variable: Dp
                                        * Referenced by:
                                        *   '<S2>/Gain1'
                                        *   '<S11>/Dp'
                                        */
  real_T Dy;                           /* Variable: Dy
                                        * Referenced by: '<S2>/Gain6'
                                        */
  real_T Jp;                           /* Variable: Jp
                                        * Referenced by:
                                        *   '<S2>/Gain2'
                                        *   '<S11>/Ksp-Jp'
                                        */
  real_T Jy;                           /* Variable: Jy
                                        * Referenced by: '<S2>/Gain7'
                                        */
  real_T Kpp;                          /* Variable: Kpp
                                        * Referenced by: '<S1>/Kpp'
                                        */
  real_T Ksp;                          /* Variable: Ksp
                                        * Referenced by:
                                        *   '<S2>/Gain'
                                        *   '<S11>/Ksp-Jp'
                                        *   '<S12>/Ksp'
                                        */
  real_T PitchAxisEnable;              /* Variable: PitchAxisEnable
                                        * Referenced by: '<S2>/Pitch axis Enable'
                                        */
  real_T PitchMotorEnable;             /* Variable: PitchMotorEnable
                                        * Referenced by: '<S1>/Pitch Motor Enable'
                                        */
  real_T YawAxisEnable;                /* Variable: YawAxisEnable
                                        * Referenced by: '<S2>/Yaw axis Enable'
                                        */
  real_T YawMotorEnable;               /* Variable: YawMotorEnable
                                        * Referenced by: '<S1>/Yaw Enable Motor'
                                        */
  real_T psi_dot_initial;              /* Variable: psi_dot_initial
                                        * Referenced by: '<S2>/psi_dot'
                                        */
  real_T psi_initial;                  /* Variable: psi_initial
                                        * Referenced by: '<S2>/psi'
                                        */
  real_T theta_dot_initial;            /* Variable: theta_dot_initial
                                        * Referenced by: '<S2>/theta_dot'
                                        */
  real_T theta_initial;                /* Variable: theta_initial
                                        * Referenced by: '<S2>/theta'
                                        */
  real_T BaseLEDColour_color[3];       /* Mask Parameter: BaseLEDColour_color
                                        * Referenced by: '<S10>/Constant'
                                        */
  uint32_T HILRead_analog_channels[2]; /* Mask Parameter: HILRead_analog_channels
                                        * Referenced by: '<S3>/HIL Read'
                                        */
  uint32_T HILWrite_analog_channels[2];/* Mask Parameter: HILWrite_analog_channels
                                        * Referenced by: '<S3>/HIL Write'
                                        */
  uint32_T HILRead_digital_channels[3];/* Mask Parameter: HILRead_digital_channels
                                        * Referenced by: '<S3>/HIL Read'
                                        */
  uint32_T HILWrite_digital_channels[2];/* Mask Parameter: HILWrite_digital_channels
                                         * Referenced by: '<S3>/HIL Write'
                                         */
  uint32_T HILRead_encoder_channels[2];/* Mask Parameter: HILRead_encoder_channels
                                        * Referenced by: '<S3>/HIL Read'
                                        */
  uint32_T HILRead_other_channels[8];  /* Mask Parameter: HILRead_other_channels
                                        * Referenced by: '<S3>/HIL Read'
                                        */
  uint32_T HILWrite_other_channels[3]; /* Mask Parameter: HILWrite_other_channels
                                        * Referenced by: '<S3>/HIL Write'
                                        */
  real_T noinput_Value;                /* Expression: 0
                                        * Referenced by: '<S1>/no input'
                                        */
  real_T Yawcmdlimit24V_UpperSat;      /* Expression: 24
                                        * Referenced by: '<S1>/Yaw cmd limit: +//- 24V'
                                        */
  real_T Yawcmdlimit24V_LowerSat;      /* Expression: -24
                                        * Referenced by: '<S1>/Yaw cmd limit: +//- 24V'
                                        */
  real_T Pitchcmdlimit24V1_UpperSat;   /* Expression: 24
                                        * Referenced by: '<S1>/Pitch cmd limit: +//- 24V1'
                                        */
  real_T Pitchcmdlimit24V1_LowerSat;   /* Expression: 0
                                        * Referenced by: '<S1>/Pitch cmd limit: +//- 24V1'
                                        */
  real_T Pitchcmdlimit24V_UpperSat;    /* Expression: 24
                                        * Referenced by: '<S1>/Pitch cmd limit: +//- 24V'
                                        */
  real_T Pitchcmdlimit24V_LowerSat;    /* Expression: -24
                                        * Referenced by: '<S1>/Pitch cmd limit: +//- 24V'
                                        */
  real_T HILInitialize_OOTerminate;    /* Expression: set_other_outputs_at_terminate
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  real_T HILInitialize_OOExit;         /* Expression: set_other_outputs_at_switch_out
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  real_T HILInitialize_OOStart;        /* Expression: set_other_outputs_at_start
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  real_T HILInitialize_OOEnter;        /* Expression: set_other_outputs_at_switch_in
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  real_T HILInitialize_AOFinal;        /* Expression: final_analog_outputs
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  real_T HILInitialize_OOFinal[3];     /* Expression: final_other_outputs
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  real_T HILInitialize_AIHigh;         /* Expression: analog_input_maximums
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  real_T HILInitialize_AILow;          /* Expression: analog_input_minimums
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  real_T HILInitialize_AOHigh;         /* Expression: analog_output_maximums
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  real_T HILInitialize_AOLow;          /* Expression: analog_output_minimums
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  real_T HILInitialize_AOInitial;      /* Expression: initial_analog_outputs
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  real_T HILInitialize_AOWatchdog;     /* Expression: watchdog_analog_outputs
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  real_T HILInitialize_OOInitial[3];   /* Expression: initial_other_outputs
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  real_T HILInitialize_OOWatchdog[3];  /* Expression: watchdog_other_outputs
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  real_T GyroCalibration_Gain[3];      /* Expression: [1 -1 1]
                                        * Referenced by: '<S3>/Gyro Calibration'
                                        */
  real_T Pitchcountstodeg_Gain;        /* Expression: 2*pi/512/4
                                        * Referenced by: '<S3>/Pitch: counts to deg'
                                        */
  real_T sint_Amp;                     /* Expression: 1
                                        * Referenced by: '<S11>/sint'
                                        */
  real_T sint_Bias;                    /* Expression: 0
                                        * Referenced by: '<S11>/sint'
                                        */
  real_T sint_Freq;                    /* Expression: 1
                                        * Referenced by: '<S11>/sint'
                                        */
  real_T sint_Phase;                   /* Expression: 0
                                        * Referenced by: '<S11>/sint'
                                        */
  real_T c2_Gain;                      /* Expression: 0.05
                                        * Referenced by: '<S11>/c2'
                                        */
  real_T cost_Amp;                     /* Expression: 1
                                        * Referenced by: '<S11>/cost'
                                        */
  real_T cost_Bias;                    /* Expression: 0
                                        * Referenced by: '<S11>/cost'
                                        */
  real_T cost_Freq;                    /* Expression: 1
                                        * Referenced by: '<S11>/cost'
                                        */
  real_T cost_Phase;                   /* Expression: pi/2
                                        * Referenced by: '<S11>/cost'
                                        */
  real_T c2_Gain_n;                    /* Expression: 0.05
                                        * Referenced by: '<S11>/c2 '
                                        */
  real_T Gain2_Gain;                   /* Expression: 0
                                        * Referenced by: '<S9>/Gain2'
                                        */
  real_T c_Value;                      /* Expression: 0.2
                                        * Referenced by: '<S12>/c'
                                        */
  real_T Gain5_Gain;                   /* Expression: 1
                                        * Referenced by: '<S9>/Gain5'
                                        */
  real_T Pitchcmdlimit24V2_UpperSat;   /* Expression: 0.05
                                        * Referenced by: '<S1>/Pitch cmd limit: +//- 24V2'
                                        */
  real_T Pitchcmdlimit24V2_LowerSat;   /* Expression: 0
                                        * Referenced by: '<S1>/Pitch cmd limit: +//- 24V2'
                                        */
  real_T a_Value;                      /* Expression: -3.62e5
                                        * Referenced by: '<S1>/a'
                                        */
  real_T b_Value;                      /* Expression: 3.058e4
                                        * Referenced by: '<S1>/b'
                                        */
  real_T c_Value_n;                    /* Expression: -862.1
                                        * Referenced by: '<S1>/c'
                                        */
  real_T d_Value;                      /* Expression: 127.8
                                        * Referenced by: '<S1>/d'
                                        */
  real_T u0Vifnotenabled_Value;        /* Expression: 0
                                        * Referenced by: '<S1>/u = 0V(if not enabled)'
                                        */
  real_T Switch_Threshold;             /* Expression: 0.5
                                        * Referenced by: '<S1>/Switch'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0.5
                                        * Referenced by: '<S1>/Switch1'
                                        */
  real_T PitchMotorEnable_Value;       /* Expression: 1
                                        * Referenced by: '<Root>/Pitch Motor Enable'
                                        */
  real_T YawEnableMotor_Value;         /* Expression: 0
                                        * Referenced by: '<Root>/Yaw Enable Motor'
                                        */
  real_T Integrator_IC;                /* Expression: 0
                                        * Referenced by: '<Root>/Integrator'
                                        */
  real_T HPF_A;                        /* Computed Parameter: HPF_A
                                        * Referenced by: '<Root>/HPF'
                                        */
  real_T HPF_C;                        /* Computed Parameter: HPF_C
                                        * Referenced by: '<Root>/HPF'
                                        */
  real_T HPF_D;                        /* Computed Parameter: HPF_D
                                        * Referenced by: '<Root>/HPF'
                                        */
  real_T Gain_Gain;                    /* Expression: 0
                                        * Referenced by: '<S9>/Gain'
                                        */
  real_T Gain3_Gain;                   /* Expression: 1
                                        * Referenced by: '<S9>/Gain3'
                                        */
  real_T notenable_Value;              /* Expression: 0
                                        * Referenced by: '<S2>/not enable'
                                        */
  real_T Switch_Threshold_c;           /* Expression: 0.5
                                        * Referenced by: '<S2>/Switch'
                                        */
  real_T Gain1_Gain;                   /* Expression: 0
                                        * Referenced by: '<S9>/Gain1'
                                        */
  real_T Constant1_Value;              /* Expression: 0
                                        * Referenced by: '<S12>/Constant1'
                                        */
  real_T Gain4_Gain;                   /* Expression: 1
                                        * Referenced by: '<S9>/Gain4'
                                        */
  real_T Switch1_Threshold_c;          /* Expression: 0.5
                                        * Referenced by: '<S2>/Switch1'
                                        */
  real_T Gain_Gain_l;                  /* Expression: 180/pi
                                        * Referenced by: '<S7>/Gain'
                                        */
  real_T Gain_Gain_d;                  /* Expression: 180/pi
                                        * Referenced by: '<S4>/Gain'
                                        */
  real_T Gain_Gain_g;                  /* Expression: 180/pi
                                        * Referenced by: '<S8>/Gain'
                                        */
  real_T Gain_Gain_k;                  /* Expression: 180/pi
                                        * Referenced by: '<S5>/Gain'
                                        */
  real_T Gain_Gain_h;                  /* Expression: 180/pi
                                        * Referenced by: '<S6>/Gain'
                                        */
  real_T u_Gain;                       /* Expression: 1/0.02
                                        * Referenced by: '<Root>/ 3'
                                        */
  real_T u_Gain_b;                     /* Expression: 1/0.02
                                        * Referenced by: '<Root>/ 4'
                                        */
  real_T modeluncertainty_Gain;        /* Expression: 1
                                        * Referenced by: '<S2>/model uncertainty'
                                        */
  real_T taoyuncontrolled_Value;       /* Expression: 0
                                        * Referenced by: '<Root>/taoy (uncontrolled)'
                                        */
  int32_T HILInitialize_CKChannels;    /* Computed Parameter: HILInitialize_CKChannels
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  int32_T HILInitialize_DOWatchdog;    /* Computed Parameter: HILInitialize_DOWatchdog
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  int32_T HILInitialize_EIInitial;     /* Computed Parameter: HILInitialize_EIInitial
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  uint32_T HILInitialize_AIChannels[2];/* Computed Parameter: HILInitialize_AIChannels
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  uint32_T HILInitialize_AOChannels[2];/* Computed Parameter: HILInitialize_AOChannels
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  uint32_T HILInitialize_DOChannels[2];/* Computed Parameter: HILInitialize_DOChannels
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  uint32_T HILInitialize_EIChannels[4];/* Computed Parameter: HILInitialize_EIChannels
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  uint32_T HILInitialize_EIQuadrature; /* Computed Parameter: HILInitialize_EIQuadrature
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  uint32_T HILInitialize_OOChannels[3];/* Computed Parameter: HILInitialize_OOChannels
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  uint32_T ToHostFile_Decimation;      /* Computed Parameter: ToHostFile_Decimation
                                        * Referenced by: '<Root>/To Host File'
                                        */
  uint32_T ToHostFile_BitRate;         /* Computed Parameter: ToHostFile_BitRate
                                        * Referenced by: '<Root>/To Host File'
                                        */
  uint32_T ToHostFile1_Decimation;     /* Computed Parameter: ToHostFile1_Decimation
                                        * Referenced by: '<Root>/To Host File1'
                                        */
  uint32_T ToHostFile1_BitRate;        /* Computed Parameter: ToHostFile1_BitRate
                                        * Referenced by: '<Root>/To Host File1'
                                        */
  uint32_T ToHostFile2_Decimation;     /* Computed Parameter: ToHostFile2_Decimation
                                        * Referenced by: '<Root>/To Host File2'
                                        */
  uint32_T ToHostFile2_BitRate;        /* Computed Parameter: ToHostFile2_BitRate
                                        * Referenced by: '<Root>/To Host File2'
                                        */
  uint32_T ToHostFile4_Decimation;     /* Computed Parameter: ToHostFile4_Decimation
                                        * Referenced by: '<Root>/To Host File4'
                                        */
  uint32_T ToHostFile4_BitRate;        /* Computed Parameter: ToHostFile4_BitRate
                                        * Referenced by: '<Root>/To Host File4'
                                        */
  uint32_T ToHostFile5_Decimation;     /* Computed Parameter: ToHostFile5_Decimation
                                        * Referenced by: '<Root>/To Host File5'
                                        */
  uint32_T ToHostFile5_BitRate;        /* Computed Parameter: ToHostFile5_BitRate
                                        * Referenced by: '<Root>/To Host File5'
                                        */
  uint32_T ToHostFile6_Decimation;     /* Computed Parameter: ToHostFile6_Decimation
                                        * Referenced by: '<Root>/To Host File6'
                                        */
  uint32_T ToHostFile6_BitRate;        /* Computed Parameter: ToHostFile6_BitRate
                                        * Referenced by: '<Root>/To Host File6'
                                        */
  uint32_T ToHostFile8_Decimation;     /* Computed Parameter: ToHostFile8_Decimation
                                        * Referenced by: '<Root>/To Host File8'
                                        */
  uint32_T ToHostFile8_BitRate;        /* Computed Parameter: ToHostFile8_BitRate
                                        * Referenced by: '<Root>/To Host File8'
                                        */
  boolean_T HILInitialize_Active;      /* Computed Parameter: HILInitialize_Active
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOTerminate; /* Computed Parameter: HILInitialize_AOTerminate
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOExit;      /* Computed Parameter: HILInitialize_AOExit
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOTerminate; /* Computed Parameter: HILInitialize_DOTerminate
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOExit;      /* Computed Parameter: HILInitialize_DOExit
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POTerminate; /* Computed Parameter: HILInitialize_POTerminate
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POExit;      /* Computed Parameter: HILInitialize_POExit
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKPStart;    /* Computed Parameter: HILInitialize_CKPStart
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKPEnter;    /* Computed Parameter: HILInitialize_CKPEnter
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKStart;     /* Computed Parameter: HILInitialize_CKStart
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_CKEnter;     /* Computed Parameter: HILInitialize_CKEnter
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AIPStart;    /* Computed Parameter: HILInitialize_AIPStart
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AIPEnter;    /* Computed Parameter: HILInitialize_AIPEnter
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOPStart;    /* Computed Parameter: HILInitialize_AOPStart
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOPEnter;    /* Computed Parameter: HILInitialize_AOPEnter
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOStart;     /* Computed Parameter: HILInitialize_AOStart
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOEnter;     /* Computed Parameter: HILInitialize_AOEnter
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_AOReset;     /* Computed Parameter: HILInitialize_AOReset
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOPStart;    /* Computed Parameter: HILInitialize_DOPStart
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOPEnter;    /* Computed Parameter: HILInitialize_DOPEnter
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOStart;     /* Computed Parameter: HILInitialize_DOStart
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOEnter;     /* Computed Parameter: HILInitialize_DOEnter
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOReset;     /* Computed Parameter: HILInitialize_DOReset
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIPStart;    /* Computed Parameter: HILInitialize_EIPStart
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIPEnter;    /* Computed Parameter: HILInitialize_EIPEnter
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIStart;     /* Computed Parameter: HILInitialize_EIStart
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_EIEnter;     /* Computed Parameter: HILInitialize_EIEnter
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POPStart;    /* Computed Parameter: HILInitialize_POPStart
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POPEnter;    /* Computed Parameter: HILInitialize_POPEnter
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POStart;     /* Computed Parameter: HILInitialize_POStart
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POEnter;     /* Computed Parameter: HILInitialize_POEnter
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_POReset;     /* Computed Parameter: HILInitialize_POReset
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_OOReset;     /* Computed Parameter: HILInitialize_OOReset
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOFinal;     /* Computed Parameter: HILInitialize_DOFinal
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILInitialize_DOInitial;   /* Computed Parameter: HILInitialize_DOInitial
                                        * Referenced by: '<S3>/HIL Initialize'
                                        */
  boolean_T HILRead_Active;            /* Computed Parameter: HILRead_Active
                                        * Referenced by: '<S3>/HIL Read'
                                        */
  boolean_T HILWrite_Active;           /* Computed Parameter: HILWrite_Active
                                        * Referenced by: '<S3>/HIL Write'
                                        */
  uint8_T ManualSwitch3_CurrentSetting;/* Computed Parameter: ManualSwitch3_CurrentSetting
                                        * Referenced by: '<S1>/Manual Switch3'
                                        */
  uint8_T ToHostFile_file_name[28];    /* Expression: file_name_argument
                                        * Referenced by: '<Root>/To Host File'
                                        */
  uint8_T ToHostFile_VarName[24];      /* Expression: variable_name_argument
                                        * Referenced by: '<Root>/To Host File'
                                        */
  uint8_T ToHostFile_FileFormat;       /* Computed Parameter: ToHostFile_FileFormat
                                        * Referenced by: '<Root>/To Host File'
                                        */
  uint8_T ToHostFile1_file_name[21];   /* Expression: file_name_argument
                                        * Referenced by: '<Root>/To Host File1'
                                        */
  uint8_T ToHostFile1_VarName[17];     /* Expression: variable_name_argument
                                        * Referenced by: '<Root>/To Host File1'
                                        */
  uint8_T ToHostFile1_FileFormat;      /* Computed Parameter: ToHostFile1_FileFormat
                                        * Referenced by: '<Root>/To Host File1'
                                        */
  uint8_T ToHostFile2_file_name[23];   /* Expression: file_name_argument
                                        * Referenced by: '<Root>/To Host File2'
                                        */
  uint8_T ToHostFile2_VarName[19];     /* Expression: variable_name_argument
                                        * Referenced by: '<Root>/To Host File2'
                                        */
  uint8_T ToHostFile2_FileFormat;      /* Computed Parameter: ToHostFile2_FileFormat
                                        * Referenced by: '<Root>/To Host File2'
                                        */
  uint8_T ToHostFile4_file_name[22];   /* Expression: file_name_argument
                                        * Referenced by: '<Root>/To Host File4'
                                        */
  uint8_T ToHostFile4_VarName[18];     /* Expression: variable_name_argument
                                        * Referenced by: '<Root>/To Host File4'
                                        */
  uint8_T ToHostFile4_FileFormat;      /* Computed Parameter: ToHostFile4_FileFormat
                                        * Referenced by: '<Root>/To Host File4'
                                        */
  uint8_T ToHostFile5_file_name[21];   /* Expression: file_name_argument
                                        * Referenced by: '<Root>/To Host File5'
                                        */
  uint8_T ToHostFile5_VarName[17];     /* Expression: variable_name_argument
                                        * Referenced by: '<Root>/To Host File5'
                                        */
  uint8_T ToHostFile5_FileFormat;      /* Computed Parameter: ToHostFile5_FileFormat
                                        * Referenced by: '<Root>/To Host File5'
                                        */
  uint8_T ToHostFile6_file_name[27];   /* Expression: file_name_argument
                                        * Referenced by: '<Root>/To Host File6'
                                        */
  uint8_T ToHostFile6_VarName[23];     /* Expression: variable_name_argument
                                        * Referenced by: '<Root>/To Host File6'
                                        */
  uint8_T ToHostFile6_FileFormat;      /* Computed Parameter: ToHostFile6_FileFormat
                                        * Referenced by: '<Root>/To Host File6'
                                        */
  uint8_T ToHostFile8_file_name[21];   /* Expression: file_name_argument
                                        * Referenced by: '<Root>/To Host File8'
                                        */
  uint8_T ToHostFile8_VarName[17];     /* Expression: variable_name_argument
                                        * Referenced by: '<Root>/To Host File8'
                                        */
  uint8_T ToHostFile8_FileFormat;      /* Computed Parameter: ToHostFile8_FileFormat
                                        * Referenced by: '<Root>/To Host File8'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Experiment_AERO_pitch_T {
  const char_T *path;
  const char_T *modelName;
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWExtModeInfo *extModeInfo;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;
  void *blockIO;
  const void *constBlockIO;
  void *defaultParam;
  ZCSigState *prevZCSigState;
  real_T *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  void *zcSignalValues;
  void *inputs;
  void *outputs;
  boolean_T *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  real_T odeY[8];
  real_T odeF[4][8];
  ODE4_IntgData intgData;
  void *dwork;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
    uint32_T options;
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
    void *xpcData;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    boolean_T firstInitCondFlag;
    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    void *timingData;
    real_T *varNextHitTimesList;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[2];
    time_T offsetTimesArray[2];
    int_T sampleTimeTaskIDArray[2];
    int_T sampleHitArray[2];
    int_T perTaskSampleHitsArray[4];
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern P_Experiment_AERO_pitch_chann_T Experiment_AERO_pitch_channel_P;

/* Block signals (default storage) */
extern B_Experiment_AERO_pitch_chann_T Experiment_AERO_pitch_channel_B;

/* Continuous states (default storage) */
extern X_Experiment_AERO_pitch_chann_T Experiment_AERO_pitch_channel_X;

/* Block states (default storage) */
extern DW_Experiment_AERO_pitch_chan_T Experiment_AERO_pitch_channe_DW;

/* Model entry point functions */
extern void Experiment_AERO_pitch_channel_identification_initialize(void);
extern void Experiment_AERO_pitch_channel_identification_output(void);
extern void Experiment_AERO_pitch_channel_identification_update(void);
extern void Experiment_AERO_pitch_channel_identification_terminate(void);

/*====================*
 * External functions *
 *====================*/
extern Experiment_AERO_pitch_channel_identification_rtModel
  *Experiment_AERO_pitch_channel_identification(void);
extern void MdlInitializeSizes(void);
extern void MdlInitializeSampleTimes(void);
extern void MdlInitialize(void);
extern void MdlStart(void);
extern void MdlOutputs(int_T tid);
extern void MdlUpdate(int_T tid);
extern void MdlTerminate(void);

/* Real-time Model object */
extern RT_MODEL_Experiment_AERO_pitc_T *const Experiment_AERO_pitch_channe_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Experiment_AERO_pitch_channel_identification'
 * '<S1>'   : 'Experiment_AERO_pitch_channel_identification/Actuator Model (From input torque to input voltage & voltage saturation)'
 * '<S2>'   : 'Experiment_AERO_pitch_channel_identification/Quanser AERO Model'
 * '<S3>'   : 'Experiment_AERO_pitch_channel_identification/Quanser Aero USB Interface'
 * '<S4>'   : 'Experiment_AERO_pitch_channel_identification/Radians to Degrees1'
 * '<S5>'   : 'Experiment_AERO_pitch_channel_identification/Radians to Degrees10'
 * '<S6>'   : 'Experiment_AERO_pitch_channel_identification/Radians to Degrees2'
 * '<S7>'   : 'Experiment_AERO_pitch_channel_identification/Radians to Degrees4'
 * '<S8>'   : 'Experiment_AERO_pitch_channel_identification/Radians to Degrees5'
 * '<S9>'   : 'Experiment_AERO_pitch_channel_identification/Reference'
 * '<S10>'  : 'Experiment_AERO_pitch_channel_identification/Quanser Aero USB Interface/Base LED Colour'
 * '<S11>'  : 'Experiment_AERO_pitch_channel_identification/Reference/c2*sint'
 * '<S12>'  : 'Experiment_AERO_pitch_channel_identification/Reference/const c'
 */
#endif                                 /* RTW_HEADER_Experiment_AERO_pitch_channel_identification_h_ */
