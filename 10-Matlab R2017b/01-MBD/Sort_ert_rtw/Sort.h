/*
 * File: Sort.h
 *
 * Code generated for Simulink model 'Sort'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Fri Jan  6 01:24:39 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Sort_h_
#define RTW_HEADER_Sort_h_
#include <stddef.h>
#include <string.h>
#ifndef Sort_COMMON_INCLUDES_
# define Sort_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Sort_COMMON_INCLUDES_ */

#include "Sort_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  uint32_T In1;                        /* '<Root>/In1' */
} ExtU_Sort_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  uint32_T Out1;                       /* '<Root>/Out1' */
  uint32_T Out2;                       /* '<Root>/Out2' */
} ExtY_Sort_T;

/* Real-time Model Data Structure */
struct tag_RTM_Sort_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_Sort_T Sort_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Sort_T Sort_Y;

/* Model entry point functions */
extern void Sort_initialize(void);
extern void Sort_step(void);
extern void Sort_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Sort_T *const Sort_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
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
 * '<Root>' : 'Sort'
 */
#endif                                 /* RTW_HEADER_Sort_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
