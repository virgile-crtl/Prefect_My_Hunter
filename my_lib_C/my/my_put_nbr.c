/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** library
*/

void my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb == -2147483647) {
        my_putchar('-');
        my_putchar('2');
        nb = 147483648;
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb >= 10) {
        my_put_nbr(nb / 10);
        my_put_nbr(nb % 10);
    } else {
        my_putchar(nb + '0');
    }
    return 0;
}
