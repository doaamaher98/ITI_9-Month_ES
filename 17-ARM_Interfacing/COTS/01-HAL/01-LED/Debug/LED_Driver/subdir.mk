################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../LED_Driver/LED.c \
../LED_Driver/LED_Cfg.c 

OBJS += \
./LED_Driver/LED.o \
./LED_Driver/LED_Cfg.o 

C_DEPS += \
./LED_Driver/LED.d \
./LED_Driver/LED_Cfg.d 


# Each subdirectory must supply rules for building sources it contributes
LED_Driver/%.o: ../LED_Driver/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"D:\Doaa Maher\0000-ITI-9M\00-ARM_Tourkey\00-WorkSpace\LED" -I"D:\Doaa Maher\0000-ITI-9M\00-ARM_Tourkey\00-WorkSpace\LED\GPIO_Driver" -I"D:\Doaa Maher\0000-ITI-9M\00-ARM_Tourkey\00-WorkSpace\LED\LED_Driver" -I"D:\Doaa Maher\0000-ITI-9M\00-ARM_Tourkey\00-WorkSpace\LED\Lib" -I"D:\Doaa Maher\0000-ITI-9M\00-ARM_Tourkey\00-WorkSpace\LED\RCC_Driver" -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


