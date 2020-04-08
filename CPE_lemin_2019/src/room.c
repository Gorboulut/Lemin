/*
** EPITECH PROJECT, 2020
** lemin
** File description:
** room parsing
*/
#include "../include/lemin.h"

int parsing_rooms(char *line, size_t nb, lem_t *lem)
{
    while (getline(&line, &nb, stdin) > -1 && line[1] != '-') {
        if (check_line(line) == 84)
            return (84);
        if (my_strcmp(line, "##start\n") == 0) {
            getline(&line, &nb, stdin);
            if (go_start(line, nb, lem) == 84)
                return (84);
        }
        else if (my_strcmp(line, "##end\n") == 0) {
            getline(&line, &nb, stdin);
            if (go_end(line, nb, lem) == 84)
                return (84);
        }
        else {
            lem->room = add_list(lem->room, line);
            print_nbr(line);
        }
    } lem->tunnel = add_list(lem->tunnel, line);
}
