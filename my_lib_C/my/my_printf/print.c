/*
** EPITECH PROJECT, 2020
** my_printf
** File description:
** .c
*/

#include "my.h"

void print_char(char c, int i, char *s, va_list list)
{
    my_putchar(c);
    i += 2;
    my_printf_flags(s, list, i);
    return;
}

void print_nbr(int nbr, int i, char *s, va_list list)
{
    my_put_nbr(nbr);
    i += 2;
    my_printf_flags(s, list, i);
    return;
}

void print_pos(int nbr, int i, char *s, va_list list)
{
    if (nbr < 0)
        my_put_nbr(nbr * -1);
    else
        my_put_nbr(nbr);
    i += 2;
    my_printf_flags(s, list, i);
    return;
}

void print_str(char *str, int i, char *s, va_list list)
{
    my_putstr(str);
    i += 2;
    my_printf_flags(s, list, i);
    return;
}
