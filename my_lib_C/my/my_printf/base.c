/*
** EPITECH PROJECT, 2020
** base
** File description:
** .c
*/

#include "my.h"

void print_bin(int nbr, int i, char *s, va_list list)
{
    int res = 0;
    int v = 1;

    while (nbr != 0) {
        res = res + nbr % 2 * v;
        nbr = nbr / 2;
        v = v * 10;
    }
    if (res < 0)
        res = res * -1;
    my_put_nbr(res);
    i += 2;
    my_printf_flags(s, list, i);
    return;
}

void print_octa(int nbr, int i, char *s, va_list list)
{
    int res = 0;
    int v = 1;

    while (nbr != 0) {
        res = res + nbr % 8 * v;
        nbr = nbr / 8;
        v = v * 10;
    }
    if (res < 0)
        res = res * -1;
    my_put_nbr(res);
    i += 2;
    my_printf_flags(s, list, i);
    return;
}
