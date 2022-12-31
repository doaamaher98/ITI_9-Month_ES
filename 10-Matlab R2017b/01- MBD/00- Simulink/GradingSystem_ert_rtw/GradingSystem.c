/*
 * File: GradingSystem.c
 *
 * Code generated for Simulink model 'GradingSystem'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sat Dec 31 23:48:35 2022
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
  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/In1'
   */
  if (GradingSystem_U.In1 == 1.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Outport: '<Root>/Out1' incorporates:
     *  Inport: '<S1>/In1'
     */
    GradingSystem_Y.Out1 = GradingSystem_U.In1;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else if (GradingSystem_U.In1 == 2.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/Out2' incorporates:
     *  Inport: '<S2>/In1'
     */
    GradingSystem_Y.Out2 = GradingSystem_U.In1;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  } else if (GradingSystem_U.In1 == 3.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Outport: '<Root>/Out3' incorporates:
     *  Inport: '<S3>/In1'
     */
    GradingSystem_Y.Out3 = GradingSystem_U.In1;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
  } else if (GradingSystem_U.In1 == 4.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* Outport: '<Root>/Out4' incorporates:
     *  Inport: '<S5>/In1'
     */
    GradingSystem_Y.Out4 = GradingSystem_U.In1;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */
  } else if (GradingSystem_U.In1 == 5.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Outport: '<Root>/Out5' incorporates:
     *  Inport: '<S4>/In1'
     */
    GradingSystem_Y.Out5 = GradingSystem_U.In1;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem5' incorporates:
     *  ActionPort: '<S6>/Action Port'
     */
    /* Outport: '<Root>/Out6' incorporates:
     *  Inport: '<S6>/In1'
     */
    GradingSystem_Y.Out6 = GradingSystem_U.In1;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem5' */
  }

  /* End of If: '<Root>/If' */
}

/* Model initialize function */
void GradingSystem_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(GradingSystem_M, (NULL));

  /* external inputs */
  GradingSystem_U.In1 = 0.0;

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
