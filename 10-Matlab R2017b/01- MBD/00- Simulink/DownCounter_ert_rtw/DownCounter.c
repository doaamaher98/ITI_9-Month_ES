/*
 * File: DownCounter.c
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

#include "DownCounter.h"
#include "DownCounter_private.h"

/* Block states (auto storage) */
DW_DownCounter_T DownCounter_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_DownCounter_T DownCounter_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_DownCounter_T DownCounter_Y;

/* Real-time model */
RT_MODEL_DownCounter_T DownCounter_M_;
RT_MODEL_DownCounter_T *const DownCounter_M = &DownCounter_M_;

/* Model step function */
void DownCounter_step(void)
{
  real_T rtb_Subtract;

  /* Sum: '<Root>/Subtract' incorporates:
   *  Inport: '<Root>/InitValue'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_Subtract = DownCounter_DW.UnitDelay_DSTATE - DownCounter_U.InitValue;

  /* Switch: '<Root>/Switch' incorporates:
   *  Inport: '<Root>/InputParam'
   */
  if (!(rtb_Subtract >= 0.0)) {
    rtb_Subtract = DownCounter_U.InputParam;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Outport: '<Root>/OutParam' */
  DownCounter_Y.OutParam = rtb_Subtract;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  DownCounter_DW.UnitDelay_DSTATE = rtb_Subtract;
}

/* Model initialize function */
void DownCounter_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(DownCounter_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&DownCounter_DW, 0,
                sizeof(DW_DownCounter_T));

  /* external inputs */
  (void)memset((void *)&DownCounter_U, 0, sizeof(ExtU_DownCounter_T));

  /* external outputs */
  DownCounter_Y.OutParam = 0.0;
}

/* Model terminate function */
void DownCounter_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
