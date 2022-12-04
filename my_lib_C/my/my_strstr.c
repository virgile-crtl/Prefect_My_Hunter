/*
** EPITECH PROJECT, 2020
** my_strstr
** File description:
** library
*/

char *my_strstr(char *str, char const *to_find)
{
    int u = 0;

    if (str[0] == '\0')
        return (0);
    while (to_find[u] != '\0') {
        if (to_find[u] != str[u])
            return (my_strstr(str + 1, to_find));
        u++;
    }
    return (str);
}
