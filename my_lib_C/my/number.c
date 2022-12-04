/*
** EPITECH PROJECT, 2020
** number
** File description:
** .c
*/

#include <stdio.h>

int char_in_int(char **str_ptr)
{
    int dest = 0;

    while (**str_ptr >= '0' && **str_ptr <= '9') {
        dest = dest + (**str_ptr - 48);
        (*str_ptr)++;
        if (**str_ptr >= '0' && **str_ptr <= '9')
            dest = dest * 10;
    }
    return (dest);
}

int  number(char **str_ptr)
{
    int dest = 0;
    int a = 1;

    while (!(**str_ptr >= '0' && **str_ptr <= '9')) {
        if (**str_ptr == '-')
            a = a * -1;
        (*str_ptr)++;
    }
    while (**str_ptr >= '0' && **str_ptr <= '9') {
        if (**str_ptr >= '0' && **str_ptr <= '9')
            dest = char_in_int(str_ptr);
    }
    (*str_ptr)--;
    dest = dest * a;
    return (dest);
}
