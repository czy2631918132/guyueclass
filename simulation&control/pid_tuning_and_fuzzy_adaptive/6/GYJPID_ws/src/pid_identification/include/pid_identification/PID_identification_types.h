//
// File: PID_identification_types.h
//
// Code generated for Simulink model 'PID_identification'.
//
// Model version                  : 1.5
// Simulink Coder version         : 9.7 (R2022a) 13-Nov-2021
// C/C++ source code generated on : Sun Mar 27 13:28:42 2022
//
// Target selection: ert.tlc
// Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
// Code generation objectives: Unspecified
// Validation result: Not run
//
#ifndef RTW_HEADER_PID_identification_types_h_
#define RTW_HEADER_PID_identification_types_h_
#include "rtwtypes.h"

// Model Code Variants
#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_PID_identification_std_msgs_Int16_
#define DEFINED_TYPEDEF_FOR_SL_Bus_PID_identification_std_msgs_Int16_

// MsgType=std_msgs/Int16
struct SL_Bus_PID_identification_std_msgs_Int16
{
  int16_T Data;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_PID_identification_ros_time_Time_
#define DEFINED_TYPEDEF_FOR_SL_Bus_PID_identification_ros_time_Time_

// MsgType=ros_time/Time
struct SL_Bus_PID_identification_ros_time_Time
{
  real_T Sec;
  real_T Nsec;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_
#define DEFINED_TYPEDEF_FOR_SL_Bus_ROSVariableLengthArrayInfo_

struct SL_Bus_ROSVariableLengthArrayInfo
{
  uint32_T CurrentLength;
  uint32_T ReceivedLength;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_PID_identification_std_msgs_Header_
#define DEFINED_TYPEDEF_FOR_SL_Bus_PID_identification_std_msgs_Header_

// MsgType=std_msgs/Header
struct SL_Bus_PID_identification_std_msgs_Header
{
  uint32_T Seq;

  // MsgType=ros_time/Time
  SL_Bus_PID_identification_ros_time_Time Stamp;

  // PrimitiveROSType=string:IsVarLen=1:VarLenCategory=data:VarLenElem=FrameId_SL_Info:TruncateAction=warn 
  uint8_T FrameId[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=FrameId
  SL_Bus_ROSVariableLengthArrayInfo FrameId_SL_Info;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SL_Bus_PID_identification_sensor_msgs_Joy_
#define DEFINED_TYPEDEF_FOR_SL_Bus_PID_identification_sensor_msgs_Joy_

// MsgType=sensor_msgs/Joy
struct SL_Bus_PID_identification_sensor_msgs_Joy
{
  // MsgType=std_msgs/Header
  SL_Bus_PID_identification_std_msgs_Header Header;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Axes_SL_Info:TruncateAction=warn
  real32_T Axes[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Axes
  SL_Bus_ROSVariableLengthArrayInfo Axes_SL_Info;

  // IsVarLen=1:VarLenCategory=data:VarLenElem=Buttons_SL_Info:TruncateAction=warn 
  int32_T Buttons[128];

  // IsVarLen=1:VarLenCategory=length:VarLenElem=Buttons
  SL_Bus_ROSVariableLengthArrayInfo Buttons_SL_Info;
};

#endif

#ifndef struct_ros_slroscpp_internal_block_P_T
#define struct_ros_slroscpp_internal_block_P_T

struct ros_slroscpp_internal_block_P_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_P_T

#ifndef struct_ros_slroscpp_internal_block_S_T
#define struct_ros_slroscpp_internal_block_S_T

struct ros_slroscpp_internal_block_S_T
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                // struct_ros_slroscpp_internal_block_S_T

// Parameters (default storage)
typedef struct P_PID_identification_T_ P_PID_identification_T;

// Forward declaration for rtModel
typedef struct tag_RTM_PID_identification_T RT_MODEL_PID_identification_T;

#endif                                // RTW_HEADER_PID_identification_types_h_

//
// File trailer for generated code.
//
// [EOF]
//
