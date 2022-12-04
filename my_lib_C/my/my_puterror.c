/*
** EPITECH PROJECT, 2020
** my_puterror
** File description:
** display error
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int q = 0;

    while (str[q] != '\0') {
        q++;
    }
    return (q);
}

void my_puterror(char const *str)
{
    int q = my_strlen(str);

    while (str[q] != '\0')
        q++;
    write (2, str, q);
}
