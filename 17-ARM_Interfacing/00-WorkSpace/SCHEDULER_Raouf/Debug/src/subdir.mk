################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/GPIO.c \
../src/LED.c \
../src/LED_Cfg.c \
../src/RCC.c \
../src/SYSTICK_Program.c \
../src/Schedular_Config.c \
../src/Schedular_Program.c \
../src/main.c 

OBJS += \
./src/GPIO.o \
./src/LED.o \
./src/LED_Cfg.o \
./src/RCC.o \
./src/SYSTICK_Program.o \
./src/Schedular_Config.o \
./src/Schedular_Program.o \
./src/main.o 

C_DEPS += \
./src/GPIO.d \
./src/LED.d \
./src/LED_Cfg.d \
./src/RCC.d \
./src/SYSTICK_Program.d \
./src/Schedular_Config.d \
./src/Schedular_Program.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


