/*
 * File: IfElse.c
 *
 * Code generated for Simulink model 'IfElse'.
 *
 * Model version                  : 1.25
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sat Dec 31 19:46:54 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "IfElse.h"
#include "IfElse_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_IfElse_T IfElse_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_IfElse_T IfElse_Y;

/* Real-time model */
RT_MODEL_IfElse_T IfElse_M_;
RT_MODEL_IfElse_T *const IfElse_M = &IfElse_M_;

/* Model step function */
void IfElse_step(void)
{
  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/InputParam1'
   */
  if (IfElse_U.InputParam1 >= 10.0) {
    /* Outputs for IfAction SubSystem: '<Root>/IfTrue' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/OutParam' incorporates:
     *  Inport: '<Root>/IfInputParam'
     */
    IfElse_Y.OutParam = IfElse_U.IfInputParam;

    /* End of Outputs for SubSystem: '<Root>/IfTrue' */
  } else if (IfElse_U.InputParam1 < 10.0) {
    /* Outputs for IfAction SubSystem: '<Root>/IfTrue1' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Outport: '<Root>/OutParam' incorporates:
     *  Inport: '<Root>/ElseIfInputParam'
     */
    IfElse_Y.OutParam = IfElse_U.ElseIfInputParam;

    /* End of Outputs for SubSystem: '<Root>/IfTrue1' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/Else' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Outport: '<Root>/OutParam' incorporates:
     *  Inport: '<Root>/ElseInputParam'
     */
    IfElse_Y.OutParam = IfElse_U.ElseInputParam;

    /* End of Outputs for SubSystem: '<Root>/Else' */
  }

  /* End of If: '<Root>/If' */
}

/* Model initialize function */
void IfElse_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(IfElse_M, (NULL));

  /* external inputs */
  (void)memset((void *)&IfElse_U, 0, sizeof(ExtU_IfElse_T));

  /* external outputs */
  IfElse_Y.OutParam = 0.0;
}

/* Model terminate function */
void IfElse_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
