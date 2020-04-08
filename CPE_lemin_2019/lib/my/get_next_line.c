/*
** EPITECH PROJECT, 2020
** CPE_get_next_line_2019
** File description:
** get_next_line.c
*/

#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "my.h"

int mylen(char const *str)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}

int check(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == '\n')
            return (84);
    return (0);
}

char *my_strcat_mod(char *result, char *buffer, int size, int fd)
{
    int i = 0;
    int cmp = 0;
    char *tmp;

    if (fd == -1)
        return (NULL);
    for (i = 0; result[i]; i++);
    tmp = malloc(sizeof(char) * (i + size + 1));
    if (tmp == NULL)
        return (NULL);
    for (i = 0; result[i]; i++)
        tmp[i] = result[i];
    for (; size != 0 && cmp < size; cmp++)
        tmp[i + cmp] = buffer[cmp];
    tmp[i + size] = '\0';
    return (tmp);
}

char *end_of_txt(char *str)
{
    int i = 0;
    char *result = NULL;
    int j = 0;

    for (i = 0; str[i] && str[i] != '\n'; i++);
    if (str[i] == '\n')
        i++;
    for (j = 0; str[j]; j++);
    result = malloc(sizeof(char) * ((j - i) + 1));
    if (result == NULL)
        return (NULL);
    for (j = 0; str[i]; j++, i++)
        result[j] = str[i];
    result[j] = '\0';
    return (result);
}

char *get_next_line(int fd)
{
    static char buff[READ_SIZE] = {0};
    static char *tp = "\0";
    char *re = "\0";
    static int siz = 1;

    if (mylen(tp) != 0) {
        re = my_strcat_mod(tp, NULL, 0, fd);
        if (re == NULL)
            return (NULL);
    }
    for (; siz != 0 && siz > 0; ) {
        siz = read(fd, buff, READ_SIZE);
        re = my_strcat_mod(re, buff, siz, fd);
        if ((re != NULL && check(re) == 84) || re == NULL)
            break; }
    tp = end_of_txt(re);
    if (re == NULL || tp == NULL || siz == -1 || (siz == 0 && mylen(re) == 0))
        return (NULL);
    for (int j = 0; re[j]; j++)
        re[j] == '\n' ? re[j] = '\0' : 0;
    return (re);
}