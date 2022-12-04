/*
** EPITECH PROJECT, 2020
** main
** File description:
** .c
*/

#include "my.h"

void my_printf_flags(char *s, va_list list, int i)
{
    while (s[i] != '\0') {
        if (s[i] == '%' && s[i + 1] == 'c')
            return (print_char(va_arg(list, int), i, s, list));
        if (s[i] == '%' && s[i + 1] == 's')
            return (print_str(va_arg(list, char *), i, s, list));
        if (s[i] == '%' && (s[i + 1] == 'd' || s[i + 1] == 'i'))
            return (print_nbr(va_arg(list, int), i, s, list));
        if (s[i] == '%' && s[i + 1] == 'u')
            return (print_pos(va_arg(list, int), i, s, list));
        if (s[i] == '%' && s[i + 1] == 'b')
            return (print_bin(va_arg(list, int), i, s, list));
        if (s[i] == '%' && s[i + 1] == 'o')
            return (print_octa(va_arg(list, int), i, s, list));
        my_putchar(s[i]);
        i++;
    }
    va_end(list);
    return;
}

void my_printf(char *s, ...)
{
    va_list list;
    int i = 0;

    va_start(list, s);
    my_printf_flags(s, list, i);
    return;
}
