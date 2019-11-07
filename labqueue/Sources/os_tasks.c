/* ###################################################################
**     Filename    : os_tasks.c
**     Project     : labqueue
**     Processor   : MKL25Z128VLK4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2019-10-23, 00:49, # CodeGen: 4
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



#ifdef __cplusplus
extern "C" {
#endif 


/* User includes (#include below this line is not maintained by Processor Expert) */

extern msg_queue_handler_t manipulafila;

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

	int a = 8;
	int b = 10;


#ifdef PEX_USE_RTOS
	while (1) {
#endif
		/* Write your code here ... */


		OSA_TimeDelay(100);                 /* Example code (for task release) */

		OSA_MsgQPut (manipulafila,&a);

		OSA_MsgQPut (manipulafila,&b);


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

	int c = 0;
	int d = 0;


#ifdef PEX_USE_RTOS
	while (1) {
#endif
		/* Write your code here ... */


		OSA_TimeDelay(100);                 /* Example code (for task release) */

		OSA_MsgQGet (manipulafila,&c,100);

		OSA_MsgQGet (manipulafila,&d,100);


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
