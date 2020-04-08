/*
** EPITECH PROJECT, 2020
** lemin.h
** File description:
** lemin.h
*/

#ifndef LEMIN_H
#define LEMIN_H
#define UNUSED(x) (void)(x)

#include "../lib/my/my.h"
#include <stdio.h>

typedef struct addnode {
    int dest;
    struct addnode *next;
} add;

typedef struct graph {
    int v;
    struct addnode **list;
} graph;

typedef struct room {
    char *stat;
    struct room *next;
    struct room *prev;
} room_t;

typedef struct lemin {
    char *start;
    char *end;
    room_t *room;
    room_t *tunnel;
} lem_t;

room_t *add_list(room_t *add, char *line);
int my_str_isnum(char const *str);
int parsing_nb_ants(void);
int call_graph(void);
char *get_nbr(char *line);
int print_nbr(char *line);
int check_line(char *c);
int go_end(char *line, size_t nb, lem_t *lem);
int go_start(char *line, size_t nb, lem_t *lem);
room_t *make_it_double(room_t *add);
int parsing_nb_ants(void);
int parsing_rooms(char *line, size_t nb, lem_t *lem);
int parsing_tunnels(char *line, size_t nb, lem_t *lem);

#endif /* !LEMIN_H */
