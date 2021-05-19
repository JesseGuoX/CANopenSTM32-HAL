/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include <stdio.h>
#include "CANopen.h"
#include "OD.h"
#include "CO_storageBlank.h"
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
CAN_HandleTypeDef hcan1;

TIM_HandleTypeDef htim6;

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
static void MX_CAN1_Init(void);
static void MX_TIM6_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
#define log_printf(macropar_message, ...) \
        printf(macropar_message, ##__VA_ARGS__)


/* default values for CO_CANopenInit() */
#define NMT_CONTROL \
            CO_NMT_STARTUP_TO_OPERATIONAL \
          | CO_NMT_ERR_ON_ERR_REG \
          | CO_ERR_REG_GENERIC_ERR \
          | CO_ERR_REG_COMMUNICATION
#define FIRST_HB_TIME 500
#define SDO_SRV_TIMEOUT_TIME 1000
#define SDO_CLI_TIMEOUT_TIME 500
#define SDO_CLI_BLOCK false
#define OD_STATUS_BITS NULL


/* Global variables and objects */
CO_t *CO = NULL; /* CANopen object */
uint8_t LED_red, LED_green;

uint32_t Timer1msCount = 0;
void HAL_CAN_RxFifo0MsgPendingCallback(CAN_HandleTypeDef *hcan)
{
  CO_CANinterrupt(CO->CANmodule, true);
}

void HAL_CAN_TxMailbox0CompleteCallback(CAN_HandleTypeDef *hcan)
{
  CO_CANinterrupt(CO->CANmodule, false);
}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_CAN1_Init();
  MX_TIM6_Init();
  /* USER CODE BEGIN 2 */
  HAL_TIM_Base_Start_IT(&htim6);
  HAL_CAN_Start(&hcan1);
  HAL_CAN_ActivateNotification(&hcan1, CAN_IT_TX_MAILBOX_EMPTY);
  HAL_CAN_ActivateNotification(&hcan1, CAN_IT_RX_FIFO0_MSG_PENDING);
  CAN_FilterTypeDef filter;
  filter.FilterBank = 0;
  filter.FilterMode =  CAN_FILTERMODE_IDMASK;    
  filter.FilterScale = CAN_FILTERSCALE_16BIT;      
  filter.FilterIdHigh = 0;
  filter.FilterIdLow  = 0;
  filter.FilterMaskIdHigh = 0;
  filter.FilterMaskIdLow  = 0;
  filter.FilterFIFOAssignment = CAN_FILTER_FIFO0;  
  filter.FilterActivation = ENABLE;
  filter.SlaveStartFilterBank  = 10;
  HAL_CAN_ConfigFilter(&hcan1, &filter);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
    CO_ReturnError_t err;
    CO_NMT_reset_cmd_t reset = CO_RESET_NOT;
    uint32_t heapMemoryUsed;
    void *CANptr = &hcan1; /* CAN module address */
    uint8_t pendingNodeId = 10; /* read from dip switches or nonvolatile memory, configurable by LSS slave */
    uint8_t activeNodeId = 10; /* Copied from CO_pendingNodeId in the communication reset section */
    uint16_t pendingBitRate = 500000;  /* read from dip switches or nonvolatile memory, configurable by LSS slave */

#if (CO_CONFIG_STORAGE) & CO_CONFIG_STORAGE_ENABLE
    CO_storage_t storage;
    CO_storage_entry_t storageEntries[] = {
        {
            .addr = &OD_ROM,
            .len = sizeof(OD_ROM),
            .subIndexOD = 2,
            .attr = CO_storage_cmd | CO_storage_restore,
        }
    };
    uint8_t storageEntriesCount = sizeof(storageEntries) / sizeof(storageEntries[0]);
    uint32_t storageInitError = 0;
#endif

    /* Allocate memory */
    CO = CO_new(NULL, &heapMemoryUsed);
    if (CO == NULL) {
        log_printf("Error: Can't allocate memory\n");
        return 0;
    }
    else {
        log_printf("Allocated %u bytes for CANopen objects\n", heapMemoryUsed);
    }


#if (CO_CONFIG_STORAGE) & CO_CONFIG_STORAGE_ENABLE
    err = CO_storageBlank_init(&storage,
                               CO->CANmodule,
                               OD_ENTRY_H1010_storeParameters,
                               OD_ENTRY_H1011_restoreDefaultParameters,
							                 OD_ENTRY_H6200_LED,
                               storageEntries,
                               storageEntriesCount,
                               &storageInitError);

    if (err != CO_ERROR_NO && err != CO_ERROR_DATA_CORRUPT) {
        log_printf("Error: Storage %d\n", storageInitError);
        return 0;
    }
#endif
/* CANopen communication reset - initialize CANopen objects *******************/
    log_printf("CANopenNode - Reset communication...\n");

    /* Wait rt_thread. */
    CO->CANmodule->CANnormal = false;

    /* Enter CAN configuration. */
    CO_CANsetConfigurationMode((void *)&CANptr);
    CO_CANmodule_disable(CO->CANmodule);

    /* initialize CANopen */
    err = CO_CANinit(CO, CANptr, pendingBitRate);
    if (err != CO_ERROR_NO) {
        log_printf("Error: CAN initialization failed: %d\n", err);
        return 0;
    }

    CO_LSS_address_t lssAddress = {.identity = {
        .vendorID = OD_ROM.x1018_identity.vendor_ID,
        .productCode = OD_ROM.x1018_identity.productCode,
        .revisionNumber = OD_ROM.x1018_identity.revisionNumber,
        .serialNumber = OD_ROM.x1018_identity.serialNumber
    }};
    err = CO_LSSinit(CO, &lssAddress, &pendingNodeId, &pendingBitRate);
    if(err != CO_ERROR_NO) {
        log_printf("Error: LSS slave initialization failed: %d\n", err);
        return 0;
    }

    activeNodeId = pendingNodeId;
    uint32_t errInfo = 0;

    err = CO_CANopenInit(CO,                /* CANopen object */
                          NULL,              /* alternate NMT */
                          NULL,              /* alternate em */
                          OD,                /* Object dictionary */
                          OD_STATUS_BITS,    /* Optional OD_statusBits */
                          NMT_CONTROL,       /* CO_NMT_control_t */
                          FIRST_HB_TIME,     /* firstHBTime_ms */
                          SDO_SRV_TIMEOUT_TIME, /* SDOserverTimeoutTime_ms */
                          SDO_CLI_TIMEOUT_TIME, /* SDOclientTimeoutTime_ms */
                          SDO_CLI_BLOCK,     /* SDOclientBlockTransfer */
                          activeNodeId,
                          &errInfo);
    if(err != CO_ERROR_NO && err != CO_ERROR_NODE_ID_UNCONFIGURED_LSS) {
        if (err == CO_ERROR_OD_PARAMETERS) {
            log_printf("Error: Object Dictionary entry 0x%X\n", errInfo);
        }
        else {
            log_printf("Error: CANopen initialization failed: %d\n", err);
        }
        return 0;
    }

    /* Configure Timer interrupt function for execution every 1 millisecond */


    /* Configure CAN transmit and receive interrupt */


    /* Configure CANopen callbacks, etc */
    if(!CO->nodeIdUnconfigured) {

#if (CO_CONFIG_STORAGE) & CO_CONFIG_STORAGE_ENABLE
        if(storageInitError != 0) {
            CO_errorReport(CO->em, CO_EM_NON_VOLATILE_MEMORY,
                            CO_EMC_HARDWARE, storageInitError);
        }
#endif
    }
    else {
        log_printf("CANopenNode - Node-id not initialized\n");
    }

    err = CO_CANopenInitPDO(CO,             /* CANopen object */
                            CO->em,         /* emergency object */
                            OD,             /* Object dictionary */
                            activeNodeId,
                            &errInfo);
    if (err != CO_ERROR_NO && err != CO_ERROR_NODE_ID_UNCONFIGURED_LSS) {
        while (1) ;
    }
    /* start CAN */
    CO_CANsetNormalMode(CO->CANmodule);

    reset = CO_RESET_NOT;

    log_printf("CANopenNode - Running...\n");
    fflush(stdout);

  uint32_t timeDiff = 0;
  uint32_t timepre = Timer1msCount;
  while (1)
  {
    timeDiff = Timer1msCount - timepre;
    timepre = Timer1msCount;
    CO_process(CO, false, timeDiff * 1000, NULL);
    GPIO_PinState state = HAL_GPIO_ReadPin(S1_GPIO_Port, GPIO_PIN_2);
    if(state == GPIO_PIN_RESET){
        OD_RAM.x6000_BUTTON[0] = 1;
    }else{
        OD_RAM.x6000_BUTTON[0] = 0;
    }

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
  RCC_OscInitStruct.HSEState = RCC_HSE_ON;
  RCC_OscInitStruct.HSEPredivValue = RCC_HSE_PREDIV_DIV1;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.Prediv1Source = RCC_PREDIV1_SOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
  RCC_OscInitStruct.PLL.PLLMUL = RCC_PLL_MUL9;
  RCC_OscInitStruct.PLL2.PLL2State = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_2) != HAL_OK)
  {
    Error_Handler();
  }
  /** Configure the Systick interrupt time
  */
  __HAL_RCC_PLLI2S_ENABLE();
}

