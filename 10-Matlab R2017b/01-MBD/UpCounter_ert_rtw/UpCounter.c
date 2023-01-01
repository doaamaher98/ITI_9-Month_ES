/*
 * File: UpCounter.c
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

#include "UpCounter.h"
#include "UpCounter_private.h"

/* Block states (auto storage) */
DW_UpCounter_T UpCounter_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_UpCounter_T UpCounter_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_UpCounter_T UpCounter_Y;

/* Real-time model */
RT_MODEL_UpCounter_T UpCounter_M_;
RT_MODEL_UpCounter_T *const UpCounter_M = &UpCounter_M_;

/* Model step function */
void UpCounter_step(void)
{
  real_T rtb_Add;

  /* Sum: '<Root>/Add' incorporates:
   *  Inport: '<Root>/InitConstant'
   *  UnitDelay: '<Root>/Unit Delay'
   */
  rtb_Add = UpCounter_U.InitConstant + UpCounter_DW.UnitDelay_DSTATE;

  /* Switch: '<Root>/Switch' incorporates:
   *  Inport: '<Root>/ReturnConstant'
   */
  if (rtb_Add >= 10.0) {
    rtb_Add = UpCounter_U.ReturnConstant;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Outport: '<Root>/OutValue' */
  UpCounter_Y.OutValue = rtb_Add;

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  UpCounter_DW.UnitDelay_DSTATE = rtb_Add;
}

/* Model initialize function */
void UpCounter_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(UpCounter_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&UpCounter_DW, 0,
                sizeof(DW_UpCounter_T));

  /* external inputs */
  (void)memset((void *)&UpCounter_U, 0, sizeof(ExtU_UpCounter_T));

  /* external outputs */
  UpCounter_Y.OutValue = 0.0;
}

/* Model terminate function */
void UpCounter_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
