################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/platform/system/src/clock/MKL25Z4/fsl_clock_MKL25Z4.c 

OBJS += \
./SDK/platform/system/src/clock/MKL25Z4/fsl_clock_MKL25Z4.o 

C_DEPS += \
./SDK/platform/system/src/clock/MKL25Z4/fsl_clock_MKL25Z4.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/system/src/clock/MKL25Z4/%.o: ../SDK/platform/system/src/clock/MKL25Z4/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -D"CPU_MKL25Z128VLK4" -D"FSL_RTOS_FREE_RTOS" -I"C:/Users/lntos/workspace.kds/labsem/SDK/platform/hal/inc" -I"C:/Users/lntos/workspace.kds/labsem/SDK/platform/hal/src/sim/MKL25Z4" -I"C:/Users/lntos/workspace.kds/labsem/SDK/platform/system/src/clock/MKL25Z4" -I"C:/Users/lntos/workspace.kds/labsem/SDK/platform/system/inc" -I"C:/Users/lntos/workspace.kds/labsem/SDK/platform/osa/inc" -I"C:/Users/lntos/workspace.kds/labsem/SDK/platform/CMSIS/Include" -I"C:/Users/lntos/workspace.kds/labsem/SDK/platform/devices" -I"C:/Users/lntos/workspace.kds/labsem/SDK/platform/devices/MKL25Z4/include" -I"C:/Users/lntos/workspace.kds/labsem/SDK/platform/utilities/src" -I"C:/Users/lntos/workspace.kds/labsem/SDK/platform/utilities/inc" -I"C:/Users/lntos/workspace.kds/labsem/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/lntos/workspace.kds/labsem/Generated_Code/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/lntos/workspace.kds/labsem/Sources" -I"C:/Users/lntos/workspace.kds/labsem/Generated_Code" -I"C:/Users/lntos/workspace.kds/labsem/SDK/rtos/FreeRTOS/include" -I"C:/Users/lntos/workspace.kds/labsem/SDK/rtos/FreeRTOS/port/gcc" -I"C:/Users/lntos/workspace.kds/labsem/Generated_Code/SDK/rtos/FreeRTOS/config" -I"C:/Users/lntos/workspace.kds/labsem/SDK/platform/drivers/inc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


