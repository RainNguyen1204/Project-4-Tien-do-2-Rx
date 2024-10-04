#ifndef CAR_H_
#define CAR_H_

#include "stm32f1xx.h"

typedef enum
{
	CAR_STOP_STATE,
	CAR_FORWARD_STATE,
	CAR_BACKWARD_STATE,
	CAR_LEFT_STATE,
	CAR_RIGHT_STATE,
}CarState; // Chế độ của xe
void car_init(TIM_HandleTypeDef *htim);
void car_control(CarState car_state, uint8_t speed);

#endif
