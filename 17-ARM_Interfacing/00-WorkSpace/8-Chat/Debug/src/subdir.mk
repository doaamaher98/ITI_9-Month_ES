################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/Chat.c \
../src/GPIO.c \
../src/NVIC.c \
../src/RCC_Driv.c \
../src/STK_Program.c \
../src/Scheduler.c \
../src/Scheduler_Cfg.c \
../src/USART.c \
../src/USART_Config.c \
../src/main.c 

OBJS += \
./src/Chat.o \
./src/GPIO.o \
./src/NVIC.o \
./src/RCC_Driv.o \
./src/STK_Program.o \
./src/Scheduler.o \
./src/Scheduler_Cfg.o \
./src/USART.o \
./src/USART_Config.o \
./src/main.o 

C_DEPS += \
./src/Chat.d \
./src/GPIO.d \
./src/NVIC.d \
./src/RCC_Driv.d \
./src/STK_Program.d \
./src/Scheduler.d \
./src/Scheduler_Cfg.d \
./src/USART.d \
./src/USART_Config.d \
./src/main.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GNU Arm Cross C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m4 -mthumb -mfloat-abi=soft -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -ffreestanding -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DUSE_FULL_ASSERT -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DSTM32F401xC -DUSE_HAL_DRIVER -DHSE_VALUE=25000000 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/stm32f4-hal" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


