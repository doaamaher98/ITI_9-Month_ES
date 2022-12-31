/*
 * File: Normal_Calc.c
 *
 * Code generated for Simulink model 'Normal_Calc'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sun Dec 25 01:23:57 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "Normal_Calc.h"
#include "Normal_Calc_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Normal_Calc_T Normal_Calc_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Normal_Calc_T Normal_Calc_Y;

/* Real-time model */
RT_MODEL_Normal_Calc_T Normal_Calc_M_;
RT_MODEL_Normal_Calc_T *const Normal_Calc_M = &Normal_Calc_M_;

/* Model step function */
void Normal_Calc_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   *  Sum: '<Root>/Add'
   */
  Normal_Calc_Y.Out1 = Normal_Calc_U.Input1 + Normal_Calc_U.Input2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   *  Sum: '<Root>/Subtract'
   */
  Normal_Calc_Y.Out2 = Normal_Calc_U.Input1 - Normal_Calc_U.Input2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   *  Product: '<Root>/Product'
   */
  Normal_Calc_Y.Out3 = Normal_Calc_U.Input1 * Normal_Calc_U.Input2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   *  Product: '<Root>/Divide'
   */
  Normal_Calc_Y.Out4 = Normal_Calc_U.Input1 / Normal_Calc_U.Input2;

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/Input1'
   *  Sqrt: '<Root>/Sqrt'
   */
  Normal_Calc_Y.Out5 = sqrt(Normal_Calc_U.Input1);

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/Input1'
   *  Trigonometry: '<Root>/Tan'
   */
  Normal_Calc_Y.Out6 = tan(Normal_Calc_U.Input1);

  /* Outport: '<Root>/Out7' incorporates:
   *  Inport: '<Root>/Input1'
   *  Trigonometry: '<Root>/Cos'
   */
  Normal_Calc_Y.Out7 = cos(Normal_Calc_U.Input1);

  /* Outport: '<Root>/Out8' incorporates:
   *  Inport: '<Root>/Input1'
   *  Trigonometry: '<Root>/Trigonometric Function'
   */
  Normal_Calc_Y.Out8 = sin(Normal_Calc_U.Input1);

  /* Outport: '<Root>/Out9' incorporates:
   *  Inport: '<Root>/Input1'
   *  Math: '<Root>/Log'
   *
   * About '<Root>/Log':
   *  Operator: log
   */
  Normal_Calc_Y.Out9 = log(Normal_Calc_U.Input1);

  /* Outport: '<Root>/Out10' incorporates:
   *  Inport: '<Root>/Input1'
   *  Math: '<Root>/Log10'
   *
   * About '<Root>/Log10':
   *  Operator: log10
   */
  Normal_Calc_Y.Out10 = log10(Normal_Calc_U.Input1);
}

/* Model initialize function */
void Normal_Calc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Normal_Calc_M, (NULL));

  /* external inputs */
  (void)memset((void *)&Normal_Calc_U, 0, sizeof(ExtU_Normal_Calc_T));

  /* external outputs */
  (void) memset((void *)&Normal_Calc_Y, 0,
                sizeof(ExtY_Normal_Calc_T));
}

/* Model terminate function */
void Normal_Calc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
