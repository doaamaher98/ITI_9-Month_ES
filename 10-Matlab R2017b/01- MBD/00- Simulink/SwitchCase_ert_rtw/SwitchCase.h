/*
 * File: SwitchCase.h
 *
 * Code generated for Simulink model 'SwitchCase'.
 *
 * Model version                  : 1.53
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sat Dec 31 19:26:59 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SwitchCase_h_
#define RTW_HEADER_SwitchCase_h_
#include <math.h>
#include <string.h>
#include <stddef.h>
#ifndef SwitchCase_COMMON_INCLUDES_
# define SwitchCase_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SwitchCase_COMMON_INCLUDES_ */

#include "SwitchCase_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S3>/Unit Delay' */
  real_T UnitDelay_DSTATE_g;           /* '<S2>/Unit Delay' */
  real_T UnitDelay_DSTATE_l;           /* '<S1>/Unit Delay' */
} DW_SwitchCase_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T CounterInput;                 /* '<Root>/CounterInput' */
  real_T Case0Counter0;                /* '<Root>/Case0Counter0' */
  real_T Case1Counter1;                /* '<Root>/Case1Counter1' */
  real_T Case2Counter2;                /* '<Root>/Case2Counter2' */
  real_T DefaultCounter;               /* '<Root>/DefaultCounter' */
} ExtU_SwitchCase_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T OutParam;                     /* '<Root>/OutParam' */
} ExtY_SwitchCase_T;

/* Real-time Model Data Structure */
struct tag_RTM_SwitchCase_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_SwitchCase_T SwitchCase_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_SwitchCase_T SwitchCase_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_SwitchCase_T SwitchCase_Y;

/* Model entry point functions */
extern void SwitchCase_initialize(void);
extern void SwitchCase_step(void);
extern void SwitchCase_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SwitchCase_T *const SwitchCase_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Scope' : Unused code path elimination
 * Block '<S2>/Scope' : Unused code path elimination
 * Block '<S3>/Scope' : Unused code path elimination
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
 * '<Root>' : 'SwitchCase'
 * '<S1>'   : 'SwitchCase/Case(0)'
 * '<S2>'   : 'SwitchCase/Case(1)'
 * '<S3>'   : 'SwitchCase/Case(2)'
 * '<S4>'   : 'SwitchCase/Default'
 */
#endif                                 /* RTW_HEADER_SwitchCase_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
