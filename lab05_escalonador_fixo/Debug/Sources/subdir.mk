################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Sources/Events.c \
../Sources/Utility.c \
../Sources/main.c \
../Sources/os_tasks.c \
../Sources/rtos_main_task.c \
../Sources/shell_driver.c \
../Sources/teste_driver.c 

OBJS += \
./Sources/Events.o \
./Sources/Utility.o \
./Sources/main.o \
./Sources/os_tasks.o \
./Sources/rtos_main_task.o \
./Sources/shell_driver.o \
./Sources/teste_driver.o 

C_DEPS += \
./Sources/Events.d \
./Sources/Utility.d \
./Sources/main.d \
./Sources/os_tasks.d \
./Sources/rtos_main_task.d \
./Sources/shell_driver.d \
./Sources/teste_driver.d 


# Each subdirectory must supply rules for building sources it contributes
Sources/%.o: ../Sources/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0plus -mthumb -O0 -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall  -g3 -D"CPU_MKL25Z128VLK4" -D"FSL_RTOS_FREE_RTOS" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/SDK/platform/hal/inc" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/SDK/platform/hal/src/sim/MKL25Z4" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/SDK/platform/system/src/clock/MKL25Z4" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/SDK/platform/system/inc" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/SDK/platform/osa/inc" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/SDK/platform/CMSIS/Include" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/SDK/platform/devices" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/SDK/platform/devices/MKL25Z4/include" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/SDK/platform/utilities/src" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/SDK/platform/utilities/inc" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/Generated_Code/SDK/platform/devices/MKL25Z4/startup" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/Sources" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/Generated_Code" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/SDK/rtos/FreeRTOS/include" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/SDK/rtos/FreeRTOS/port/gcc" -I"C:/Users/lntos/workspace.kds/lab05_escalonador_fixo/Generated_Code/SDK/rtos/FreeRTOS/config" -std=c99 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


