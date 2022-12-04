/*
** EPITECH PROJECT, 2020
** my_epurstr
** File description:
** .c
*/

#include <stdlib.h>

int my_strlen_epurstr(char const *s)
{
    int i = 0;
    int j = 0;

    while (s[i] != '\0') {
        while (s[i] != ' ' && s[i] != '\t' && s[i] != '\0') {
            j += 1;
            i += 1;
        }
        j += 1;
        while (s[i] == ' ' || s[i] == '\t')
            i += 1;
    }
    return (j);
}

char *my_epurstr(char *s)
{
    int i = 0;
    int a = 0;
    char *d;

    d = malloc(sizeof(char) * my_strlen_epurstr(s));
    while (s[i] != '\0') {
        d[a] = s[i];
        if (s[i] == ' ' || s[i] == '\t') {
            while (s[i + 1] == ' ' || s[i + 1] == '\t')
                i++;
        }
        i++;
        a++;
    }
    if (d[a - 1] == ' ' || d[a - 1] == '\t')
        d[a - 1] = '\0';
    else
        d[a] = '\0';
    free(s);
    return (d);
}
