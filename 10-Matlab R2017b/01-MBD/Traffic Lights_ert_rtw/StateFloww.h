/*
 * File: StateFloww.h
 *
 * Code generated for Simulink model 'StateFloww'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Fri Jan  6 00:48:56 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_StateFloww_h_
#define RTW_HEADER_StateFloww_h_
#include <stddef.h>
#include <string.h>
#ifndef StateFloww_COMMON_INCLUDES_
# define StateFloww_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* StateFloww_COMMON_INCLUDES_ */

#include "StateFloww_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  uint16_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint8_T is_active_c3_StateFloww;     /* '<Root>/Chart' */
  uint8_T is_c3_StateFloww;            /* '<Root>/Chart' */
} DW_StateFloww_T;

/* Real-time Model Data Structure */
struct tag_RTM_StateFloww_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_StateFloww_T StateFloww_DW;

/* Model entry point functions */
extern void StateFloww_initialize(void);
extern void StateFloww_step(void);
extern void StateFloww_terminate(void);

/* Real-time Model object */
extern RT_MODEL_StateFloww_T *const StateFloww_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 */

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
 * '<Root>' : 'StateFloww'
 * '<S1>'   : 'StateFloww/Chart'
 */
#endif                                 /* RTW_HEADER_StateFloww_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
