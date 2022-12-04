/*
** EPITECH PROJECT, 2022
** list_clear.c
** File description:
** free all list
*/

#include <stddef.h>
#include <stdlib.h>
#include "list.h"

void list_clear(list_t *front_ptr)
{
    node_t *tmp = *front_ptr;
    node_t *list;

    if (!tmp)
        return;
    list = tmp->next;
    for (; tmp != NULL; tmp = list) {
        list = tmp->next;
        free(tmp);
    }
    *front_ptr = NULL;
    return;
}