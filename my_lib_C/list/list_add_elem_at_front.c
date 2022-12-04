/*
** EPITECH PROJECT, 2022
** list_add_elem_at_front.c
** File description:
** add one elem at front list
*/

#include "list.h"

void list_add_elem_at_front(list_t *front_ptr, node_t *elem)
{
    elem->next = *front_ptr;
    *front_ptr = elem;
}
