/*
** EPITECH PROJECT, 2019
** aprintf_fonction 3
** File description:
** aprintf_fonction 3
*/

#include "my.h"
#include <stdarg.h>

void my_print_percent_tab(va_list ap)
{
    my_print_percent(va_arg(ap, int));
}
