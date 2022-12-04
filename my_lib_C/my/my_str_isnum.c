/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** library
*/
#include <unistd.h>

int my_str_isnum(char const *str)
{
    int a = 0;

    while (str[a] != '\0' ) {
        if (str[a] < '0' || str[a] > '9')
            return (0);
        a = a + 1;
    }
    return (1);
}
