/*
** EPITECH PROJECT, 2022
** list_del_elem_at_back.c
** File description:
** delete a last element
*/

#include <stddef.h>
#include <stdlib.h>
#include "list.h"

bool list_del_elem_at_back(list_t *front_ptr)
{
    list_t list = *front_ptr;
    int len = list_get_size(*front_ptr) - 1;

    if (!list)
        return false;
    if (len == 0) {
        free(list);
        *front_ptr = NULL;
        return true;
    }
    for (int i = 0; i < len; list = list->next)
        i += 1;
    free(list->next);
    list->next = NULL;
    return true;
}