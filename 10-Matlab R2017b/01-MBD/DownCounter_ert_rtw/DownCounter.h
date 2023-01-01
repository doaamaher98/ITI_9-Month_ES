/*
 * File: DownCounter.h
 *
 * Code generated for Simulink model 'DownCounter'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sat Dec 31 17:24:17 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_DownCounter_h_
#define RTW_HEADER_DownCounter_h_
#include <string.h>
#include <stddef.h>
#ifndef DownCounter_COMMON_INCLUDES_
# define DownCounter_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* DownCounter_COMMON_INCLUDES_ */

#include "DownCounter_types.h"

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
} DW_DownCounter_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T InitValue;                    /* '<Root>/InitValue' */
  real_T InputParam;                   /* '<Root>/InputParam' */
} ExtU_DownCounter_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T OutParam;                     /* '<Root>/OutParam' */
} ExtY_DownCounter_T;

/* Real-time Model Data Structure */
struct tag_RTM_DownCounter_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_DownCounter_T DownCounter_DW;

/* External inputs (root inport signals with auto storage) */
extern ExtU_DownCounter_T DownCounter_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_DownCounter_T DownCounter_Y;

/* Model entry point functions */
extern void DownCounter_initialize(void);
extern void DownCounter_step(void);
extern void DownCounter_terminate(void);

/* Real-time Model object */
extern RT_MODEL_DownCounter_T *const DownCounter_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
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
 * '<Root>' : 'DownCounter'
 */
#endif                                 /* RTW_HEADER_DownCounter_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
