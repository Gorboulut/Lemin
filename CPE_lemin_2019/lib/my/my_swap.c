/*
** EPITECH PROJECT, 2019
** my_swap.c
** File description:
** my_swap.c
*/
#include <unistd.h>

int my_swap(char *a, char *b)
{
    char p = *a;
    *a = *b;
    *b = p;
    return (0);
}
