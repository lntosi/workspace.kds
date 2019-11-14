/* ###################################################################
 **     Filename    : os_tasks.c
 **     Project     : labfinal
 **     Processor   : MKL25Z128VLK4
 **     Component   : Events
 **     Version     : Driver 01.00
 **     Compiler    : GNU C Compiler
 **     Date/Time   : 2019-11-08, 15:45, # CodeGen: 74
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
#include "task.h"

#ifdef __cplusplus
extern "C" {
#endif 


/* User includes (#include below this line is not maintained by Processor Expert) */

extern SemaphoreHandle_t meuSemaforo;

char menuComandos[] = "\r\n\
Comandos\r\n\
\r\n\
1- Pausar o escalonador\r\n\
2- Exibir o estado das tarefas\r\n\
3- Resumir\r\n\
\r\n\
";


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


		//debug_printf("Imprimir Tarefa 2. \r\n");

		ledrgb_setBlueLed();

		OSA_TimeDelay(1000);

		ledrgb_clearBlueLed();

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


		//debug_printf("Imprimir Tarefa 3. \r\n");

		OSA_TimeDelay(1000);

		ledrgb_setRedLed();

		OSA_TimeDelay(1000);

		ledrgb_clearRedLed();


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


		//debug_printf("Imprimir Tarefa 4. \r\n");

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


		int opcaodoSwitch = 1;

		while (1){

			switch(opcaodoSwitch){

			case 1:{
				debug_printf("%s", menuComandos);
				opcaodoSwitch = 2;
				break;
			}

			case 2:{
				char escolhaComando = 0;
				escolhaComando = debug_getchar();
				if( escolhaComando == '1')
					opcaodoSwitch = 3;
				else if( escolhaComando == '2')
					opcaodoSwitch = 5;
				else if( escolhaComando == '3')
					opcaodoSwitch = 4;
				else
					opcaodoSwitch = 1;
				OSA_TimeDelay(1000);
				break;
			}

			case 3:{
				vTaskSuspendAll();
				opcaodoSwitch = 1;
				break;
			}

			case 4:{
				xTaskResumeAll();
				opcaodoSwitch = 1;
				break;
			}

			case 5:{

				//Fonte: https://www.freertos.org/uxTaskGetSystemState.html
				//       https://community.nxp.com/thread/358828

				TaskStatus_t *pxTaskStatusArray;
				volatile UBaseType_t uxArraySize, x;
				unsigned long ulTotalRunTime;

				uxArraySize = uxTaskGetNumberOfTasks();

				pxTaskStatusArray = pvPortMalloc( uxArraySize * sizeof( TaskStatus_t ) );

				if( pxTaskStatusArray != NULL )
				{
					/* Generate raw status information about each task. */
					uxArraySize = uxTaskGetSystemState( pxTaskStatusArray,
							uxArraySize,
							&ulTotalRunTime );

					/* For percentage calculations. */
					ulTotalRunTime /= 100UL;

					/* Avoid divide by zero errors. */
					if( ulTotalRunTime > 0 )
					{

						debug_printf("TASK NAME        ID          PRIORITY       STATUS     TEMPO\n\r\n\r");
						/* For each populated position in the pxTaskStatusArray array,
											 format the raw data as human readable ASCII data. */
						for( x = 0; x < uxArraySize; x++ )
						{

							char* taskStatus = 0;

							switch(pxTaskStatusArray[ x ].eCurrentState) {
							case eRunning:
								taskStatus = "RUNNING";
								break;
							case eReady:
								taskStatus = "READY";
								break;
							case eBlocked:
								taskStatus = "BLOCKED";
								break;
							case eSuspended:
								taskStatus = "SUSPENDED";
								break;
							case eDeleted:
								taskStatus = "DELETED";
								break;
							}


							debug_printf("%s              %d           %d           %s         %d\n\r",
									pxTaskStatusArray[ x ].pcTaskName,
									//entryPoint,
									pxTaskStatusArray[ x ].xTaskNumber,
									pxTaskStatusArray[ x ].uxCurrentPriority,
									taskStatus,
									pxTaskStatusArray[ x ].ulRunTimeCounter );

						}

					}

					vPortFree( pxTaskStatusArray );
					opcaodoSwitch = 1;
				}

			}

			}

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
