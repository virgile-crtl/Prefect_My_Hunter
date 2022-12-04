/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** hunter
*/

#include "hunter.h"

void hunter()
{
    hunt_t hunt;
    initialize(&hunt);
    loop(hunt);
    return;
}