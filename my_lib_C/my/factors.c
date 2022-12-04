/*
** EPITECH PROJECT, 2020
** f
** File description:
** f
*/

int number(char **str_ptr);

int factors(char **str_ptr)
{
    int a = number(str_ptr);
    int b = 0;

    while (**str_ptr != '\0') {
        if (**str_ptr == '/') {
            b = number(str_ptr);
            if (b != 0)
                a = a / b;
        }
        if (**str_ptr == '*') {
            b = number(str_ptr);
            a = a * b;
        }
        (*str_ptr)++;
    }
    return (a);
}
