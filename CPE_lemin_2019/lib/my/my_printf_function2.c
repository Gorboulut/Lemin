/*
** EPITECH PROJECT, 2019
** function 2
** File description:
** function 2
*/

#include "my.h"
#include <stdarg.h>

void my_put_nbr_hexa_tab(va_list ap)
{
    my_put_nbr_hexa(va_arg(ap, unsigned int));
}

void my_put_nbr_octal_tab(va_list ap)
{
    my_put_nbr_octal(va_arg(ap, unsigned int));
}

void my_put_nbr_hexamin_tab(va_list ap)
{
    my_put_nbr_hexamin(va_arg(ap, unsigned int));
}

void my_put_nonprintable_tab(va_list ap)
{
    my_put_str_nonprintable(va_arg(ap, char *));
}
