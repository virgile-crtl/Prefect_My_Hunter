/*
** EPITECH PROJECT, 2022
** list_add_elem_at_position.c
** File description:
** add one elem at n position in list
*/

#include "list.h"

bool list_add_elem_at_position(list_t *front_ptr, node_t *elem, int p)
{
    node_t *tmp;

    if (p > list_get_size(*front_ptr))
        return false;
    else if (p == 0) {
        list_add_elem_at_front(front_ptr, elem);
        return true;
    }
    tmp = *front_ptr;
    for (int i = 0; i < p-1; i += 1)
        tmp = tmp->next;
    elem->next = tmp->next;
    tmp->next = elem;
    return true;
}