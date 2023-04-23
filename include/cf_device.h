/**
 * @file cf_device.h
 * @author Yifan Xiao (1993996310@qq.com)
 * @brief Device management framework
 * @version 0.1
 * @date 2023-04-23
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef CF_DEVICE_H
#define CF_DEVICE_H

#include "cf_cleverfoc.h"

struct cf_device_ops
{
    cf_err_t (*read)(struct cf_device *dev, void *buf, cf_size_t size);
    cf_err_t (*control)(struct cf_device *dev, cf_uint8_t cmd, void *args);
};

struct cf_device
{
    char name[CF_CONFIG_OBJECT_NAME_LEN];
    const struct cf_device_ops *ops;
    cf_uint8_t type;
    cf_list_t list;
    void *user_data;
};

typedef struct cf_device *cf_device_t;

/**
 * @brief Register a device
 *
 * @param dev
 * @return cf_err_t
 */
cf_err_t cf_device_register(struct cf_device *dev);

/**
 * @brief Find a device by name
 *
 * @param name device name
 * @return cf_device_t
 */
cf_device_t cf_device_find(const char *name);

/**
 * @brief Init device object
 *
 * @param dev Device
 * @param name Name
 * @param ops Device operations
 * @param type Device type
 * @return cf_err_t
 */
cf_err_t cf_device_init(struct cf_device *dev, const char *name, const struct cf_device_ops *ops, cf_uint8_t type);

/**
 * @brief Control a device
 *
 * @param dev device
 * @param cmd Command
 * @param args Arguments
 * @return cf_err_t
 */
cf_err_t cf_device_control(struct cf_device *dev, cf_uint8_t cmd, void *args);

/**
 * @brief Get the type of a device
 *
 * @param dev device
 * @return cf_uint8_t
 */
cf_uint8_t cf_device_get_type(struct cf_device *dev);

/**
 * @brief Get the user data of a device
 *
 * @param dev device
 * @return void*
 */
void *cf_device_get_user_data(struct cf_device *dev);

/**
 * @brief Set the user data of a device
 *
 * @param dev device
 * @param user_data
 */
void cf_device_set_user_data(struct cf_device *dev, void *user_data);

#endif
