/*
 * File: ForLoop_Factorial.h
 *
 * Code generated for Simulink model 'ForLoop_Factorial'.
 *
 * Model version                  : 1.44
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sat Dec 31 20:50:12 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ForLoop_Factorial_h_
#define RTW_HEADER_ForLoop_Factorial_h_
#include <stddef.h>
#ifndef ForLoop_Factorial_COMMON_INCLUDES_
# define ForLoop_Factorial_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* ForLoop_Factorial_COMMON_INCLUDES_ */

#include "ForLoop_Factorial_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  int32_T OutParam;                    /* '<Root>/OutParam' */
} ExtY_ForLoop_Factorial_T;

/* Real-time Model Data Structure */
struct tag_RTM_ForLoop_Factorial_T {
  const char_T * volatile errorStatus;
};

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_ForLoop_Factorial_T ForLoop_Factorial_Y;

/* Model entry point functions */
extern void ForLoop_Factorial_initialize(void);
extern void ForLoop_Factorial_step(void);
extern void ForLoop_Factorial_terminate(void);

/* Real-time Model object */
extern RT_MODEL_ForLoop_Factorial_T *const ForLoop_Factorial_M;

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
 * '<Root>' : 'ForLoop_Factorial'
 * '<S1>'   : 'ForLoop_Factorial/Factorial'
 */
#endif                                 /* RTW_HEADER_ForLoop_Factorial_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
