/*
 * File: GradingSystem.h
 *
 * Code generated for Simulink model 'GradingSystem'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sun Jan  1 01:15:10 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_GradingSystem_h_
#define RTW_HEADER_GradingSystem_h_
#include <stddef.h>
#include <string.h>
#ifndef GradingSystem_COMMON_INCLUDES_
# define GradingSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* GradingSystem_COMMON_INCLUDES_ */

#include "GradingSystem_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T InitCondition;                /* '<Root>/InitCondition' */
} ExtU_GradingSystem_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T OutResult;                    /* '<Root>/OutResult' */
  real_T OutResult1;                   /* '<Root>/OutResult1' */
  real_T OutResult2;                   /* '<Root>/OutResult2' */
  real_T OutResult3;                   /* '<Root>/OutResult3' */
  real_T OutResult4;                   /* '<Root>/OutResult4' */
} ExtY_GradingSystem_T;

/* Real-time Model Data Structure */
struct tag_RTM_GradingSystem_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_GradingSystem_T GradingSystem_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_GradingSystem_T GradingSystem_Y;

/* Model entry point functions */
extern void GradingSystem_initialize(void);
extern void GradingSystem_step(void);
extern void GradingSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_GradingSystem_T *const GradingSystem_M;

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
 * '<Root>' : 'GradingSystem'
 * '<S1>'   : 'GradingSystem/If Excellent Subsystem'
 * '<S2>'   : 'GradingSystem/If Fail Subsystem'
 * '<S3>'   : 'GradingSystem/If Good Subsystem'
 * '<S4>'   : 'GradingSystem/If Pass Subsystem'
 * '<S5>'   : 'GradingSystem/If VeryGood Subsystem'
 */
#endif                                 /* RTW_HEADER_GradingSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */