################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/platform/hal/src/rtc/fsl_rtc_hal.c 

OBJS += \
./SDK/platform/hal/src/rtc/fsl_rtc_hal.o 

C_DEPS += \
./SDK/platform/hal/src/rtc/fsl_rtc_hal.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/hal/src/rtc/%.o: ../SDK/platform/hal/src/rtc/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -D"CPU_MKL25Z128VLK4" -D"FSL_RTOS_FREE_RTOS" -I"C:/Users/lntos/workspace.kds/labfinal/SDK/platform/hal/inc" -I"C:/Users/lntos/workspace.kds/labfinal/SDK/platform/hal/src/sim/MKL25Z4" -I"C:/Users/lntos/workspace.kds/labfinal/SDK/platform/system/src/clock/MKL25Z4" -I"C:/Users/lntos/workspace.kds/labfinal/SDK/platform/system/inc" -I"C:/Users/lntos/workspace.kds/labfinal/SDK/platform/osa/inc" -I"C:/Users/lntos/workspace.kds/labfinal/SDK/platform/CMSIS/Include" -I"C:/Users/lntos/workspace.kds/labfinal/SDK/platform/devices" -I"C:/Users/lntos/workspace.kds/labfinal/SDK/platform/devices/MKL25Z4/include" -I"C:/Users/lntos/workspace.kds/labfinal/SDK/platform/utilities/src" -I"C:/Users/lntos/workspace.kds/labfinal/SDK/platform/utilities/inc" -I"C:/Users/lntos/workspace.kds/labfinal/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/lntos/workspace.kds/labfinal/Generated_Code/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/lntos/workspace.kds/labfinal/Sources" -I"C:/Users/lntos/workspace.kds/labfinal/Generated_Code" -I"C:/Users/lntos/workspace.kds/labfinal/SDK/rtos/FreeRTOS/include" -I"C:/Users/lntos/workspace.kds/labfinal/SDK/rtos/FreeRTOS/port/gcc" -I"C:/Users/lntos/workspace.kds/labfinal/Generated_Code/SDK/rtos/FreeRTOS/config" -I"C:/Users/lntos/workspace.kds/labfinal/SDK/platform/drivers/inc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


