################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../SDK/platform/drivers/src/gpio/fsl_gpio_common.c \
../SDK/platform/drivers/src/gpio/fsl_gpio_driver.c 

OBJS += \
./SDK/platform/drivers/src/gpio/fsl_gpio_common.o \
./SDK/platform/drivers/src/gpio/fsl_gpio_driver.o 

C_DEPS += \
./SDK/platform/drivers/src/gpio/fsl_gpio_common.d \
./SDK/platform/drivers/src/gpio/fsl_gpio_driver.d 


# Each subdirectory must supply rules for building sources it contributes
SDK/platform/drivers/src/gpio/%.o: ../SDK/platform/drivers/src/gpio/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -D"CPU_MKL25Z128VLK4" -D"FSL_RTOS_FREE_RTOS" -I"C:/Users/lntos/workspace.kds/labqueue/SDK/platform/hal/inc" -I"C:/Users/lntos/workspace.kds/labqueue/SDK/platform/hal/src/sim/MKL25Z4" -I"C:/Users/lntos/workspace.kds/labqueue/SDK/platform/system/src/clock/MKL25Z4" -I"C:/Users/lntos/workspace.kds/labqueue/SDK/platform/system/inc" -I"C:/Users/lntos/workspace.kds/labqueue/SDK/platform/osa/inc" -I"C:/Users/lntos/workspace.kds/labqueue/SDK/platform/CMSIS/Include" -I"C:/Users/lntos/workspace.kds/labqueue/SDK/platform/devices" -I"C:/Users/lntos/workspace.kds/labqueue/SDK/platform/devices/MKL25Z4/include" -I"C:/Users/lntos/workspace.kds/labqueue/SDK/platform/utilities/src" -I"C:/Users/lntos/workspace.kds/labqueue/SDK/platform/utilities/inc" -I"C:/Users/lntos/workspace.kds/labqueue/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/lntos/workspace.kds/labqueue/Generated_Code/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/lntos/workspace.kds/labqueue/Sources" -I"C:/Users/lntos/workspace.kds/labqueue/Generated_Code" -I"C:/Users/lntos/workspace.kds/labqueue/SDK/rtos/FreeRTOS/include" -I"C:/Users/lntos/workspace.kds/labqueue/SDK/rtos/FreeRTOS/port/gcc" -I"C:/Users/lntos/workspace.kds/labqueue/Generated_Code/SDK/rtos/FreeRTOS/config" -I"C:/Users/lntos/workspace.kds/labqueue/SDK/platform/drivers/inc" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

