/*
 * File: ForLoop_Factorial.c
 *
 * Code generated for Simulink model 'ForLoop_Factorial'.
 *
 * Model version                  : 1.44
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sat Dec 31 20:50:12 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "ForLoop_Factorial.h"
#include "ForLoop_Factorial_private.h"

/* External outputs (root outports fed by signals with auto storage) */
ExtY_ForLoop_Factorial_T ForLoop_Factorial_Y;

/* Real-time model */
RT_MODEL_ForLoop_Factorial_T ForLoop_Factorial_M_;
RT_MODEL_ForLoop_Factorial_T *const ForLoop_Factorial_M = &ForLoop_Factorial_M_;

/* Model step function */
void ForLoop_Factorial_step(void)
{
  int32_T s1_iter;
  int32_T UnitDelay_DSTATE;

  /* Outputs for Iterator SubSystem: '<Root>/Factorial' incorporates:
   *  ForIterator: '<S1>/For Iterator'
   */
  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  UnitDelay_DSTATE = 1;

  /* Constant: '<Root>/InputParam' */
  for (s1_iter = 1; s1_iter < 6; s1_iter++) {
    /* Outport: '<Root>/OutParam' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    ForLoop_Factorial_Y.OutParam = s1_iter * UnitDelay_DSTATE;

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/OutParam'
     */
    UnitDelay_DSTATE = ForLoop_Factorial_Y.OutParam;
  }

  /* End of Constant: '<Root>/InputParam' */
  /* End of Outputs for SubSystem: '<Root>/Factorial' */
}

/* Model initialize function */
void ForLoop_Factorial_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(ForLoop_Factorial_M, (NULL));

  /* external outputs */
  ForLoop_Factorial_Y.OutParam = 0;
}

/* Model terminate function */
void ForLoop_Factorial_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
