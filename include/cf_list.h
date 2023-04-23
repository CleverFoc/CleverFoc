/**
 * @file cf_list.h
 * @author Yifan Xiao (1993996310@qq.com)
 * @brief A simple list implementation
 * @version 0.1
 * @date 2023-04-23
 *
 * @copyright Copyright (c) 2023
 *
 */

#ifndef CF_LIST_H
#define CF_LIST_H

#include "cf_def.h"

struct cf_list_node
{
    struct cf_list_node *next;
    struct cf_list_node *prev;
};

typedef struct cf_list_node cf_list_t;

/**
 * @brief Initialize a list node
 *
 * @param node
 */
void cf_list_init(struct cf_list_node *node);

/**
 * @brief Add a node to the list
 *
 * @param node
 * @param head
 */
void cf_list_add(struct cf_list_node *node, struct cf_list_node *head);

/**
 * @brief Add a node to the list tail
 *
 * @param node
 * @param head
 */
void cf_list_add_tail(struct cf_list_node *node, struct cf_list_node *head);

/**
 * @brief Remove a node from the list
 *
 * @param node
 */
void cf_list_remove(struct cf_list_node *node);

/**
 * @brief Check if the list is empty
 *
 * @param head
 * @return int
 */
int cf_list_is_empty(struct cf_list_node *head);

/**
 * @brief list for each
 *
 */
#define CF_LIST_FOR_EACH(node, head) \
    for (node = (head)->next; node != (head); node = node->next)

/**
 * @brief Get the struct for this entry
 *
 */
#define CF_LIST_ENTRY(ptr, type) \
    CF_CONTAINER_OF(ptr, type, list)

#define CF_LIST_INIT(name) \
    {                      \
        &(name), &(name)   \
    }

#endif
