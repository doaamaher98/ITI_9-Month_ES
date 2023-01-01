/*
 * File: programmer_calc.c
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

#include "programmer_calc.h"
#include "programmer_calc_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_programmer_calc_T programmer_calc_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_programmer_calc_T programmer_calc_Y;

/* Real-time model */
RT_MODEL_programmer_calc_T programmer_calc_M_;
RT_MODEL_programmer_calc_T *const programmer_calc_M = &programmer_calc_M_;

/* Model step function */
void programmer_calc_step(void)
{
  boolean_T Out1_tmp;
  boolean_T Out2_tmp;

  /* Logic: '<Root>/Logical Operator' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   *  Logic: '<Root>/Logical Operator2'
   */
  Out1_tmp = (programmer_calc_U.Input1 && programmer_calc_U.Input2);

  /* Outport: '<Root>/Out1' incorporates:
   *  Logic: '<Root>/Logical Operator'
   */
  programmer_calc_Y.Out1 = Out1_tmp;

  /* Logic: '<Root>/Logical Operator1' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   *  Logic: '<Root>/Logical Operator3'
   */
  Out2_tmp = (programmer_calc_U.Input1 || programmer_calc_U.Input2);

  /* Outport: '<Root>/Out2' incorporates:
   *  Logic: '<Root>/Logical Operator1'
   */
  programmer_calc_Y.Out2 = Out2_tmp;

  /* Outport: '<Root>/Out3' incorporates:
   *  Logic: '<Root>/Logical Operator2'
   */
  programmer_calc_Y.Out3 = !Out1_tmp;

  /* Outport: '<Root>/Out4' incorporates:
   *  Logic: '<Root>/Logical Operator3'
   */
  programmer_calc_Y.Out4 = !Out2_tmp;

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   *  Logic: '<Root>/Logical Operator4'
   */
  programmer_calc_Y.Out5 = programmer_calc_U.Input1 ^ programmer_calc_U.Input2;

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   */
  programmer_calc_Y.Out6 = (programmer_calc_U.Input1 == programmer_calc_U.Input2);

  /* Outport: '<Root>/Out7' incorporates:
   *  Inport: '<Root>/Input1'
   *  Logic: '<Root>/Logical Operator6'
   */
  programmer_calc_Y.Out7 = !programmer_calc_U.Input1;

  /* Outport: '<Root>/Out8' incorporates:
   *  S-Function (sfix_bitop): '<S2>/FixPt Bitwise Operator1'
   */
  programmer_calc_Y.Out8 = true;

  /* Outport: '<Root>/Out9' */
  programmer_calc_Y.Out9 = false;
}

/* Model initialize function */
void programmer_calc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(programmer_calc_M, (NULL));

  /* external inputs */
  (void)memset((void *)&programmer_calc_U, 0, sizeof(ExtU_programmer_calc_T));

  /* external outputs */
  (void) memset((void *)&programmer_calc_Y, 0,
                sizeof(ExtY_programmer_calc_T));
}

/* Model terminate function */
void programmer_calc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
