/*
** EPITECH PROJECT, 2020
** load_file_in_mem
** File description:
** .c
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "my.h"

char *load_file_in_mem(char const *filepath)
{
    int fd = fs_open_file(filepath);
    struct stat sb;
    char *str;

    fstat(fd, &sb);
    str = malloc(sizeof(char) * (sb.st_size + 1));
    read(fd, str, sb.st_size);
    close(fd);
    str[sb.st_size] = '\0';
    return (str);
}
