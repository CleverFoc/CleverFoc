/**
 * @file cf_def.h
 * @author Yifan Xiao (1993996310@qq.com)
 * @brief Common definitions
 * @version 0.1
 * @date 2023-04-23
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef CF_DEF_H
#define CF_DEF_H

#define CF_NULL ((void *)0)

#define CF_TRUE 1
#define CF_FALSE 0

#define CF_SUCCESS 0
#define CF_OK CF_SUCCESS
#define CF_FAILURE -1
#define CF_UNSUPPORT

#define CF_UNUSED(x) (void)(x)

#define CF_MAX(a, b) ((a) > (b) ? (a) : (b))
#define CF_MIN(a, b) ((a) < (b) ? (a) : (b))

#define CF_ABS(a) ((a) > 0 ? (a) : -(a))

#define CF_ALIGN_DOWN(x, a) ((x) & ~((a)-1))
#define CF_ALIGN_UP(x, a) CF_ALIGN_DOWN((x) + (a)-1, (a))

#define CF_CONTAINER_OF(ptr, type, member) \
    ((type *)((char *)(ptr) - (unsigned long)(&((type *)0)->member)))

#define CF_ARRAY_SIZE(a) (sizeof(a) / sizeof((a)[0]))

#define CF_OFFSETOF(type, member) ((unsigned long)(&((type *)0)->member))

/**
 * @brief Type defs
 *
 */
typedef unsigned char cf_bool_t;
typedef unsigned char cf_uint8_t;
typedef signed char cf_int8_t;
typedef unsigned short cf_uint16_t;
typedef signed short cf_int16_t;
typedef unsigned int cf_uint32_t;
typedef signed int cf_int32_t;
typedef unsigned long long cf_uint64_t;
typedef signed long long cf_int64_t;

typedef cf_uint32_t cf_size_t;
typedef cf_uint8_t cf_err_t;

#endif
