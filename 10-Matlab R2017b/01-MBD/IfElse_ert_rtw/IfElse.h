/*
 * File: IfElse.h
 *
 * Code generated for Simulink model 'IfElse'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sat Dec 31 19:46:54 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_IfElse_h_
#define RTW_HEADER_IfElse_h_
#include <string.h>
#include <stddef.h>
#ifndef IfElse_COMMON_INCLUDES_
# define IfElse_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* IfElse_COMMON_INCLUDES_ */

#include "IfElse_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T InputParam1;                  /* '<Root>/InputParam1' */
  real_T InputParam2;                  /* '<Root>/InputParam2' */
  real_T IfInputParam;                 /* '<Root>/IfInputParam' */
  real_T ElseIfInputParam;             /* '<Root>/ElseIfInputParam' */
  real_T ElseInputParam;               /* '<Root>/ElseInputParam' */
} ExtU_IfElse_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T OutParam;                     /* '<Root>/OutParam' */
} ExtY_IfElse_T;

/* Real-time Model Data Structure */
struct tag_RTM_IfElse_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_IfElse_T IfElse_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_IfElse_T IfElse_Y;

/* Model entry point functions */
extern void IfElse_initialize(void);
extern void IfElse_step(void);
extern void IfElse_terminate(void);

/* Real-time Model object */
extern RT_MODEL_IfElse_T *const IfElse_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
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
 * '<Root>' : 'IfElse'
 * '<S1>'   : 'IfElse/Else'
 * '<S2>'   : 'IfElse/IfTrue'
 * '<S3>'   : 'IfElse/IfTrue1'
 */
#endif                                 /* RTW_HEADER_IfElse_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
