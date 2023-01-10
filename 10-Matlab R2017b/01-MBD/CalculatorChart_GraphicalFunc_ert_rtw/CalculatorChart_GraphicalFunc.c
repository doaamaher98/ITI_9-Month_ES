/*
 * File: CalculatorChart_GraphicalFunc.c
 *
 * Code generated for Simulink model 'CalculatorChart_GraphicalFunc'.
 *
 * Model version                  : 1.48
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sun Jan  8 14:58:19 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "CalculatorChart_GraphicalFunc.h"
#include "CalculatorChart_GraphicalFunc_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_CalculatorChart_Graphica_T CalculatorChart_GraphicalFunc_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_CalculatorChart_Graphica_T CalculatorChart_GraphicalFunc_Y;

/* Real-time model */
RT_MODEL_CalculatorChart_Grap_T CalculatorChart_GraphicalFun_M_;
RT_MODEL_CalculatorChart_Grap_T *const CalculatorChart_GraphicalFun_M =
  &CalculatorChart_GraphicalFun_M_;

/* Forward declaration for local functions */
static real_T CalculatorChart_GraphicalFu_Add(real_T n1, real_T n2);
static real_T CalculatorChart_GraphicalFu_Sub(real_T n1, real_T n2);
static real_T CalculatorChart_GraphicalFu_Mul(real_T n1, real_T n2);
static real_T CalculatorChart_GraphicalFu_Div(real_T n1, real_T n2);

/* Function for Chart: '<Root>/Calculator' */
static real_T CalculatorChart_GraphicalFu_Add(real_T n1, real_T n2)
{
  return n1 + n2;
}

/* Function for Chart: '<Root>/Calculator' */
static real_T CalculatorChart_GraphicalFu_Sub(real_T n1, real_T n2)
{
  return n1 - n2;
}

/* Function for Chart: '<Root>/Calculator' */
static real_T CalculatorChart_GraphicalFu_Mul(real_T n1, real_T n2)
{
  return n1 * n2;
}

/* Function for Chart: '<Root>/Calculator' */
static real_T CalculatorChart_GraphicalFu_Div(real_T n1, real_T n2)
{
  return n1 / n2;
}

/* Model step function */
void CalculatorChart_GraphicalFunc_step(void)
{
  /* Outport: '<Root>/AddOut' incorporates:
   *  Chart: '<Root>/Calculator'
   *  Inport: '<Root>/parameter1'
   *  Inport: '<Root>/parameter2'
   */
  CalculatorChart_GraphicalFunc_Y.AddOut = CalculatorChart_GraphicalFu_Add
    (CalculatorChart_GraphicalFunc_U.parameter1,
     CalculatorChart_GraphicalFunc_U.parameter2);

  /* Outport: '<Root>/SubOut' incorporates:
   *  Chart: '<Root>/Calculator'
   *  Inport: '<Root>/parameter1'
   *  Inport: '<Root>/parameter2'
   */
  CalculatorChart_GraphicalFunc_Y.SubOut = CalculatorChart_GraphicalFu_Sub
    (CalculatorChart_GraphicalFunc_U.parameter1,
     CalculatorChart_GraphicalFunc_U.parameter2);

  /* Outport: '<Root>/MulOut' incorporates:
   *  Chart: '<Root>/Calculator'
   *  Inport: '<Root>/parameter1'
   *  Inport: '<Root>/parameter2'
   */
  CalculatorChart_GraphicalFunc_Y.MulOut = CalculatorChart_GraphicalFu_Mul
    (CalculatorChart_GraphicalFunc_U.parameter1,
     CalculatorChart_GraphicalFunc_U.parameter2);

  /* Outport: '<Root>/DivOut' incorporates:
   *  Chart: '<Root>/Calculator'
   *  Inport: '<Root>/parameter1'
   *  Inport: '<Root>/parameter2'
   */
  CalculatorChart_GraphicalFunc_Y.DivOut = CalculatorChart_GraphicalFu_Div
    (CalculatorChart_GraphicalFunc_U.parameter1,
     CalculatorChart_GraphicalFunc_U.parameter2);
}

/* Model initialize function */
void CalculatorChart_GraphicalFunc_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(CalculatorChart_GraphicalFun_M, (NULL));

  /* external inputs */
  (void)memset((void *)&CalculatorChart_GraphicalFunc_U, 0, sizeof
               (ExtU_CalculatorChart_Graphica_T));

  /* external outputs */
  (void) memset((void *)&CalculatorChart_GraphicalFunc_Y, 0,
                sizeof(ExtY_CalculatorChart_Graphica_T));
}

/* Model terminate function */
void CalculatorChart_GraphicalFunc_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
