/*
** EPITECH PROJECT, 2020
** my_memset
** File description:
** my_memset
*/

#include <stdlib.h>

char *my_memset(char *s, int n, size_t t)
{
    for (size_t i = 0; i < t;  i++)
        s[i] = n;
    return (s);
}