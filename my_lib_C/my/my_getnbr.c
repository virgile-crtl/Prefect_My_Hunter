/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** library
*/

#include <stdio.h>

int my_getnbr(char const *str)
{
    int a = 0;
    int b = 1;
    int i = 0;

    while (!(str[i] >= '0' && str[i] <= '9')) {
        if (str[i] == '-')
            b = b * -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        a = a + (str[i] - 48);
        if (str[i + 1] >= '0' && str[i + 1] <= '9')
            a = a * 10;
        i++;
    }
    a = a * b;
    return (a);
}
