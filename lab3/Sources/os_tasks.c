/* ###################################################################
**     Filename    : os_tasks.c
**     Project     : lab3
**     Processor   : MKL25Z128VLK4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2019-09-25, 10:00, # CodeGen: 2
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

#if USAR_MUTEX==1
extern mutex_t mutexrgb;
#else
extern semaphore_t semargb;
#endif

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

	uint8_t estadoLedVermelho=0;

#ifdef PEX_USE_RTOS
	while (1) {
#endif

		/* Write your code here ... */

		/* OSA_TimeDelay(10); */

		/* Example code (for task release) */

		switch (estadoLedVermelho){
		case 0:
			ledrgb_clearRedLed();
#if USAR_MUTEX==1
			if(OSA_MutexUnlock(&mutexrgb)){
#else
			if (OSA_SemaPost(&semargb) != kStatus_OSA_Success){
#endif
				estadoLedVermelho=2;
			}
			estadoLedVermelho=1;
			OSA_TimeDelay(1000);
			break;
		case 1:
#if USAR_MUTEX==1
			if(OSA_MutexLock(&mutexrgb,2000)){
#else
			if (OSA_SemaWait(&semargb,2000) != kStatus_OSA_Success){
#endif
				estadoLedVermelho=3;
			}
			ledrgb_setRedLed();
			estadoLedVermelho=0;
			OSA_TimeDelay(1000);
			break;
		case 2:
			break;
		case 3:
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

			uint8_t estadoLedAzul=0;

#ifdef PEX_USE_RTOS
	while (1) {
#endif

			/* Write your code here ... */

			/*OSA_TimeDelay(10);*/

			/* Example code (for task release) */

		switch (estadoLedAzul){
			case 0:
#if USAR_MUTEX==1
				if(OSA_MutexLock(&mutexrgb,2000)){
#else
				if (OSA_SemaWait(&semargb,2000) != kStatus_OSA_Success){
#endif
					estadoLedAzul=3;
				}
				ledrgb_setBlueLed();
				estadoLedAzul=1;
				OSA_TimeDelay(1000);
				break;
			case 1:
				ledrgb_clearBlueLed();
#if USAR_MUTEX==1
				if(OSA_MutexUnlock(&mutexrgb)){
#else
				if (OSA_SemaPost(&semargb) != kStatus_OSA_Success){
#endif
					estadoLedAzul=3;
				}
				estadoLedAzul=0;
				OSA_TimeDelay(1000);
				break;
			case 2:
				break;
			case 3:
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
