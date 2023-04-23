#include "cf_list.h"

void cf_list_init(struct cf_list_node *node)
{
    node->next = node;
    node->prev = node;
}

void cf_list_add(struct cf_list_node *node, struct cf_list_node *head)
{
    node->next = head->next;
    node->prev = head;
    head->next->prev = node;
    head->next = node;
}

void cf_list_add_tail(struct cf_list_node *node, struct cf_list_node *head)
{
    node->next = head;
    node->prev = head->prev;
    head->prev->next = node;
    head->prev = node;
}

void cf_list_remove(struct cf_list_node *node)
{
    node->next->prev = node->prev;
    node->prev->next = node->next;
}

int cf_list_is_empty(struct cf_list_node *head)
{
    return head->next == head;
}


