/*
** EPITECH PROJECT, 2020
** lmin
** File description:
** graph creation
*/
#include "../include/lemin.h"

add *new_node(int dest)
{
    add *new = malloc(sizeof(struct addnode));

    new->dest = dest;
    new->next = NULL;
    return (new);
}

graph *create_graph(int v)
{
    graph *graph = malloc(sizeof(struct graph));

    graph->v = v;
    graph->list = malloc(v * sizeof(struct addnode*));
    for (int i = 0; i < v; ++i)
        graph->list[i] = NULL;
    return (graph);
}

void add_edge(graph *graph, int src, int dest)
{
    add *new = new_node(dest);

    new->next = graph->list[src];
    graph->list[src] = new;
    new = new_node(src);
    new->next = graph->list[dest];
    graph->list[dest] = new;
}

void print_graph(graph *graph)
{
    int i = 0;

    for (i = 0; i < graph->v; i++) {
        add *node = graph->list[i];
        printf("\nList of vertex %d\nhead ", i);
        while (node) {
            printf("->%d", node->dest);
            node = node->next;
        }
        printf("\n");
    }
}

int call_graph(void)
{
    int v = 4;

    graph *graph = create_graph(v);
    add_edge(graph, 2, 0);
    add_edge(graph, 3, 2);
    add_edge(graph, 1, 3);
/*    add_edge(graph, 1, 4);
    add_edge(graph, 1, 3);
    add_edge(graph, 2, 4);
    add_edge(graph, 3, 4);
    add_edge(graph, 4, 6);
    add_edge(graph, 5, 1);
    add_edge(graph, 5, 6);*/
    print_graph(graph);
    return (0);
}
