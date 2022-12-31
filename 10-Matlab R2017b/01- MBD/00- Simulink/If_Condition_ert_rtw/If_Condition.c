/*
 * File: If_Condition.c
 *
 * Code generated for Simulink model 'If_Condition'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sat Dec 31 16:50:40 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "If_Condition.h"
#include "If_Condition_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_If_Condition_T If_Condition_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_If_Condition_T If_Condition_Y;

/* Real-time model */
RT_MODEL_If_Condition_T If_Condition_M_;
RT_MODEL_If_Condition_T *const If_Condition_M = &If_Condition_M_;

/* Model step function */
void If_Condition_step(void)
{
  /* Switch: '<Root>/Switch' incorporates:
   *  Inport: '<Root>/ConditionParam'
   */
  if (If_Condition_U.ConditionParam >= 5.0) {
    /* Outport: '<Root>/OutParam' incorporates:
     *  Inport: '<Root>/IfTrueParam'
     */
    If_Condition_Y.OutParam = If_Condition_U.IfTrueParam;
  } else {
    /* Outport: '<Root>/OutParam' incorporates:
     *  Inport: '<Root>/ElseParam'
     */
    If_Condition_Y.OutParam = If_Condition_U.ElseParam;
  }

  /* End of Switch: '<Root>/Switch' */
}

/* Model initialize function */
void If_Condition_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(If_Condition_M, (NULL));

  /* external inputs */
  (void)memset((void *)&If_Condition_U, 0, sizeof(ExtU_If_Condition_T));

  /* external outputs */
  If_Condition_Y.OutParam = 0.0;
}

/* Model terminate function */
void If_Condition_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
