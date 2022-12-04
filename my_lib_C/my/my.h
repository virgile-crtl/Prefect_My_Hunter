/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** file that contains the prototypes of all the functions
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>

#ifndef MY_H
    #define MY_H

char *int_to_char(int nbr);
int count_words(char *str);
int factors(char **str_ptr);
void free_tab(char **tab);
int fs_open_file(char const *filepath);
char **load_2d_arr_from_file(char *filepath);
char *load_file_in_mem(char const *filepath);
int my_compute_square_root(int nb);
char *my_epurstr(char const *s);
int my_getnbr(char const *str);
void my_printf(char *s, ...);
void my_putchar(char c);
void my_puterror(char const *str);
int my_put_nbr(int nb);
void my_putstr(char const *str);
char *my_revstr(char *str);
int my_show_word_array(char * const *tab);
char *my_strcapitalize(char *str);
char *my_strcat(char *dest, char *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strdup(char const *src);
int my_str_isalpha(char const *str);
int my_str_islower(char const *str);
int my_str_isnum(char const *str);
int my_str_isupper(char const *str);
int my_strlen(char const *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char **my_str_to_word_array(char *str);
char **my_str_to_word_array_delim(char  const *str, char delim);
char *my_strupcase(char *str);
int  number(char **str_ptr);
int summands(char **str_ptr);
void print_char(char c, int i, char *s, va_list list);
void print_nbr(int nbr, int i, char *s, va_list list);
void print_pos(int nbr, int i, char *s, va_list list);
void print_str(char *str, int i, char *s, va_list list);
void print_bin(int nbr, int i, char *s, va_list list);
void print_octa(int nbr, int i, char *s, va_list list);
void my_printf_flags(char *s, va_list list, int i);

#endif
