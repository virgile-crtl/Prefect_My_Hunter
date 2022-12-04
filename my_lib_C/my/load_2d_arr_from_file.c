/*
** EPITECH PROJECT, 2020
** load_2d_arr_from_file
** File description:
** .c
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int count_lines(char *map)
{
    int line = 0;
    int i;

    for (i = 0; map[i] != '\0'; i += 1)
        if (map[i] == '\n')
            line += 1;
    if (map[i - 1] != '\n')
        line += 1;
    return line + 1;
}

char **malloc_map(int nb_rows, char *src)
{
    char **map = malloc(sizeof(char *) * (nb_rows + 1));
    int len;

    for (len = 0; src[len] != '\n' && src[len] != '\0'; len += 1);
    map[0] = malloc(sizeof(char) * (len + 1));
    return map;
}

int size_line(char *src, int i)
{
    int len;

    for (len = i; src[len] != '\n' && src[len] != '\0'; len += 1);
    len = len - i + 1;
    return len;
}

char **make_2d_arr_from_file(char *src, char **map)
{
    int x = 0;
    int y = 0;

    for (int i = 0; src[i] != '\0'; i += 1) {
        if (src[i] == '\n') {
            map[y][x] = '\0';
            x = 0;
            y += 1;
            if (src[i + 1] != '\0')
                i += 1;
            map[y] = malloc(sizeof(char) * size_line(src, i));
        }
        map[y][x] = src[i];
        x += 1;
    }
    free(map[y]);
    free(src);
    map[y] = NULL;
    return map;
}

char **load_2d_arr_from_file(char *filepath)
{
    char *str = my_epurstr(load_file_in_mem(filepath));
    int rows = count_lines(str);
    char **map = malloc_map(rows, str);
    char **arr = make_2d_arr_from_file(str, map);
    return arr;
}
