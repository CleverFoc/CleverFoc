#include "cf_list.h"
#include "cf_device.h"

#include "string.h"

/**
 * @brief List of device
 *
 */
static cf_list_t device_list = CF_LIST_INIT(device_list);

cf_err_t cf_device_register(struct cf_device *dev)
{
    cf_list_add(&dev->list, &device_list);
}

cf_device_t cf_device_find(const char *name)
{
    cf_list_t *node;
    CF_LIST_FOR_EACH(node, &device_list)
    {
        if (strcmp(CF_LIST_ENTRY(node, struct cf_device)->name, name) == 0)
        {
            return node;
        }
    }

    return CF_NULL;
}

cf_err_t cf_device_init(struct cf_device *dev, const char *name, const struct cf_device_ops *ops, cf_uint8_t type)
{
    strcpy(dev->name, name);
    dev->ops = ops;
    dev->type = type;
    dev->user_data = CF_NULL;

    return CF_OK;
}

cf_err_t cf_device_control(struct cf_device *dev, cf_uint8_t cmd, void *args)
{
    if (dev->ops->control)
    {
        return dev->ops->control(dev, cmd, args);
    }

    return CF_UNSUPPORT;
}

cf_uint8_t cf_device_get_type(struct cf_device *dev)
{
    return dev->type;
}

void *cf_device_get_user_data(struct cf_device *dev)
{
    return dev->user_data;
}

void cf_device_set_user_data(struct cf_device *dev, void *user_data)
{
    dev->user_data = user_data;
}
