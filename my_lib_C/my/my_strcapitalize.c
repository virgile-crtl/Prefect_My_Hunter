/*
** EPITECH PROJECT, 2020
** my_strcapitalize
** File description:
** library
*/

char *my_strcapitalize(char *str)
{
    int a;

    a = 0;
    if (str[0] <= 'z' && str[0] >= 'a')
        str[0] = str[0] - 32;
    while (str[a] != '\0') {
        if (str[a] <= 'z' && str[a] >= 'a' && str[a - 1] == ' ') {
            str[a] = str[a] - 32;
        }
        a = a + 1;
    }
    return (str);
}
