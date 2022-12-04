/*
** EPITECH PROJECT, 2020
** my_strncpy
** File description:
** library
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i != n) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
