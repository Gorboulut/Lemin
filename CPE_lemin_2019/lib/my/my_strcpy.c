/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** my_strcpy.c
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int j;

    dest = malloc(sizeof(char) * my_strlen(src) + 1);
    if (dest == NULL)
        return (NULL);
    for (j = 0; src[j] != '\0'; j++)
        dest[j] = src[j];
    dest[j] = '\0';
    return (dest);
}
