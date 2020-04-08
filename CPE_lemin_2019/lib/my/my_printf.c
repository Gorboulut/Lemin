/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include "my.h"

void boucle_function_pointer(int a, va_list ap, char *s)
{
    for (int b = 0; flags_tab[b].flag != 0; b++) {
        if (flags_tab[b].flag == s[a])
        {
            flags_tab[b].fct(ap);
        }
    }
}

int my_printf(char *s, ...)
{
    va_list ap;

    va_start(ap, s);
    for (int a = 0; s[a]; a++) {
        if (s[a] == '%') {
            a++;
            boucle_function_pointer(a, ap, s);
        }
        else
            my_putchar(s[a]);
    }
    va_end(ap);
    return (0);
}
