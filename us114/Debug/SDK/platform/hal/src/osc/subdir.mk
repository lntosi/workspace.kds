################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/platform/hal/src/osc/fsl_osc_hal.c 

OBJS += \
./SDK/platform/hal/src/osc/fsl_osc_hal.o 

C_DEPS += \
./SDK/platform/hal/src/osc/fsl_osc_hal.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/hal/src/osc/%.o: ../SDK/platform/hal/src/osc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -D"FSL_OSA_BM_TIMER_CONFIG=2" -D"CPU_MKL25Z128VLK4" -I"C:/Users/lntos/workspace.kds/us114/SDK/platform/hal/inc" -I"C:/Users/lntos/workspace.kds/us114/SDK/platform/hal/src/sim/MKL25Z4" -I"C:/Users/lntos/workspace.kds/us114/SDK/platform/system/src/clock/MKL25Z4" -I"C:/Users/lntos/workspace.kds/us114/SDK/platform/system/inc" -I"C:/Users/lntos/workspace.kds/us114/SDK/platform/osa/inc" -I"C:/Users/lntos/workspace.kds/us114/SDK/platform/CMSIS/Include" -I"C:/Users/lntos/workspace.kds/us114/SDK/platform/devices" -I"C:/Users/lntos/workspace.kds/us114/SDK/platform/devices/MKL25Z4/include" -I"C:/Users/lntos/workspace.kds/us114/SDK/platform/utilities/src" -I"C:/Users/lntos/workspace.kds/us114/SDK/platform/utilities/inc" -I"C:/Users/lntos/workspace.kds/us114/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/lntos/workspace.kds/us114/Generated_Code/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/lntos/workspace.kds/us114/Sources" -I"C:/Users/lntos/workspace.kds/us114/Generated_Code" -I"C:/Users/lntos/workspace.kds/us114/SDK/platform/drivers/inc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


