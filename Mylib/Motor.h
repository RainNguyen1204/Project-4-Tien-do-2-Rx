#ifndef MOTOR_H_
#define MOTOR_H_

#include "stm32f1xx.h"

typedef enum
{
	MOTOR_STOP,
	MOTOR_CW,  //cùng chiều kim đồng hố
	MOTOR_CCW, //ngược chiều kim đồng hồ
}MotorState;

typedef struct
{
	GPIO_TypeDef *io_port;
	uint16_t io_pin;
	TIM_HandleTypeDef *tim;
	uint32_t tim_channel;
	MotorState motor_state;
	uint8_t speed;
}Motor_Typedef; //chế độ của motor

void motor_control(Motor_Typedef *motor, MotorState state ,uint8_t speed);
void motor_init(Motor_Typedef *motor, GPIO_TypeDef *io_port, uint16_t io_pin, TIM_HandleTypeDef *tim, uint32_t tim_channel);
#endif
