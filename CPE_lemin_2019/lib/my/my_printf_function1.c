/*
** EPITECH PROJECT, 2019
** function1
** File description:
** function1
*/

#include "my.h"
#include <stdarg.h>

void my_str_tab(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}

void my_char_tab(va_list ap)
{
    my_putchar(va_arg(ap, int));
}

void my_int_tab(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void my_int_unsigned_tab(va_list ap)
{
    my_put_nbr_unsigned(va_arg(ap, unsigned int));
}

void my_binary_unsigned_tab(va_list ap)
{
    my_put_nbr_binaire(va_arg(ap, unsigned int));
}
