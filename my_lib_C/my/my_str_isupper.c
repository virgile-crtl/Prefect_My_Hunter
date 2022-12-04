/*
** EPITECH PROJECT, 2020
** my_str_isupper
** File description:
** library
*/

int my_str_isupper(char const *str)
{
    int a = 0;

    while (str[a] != '\0') {
        if (str[a] >= 'A' && str[a] <= 'Z' && str[a] != ' ')
            return (0);
        else
            a++;
    }
    return (1);
}
