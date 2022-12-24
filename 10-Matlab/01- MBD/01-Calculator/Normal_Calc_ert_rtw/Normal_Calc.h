/*
 * File: Normal_Calc.h
 *
 * Code generated for Simulink model 'Normal_Calc'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sun Dec 25 01:23:57 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Normal_Calc_h_
#define RTW_HEADER_Normal_Calc_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef Normal_Calc_COMMON_INCLUDES_
# define Normal_Calc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Normal_Calc_COMMON_INCLUDES_ */

#include "Normal_Calc_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T Input1;                       /* '<Root>/Input1' */
  real_T Input2;                       /* '<Root>/Input2' */
} ExtU_Normal_Calc_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
  real_T Out5;                         /* '<Root>/Out5' */
  real_T Out6;                         /* '<Root>/Out6' */
  real_T Out7;                         /* '<Root>/Out7' */
  real_T Out8;                         /* '<Root>/Out8' */
  real_T Out9;                         /* '<Root>/Out9' */
  real_T Out10;                        /* '<Root>/Out10' */
} ExtY_Normal_Calc_T;

/* Real-time Model Data Structure */
struct tag_RTM_Normal_Calc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_Normal_Calc_T Normal_Calc_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Normal_Calc_T Normal_Calc_Y;

/* Model entry point functions */
extern void Normal_Calc_initialize(void);
extern void Normal_Calc_step(void);
extern void Normal_Calc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Normal_Calc_T *const Normal_Calc_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 * Block '<Root>/Display4' : Unused code path elimination
 * Block '<Root>/Display5' : Unused code path elimination
 * Block '<Root>/Display6' : Unused code path elimination
 * Block '<Root>/Display7' : Unused code path elimination
 * Block '<Root>/Display8' : Unused code path elimination
 * Block '<Root>/Display9' : Unused code path elimination
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
 * '<Root>' : 'Normal_Calc'
 */
#endif                                 /* RTW_HEADER_Normal_Calc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
