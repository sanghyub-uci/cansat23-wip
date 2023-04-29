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
#define SERVO1_PWM_Pin GPIO_PIN_0
#define SERVO1_PWM_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_4
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_5
#define SWCLK_GPIO_Port GPIOA
#define SOLENOID1_Pin GPIO_PIN_6
#define SOLENOID1_GPIO_Port GPIOA
#define SOLENOID2_Pin GPIO_PIN_7
#define SOLENOID2_GPIO_Port GPIOA
#define BOOT1_Pin GPIO_PIN_2
#define BOOT1_GPIO_Port GPIOB
#define ESP_TX_Pin GPIO_PIN_10
#define ESP_TX_GPIO_Port GPIOB
#define ESP_RX_Pin GPIO_PIN_11
#define ESP_RX_GPIO_Port GPIOB
#define XBEE1_SLEEP_Pin GPIO_PIN_8
#define XBEE1_SLEEP_GPIO_Port GPIOA
#define XBEE1_IN_Pin GPIO_PIN_9
#define XBEE1_IN_GPIO_Port GPIOA
#define XBEE1_OUT_Pin GPIO_PIN_10
#define XBEE1_OUT_GPIO_Port GPIOA
#define MPU_INT_Pin GPIO_PIN_11
#define MPU_INT_GPIO_Port GPIOA
#define GPIO_PI_Pin GPIO_PIN_12
#define GPIO_PI_GPIO_Port GPIOA
#define MPU_INTA14_Pin GPIO_PIN_14
#define MPU_INTA14_GPIO_Port GPIOA
#define BUZZER_Pin GPIO_PIN_4
#define BUZZER_GPIO_Port GPIOB
#define MAG_INT_Pin GPIO_PIN_5
#define MAG_INT_GPIO_Port GPIOB
#define TESTLED_Pin GPIO_PIN_7
#define TESTLED_GPIO_Port GPIOB
#define I2C_SCL_Pin GPIO_PIN_8
#define I2C_SCL_GPIO_Port GPIOB
#define I2C_SDA_Pin GPIO_PIN_9
#define I2C_SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
