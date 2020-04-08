/*
** EPITECH PROJECT, 2020
** tab_dup
** File description:
** tab_dup
*/

#include "my.h"

char **my_tabdup(char **tab)
{
    char **dest = malloc(sizeof(char *) * my_tablen(tab));

    if (dest == NULL)
        return (NULL);
    for (int i = 0; tab[i]; i++) {
        dest[i] = malloc(sizeof(char) * my_strlen(tab[i]) + 1);
        if (dest[i] == NULL)
            return (NULL);
        dest[i] = my_memset(dest[i], 0, my_strlen(tab[i]) + 1);
        my_strcpy(dest[i], tab[i]);
    }
    return (dest);
}