/*
** EPITECH PROJECT, 2022
** list_get_elem_at_back.c
** File description:
** get last value in the list
*/

#include <stddef.h>
#include "list.h"

node_t *list_get_elem_at_back(list_t list)
{
    if (!list)
        return NULL;
    for (; list->next != NULL; list =list->next);
    return list;
}