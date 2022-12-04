/*
** EPITECH PROJECT, 2020
** my_strcat
** File description:
** library
*/

#include "my.h"

char *my_strcat(char *dest, char *src)
{
    char *gu = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) +1));
    int a = 0;
    int b = 0;

    while (dest[a] != '\0') {
        gu[a] = dest[a];
        a++;
    }
    while (src[b] != '\0') {
        gu[a] = src[b];
        b++;
        a++;
    }
    gu[a] = '\0';
    return (gu);
}
