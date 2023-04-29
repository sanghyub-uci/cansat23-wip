/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define MEM_WRITE_Pin GPIO_PIN_13
#define MEM_WRITE_GPIO_Port GPIOC
#define SOLENOID_Pin GPIO_PIN_4
#define SOLENOID_GPIO_Port GPIOA
#define SERVO1_PWM_Pin GPIO_PIN_0
#define SERVO1_PWM_GPIO_Port GPIOB
#define BOOT1_Pin GPIO_PIN_2
#define BOOT1_GPIO_Port GPIOB
#define ENABLE1_5V_Pin GPIO_PIN_12
#define ENABLE1_5V_GPIO_Port GPIOB
#define ENABLE2_5V_Pin GPIO_PIN_13
#define ENABLE2_5V_GPIO_Port GPIOB
#define MOTOR_SLEEP_Pin GPIO_PIN_14
#define MOTOR_SLEEP_GPIO_Port GPIOB
#define XBEE2_SLEEP_Pin GPIO_PIN_15
#define XBEE2_SLEEP_GPIO_Port GPIOB
#define XBEE1_SLEEP_Pin GPIO_PIN_8
#define XBEE1_SLEEP_GPIO_Port GPIOA
#define XBEE1_IN_Pin GPIO_PIN_9
#define XBEE1_IN_GPIO_Port GPIOA
#define XBEE1_OUT_Pin GPIO_PIN_10
#define XBEE1_OUT_GPIO_Port GPIOA
#define BUZZER_Pin GPIO_PIN_6
#define BUZZER_GPIO_Port GPIOB
#define TESTLED_Pin GPIO_PIN_7
#define TESTLED_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
