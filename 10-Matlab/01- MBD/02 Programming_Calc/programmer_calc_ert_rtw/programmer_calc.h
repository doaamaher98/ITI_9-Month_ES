/*
 * File: programmer_calc.h
 *
 * Code generated for Simulink model 'programmer_calc'.
 *
 * Model version                  : 1.11
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sun Dec 25 01:52:34 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_programmer_calc_h_
#define RTW_HEADER_programmer_calc_h_
#include <string.h>
#include <stddef.h>
#ifndef programmer_calc_COMMON_INCLUDES_
# define programmer_calc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* programmer_calc_COMMON_INCLUDES_ */

#include "programmer_calc_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  boolean_T Input1;                    /* '<Root>/Input1' */
  boolean_T Input2;                    /* '<Root>/Input2' */
} ExtU_programmer_calc_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  boolean_T Out1;                      /* '<Root>/Out1' */
  boolean_T Out2;                      /* '<Root>/Out2' */
  boolean_T Out3;                      /* '<Root>/Out3' */
  boolean_T Out4;                      /* '<Root>/Out4' */
  boolean_T Out5;                      /* '<Root>/Out5' */
  boolean_T Out6;                      /* '<Root>/Out6' */
  boolean_T Out7;                      /* '<Root>/Out7' */
  boolean_T Out8;                      /* '<Root>/Out8' */
  boolean_T Out9;                      /* '<Root>/Out9' */
} ExtY_programmer_calc_T;

/* Real-time Model Data Structure */
struct tag_RTM_programmer_calc_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_programmer_calc_T programmer_calc_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_programmer_calc_T programmer_calc_Y;

/* Model entry point functions */
extern void programmer_calc_initialize(void);
extern void programmer_calc_step(void);
extern void programmer_calc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_programmer_calc_T *const programmer_calc_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 * Block '<Root>/Display4' : Unused code path elimination
 * Block '<Root>/Display5' : Unused code path elimination
 * Block '<Root>/Display6' : Unused code path elimination
 * Block '<Root>/Display7' : Unused code path elimination
 * Block '<Root>/Display8' : Unused code path elimination
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
 * '<Root>' : 'programmer_calc'
 * '<S1>'   : 'programmer_calc/Bit Clear'
 * '<S2>'   : 'programmer_calc/Bit Set'
 */
#endif                                 /* RTW_HEADER_programmer_calc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
