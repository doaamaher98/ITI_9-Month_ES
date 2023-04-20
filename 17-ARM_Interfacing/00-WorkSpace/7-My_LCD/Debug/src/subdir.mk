################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/GPIO.c \
../src/LCD.c \
../src/LCD_Application.c \
../src/LCD_Cfg.c \
../src/LED.c \
../src/LED_Application.c \
../src/LED_Cfg.c \
../src/RCC_Driv.c \
../src/STK_Program.c \
../src/SW.c \
../src/SW_Cfg.c \
../src/Scheduler.c \
../src/Scheduler_Cfg.c \
../src/main.c 

OBJS += \
./src/GPIO.o \
./src/LCD.o \
./src/LCD_Application.o \
./src/LCD_Cfg.o \
./src/LED.o \
./src/LED_Application.o \
./src/LED_Cfg.o \
./src/RCC_Driv.o \
./src/STK_Program.o \
./src/SW.o \
./src/SW_Cfg.o \
./src/Scheduler.o \
./src/Scheduler_Cfg.o \
./src/main.o 

C_DEPS += \
./src/GPIO.d \
./src/LCD.d \
./src/LCD_Application.d \
./src/LCD_Cfg.d \
./src/LED.d \
./src/LED_Application.d \
./src/LED_Cfg.d \
./src/RCC_Driv.d \
./src/STK_Program.d \
./src/SW.d \
./src/SW_Cfg.d \
./src/Scheduler.d \
./src/Scheduler_Cfg.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


