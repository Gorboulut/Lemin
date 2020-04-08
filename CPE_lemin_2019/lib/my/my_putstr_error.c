/*
** EPITECH PROJECT, 2019
** print error
** File description:
** pritn error
*/

#include "my.h"
#include <unistd.h>

int my_putstr_error(char *n)
{
    return (write(2, n, (my_strlen(n) + 1)));
}