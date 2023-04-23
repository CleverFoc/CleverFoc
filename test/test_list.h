/**
 * @file test_list.h
 * @author Yifan Xiao (1993996310@qq.com)
 * @brief 
 * @version 0.1
 * @date 2023-04-23
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#ifndef TEST_LIST_H
#define TEST_LIST_H

#include "cf_cleverfoc.h"
#include "acutest_ext.h"

void test_list(void) {
    cf_list_t list;
    cf_list_init(&list);
    TEST_CHECK(list.next == &list);
    TEST_CHECK(list.prev == &list);
    TEST_MSG("List initialized failed");

    cf_list_t node1;

    cf_list_add(&node1, &list);
    TEST_CHECK(list.next == &node1);
    TEST_CHECK(list.prev == &node1);
    TEST_CHECK(node1.next == &list);
    TEST_CHECK(node1.prev == &list);

    cf_list_t node2;
    cf_list_add(&node2, &list);

    TEST_CHECK(list.next == &node2);
    TEST_CHECK(list.prev == &node1);
    TEST_CHECK(node1.next == &list);
    TEST_CHECK(node1.prev == &node2);
    TEST_CHECK(node2.next == &node1);
    TEST_CHECK(node2.prev == &list);

    cf_list_remove(&node1);

    TEST_CHECK(list.next == &node2);
    TEST_CHECK(list.prev == &node2);
    TEST_CHECK(node2.next == &list);
    TEST_CHECK(node2.prev == &list);

    cf_list_t node3;

    cf_list_add_tail(&node3, &list);

    TEST_CHECK(list.next == &node2);
    TEST_CHECK(list.prev == &node3);
    TEST_CHECK(node2.next == &node3);
    TEST_CHECK(node2.prev == &list);
    TEST_CHECK(node3.next == &list);
    TEST_CHECK(node3.prev == &node2);

    cf_list_remove(&node2);

    TEST_CHECK(list.next == &node3);
    TEST_CHECK(list.prev == &node3);
    TEST_CHECK(node3.next == &list);
    TEST_CHECK(node3.prev == &list);

    cf_list_remove(&node3);

    TEST_CHECK(list.next == &list);
    TEST_CHECK(list.prev == &list);

    cf_list_t node4;

    cf_list_add_tail(&node4, &list);

    TEST_CHECK(list.next == &node4);
    TEST_CHECK(list.prev == &node4);
    TEST_CHECK(node4.next == &list);
    TEST_CHECK(node4.prev == &list);

}

#endif
