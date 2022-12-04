/*
** EPITECH PROJECT, 2020
** my_str_to_word_array_delim
** File description:
** my_str_to_word_array_delim.c
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int count_words_str_delim(char const *str, char delim)
{
    int x = 1;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == delim)
            x += 1;
        i += 1;
    }
    if (str[i - 1] == delim)
        x -= 1;
    return (x);
}

int check_alphanumerique_delim(char str)
{
    if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z')) {
        if ((str >= '0' && str <= '9'))
            return (1);
    }
    return (0);
}

char **size_word_delim(char **dest, char const *str, char delim)
{
    int a = 0;
    int i = 0;
    int j = 0;

    while (str[a] != '\0') {
        while (str[a] != delim && str[a] != '\0') {
            a++;
            j++;
        }
        dest[i] = malloc(sizeof(char) * (j + 1));
        j = 0;
        i += 1;
        if (str[a] != '\0')
            a += 1;
    }
    return (dest);
}

char **write_tab_delim(char const *str, char **dest, char delim)
{
    int i = 0;
    int j = 0;
    int a = 0;

    while (str[i] != '\0') {
        while (str[i] != delim && str[i] != '\0') {
            dest[a][j] = str[i];
            j += 1;
            i += 1;
        }
        dest[a][j] = '\0';
        j = 0;
        a += 1;
        if (str[i] != '\0')
            i += 1;
    }
    dest[a] = NULL;
    return (dest);
}

char **my_str_to_word_array_delim(char  const *str, char delim)
{
    int i = 0;
    char **dest;

    i = count_words_str_delim(str, delim);
    dest = malloc(sizeof(char *) * (i + 1));
    dest = size_word_delim(dest, str, delim);
    dest = write_tab_delim(str, dest, delim);
    return (dest);
}
