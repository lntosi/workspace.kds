/* ###################################################################
**     Filename    : os_tasks.c
**     Project     : labfinal
**     Processor   : MKL25Z128VLK4
**     Component   : Events
**     Version     : Driver 01.00
**     Compiler    : GNU C Compiler
**     Date/Time   : 2019-11-04, 18:34, # CodeGen: 43
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


	  debug_printf( "Imprimir Tarefa 1. \r\n");

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


	  debug_printf( "Imprimir Tarefa 2. \r\n");

	  OSA_TimeDelay(1000);

    
#ifdef PEX_USE_RTOS   
  }
#endif    
}

/*
** ===================================================================
**     Callback    : Task3_task
**     Description : Task function entry.
**     Parameters  :
**       task_init_data - OS task parameter
**     Returns : Nothing
** ===================================================================
*/
void Task3_task(os_task_param_t task_init_data)
{
  /* Write your local variable definition here */
  
#ifdef PEX_USE_RTOS
  while (1) {
#endif
    /* Write your code here ... */
    
    
		debug_printf( "Imprimir Tarefa 3. \r\n");

		OSA_TimeDelay(1000);

    
#ifdef PEX_USE_RTOS   
  }
#endif    
}

/*
** ===================================================================
**     Callback    : Task4_task
**     Description : Task function entry.
**     Parameters  :
**       task_init_data - OS task parameter
**     Returns : Nothing
** ===================================================================
*/
void Task4_task(os_task_param_t task_init_data)
{
  /* Write your local variable definition here */
  
#ifdef PEX_USE_RTOS
  while (1) {
#endif
	  /* Write your code here ... */


	  debug_printf( "Imprimir Tarefa 4. \r\n");

	  OSA_TimeDelay(1000);


#ifdef PEX_USE_RTOS   
  }
#endif    
}

/*
** ===================================================================
**     Callback    : Task5_task
**     Description : Task function entry.
**     Parameters  :
**       task_init_data - OS task parameter
**     Returns : Nothing
** ===================================================================
*/
void Task5_task(os_task_param_t task_init_data)
{
  /* Write your local variable definition here */
  
#ifdef PEX_USE_RTOS
  while (1) {
#endif
	  /* Write your code here ... */


	  debug_printf( "Imprimir Tarefa 5. \r\n");

	  OSA_TimeDelay(1000);


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