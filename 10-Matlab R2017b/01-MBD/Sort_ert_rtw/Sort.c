/*
 * File: Sort.c
 *
 * Code generated for Simulink model 'Sort'.
 *
 * Model version                  : 1.6
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Fri Jan  6 01:24:39 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "Sort.h"
#include "Sort_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Sort_T Sort_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Sort_T Sort_Y;

/* Real-time model */
RT_MODEL_Sort_T Sort_M_;
RT_MODEL_Sort_T *const Sort_M = &Sort_M_;

/* Model step function */
void Sort_step(void)
{
  /* S-Function (sdspsrt2): '<Root>/Sort' incorporates:
   *  Inport: '<Root>/In1'
   *  Outport: '<Root>/Out1'
   *  Outport: '<Root>/Out2'
   */
  /* DSP System Toolbox Sort (sdspsrt2) - '<Root>/Sort' */
  {
    const uint32_T *uQS = &Sort_U.In1;
    uint32_T *index = &Sort_Y.Out2;
    uint32_T *y = &Sort_Y.Out1;
    *y = *uQS;
    *index = 1;                        /* Convert to MATLAB 1-based indexing */
  }
}

/* Model initialize function */
void Sort_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Sort_M, (NULL));

  /* external inputs */
  Sort_U.In1 = 0U;

  /* external outputs */
  (void) memset((void *)&Sort_Y, 0,
                sizeof(ExtY_Sort_T));
}

/* Model terminate function */
void Sort_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
