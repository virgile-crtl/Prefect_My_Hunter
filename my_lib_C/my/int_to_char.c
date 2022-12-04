/*
** EPITECH PROJECT, 2021
** int_to_char.c
** File description:
** .c
*/

#include "my.h"

int calc_nbr (int mem, int i, int j)
{
    int k = i - j;
    int p = 1;
    int nbr = 0;

    for (; k > 0; k -= 1)
        p *= 10;
    nbr = (mem /p) - ((mem / (p * 10)) * 10);
    return nbr;
}

char *int_to_char(int nbr)
{
    int mem = nbr;
    int i = 1;
    char *str;
    int j = 0;

    for (; nbr > 10; i += 1)
        nbr = nbr / 10;
    str = malloc(sizeof(char) * (i + 1));
    i -= 1;
    for (; j <= i; j += 1) {
        nbr = calc_nbr(mem, i, j);
        str[j] = nbr + '0';
    }
    str[j] = '\0';
    return str;
}