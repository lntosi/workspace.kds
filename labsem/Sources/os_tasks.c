/* ###################################################################
**     Filename    : os_tasks.c
**     Project     : labsem
**     Processor   : MKL25Z128VLK4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2019-10-22, 11:55, # CodeGen: 2
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
**         Task2_task - void Task2_task(os_task_param_t task_init_data);
**         Task1_task - void Task1_task(os_task_param_t task_init_data);
**
** ###################################################################*/
/*!
** @file os_tasks.c
** @version 01.00
** @brief
**         This is user's event module.
**         Put your event handler code here.
*/         
/*!
**  @addtogroup os_tasks_module os_tasks module documentation
**  @{
*/         
/* MODULE os_tasks */

#include "Cpu.h"
#include "Events.h"
#include "rtos_main_task.h"
#include "os_tasks.h"
#include "ledrgb_hal.h"

#ifdef __cplusplus
extern "C" {
#endif 


/* User includes (#include below this line is not maintained by Processor Expert) */

extern SemaphoreHandle_t meuSemaforo;

/*
** ===================================================================
**     Callback    : Task2_task
**     Description : Task function entry.
**     Parameters  :
**       task_init_data - OS task parameter
**     Returns : Nothing
** ===================================================================
*/
void Task2_task(os_task_param_t task_init_data)
{
	/* Write your local variable definition here */

	uint8_t estadoVerde = 0;

#ifdef PEX_USE_RTOS
	while (1) {
#endif

		/*
		The pdMS_TO_TICKS() API converts your millisecond requirement to FreeRTOS Ticks.
		The FreeRTOS Kernel uses Ticks to schedule and keep track of the various tasks in a microcontroller up to 1KHZ.
		Source: https://www.hackster.io/Niket/tasks-delaytasks-freertos-tutorial-6-45f6b2
		*/

		switch (estadoVerde){
		case 0:
			if (xSemaphoreTake (meuSemaforo, 0) != kStatus_OSA_Success){
				estadoVerde=2;
			}
			ledrgb_clearGreenLed( );
			estadoVerde = 1;
			xSemaphoreGive(meuSemaforo);
			OSA_TimeDelay(1000);
			break;
		case 1:
			if (xSemaphoreTake (meuSemaforo, 0) != kStatus_OSA_Success){
				estadoVerde=3;
			}
			ledrgb_setGreenLed( );
			estadoVerde = 0;
			xSemaphoreGive(meuSemaforo);
			OSA_TimeDelay(1000);
			break;
		case 2:
			ledrgb_setRedLed( );
			break;
		case 3:
			ledrgb_setRedLed( );
			break;
		}

#ifdef PEX_USE_RTOS   
	}
#endif    
}

/*
 ** ===================================================================
 **     Callback    : Task1_task
 **     Description : Task function entry.
 **     Parameters  :
 **       task_init_data - OS task parameter
 **     Returns : Nothing
 ** ===================================================================
 */
void Task1_task(os_task_param_t task_init_data)
{
	/* Write your local variable definition here */

	uint8_t estadoAzul = 1;

#ifdef PEX_USE_RTOS
	while (1) {
#endif

		/*
		The pdMS_TO_TICKS() API converts your millisecond requirement to FreeRTOS Ticks.
		The FreeRTOS Kernel uses Ticks to schedule and keep track of the various tasks in a microcontroller up to 1KHZ.
		Source: https://www.hackster.io/Niket/tasks-delaytasks-freertos-tutorial-6-45f6b2
		*/

		switch (estadoAzul){
		case 0:
			if (xSemaphoreTake (meuSemaforo, 0) != kStatus_OSA_Success){
				estadoAzul=2;
			}
			ledrgb_clearBlueLed( );
			estadoAzul = 1;
			xSemaphoreGive(meuSemaforo);
			OSA_TimeDelay(1000);
			break;
		case 1:
			if (xSemaphoreTake (meuSemaforo, 0) != kStatus_OSA_Success){
				estadoAzul=3;
			}
			ledrgb_setBlueLed( );
			estadoAzul = 0;
			xSemaphoreGive(meuSemaforo);
			OSA_TimeDelay(1000);
			break;
		case 2:
			ledrgb_setRedLed( );
			break;
		case 3:
			ledrgb_setRedLed( );
			break;
		}

#ifdef PEX_USE_RTOS
	}
#endif    
}

/* END os_tasks */

#ifdef __cplusplus
}  /* extern "C" */
#endif 

/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.5 [05.21]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/
