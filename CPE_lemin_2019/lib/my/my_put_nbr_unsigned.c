/*
** EPITECH PROJECT, 2019
** nbr_unsigned
** File description:
** nbr_unsigned
*/

void my_putchar(char n);

unsigned int my_put_nbr_unsigned(unsigned int nb)
{
    if (nb > 9) {
        my_put_nbr_unsigned(nb / 10);
        my_put_nbr_unsigned(nb % 10);
    }
    else {
        my_putchar(nb + '0');
    }
    return (nb);
}
