/*
 * File: While_Factorial.h
 *
 * Code generated for Simulink model 'While_Factorial'.
 *
 * Model version                  : 1.42
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sun Jan  1 01:41:06 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_While_Factorial_h_
#define RTW_HEADER_While_Factorial_h_
#include <stddef.h>
#ifndef While_Factorial_COMMON_INCLUDES_
# define While_Factorial_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* While_Factorial_COMMON_INCLUDES_ */

#include "While_Factorial_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  int32_T InputParam;                  /* '<Root>/InputParam' */
} ExtU_While_Factorial_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  int32_T OutResult;                   /* '<Root>/OutResult' */
} ExtY_While_Factorial_T;

/* Real-time Model Data Structure */
struct tag_RTM_While_Factorial_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_While_Factorial_T While_Factorial_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_While_Factorial_T While_Factorial_Y;

/* Model entry point functions */
extern void While_Factorial_initialize(void);
extern void While_Factorial_step(void);
extern void While_Factorial_terminate(void);

/* Real-time Model object */
extern RT_MODEL_While_Factorial_T *const While_Factorial_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<S1>/Display' : Unused code path elimination
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
 * '<Root>' : 'While_Factorial'
 * '<S1>'   : 'While_Factorial/Factorial'
 */
#endif                                 /* RTW_HEADER_While_Factorial_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
