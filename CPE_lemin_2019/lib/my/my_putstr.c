/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** my_putstr.c
*/

#include <unistd.h>
#include <stddef.h>
#include "my.h"

void my_putchar(char n);

int my_putstr(char const *str)
{
    if (str == NULL)
        return (0);
    return (write(1, str, my_strlen(str)));
}
