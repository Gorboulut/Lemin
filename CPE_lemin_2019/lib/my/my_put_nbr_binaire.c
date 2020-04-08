/*
** EPITECH PROJECT, 2019
** nbr_binaire
** File description:
** nbr_binaire
*/

void my_put_nbr_unsigned(unsigned int nb);

void my_put_nbr_binaire(unsigned int nb)
{
    char nbr[32];
    int i = 0;

    for (i = 0; nb > 0; i++)
    {
        nbr[i] = nb % 2;
        nb /= 2;
    }
    for (i -= 1; i >= 0; i--)
        my_put_nbr_unsigned(nbr[i]);
}
