/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** my_strcat.c
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(dest);
    int n = 0;

    while (n != my_strlen(src))
    {
        dest[i] = src[n];
        n++;
        i++;
    }
    return (dest);
}
