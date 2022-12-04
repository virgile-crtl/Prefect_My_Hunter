/*
** EPITECH PROJECT, 2022
** list_get_elem_at_position.c
** File description:
** get position value in the list
*/

#include <stddef.h>
#include "list.h"

node_t *list_get_elem_at_position(list_t list, unsigned int position)
{
    int p = position;

    if (!list || (int)position > list_get_size(list) - 1)
        return 0;
    for (int i = 0; i < p; list =list->next)
        i += 1;
    return list;
}