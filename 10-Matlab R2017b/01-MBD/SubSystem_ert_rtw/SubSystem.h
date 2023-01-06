/*
 * File: SubSystem.h
 *
 * Code generated for Simulink model 'SubSystem'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Fri Jan  6 01:11:01 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_SubSystem_h_
#define RTW_HEADER_SubSystem_h_
#include <string.h>
#include <stddef.h>
#ifndef SubSystem_COMMON_INCLUDES_
# define SubSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SubSystem_COMMON_INCLUDES_ */

#include "SubSystem_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
  real_T In2;                          /* '<Root>/In2' */
  real_T In3;                          /* '<Root>/In3' */
} ExtU_SubSystem_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_SubSystem_T;

/* Real-time Model Data Structure */
struct tag_RTM_SubSystem_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_SubSystem_T SubSystem_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_SubSystem_T SubSystem_Y;

/* Model entry point functions */
extern void SubSystem_initialize(void);
extern void SubSystem_step(void);
extern void SubSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_SubSystem_T *const SubSystem_M;

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
 * '<Root>' : 'SubSystem'
 * '<S1>'   : 'SubSystem/Function-Call Subsystem'
 * '<S2>'   : 'SubSystem/Function-Call Subsystem1'
 */
#endif                                 /* RTW_HEADER_SubSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
