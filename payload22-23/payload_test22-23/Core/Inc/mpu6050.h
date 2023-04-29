/*
 * mpu6050.h
 *
 *  Created on: May 25, 2022
 *      Author: Ian
 */

#ifndef INC_MPU6050_H_
#define INC_MPU6050_H_

#include "stm32f1xx_hal.h"

void MPU6050_init(void); //Initialize the MPU
void MPU6050_Read_Accel (float *Ax, float *Ay, float *Az); //Read MPU Accelerator
void MPU6050_Read_Gyro (float *Gx, float *Gy, float *Gz); //Read MPU Gyroscope

#endif /* INC_MPU6050_H_ */
