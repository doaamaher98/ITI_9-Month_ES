/*
 * File: SubSystem.c
 *
 * Code generated for Simulink model 'SubSystem'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Fri Jan  6 01:11:01 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "SubSystem.h"
#include "SubSystem_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_SubSystem_T SubSystem_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_SubSystem_T SubSystem_Y;

/* Real-time model */
RT_MODEL_SubSystem_T SubSystem_M_;
RT_MODEL_SubSystem_T *const SubSystem_M = &SubSystem_M_;

/* Output and update for function-call system: '<Root>/Function-Call Subsystem' */
void SubSystem_FunctionCallSubsystem(real_T rtu_In1, real_T rtu_In2, real_T
  *rty_Out1)
{
  /* Sum: '<S1>/Add' */
  *rty_Out1 = rtu_In1 + rtu_In2;
}

/* Output and update for function-call system: '<Root>/Function-Call Subsystem1' */
void SubSyste_FunctionCallSubsystem1(real_T rtu_In1, real_T rtu_In2, real_T
  *rty_Out1)
{
  /* Sum: '<S2>/Subtract' */
  *rty_Out1 = rtu_In2 - rtu_In1;
}

/* Model step function */
void SubSystem_step(void)
{
  real_T Add;

  /* S-Function (fcncallgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem'
   */
  /* Inport: '<Root>/In1' incorporates:
   *  Inport: '<Root>/In2'
   */
  SubSystem_FunctionCallSubsystem(SubSystem_U.In1, SubSystem_U.In2, &Add);

  /* S-Function (fcncallgen): '<Root>/Function-Call Generator' incorporates:
   *  SubSystem: '<Root>/Function-Call Subsystem1'
   */

  /* Inport: '<Root>/In3' incorporates:
   *  Outport: '<Root>/Out1'
   */
  SubSyste_FunctionCallSubsystem1(Add, SubSystem_U.In3, &SubSystem_Y.Out1);

  /* End of Outputs for S-Function (fcncallgen): '<Root>/Function-Call Generator' */
}

/* Model initialize function */
void SubSystem_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(SubSystem_M, (NULL));

  /* external inputs */
  (void)memset((void *)&SubSystem_U, 0, sizeof(ExtU_SubSystem_T));

  /* external outputs */
  SubSystem_Y.Out1 = 0.0;
}

/* Model terminate function */
void SubSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
