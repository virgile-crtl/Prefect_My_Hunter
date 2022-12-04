/*
** EPITECH PROJECT, 2020
** my_str_to_word_array
** File description:
** my_str_to_word_array.c
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int count_words_str(char const *str)
{
    int x = 1;
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ' || str[i] == '\t')
            x += 1;
        i += 1;
    }
    return (x);
}

char **size_word(char **dest, char const *str)
{
    int a = 0;
    int j = 0;
    int i = 0;

    while (str[a] != '\0') {
        while (str[a] != ' ' && str[a] != '\t' && str[a] != '\0') {
            a += 1;
            j += 1;
        }
        dest[i] = malloc(sizeof(char) * j + 1);
        i += 1;
        j = 0;
        if (str[a] != '\0')
            a += 1;
    }
    return (dest);
}

char **write_tab(char const *str, char **dest)
{
    int i = 0;
    int j = 0;
    int a = 0;

    while (str[i] != '\0') {
        while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0') {
            dest[a][j] = str[i];
            j += 1;
            i += 1;
        }
        dest[a][j] = '\0';
        a += 1;
        j = 0;
        if (str[i] != '\0')
            i += 1;
    }
    dest[a] = NULL;
    return (dest);
}

char **my_str_to_word_array(char *str)
{
    int i = 0;
    char **dest;

    str = my_epurstr(str);
    i = count_words_str(str);
    dest = malloc(sizeof(char *) * (i + 1));
    dest = size_word(dest, str);
    dest = write_tab(str, dest);
    free(str);
    return (dest);
}
