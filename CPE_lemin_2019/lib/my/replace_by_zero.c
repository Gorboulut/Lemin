/*
** EPITECH PROJECT, 2020
** replace by 0
** File description:
** replace by zero
*/

int replace_tab(char **tab, int c)
{
    for (int i = 0; tab[i]; i++)
        for (int a = 0; tab[i][a]; a++)
            if (tab[i][a] == c)
                tab[i][a] = 0;
    return (0);
}