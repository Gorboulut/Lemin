/*
** EPITECH PROJECT, 2019
** octal
** File description:
** octal
*/

void my_putchar(char n);

unsigned int my_put_nbr_octal(unsigned int nbr)
{
    char nb[32];
    int i = 0;
    int rest = 0;

    while (nbr > 0) {
        rest = nbr % 8;
        if (rest < 10)
            nb[i] = rest + '0';
        nbr /= 8;
        i++;
    }
    while (i--)
        my_putchar(nb[i]);
    return (0);
}
