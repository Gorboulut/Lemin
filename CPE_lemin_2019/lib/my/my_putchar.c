/*
** EPITECH PROJECT, 2019
** my_putchar.c
** File description:
** my_putchar.c
*/

#include <unistd.h>

void my_putchar(char n)
{
    write(1, &n, 1);
}
