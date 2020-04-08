/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** utility
*/
#include "../include/lemin.h"

int check_line(char *c)
{
    if (c == NULL)
        return (0);
    if (c[0] == '#')
        return (0);
    for (int i = 0; c[i]; i++) {
        if (c[i] == '#')
            return (0);
        if (c[i] != ' ' && c[i] != '\n' && (c[i] < '0' || c[i] > '9'))
            return (84);
    }
    return (0);
}

int print_nbr(char *line)
{
    if (line[0] == '#')
        return (0);
    for (int i = 0; line[i + 1] != '\0' && line[i + 1] != ('#' && '\n'); i++)
        my_putchar(line[i]);
    my_putchar('\n');
}

char *get_nbr(char *line)
{
    char *l = malloc(sizeof(char) * my_strlen(line) + 1);
    int i = 0;

    for (; line[i + 1] != '\0' && line[i + 1] != '#'; i++)
        l[i] = line[i];
    l[i] = '\0';
    return (l);
}

int go_start(char *line, size_t nb, lem_t *lem)
{
    if (line != NULL && check_line(line) != 84) {
        my_putstr("##start\n");
        lem->start = get_nbr(line);
        my_printf("%s\n", lem->start);
    }
    else
        return (84);
}

int go_end(char *line, size_t nb, lem_t *lem)
{
    if (line != NULL && check_line(line) != 84) {
          my_putstr("##end\n");
          lem->end = get_nbr(line);
          my_printf("%s\n", lem->end);
    }
    else
        return (84);
}
