/*
** EPITECH PROJECT, 2021
** free_tab
** File description:
** .c
*/

#include <stddef.h>
#include <stdlib.h>

void free_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i += 1)
        free(tab[i]);
    free(tab);
    return;
}
