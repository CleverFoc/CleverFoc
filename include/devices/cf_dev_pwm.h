/**
 * @file cf_dev_pwm.h
 * @author Yifan Xiao (1993996310@qq.com)
 * @brief PWM device driver
 * @version 0.1
 * @date 2023-04-23
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef CF_DEV_PWM_H
#define CF_DEV_PWM_H

#include "cf_cleverfoc.h"

/**
 * @brief 初始化PWM设备
 *
 * @param dev
 * @return cf_err_t
 */
cf_err_t cf_device_pwm_init(struct cf_device *dev);

/**
 * @brief 使能PWM输出
 *
 * @param dev 设备
 * @param channel 输出通道。正数表示正相通道，负数表示反相通道
 * @return cf_err_t
 */
cf_err_t cf_device_pwm_enable(struct cf_device *dev, cf_uint8_t channel);

/**
 * @brief 禁用PWM输出
 *
 * @param dev 设备
 * @param channel 输出通道。正数表示正相通道，负数表示反相通道
 * @return cf_err_t
 */
cf_err_t cf_device_pwm_disable(struct cf_device *dev, cf_uint8_t channel);

/**
 * @brief 设置PWM占空比
 *
 * @param dev 设备
 * @param channel 输出通道。正数表示正相通道，负数表示反相通道
 * @param pulse 脉冲宽度，单位 ns
 * @return cf_err_t
 */
cf_err_t cf_device_pwm_set_duty(struct cf_device *dev, cf_uint8_t channel, cf_uint16_t pulse);

/**
 * @brief 设置PWM周期
 *
 * @param dev 设备
 * @param period 周期，单位 ns
 * @return cf_err_t
 */
cf_err_t cf_device_pwm_set_period(struct cf_device *dev, cf_uint16_t period);

/**
 * @brief 设置PWM死区时间
 *
 * @param dev 设备
 * @param deadtime 死区时间，单位 ns
 * @return cf_err_t
 */
cf_err_t cf_device_pwm_set_deadtime(struct cf_device *dev, cf_uint16_t deadtime);

#endif