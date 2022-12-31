/*
 * File: GradingSystem.c
 *
 * Code generated for Simulink model 'GradingSystem'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sun Jan  1 01:15:10 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "GradingSystem.h"
#include "GradingSystem_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_GradingSystem_T GradingSystem_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_GradingSystem_T GradingSystem_Y;

/* Real-time model */
RT_MODEL_GradingSystem_T GradingSystem_M_;
RT_MODEL_GradingSystem_T *const GradingSystem_M = &GradingSystem_M_;

/* Model step function */
void GradingSystem_step(void)
{
  /* If: '<Root>/If Condition' incorporates:
   *  Inport: '<Root>/InitCondition'
   */
  if (GradingSystem_U.InitCondition >= 85.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Excellent Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Outport: '<Root>/OutResult' incorporates:
     *  Inport: '<S1>/In1'
     */
    GradingSystem_Y.OutResult = GradingSystem_U.InitCondition;

    /* End of Outputs for SubSystem: '<Root>/If Excellent Subsystem' */
  } else if (GradingSystem_U.InitCondition >= 75.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If VeryGood Subsystem' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* Outport: '<Root>/OutResult1' incorporates:
     *  Inport: '<S5>/In1'
     */
    GradingSystem_Y.OutResult1 = GradingSystem_U.InitCondition;

    /* End of Outputs for SubSystem: '<Root>/If VeryGood Subsystem' */
  } else if (GradingSystem_U.InitCondition >= 65.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Good Subsystem' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Outport: '<Root>/OutResult2' incorporates:
     *  Inport: '<S3>/In1'
     */
    GradingSystem_Y.OutResult2 = GradingSystem_U.InitCondition;

    /* End of Outputs for SubSystem: '<Root>/If Good Subsystem' */
  } else if (GradingSystem_U.InitCondition >= 50.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Pass Subsystem' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Outport: '<Root>/OutResult3' incorporates:
     *  Inport: '<S4>/In1'
     */
    GradingSystem_Y.OutResult3 = GradingSystem_U.InitCondition;

    /* End of Outputs for SubSystem: '<Root>/If Pass Subsystem' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Fail Subsystem' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/OutResult4' incorporates:
     *  Inport: '<S2>/In1'
     */
    GradingSystem_Y.OutResult4 = GradingSystem_U.InitCondition;

    /* End of Outputs for SubSystem: '<Root>/If Fail Subsystem' */
  }

  /* End of If: '<Root>/If Condition' */
}

/* Model initialize function */
void GradingSystem_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(GradingSystem_M, (NULL));

  /* external inputs */
  GradingSystem_U.InitCondition = 0.0;

  /* external outputs */
  (void) memset((void *)&GradingSystem_Y, 0,
                sizeof(ExtY_GradingSystem_T));
}

/* Model terminate function */
void GradingSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
