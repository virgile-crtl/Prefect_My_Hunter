/*
** EPITECH PROJECT, 2022
** list_del_elem_at_front.c
** File description:
** delete a first element
*/

#include <stdlib.h>
#include "list.h"

bool list_del_elem_at_front(list_t *front_ptr)
{
    list_t list = *front_ptr;

    if (!list)
        return false;
    *front_ptr = list->next;
    free(list);
    return true;
}