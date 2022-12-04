/*
** EPITECH PROJECT, 2020
** my_strncmp
** File description:
** library
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int a;

    a = 0;
    while (s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a] && a < n) {
        a = a + 1;
    }
    return ( s1[a] - s2[a]);
}
