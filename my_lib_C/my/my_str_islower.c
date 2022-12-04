/*
** EPITECH PROJECT, 2020
** my_str_islower
** File description:
** library
*/

int my_str_islower(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (!(str[i] >= 'a' && str[i] <= 'z') && str[i] != ' ')
            return (0);
        else
            i++;
    }
    return (1);
}
