/*
 * File: StateFloww.c
 *
 * Code generated for Simulink model 'StateFloww'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Fri Jan  6 00:48:56 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "StateFloww.h"
#include "StateFloww_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define StateFloww_IN_GreenLight       ((uint8_T)1U)
#define StateFloww_IN_NO_ACTIVE_CHILD  ((uint8_T)0U)
#define StateFloww_IN_OFF              ((uint8_T)2U)
#define StateFloww_IN_ON               ((uint8_T)3U)
#define StateFloww_IN_RedLight         ((uint8_T)4U)
#define StateFloww_IN_TrafficLights    ((uint8_T)5U)
#define StateFloww_IN_YellowLight      ((uint8_T)6U)

/* Block states (auto storage) */
DW_StateFloww_T StateFloww_DW;

/* Real-time model */
RT_MODEL_StateFloww_T StateFloww_M_;
RT_MODEL_StateFloww_T *const StateFloww_M = &StateFloww_M_;

/* Model step function */
void StateFloww_step(void)
{
  /* Chart: '<Root>/Chart' */
  if (StateFloww_DW.temporalCounter_i1 < 2047U) {
    StateFloww_DW.temporalCounter_i1++;
  }

  if (StateFloww_DW.is_active_c3_StateFloww == 0U) {
    StateFloww_DW.is_active_c3_StateFloww = 1U;
    StateFloww_DW.is_c3_StateFloww = StateFloww_IN_TrafficLights;
  } else {
    switch (StateFloww_DW.is_c3_StateFloww) {
     case StateFloww_IN_GreenLight:
      if (StateFloww_DW.temporalCounter_i1 >= 1500U) {
        StateFloww_DW.is_c3_StateFloww = StateFloww_IN_RedLight;
        StateFloww_DW.temporalCounter_i1 = 0U;
      }
      break;

     case StateFloww_IN_OFF:
      break;

     case StateFloww_IN_ON:
      StateFloww_DW.is_c3_StateFloww = StateFloww_IN_RedLight;
      StateFloww_DW.temporalCounter_i1 = 0U;
      break;

     case StateFloww_IN_RedLight:
      if (StateFloww_DW.temporalCounter_i1 >= 1500U) {
        StateFloww_DW.is_c3_StateFloww = StateFloww_IN_YellowLight;
        StateFloww_DW.temporalCounter_i1 = 0U;
      }
      break;

     case StateFloww_IN_TrafficLights:
      StateFloww_DW.is_c3_StateFloww = StateFloww_IN_ON;
      break;

     default:
      if (StateFloww_DW.temporalCounter_i1 >= 1500U) {
        StateFloww_DW.is_c3_StateFloww = StateFloww_IN_GreenLight;
        StateFloww_DW.temporalCounter_i1 = 0U;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void StateFloww_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(StateFloww_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&StateFloww_DW, 0,
                sizeof(DW_StateFloww_T));

  /* SystemInitialize for Chart: '<Root>/Chart' */
  StateFloww_DW.temporalCounter_i1 = 0U;
  StateFloww_DW.is_active_c3_StateFloww = 0U;
  StateFloww_DW.is_c3_StateFloww = StateFloww_IN_NO_ACTIVE_CHILD;
}

/* Model terminate function */
void StateFloww_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
