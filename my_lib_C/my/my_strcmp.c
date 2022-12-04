/*
** EPITECH PROJECT, 2020
** my_strcmp
** File description:
** library
*/

#include "my.h"

int my_strcmp(char const *s1, char const *s2)
{
    int q = 0;

    if (my_strlen(s1) != my_strlen(s2))
        return 0;
    while (s1[q] != '\0' && s2[q] != '\0') {
        if (s1[q] != s2[q])
            return 0;
        q += 1;
    }
    return 1;
}
