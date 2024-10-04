#ifndef PWM_H_
#define PWM_H_
#include "stm32f1xx.h"
void pwm_set_duty(TIM_HandleTypeDef *tim, uint32_t channel, uint8_t duty);

#endif
