/*
** EPITECH PROJECT, 2020
** my_strncat
** File description:
** library
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int a = 0;
    int b = 0;

    while (dest[a]) {
        a = a + 1;
    }
    while (src[b] != '\0' && b < nb) {
        dest[a] = src[b];
        a = a + 1;
        b = b + 1;
    }
    dest[a] = '\0';
    return dest;
}
