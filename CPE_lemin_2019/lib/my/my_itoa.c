/*
** EPITECH PROJECT, 2020
** my_itoa
** File description:
** my_itoa
*/

#include "my.h"

char *my_itoa(int array)
{
    char *str = malloc(sizeof(char) * 10);
    int i = 0;

    if (str == NULL)
        return (NULL);
    if (array == 0) {
        str[i] = 48;
        str[i + 1] = '\0';
        return (str);
    }
    while (array > 0) {
        str[i] = array % 10 + 48;
        i++;
        array /= 10;
    }
    str[i] = '\0';
    str = my_revstr(str);
    return (str);
}