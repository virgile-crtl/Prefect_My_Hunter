/*
** EPITECH PROJECT, 2022
** list_get_size.c
** File description:
** count number of elements in the list
*/

#include "list.h"

int list_get_size(list_t list)
{
    int len = 0;

    for (; list != NULL; len += 1)
        list = list->next;
    return len;
}