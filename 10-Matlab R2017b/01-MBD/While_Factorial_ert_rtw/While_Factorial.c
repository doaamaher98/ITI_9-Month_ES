/*
 * File: While_Factorial.c
 *
 * Code generated for Simulink model 'While_Factorial'.
 *
 * Model version                  : 1.42
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sun Jan  1 01:41:06 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "While_Factorial.h"
#include "While_Factorial_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_While_Factorial_T While_Factorial_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_While_Factorial_T While_Factorial_Y;

/* Real-time model */
RT_MODEL_While_Factorial_T While_Factorial_M_;
RT_MODEL_While_Factorial_T *const While_Factorial_M = &While_Factorial_M_;

/* Model step function */
void While_Factorial_step(void)
{
  int32_T s1_iter;
  boolean_T loopCond;
  int32_T UnitDelay_DSTATE;

  /* Outputs for Iterator SubSystem: '<Root>/Factorial' incorporates:
   *  WhileIterator: '<S1>/While Iterator'
   */
  s1_iter = 1;

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  UnitDelay_DSTATE = 1;

  /* Inport: '<Root>/InputParam' */
  loopCond = (While_Factorial_U.InputParam != 0);
  while (loopCond && (s1_iter <= 5)) {
    /* Outport: '<Root>/OutResult' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    While_Factorial_Y.OutResult = UnitDelay_DSTATE * s1_iter;

    /* Update for UnitDelay: '<S1>/Unit Delay' incorporates:
     *  Outport: '<Root>/OutResult'
     */
    UnitDelay_DSTATE = While_Factorial_Y.OutResult;

    /* RelationalOperator: '<S1>/Relational Operator' incorporates:
     *  Inport: '<Root>/InputParam'
     */
    loopCond = (s1_iter < While_Factorial_U.InputParam);
    s1_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/Factorial' */
}

/* Model initialize function */
void While_Factorial_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(While_Factorial_M, (NULL));

  /* external inputs */
  While_Factorial_U.InputParam = 0;

  /* external outputs */
  While_Factorial_Y.OutResult = 0;
}

/* Model terminate function */
void While_Factorial_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
