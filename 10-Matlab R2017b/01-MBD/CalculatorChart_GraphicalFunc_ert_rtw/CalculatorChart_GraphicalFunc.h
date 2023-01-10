/*
 * File: CalculatorChart_GraphicalFunc.h
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

#ifndef RTW_HEADER_CalculatorChart_GraphicalFunc_h_
#define RTW_HEADER_CalculatorChart_GraphicalFunc_h_
#include <string.h>
#include <stddef.h>
#ifndef CalculatorChart_GraphicalFunc_COMMON_INCLUDES_
# define CalculatorChart_GraphicalFunc_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* CalculatorChart_GraphicalFunc_COMMON_INCLUDES_ */

#include "CalculatorChart_GraphicalFunc_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T parameter1;                   /* '<Root>/parameter1' */
  real_T parameter2;                   /* '<Root>/parameter2' */
} ExtU_CalculatorChart_Graphica_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T AddOut;                       /* '<Root>/AddOut' */
  real_T SubOut;                       /* '<Root>/SubOut' */
  real_T MulOut;                       /* '<Root>/MulOut' */
  real_T DivOut;                       /* '<Root>/DivOut' */
} ExtY_CalculatorChart_Graphica_T;

/* Real-time Model Data Structure */
struct tag_RTM_CalculatorChart_Graph_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_CalculatorChart_Graphica_T CalculatorChart_GraphicalFunc_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_CalculatorChart_Graphica_T CalculatorChart_GraphicalFunc_Y;

/* Model entry point functions */
extern void CalculatorChart_GraphicalFunc_initialize(void);
extern void CalculatorChart_GraphicalFunc_step(void);
extern void CalculatorChart_GraphicalFunc_terminate(void);

/* Real-time Model object */
extern RT_MODEL_CalculatorChart_Grap_T *const CalculatorChart_GraphicalFun_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 * Block '<Root>/Display1' : Unused code path elimination
 * Block '<Root>/Display2' : Unused code path elimination
 * Block '<Root>/Display3' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'CalculatorChart_GraphicalFunc'
 * '<S1>'   : 'CalculatorChart_GraphicalFunc/Calculator'
 */
#endif                                 /* RTW_HEADER_CalculatorChart_GraphicalFunc_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
