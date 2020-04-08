/*
** EPITECH PROJECT, 2020
** tab_len
** File description:
** tab_len
*/

int my_tablen(char **tab)
{
    int i = 0;

    for (; tab[i]; i++);
    return (i);
}