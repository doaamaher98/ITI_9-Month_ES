/*
 * File: If_Condition.h
 *
 * Code generated for Simulink model 'If_Condition'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sat Dec 31 16:50:40 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_If_Condition_h_
#define RTW_HEADER_If_Condition_h_
#include <string.h>
#include <stddef.h>
#ifndef If_Condition_COMMON_INCLUDES_
# define If_Condition_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* If_Condition_COMMON_INCLUDES_ */

#include "If_Condition_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T IfTrueParam;                  /* '<Root>/IfTrueParam' */
  real_T ConditionParam;               /* '<Root>/ConditionParam' */
  real_T ElseParam;                    /* '<Root>/ElseParam' */
} ExtU_If_Condition_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T OutParam;                     /* '<Root>/OutParam' */
} ExtY_If_Condition_T;

/* Real-time Model Data Structure */
struct tag_RTM_If_Condition_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_If_Condition_T If_Condition_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_If_Condition_T If_Condition_Y;

/* Model entry point functions */
extern void If_Condition_initialize(void);
extern void If_Condition_step(void);
extern void If_Condition_terminate(void);

/* Real-time Model object */
extern RT_MODEL_If_Condition_T *const If_Condition_M;

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
 * '<Root>' : 'If_Condition'
 */
#endif                                 /* RTW_HEADER_If_Condition_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
