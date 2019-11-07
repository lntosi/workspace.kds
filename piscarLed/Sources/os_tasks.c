/* ###################################################################
**     Filename    : os_tasks.c
**     Project     : piscarLed
**     Processor   : MKL25Z128VLK4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2019-10-16, 20:51, # CodeGen: 18
**     Abstract    :
**         This is user's event module.
**         Put your event handler code here.
**     Settings    :
**     Contents    :
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

#ifdef __cplusplus
extern "C" {
#endif 


/* User includes (#include below this line is not maintained by Processor Expert) */


/* FDRMKL25Z RGB LED pins defintion */
#define RED_LED_PIN     (uint32_t) 18u
#define GREEN_LED_PIN   (uint32_t) 19u


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


#ifdef PEX_USE_RTOS
	while (1) {
#endif
		/* Write your code here ... */


		//OSA_TimeDelay(10);                 /* Example code (for task release) */


		//OSA_TimeDelay(500);
		//GPIO_DRV_TogglePinOutput(LEDRGB_GREEN);


		PORT_HAL_SetMuxMode(PORTB, GREEN_LED_PIN, kPortMuxAsGpio);
		GPIO_HAL_SetPinDir(PTB, GREEN_LED_PIN, kGpioDigitalOutput);

		//ledrgb_clearGreenLed( );
		GPIO_HAL_SetPinOutput(PTB, GREEN_LED_PIN);
		OSA_TimeDelay(1000);

		//ledrgb_setGreenLed( );
		GPIO_HAL_ClearPinOutput(PTB, GREEN_LED_PIN);
		OSA_TimeDelay(1000);


#ifdef PEX_USE_RTOS   
	}
#endif    
}

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

#ifdef PEX_USE_RTOS
	while (1) {
#endif
		/* Write your code here ... */


		//OSA_TimeDelay(10);                 /* Example code (for task release) */


		//GPIO_DRV_TogglePinOutput(LEDRGB_RED);
		//OSA_TimeDelay(500);

		GPIO_HAL_SetPinDir(PTB, RED_LED_PIN, kGpioDigitalOutput);
		PORT_HAL_SetMuxMode(PORTB, RED_LED_PIN, kPortMuxAsGpio);

		//ledrgb_clearBlueLed( );
		OSA_TimeDelay(1000);
		GPIO_HAL_SetPinOutput(PTB, RED_LED_PIN);

		//ledrgb_setBlueLed( );
		OSA_TimeDelay(1000);
		GPIO_HAL_ClearPinOutput(PTB, RED_LED_PIN);


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
