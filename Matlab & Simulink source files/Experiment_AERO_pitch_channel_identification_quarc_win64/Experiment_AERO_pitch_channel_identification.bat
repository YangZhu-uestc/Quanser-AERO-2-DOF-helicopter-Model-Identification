@echo on
@call "C:\Program Files (x86)\Microsoft Visual Studio 12.0\VC\VCVARSALL.BAT " x86_amd64
set MATLAB=C:\MATLAB\R2018a
nmake -f Experiment_AERO_pitch_channel_identification.mk  MAT_FILE=0 SHOW_TIMES=0 DEBUG=0 DEBUG_HEAP=0 COMBINE_OUTPUT_UPDATE_FCNS=0 INCLUDE_MDL_TERMINATE_FCN=1 ISPROTECTINGMODEL=NOTPROTECTING OPTS="-DEXT_MODE -DON_TARGET_WAIT_FOR_START=0"