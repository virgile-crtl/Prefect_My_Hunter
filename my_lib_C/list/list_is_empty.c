/*
** EPITECH PROJECT, 2022
** int_list_is_empty.c
** File description:
** check if list is empty
*/

#include <stddef.h>
#include "list.h"

bool list_is_empty(list_t list)
{
    if (list == NULL)
        return true;
    return false;
}