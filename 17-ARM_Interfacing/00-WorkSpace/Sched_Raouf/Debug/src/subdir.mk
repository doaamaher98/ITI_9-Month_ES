################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/GPIO_Program.c \
../src/Led_Config.c \
../src/Led_Program.c \
../src/NVIC_Program.c \
../src/RCC_Program.c \
../src/SYSTICK_Program.c \
../src/Sched_APP.c \
../src/Schedular_Config.c \
../src/Schedular_Program.c \
../src/main.c 

OBJS += \
./src/GPIO_Program.o \
./src/Led_Config.o \
./src/Led_Program.o \
./src/NVIC_Program.o \
./src/RCC_Program.o \
./src/SYSTICK_Program.o \
./src/Sched_APP.o \
./src/Schedular_Config.o \
./src/Schedular_Program.o \
./src/main.o 

C_DEPS += \
./src/GPIO_Program.d \
./src/Led_Config.d \
./src/Led_Program.d \
./src/NVIC_Program.d \
./src/RCC_Program.d \
./src/SYSTICK_Program.d \
./src/Sched_APP.d \
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


