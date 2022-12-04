/*
** EPITECH PROJECT, 2020
** my_revstr
** File description:
** library
*/

char *my_revstr(char *str)
{
    char z;
    int x = 0;
    int q = 0;

    while (str[q] != '\0') {
        q++;
    }
    q--;
    while (x < q) {
        z = str[x];
        str[x] = str[q];
        str[q] = z;
        x++;
        q--;
    }
    return (str);
}
