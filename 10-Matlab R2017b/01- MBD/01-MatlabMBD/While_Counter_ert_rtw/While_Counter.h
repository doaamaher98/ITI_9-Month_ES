/*
 * File: While_Counter.h
 *
 * Code generated for Simulink model 'While_Counter'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sat Dec 31 21:53:24 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_While_Counter_h_
#define RTW_HEADER_While_Counter_h_
#include <string.h>
#include <stddef.h>
#ifndef While_Counter_COMMON_INCLUDES_
# define While_Counter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* While_Counter_COMMON_INCLUDES_ */

#include "While_Counter_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  int32_T UnitDelay1_DSTATE;           /* '<S1>/Unit Delay1' */
} DW_While_Counter_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  int32_T InParam;                     /* '<Root>/InParam' */
  boolean_T InitCondition;             /* '<Root>/InitCondition' */
} ExtU_While_Counter_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  int32_T Out;                         /* '<Root>/Out' */
} ExtY_While_Counter_T;

/* Real-time Model Data Structure */
struct tag_RTM_While_Counter_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_While_Counter_T While_Counter_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_While_Counter_T While_Counter_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_While_Counter_T While_Counter_Y;

/* Model entry point functions */
extern void While_Counter_initialize(void);
extern void While_Counter_step(void);
extern void While_Counter_terminate(void);

/* Real-time Model object */
extern RT_MODEL_While_Counter_T *const While_Counter_M;

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
 * '<Root>' : 'While_Counter'
 * '<S1>'   : 'While_Counter/While_Counter'
 */
#endif                                 /* RTW_HEADER_While_Counter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
