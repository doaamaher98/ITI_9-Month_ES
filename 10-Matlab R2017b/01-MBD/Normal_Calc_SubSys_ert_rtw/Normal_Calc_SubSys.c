/*
 * File: Normal_Calc_SubSys.c
 *
 * Code generated for Simulink model 'Normal_Calc_SubSys'.
 *
 * Model version                  : 1.8
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sun Jan  1 01:24:10 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "Normal_Calc_SubSys.h"
#include "Normal_Calc_SubSys_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Normal_Calc_SubSys_T Normal_Calc_SubSys_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Normal_Calc_SubSys_T Normal_Calc_SubSys_Y;

/* Real-time model */
RT_MODEL_Normal_Calc_SubSys_T Normal_Calc_SubSys_M_;
RT_MODEL_Normal_Calc_SubSys_T *const Normal_Calc_SubSys_M =
  &Normal_Calc_SubSys_M_;

/* Model step function */
void Normal_Calc_SubSys_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   *  Sum: '<S1>/Add'
   */
  Normal_Calc_SubSys_Y.Out1 = Normal_Calc_SubSys_U.Input1 +
    Normal_Calc_SubSys_U.Input2;

  /* Outport: '<Root>/Out2' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   *  Sum: '<S1>/Subtract'
   */
  Normal_Calc_SubSys_Y.Out2 = Normal_Calc_SubSys_U.Input1 -
    Normal_Calc_SubSys_U.Input2;

  /* Outport: '<Root>/Out3' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   *  Product: '<S1>/Product'
   */
  Normal_Calc_SubSys_Y.Out3 = Normal_Calc_SubSys_U.Input1 *
    Normal_Calc_SubSys_U.Input2;

  /* Outport: '<Root>/Out4' incorporates:
   *  Inport: '<Root>/Input1'
   *  Inport: '<Root>/Input2'
   *  Product: '<S1>/Divide'
   */
  Normal_Calc_SubSys_Y.Out4 = Normal_Calc_SubSys_U.Input1 /
    Normal_Calc_SubSys_U.Input2;

  /* Outport: '<Root>/Out5' incorporates:
   *  Inport: '<Root>/Input1'
   *  Sqrt: '<S1>/Sqrt'
   */
  Normal_Calc_SubSys_Y.Out5 = sqrt(Normal_Calc_SubSys_U.Input1);

  /* Outport: '<Root>/Out6' incorporates:
   *  Inport: '<Root>/Input1'
   *  Trigonometry: '<S1>/Tan'
   */
  Normal_Calc_SubSys_Y.Out6 = tan(Normal_Calc_SubSys_U.Input1);

  /* Outport: '<Root>/Out7' incorporates:
   *  Inport: '<Root>/Input1'
   *  Trigonometry: '<S1>/Cos'
   */
  Normal_Calc_SubSys_Y.Out7 = cos(Normal_Calc_SubSys_U.Input1);

  /* Outport: '<Root>/Out8' incorporates:
   *  Inport: '<Root>/Input1'
   *  Trigonometry: '<S1>/Trigonometric Function'
   */
  Normal_Calc_SubSys_Y.Out8 = sin(Normal_Calc_SubSys_U.Input1);

  /* Outport: '<Root>/Out9' incorporates:
   *  Inport: '<Root>/Input1'
   *  Math: '<S1>/Log'
   *
   * About '<S1>/Log':
   *  Operator: log
   */
  Normal_Calc_SubSys_Y.Out9 = log(Normal_Calc_SubSys_U.Input1);

  /* Outport: '<Root>/Out10' incorporates:
   *  Inport: '<Root>/Input1'
   *  Math: '<S1>/Log10'
   *
   * About '<S1>/Log10':
   *  Operator: log10
   */
  Normal_Calc_SubSys_Y.Out10 = log10(Normal_Calc_SubSys_U.Input1);
}

/* Model initialize function */
void Normal_Calc_SubSys_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Normal_Calc_SubSys_M, (NULL));

  /* external inputs */
  (void)memset((void *)&Normal_Calc_SubSys_U, 0, sizeof
               (ExtU_Normal_Calc_SubSys_T));

  /* external outputs */
  (void) memset((void *)&Normal_Calc_SubSys_Y, 0,
                sizeof(ExtY_Normal_Calc_SubSys_T));
}

/* Model terminate function */
void Normal_Calc_SubSys_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
