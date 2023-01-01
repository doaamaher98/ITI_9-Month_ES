/*
 * File: While_Counter.c
 *
 * Code generated for Simulink model 'While_Counter'.
 *
 * Model version                  : 1.17
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sat Dec 31 21:53:24 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "While_Counter.h"
#include "While_Counter_private.h"

/* Block states (auto storage) */
DW_While_Counter_T While_Counter_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_While_Counter_T While_Counter_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_While_Counter_T While_Counter_Y;

/* Real-time model */
RT_MODEL_While_Counter_T While_Counter_M_;
RT_MODEL_While_Counter_T *const While_Counter_M = &While_Counter_M_;

/* Model step function */
void While_Counter_step(void)
{
  int32_T s1_iter;
  boolean_T rtb_RelationalOperator;

  /* Outputs for Iterator SubSystem: '<Root>/While_Counter' incorporates:
   *  WhileIterator: '<S1>/WhileLoop'
   */
  s1_iter = 1;

  /* Inport: '<Root>/InitCondition' */
  rtb_RelationalOperator = While_Counter_U.InitCondition;
  while (rtb_RelationalOperator && (s1_iter <= 5)) {
    /* Outport: '<Root>/Out' incorporates:
     *  Sum: '<S1>/Add'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    While_Counter_Y.Out += s1_iter;

    /* RelationalOperator: '<S1>/Relational Operator' incorporates:
     *  Inport: '<Root>/InParam'
     *  UnitDelay: '<S1>/Unit Delay1'
     */
    rtb_RelationalOperator = (While_Counter_DW.UnitDelay1_DSTATE <=
      While_Counter_U.InParam);

    /* Update for UnitDelay: '<S1>/Unit Delay1' */
    While_Counter_DW.UnitDelay1_DSTATE = s1_iter;
    s1_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/While_Counter' */
}

/* Model initialize function */
void While_Counter_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(While_Counter_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&While_Counter_DW, 0,
                sizeof(DW_While_Counter_T));

  /* external inputs */
  (void)memset((void *)&While_Counter_U, 0, sizeof(ExtU_While_Counter_T));

  /* external outputs */
  While_Counter_Y.Out = 0;
}

/* Model terminate function */
void While_Counter_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
