################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/rtos/FreeRTOS/port/gcc/port.c 

S_UPPER_SRCS += \
../SDK/rtos/FreeRTOS/port/gcc/portasm.S 

OBJS += \
./SDK/rtos/FreeRTOS/port/gcc/port.o \
./SDK/rtos/FreeRTOS/port/gcc/portasm.o 

C_DEPS += \
./SDK/rtos/FreeRTOS/port/gcc/port.d 

S_UPPER_DEPS += \
./SDK/rtos/FreeRTOS/port/gcc/portasm.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/rtos/FreeRTOS/port/gcc/%.o: ../SDK/rtos/FreeRTOS/port/gcc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -D"CPU_MKL25Z128VLK4" -D"FSL_RTOS_FREE_RTOS" -I"C:/Users/lntos/workspace.kds/lab1/SDK/platform/hal/inc" -I"C:/Users/lntos/workspace.kds/lab1/SDK/platform/hal/src/sim/MKL25Z4" -I"C:/Users/lntos/workspace.kds/lab1/SDK/platform/system/src/clock/MKL25Z4" -I"C:/Users/lntos/workspace.kds/lab1/SDK/platform/system/inc" -I"C:/Users/lntos/workspace.kds/lab1/SDK/platform/osa/inc" -I"C:/Users/lntos/workspace.kds/lab1/SDK/platform/CMSIS/Include" -I"C:/Users/lntos/workspace.kds/lab1/SDK/platform/devices" -I"C:/Users/lntos/workspace.kds/lab1/SDK/platform/devices/MKL25Z4/include" -I"C:/Users/lntos/workspace.kds/lab1/SDK/platform/utilities/src" -I"C:/Users/lntos/workspace.kds/lab1/SDK/platform/utilities/inc" -I"C:/Users/lntos/workspace.kds/lab1/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/lntos/workspace.kds/lab1/Generated_Code/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/lntos/workspace.kds/lab1/Sources" -I"C:/Users/lntos/workspace.kds/lab1/Generated_Code" -I"C:/Users/lntos/workspace.kds/lab1/SDK/rtos/FreeRTOS/include" -I"C:/Users/lntos/workspace.kds/lab1/SDK/rtos/FreeRTOS/port/gcc" -I"C:/Users/lntos/workspace.kds/lab1/Generated_Code/SDK/rtos/FreeRTOS/config" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

SDK/rtos/FreeRTOS/port/gcc/%.o: ../SDK/rtos/FreeRTOS/port/gcc/%.S
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM GNU Assembler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -x assembler-with-cpp -D"FSL_RTOS_FREE_RTOS" -I"C:/Users/lntos/workspace.kds/lab1/Generated_Code/SDK/rtos/FreeRTOS/config" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


