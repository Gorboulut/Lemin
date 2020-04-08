/*
** EPITECH PROJECT, 2019
** print_nonprintable
** File description:
** print_nonprintable
*/

int my_strlen(char *str);

void my_putchar(char n);

unsigned int my_put_nbr_octal(unsigned int nbr);

int my_put_str_nonprintable(char *str)
{
    int i = 0;
    unsigned int cara;

    while (i != my_strlen(str))
    {
        if (str[i] < 32 || str[i] >= 127)
        {
            cara = str[i];
            my_putchar('\\');
            if (cara < 7)
                my_putchar('0');
            if (cara < 64)
                my_putchar('0');
            my_put_nbr_octal(cara);
        }
        else
            my_putchar(str[i]);
        i++;
    }
    return (0);
}
