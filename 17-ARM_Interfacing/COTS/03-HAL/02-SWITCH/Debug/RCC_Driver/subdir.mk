################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../RCC_Driver/RCC_Driv.c 

OBJS += \
./RCC_Driver/RCC_Driv.o 

C_DEPS += \
./RCC_Driver/RCC_Driv.d 


# Each subdirectory must supply rules for building sources it contributes
RCC_Driver/%.o: ../RCC_Driver/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"D:\Doaa Maher\0000-ITI-9M\00-ARM_Tourkey\00-WorkSpace\SWITCH\Switch_Driver" -I"../include" -I"D:\Doaa Maher\0000-ITI-9M\00-ARM_Tourkey\00-WorkSpace\SWITCH\Lib" -I"D:\Doaa Maher\0000-ITI-9M\00-ARM_Tourkey\00-WorkSpace\SWITCH\GPIO_Driver" -I"D:\Doaa Maher\0000-ITI-9M\00-ARM_Tourkey\00-WorkSpace\SWITCH\LED_Driver" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


