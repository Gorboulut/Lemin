/*
** EPITECH PROJECT, 2019
** my_strdup.c
** File description:
** my_strdup.c
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    char *cpy;
    int i = 0;

    cpy = malloc(sizeof(char) * my_strlen(src));
    if (cpy == NULL)
        return (NULL);
    while (i <= my_strlen(src))
    {
        cpy[i] = src[i];
        i++;
    }
    return (cpy);
}
