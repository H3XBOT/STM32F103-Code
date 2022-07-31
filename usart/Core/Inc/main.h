/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED16_Pin GPIO_PIN_2
#define LED16_GPIO_Port GPIOE
#define SW4_Pin GPIO_PIN_0
#define SW4_GPIO_Port GPIOB
#define LED15_Pin GPIO_PIN_7
#define LED15_GPIO_Port GPIOE
#define LED13_Pin GPIO_PIN_10
#define LED13_GPIO_Port GPIOD
#define LED14_Pin GPIO_PIN_11
#define LED14_GPIO_Port GPIOD
#define LED17_Pin GPIO_PIN_8
#define LED17_GPIO_Port GPIOC
#define LED12_Pin GPIO_PIN_9
#define LED12_GPIO_Port GPIOC
#define SW2_Pin GPIO_PIN_3
#define SW2_GPIO_Port GPIOD
#define SW1_Pin GPIO_PIN_4
#define SW1_GPIO_Port GPIOD
#define SW3_Pin GPIO_PIN_6
#define SW3_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */