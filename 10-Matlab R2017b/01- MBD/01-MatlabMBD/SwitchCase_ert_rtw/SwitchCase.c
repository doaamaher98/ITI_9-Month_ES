/*
 * File: SwitchCase.c
 *
 * Code generated for Simulink model 'SwitchCase'.
 *
 * Model version                  : 1.53
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sat Dec 31 19:26:59 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "SwitchCase.h"
#include "SwitchCase_private.h"

/* Block states (auto storage) */
DW_SwitchCase_T SwitchCase_DW;

/* External inputs (root inport signals with auto storage) */
ExtU_SwitchCase_T SwitchCase_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_SwitchCase_T SwitchCase_Y;

/* Real-time model */
RT_MODEL_SwitchCase_T SwitchCase_M_;
RT_MODEL_SwitchCase_T *const SwitchCase_M = &SwitchCase_M_;

/* Model step function */
void SwitchCase_step(void)
{
  real_T rtb_Add_k;

  /* SwitchCase: '<Root>/Switch Case' incorporates:
   *  Inport: '<Root>/CounterInput'
   *  Inport: '<Root>/DefaultCounter'
   *  Inport: '<S4>/In1'
   */
  rtb_Add_k = trunc(SwitchCase_U.CounterInput);
  if (rtIsNaN(rtb_Add_k) || rtIsInf(rtb_Add_k)) {
    rtb_Add_k = 0.0;
  } else {
    rtb_Add_k = fmod(rtb_Add_k, 4.294967296E+9);
  }

  switch (rtb_Add_k < 0.0 ? -(int32_T)(uint32_T)-rtb_Add_k : (int32_T)(uint32_T)
          rtb_Add_k) {
   case 1:
    /* Outputs for IfAction SubSystem: '<Root>/Case(0)' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Sum: '<S1>/Add' incorporates:
     *  Inport: '<Root>/Case0Counter0'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    rtb_Add_k = SwitchCase_U.Case0Counter0 + SwitchCase_DW.UnitDelay_DSTATE_l;

    /* Switch: '<S1>/Switch' incorporates:
     *  Constant: '<S1>/Constant1'
     */
    if (rtb_Add_k >= 10.0) {
      rtb_Add_k = 0.0;
    }

    /* End of Switch: '<S1>/Switch' */

    /* Update for UnitDelay: '<S1>/Unit Delay' */
    SwitchCase_DW.UnitDelay_DSTATE_l = rtb_Add_k;

    /* End of Outputs for SubSystem: '<Root>/Case(0)' */
    break;

   case 2:
    /* Outputs for IfAction SubSystem: '<Root>/Case(1)' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Sum: '<S2>/Add' incorporates:
     *  Inport: '<Root>/Case1Counter1'
     *  UnitDelay: '<S2>/Unit Delay'
     */
    rtb_Add_k = SwitchCase_U.Case1Counter1 + SwitchCase_DW.UnitDelay_DSTATE_g;

    /* Switch: '<S2>/Switch' incorporates:
     *  Constant: '<S2>/Constant1'
     */
    if (rtb_Add_k != 0.0) {
      rtb_Add_k = 0.0;
    }

    /* End of Switch: '<S2>/Switch' */

    /* Update for UnitDelay: '<S2>/Unit Delay' */
    SwitchCase_DW.UnitDelay_DSTATE_g = rtb_Add_k;

    /* End of Outputs for SubSystem: '<Root>/Case(1)' */
    break;

   case 3:
   case 4:
    /* Outputs for IfAction SubSystem: '<Root>/Case(2)' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Sum: '<S3>/Add' incorporates:
     *  Inport: '<Root>/Case2Counter2'
     *  UnitDelay: '<S3>/Unit Delay'
     */
    rtb_Add_k = SwitchCase_U.Case2Counter2 + SwitchCase_DW.UnitDelay_DSTATE;

    /* Switch: '<S3>/Switch' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    if (rtb_Add_k > 10.0) {
      rtb_Add_k = 0.0;
    }

    /* End of Switch: '<S3>/Switch' */

    /* Update for UnitDelay: '<S3>/Unit Delay' */
    SwitchCase_DW.UnitDelay_DSTATE = rtb_Add_k;

    /* End of Outputs for SubSystem: '<Root>/Case(2)' */
    break;

   default:
    /* Outputs for IfAction SubSystem: '<Root>/Default' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    rtb_Add_k = SwitchCase_U.DefaultCounter;

    /* End of Outputs for SubSystem: '<Root>/Default' */
    break;
  }

  /* End of SwitchCase: '<Root>/Switch Case' */

  /* Outport: '<Root>/OutParam' */
  SwitchCase_Y.OutParam = rtb_Add_k;
}

/* Model initialize function */
void SwitchCase_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatus(SwitchCase_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&SwitchCase_DW, 0,
                sizeof(DW_SwitchCase_T));

  /* external inputs */
  (void)memset((void *)&SwitchCase_U, 0, sizeof(ExtU_SwitchCase_T));

  /* external outputs */
  SwitchCase_Y.OutParam = 0.0;
}

/* Model terminate function */
void SwitchCase_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
