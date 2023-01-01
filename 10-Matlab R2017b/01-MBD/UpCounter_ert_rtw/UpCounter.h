/*
 * File: UpCounter.h
 *
 * Code generated for Simulink model 'UpCounter'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sat Dec 31 17:00:53 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_UpCounter_h_
#define RTW_HEADER_UpCounter_h_
#include <string.h>
#include <stddef.h>
#ifndef UpCounter_COMMON_INCLUDES_
# define UpCounter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* UpCounter_COMMON_INCLUDES_ */

#include "UpCounter_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<Root>/Unit Delay' */
} DW_UpCounter_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T InitConstant;                 /* '<Root>/InitConstant' */
  real_T ReturnConstant;               /* '<Root>/ReturnConstant' */
} ExtU_UpCounter_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T OutValue;                     /* '<Root>/OutValue' */
} ExtY_UpCounter_T;

/* Real-time Model Data Structure */
struct tag_RTM_UpCounter_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_UpCounter_T UpCounter_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_UpCounter_T UpCounter_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_UpCounter_T UpCounter_Y;

/* Model entry point functions */
extern void UpCounter_initialize(void);
extern void UpCounter_step(void);
extern void UpCounter_terminate(void);

/* Real-time Model object */
extern RT_MODEL_UpCounter_T *const UpCounter_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
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
 * '<Root>' : 'UpCounter'
 */
#endif                                 /* RTW_HEADER_UpCounter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
