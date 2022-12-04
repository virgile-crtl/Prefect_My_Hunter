/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** library
*/

#include <unistd.h>

void my_putstr(char const *str)
{
    int q = 0;

    while (str[q] != '\0')
        q++;
    write(1, str, q);
}
