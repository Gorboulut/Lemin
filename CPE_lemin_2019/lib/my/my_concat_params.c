/*
** EPITECH PROJECT, 2019
** concat_params.c
** File description:
** concat_params.c
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src);

char *concat_params(int argc, char **argv)
{
    char *strarg;
    int i = 0;
    int lenght = 0;

    for (; i < argc ; i++)
    {
        lenght = lenght + my_strlen(argv[i]);
        strarg = malloc(sizeof(char) * lenght + 1);
        if (strarg == NULL)
            return (NULL);
    }
    i = 0;
    while (i != argc)
    {
        my_strcat(strarg, argv[i]);
        my_strcat(strarg, "\n");
        i++;
    }
    return (strarg);
}
