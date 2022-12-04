/*
** EPITECH PROJECT, 2020
** my_strdup
** File description:
** allocates memory and copies the string
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *dest;
    int i;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
