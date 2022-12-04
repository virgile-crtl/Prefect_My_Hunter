/*
** EPITECH PROJECT, 2022
** list_del_elem_at_back.c
** File description:
** delete a element in n position
*/

#include <stddef.h>
#include <stdlib.h>
#include "list.h"

bool list_del_elem_at_position(list_t *front_ptr, unsigned int position)
{
    list_t list = *front_ptr;
    node_t *tmp;
    int p = position - 1;

    if (!list || (int)position > list_get_size(list) - 1)
        return false;
    if (position == 0) {
        list_del_elem_at_front(front_ptr);
        return true;
    }
    for (int i = 0; i < p; list =list->next)
        i += 1;
    tmp = list->next;
    list->next = tmp->next;
    free(tmp);
    return true;
}