/**
  * @brief CAN1 Initialization Function
  * @param None
  * @retval None
  */
static void MX_CAN1_Init(void)
{

  /* USER CODE BEGIN CAN1_Init 0 */

  /* USER CODE END CAN1_Init 0 */

  /* USER CODE BEGIN CAN1_Init 1 */

  /* USER CODE END CAN1_Init 1 */
  hcan1.Instance = CAN1;
  hcan1.Init.Prescaler = 9;
  hcan1.Init.Mode = CAN_MODE_NORMAL;
  hcan1.Init.SyncJumpWidth = CAN_SJW_1TQ;
  hcan1.Init.TimeSeg1 = CAN_BS1_6TQ;
  hcan1.Init.TimeSeg2 = CAN_BS2_1TQ;
  hcan1.Init.TimeTriggeredMode = DISABLE;
  hcan1.Init.AutoBusOff = DISABLE;
  hcan1.Init.AutoWakeUp = DISABLE;
  hcan1.Init.AutoRetransmission = DISABLE;
  hcan1.Init.ReceiveFifoLocked = DISABLE;
  hcan1.Init.TransmitFifoPriority = DISABLE;
  if (HAL_CAN_Init(&hcan1) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN CAN1_Init 2 */

  /* USER CODE END CAN1_Init 2 */

}

/**
  * @brief TIM6 Initialization Function
  * @param None
  * @retval None
  */
static void MX_TIM6_Init(void)
{

  /* USER CODE BEGIN TIM6_Init 0 */

  /* USER CODE END TIM6_Init 0 */

  TIM_MasterConfigTypeDef sMasterConfig = {0};

  /* USER CODE BEGIN TIM6_Init 1 */

  /* USER CODE END TIM6_Init 1 */
  htim6.Instance = TIM6;
  htim6.Init.Prescaler = 72;
  htim6.Init.CounterMode = TIM_COUNTERMODE_UP;
  htim6.Init.Period = 1000;
  htim6.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
  if (HAL_TIM_Base_Init(&htim6) != HAL_OK)
  {
    Error_Handler();
  }
  sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
  sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
  if (HAL_TIMEx_MasterConfigSynchronization(&htim6, &sMasterConfig) != HAL_OK)
  {
    Error_Handler();
  }
  /* USER CODE BEGIN TIM6_Init 2 */

  /* USER CODE END TIM6_Init 2 */

}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, D2_Pin|D1_Pin|D4_Pin|D3_Pin, GPIO_PIN_SET);

  /*Configure GPIO pins : D2_Pin D1_Pin D4_Pin D3_Pin */
  GPIO_InitStruct.Pin = D2_Pin|D1_Pin|D4_Pin|D3_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : S1_Pin */
  GPIO_InitStruct.Pin = S1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_PULLUP;
  HAL_GPIO_Init(S1_GPIO_Port, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
