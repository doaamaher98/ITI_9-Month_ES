/*
 * File: Saturation.c
 *
 * Code generated for Simulink model 'Saturation'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Fri Jan  6 01:18:15 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "Saturation.h"
#include "Saturation_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Saturation_T Saturation_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Saturation_T Saturation_Y;

/* Real-time model */
RT_MODEL_Saturation_T Saturation_M_;
RT_MODEL_Saturation_T *const Saturation_M = &Saturation_M_;

/* Model step function */
void Saturation_step(void)
{
  /* Saturate: '<Root>/Saturation' incorporates:
   *  Inport: '<Root>/In1'
   */
  if (Saturation_U.In1 > 100.0) {
    /* Outport: '<Root>/Out1' */
    Saturation_Y.Out1 = 100.0;
  } else if (Saturation_U.In1 < 1.0) {
    /* Outport: '<Root>/Out1' */
    Saturation_Y.Out1 = 1.0;
  } else {
    /* Outport: '<Root>/Out1' */
    Saturation_Y.Out1 = Saturation_U.In1;
  }

  /* End of Saturate: '<Root>/Saturation' */
}

/* Model initialize function */
void Saturation_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Saturation_M, (NULL));

  /* external inputs */
  Saturation_U.In1 = 0.0;

  /* external outputs */
  Saturation_Y.Out1 = 0.0;
}

/* Model terminate function */
void Saturation_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
