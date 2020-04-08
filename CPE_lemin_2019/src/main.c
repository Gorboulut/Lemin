/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** main.c
*/
#include "../include/lemin.h"

void display_h(void)
{
    my_printf("usage : gmin.pl size density nb_of_fourmiz\n");
    my_printf("When size is the number of rooms and density ");
    my_printf("the percentage of probability of connexions between rooms\n");
}

int main(int ac, char **av)
{
    UNUSED(av);
    UNUSED(ac);
    if (parsing_nb_ants() == 84)
        return (84);
//    call_graph();
    return (0);
}
