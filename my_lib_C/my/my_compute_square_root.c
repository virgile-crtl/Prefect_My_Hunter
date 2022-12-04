/*
** EPITECH PROJECT, 2020
** my_compute_square_root
** File description:
** library
*/

int my_compute_square_root(int nb)
{
    int w = 0;

    if (nb >2147483646)
        return (0);
    if (nb <= 0)
        return (0);
    while (w < 46341) {
        if (w * w == nb)
            return (w);
        w++;
    }
    return w;
}
