################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/APP1.c \
../src/APP2.c \
../src/APP3.c \
../src/GPIO.c \
../src/LCD_2.c \
../src/LCD_2_Cfg.c \
../src/LCD_2_TASK.c \
../src/LED.c \
../src/LED_Cfg.c \
../src/RCC.c \
../src/SWITCH.c \
../src/SWITCH_APP.c \
../src/SWITCH_Cfg.c \
../src/SYSTICK.c \
../src/main.c \
../src/scheduler.c \
../src/scheduler_Cfg.c 

OBJS += \
./src/APP1.o \
./src/APP2.o \
./src/APP3.o \
./src/GPIO.o \
./src/LCD_2.o \
./src/LCD_2_Cfg.o \
./src/LCD_2_TASK.o \
./src/LED.o \
./src/LED_Cfg.o \
./src/RCC.o \
./src/SWITCH.o \
./src/SWITCH_APP.o \
./src/SWITCH_Cfg.o \
./src/SYSTICK.o \
./src/main.o \
./src/scheduler.o \
./src/scheduler_Cfg.o 

C_DEPS += \
./src/APP1.d \
./src/APP2.d \
./src/APP3.d \
./src/GPIO.d \
./src/LCD_2.d \
./src/LCD_2_Cfg.d \
./src/LCD_2_TASK.d \
./src/LED.d \
./src/LED_Cfg.d \
./src/RCC.d \
./src/SWITCH.d \
./src/SWITCH_APP.d \
./src/SWITCH_Cfg.d \
./src/SYSTICK.d \
./src/main.d \
./src/scheduler.d \
./src/scheduler_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


