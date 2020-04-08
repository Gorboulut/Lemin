/*
** EPITECH PROJECT, 2020
** parsing.c
** File description:
** parsing.c
*/

#include "../include/lemin.h"

room_t *add_list(room_t *add, char *line)
{
    room_t *new = malloc(sizeof(room_t));
    room_t *tmp;

    new->stat = my_strcpy(new->stat, line);
    new->next = NULL;
    new->prev = NULL;
    if (!add)
        return (new);
    tmp = add;
    while (tmp->next != NULL) {
        tmp->next->prev = tmp;
        tmp = tmp->next;
    } tmp->next = new;
    tmp->next->prev = tmp;
    return (add);
}

room_t *make_it_double(room_t *add)
{
    room_t *new = add;

    while (new->next != NULL)
        new = new->next;
    new->next = add;
    return (new);
}

int parsing_nb_ants(void)
{
    char *line = NULL;
    size_t nb = 0;
    lem_t *lem = malloc(sizeof(lem_t));

    lem->room = malloc(sizeof(room_t));
    lem->tunnel = malloc(sizeof(room_t));
    lem->room = NULL;
    lem->tunnel = NULL;
    getline(&line, &nb, stdin);
    if (my_strlen(line) == 0 || my_str_isnum(line) == 1)
        return (84);
    my_printf("#number_of_ants\n%s", line);
    if (parsing_rooms(line, nb, lem) == 84)
        return (84);
    if (parsing_tunnels(line, nb, lem) == 84)
        return (84);
}
