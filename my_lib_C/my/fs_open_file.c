/*
** EPITECH PROJECT, 2020
** fs_open_file.c
** File description:
** .c
*/

#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int fs_open_file(char const *filepath)
{
    int fd = open(filepath, O_RDONLY);

    if (fd == -1){
        printf("no such file\n");
        exit(84);
    }
    return (fd);
}
