/*
** EPITECH PROJECT, 2022
** int_list_add_elem_at_back.c
** File description:
** add one element in back list
*/

#include "list.h"

void list_add_elem_at_back(list_t *front_ptr, node_t *elem)
{
    list_t tmp;

    if (*front_ptr == NULL)
        *front_ptr = elem;
    for (tmp = *front_ptr; tmp->next != NULL; tmp = tmp->next);
    tmp->next = elem;
}