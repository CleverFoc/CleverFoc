/**
 * @file acutest_ext.h
 * @author Yifan Xiao (1993996310@qq.com)
 * @brief
 * @version 0.1
 * @date 2023-04-23
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef ACUTEST_H_
#define ACUTEST_H_
#include "acutest.h"
#include "string.h"
#include "math.h"

#define TEST_CHECK_EQUAL(a, b) TEST_CHECK(a == b)
#define TEST_CHECK_NOT_EQUAL(a, b) TEST_CHECK(a != b)

#define TEST_CHECK_STRING_EQUAL(a, b) TEST_CHECK(strcmp(a, b) == 0)
#define TEST_CHECK_STRING_NOT_EQUAL(a, b) TEST_CHECK(strcmp(a, b) != 0)

#define TEST_CHECK_FLOAT_EQUAL(a, b, range) TEST_CHECK(fabsf(a - b) < range)
#define TEST_CHECK_FLOAT_NOT_EQUAL(a, b, range) TEST_CHECK(fabsf(a - b) >= range)

#define TEST_CHECK_DOUBLE_EQUAL(a, b, range) TEST_CHECK(fabs(a - b) < range)
#define TEST_CHECK_DOUBLE_NOT_EQUAL(a, b, range) TEST_CHECK(fabs(a - b) >= range)

#endif