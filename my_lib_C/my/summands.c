/*
** EPITECH PROJECT, 2020
** summands
** File description:
** sum of expression
*/

#include <stdio.h>

int number(char **str_ptr);

int summands(char **str_ptr)
{
    int a = number(str_ptr);
    int b = number(str_ptr);

    a = a + b;
    while (**str_ptr != '\0') {
        b = number(str_ptr);
        a = a + b;
    }
    return (a);
}
