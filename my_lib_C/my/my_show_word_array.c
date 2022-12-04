/*
** EPITECH PROJECT, 2020
** my_show_word_array
** File description:
** 3
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void my_putchar(char c);

int my_putstr(char const *str);

int my_show_word_array(char * const *tab)
{
    int a = 0;

    while (tab[a]) {
        my_putstr(tab [a]);
        my_putchar('\n');
        a = a + 1;
    }
    return (0);
}
