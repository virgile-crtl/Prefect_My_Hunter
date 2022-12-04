/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** library
*/

int my_strlen(char const *str)
{
    int q = 0;

    while (str[q] != '\0') {
        q++;
    }
    return (q);
}
