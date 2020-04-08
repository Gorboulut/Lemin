/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** tunnel parsing
*/
#include "../include/lemin.h"

int check(char *nbr1, char *nbr2)
{
    if (nbr1 == NULL || nbr2 == NULL)
        return (84);
    if (my_str_isnum(nbr1) == 1 || my_str_isnum(nbr2) == 1)
        return (84);
    free(nbr1);
    free(nbr2);
    return (0);
}

int check_tunnel(char *line)
{
    char *nbr1 = malloc(sizeof(char) * my_strlen(line));
    char *nbr2 = NULL;
    int x = 0;

    for (int i = 0; line[i]; i++) {
        if (nbr2 == NULL) {
            nbr1[i] = line[i];
            if (line[i] == '-') {
                nbr1[i] = '\0';
                nbr2 = malloc(sizeof(char) * my_strlen(line));
                nbr2[x] = line[i];
            }
        } else {
            nbr2[x] = line[i];
            x++;
        }
    }
    nbr2[x] = '\0';
    return (check(nbr1, nbr2));
}

int parsing_tunnels(char *line, size_t nb, lem_t *lem)
{
    while (getline(&line, &nb, stdin) > 0) {
        if (line[0] != '#')
            if (check_tunnel(line) != 84)
                lem->tunnel = add_list(lem->tunnel, line);
            else
                return (84);
    }
    lem->tunnel = make_it_double(lem->tunnel);
    lem->room = make_it_double(lem->room);
}
