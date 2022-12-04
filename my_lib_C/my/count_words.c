/*
** EPITECH PROJECT, 2020
** count_words
** File description:
** count words
*/

#include <stdio.h>

int count_words(char *str)
{
    int x = 0;
    int i = 0;

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\t') {
            x++;
            while (str[i] != ' ' && str[i] != '\t')
                i++;
        }
    }
    return (x);
}
