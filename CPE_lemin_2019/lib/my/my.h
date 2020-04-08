/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef READ_SIZE
#define READ_SIZE (100)

#endif /* READ_SIZE */

#ifndef MY_H_
#define MY_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

//ICIIIII C'EST LA LIB

int my_putstr(char const *str);
char *my_strcat(char *dest, char const *src);
int my_strlen(char const *str);
void my_putchar(char n);
char *my_itoa(int array);
int replace_tab(char **tab, int c);
int my_putstr_error(char *n);
int my_getnbr(char const *str);
int my_isneg(int n);
char *my_memset(char *s, int n, size_t t);
int my_is_prime(int nb);
int my_print_params(int argc, char **argv);
int my_put_nbr(int nb);
char *my_revstr(char *str);
char **my_tabdup(char **tab);
int my_tablen(char **tab);
int my_strcmp(char const *s1, char const *s2);
char *my_strcpy(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strncpy(char *dest, char const *src, int n);
char *my_strstr(char *str, char const *to_find);
char *my_strupcase(char *str);
int my_swap(int *a, int *b);
int concat_params(int argc, char **argv);
char **my_str_to_word_tab(char *board, char c);
int my_show_word_array(char *const *tab);
char *my_strdup(char const *src);
int my_printf(char *s, ...);
unsigned int my_put_nbr_unsigned(unsigned int nb);
void my_put_nbr_binaire(unsigned int nb);
unsigned int my_put_nbr_octal(unsigned int nbr);
unsigned int my_put_nbr_hexa(unsigned int nbr);
unsigned int my_put_nbr_hexamin(unsigned int nbr);
int my_put_str_nonprintable(char *str);
void my_print_percent();
void my_str_tab(va_list ap);
void my_char_tab(va_list ap);
void my_int_tab(va_list ap);
void my_int_unsigned_tab(va_list ap);
void my_binary_unsigned_tab(va_list ap);
void my_put_nbr_hexa_tab(va_list ap);
void my_put_nbr_octal_tab(va_list ap);
void my_put_nbr_hexamin_tab(va_list ap);
void my_put_nonprintable_tab(va_list ap);
char *get_next_line(int fd);


typedef struct flags_s {
    char flag;
    void (*fct)(va_list);
} flags_t;

static const flags_t flags_tab[] = {
    {'s', &my_str_tab},
    {'c', &my_char_tab},
    {'d', &my_int_tab},
    {'i', &my_int_tab},
    {'u', &my_int_unsigned_tab},
    {'b', &my_binary_unsigned_tab},
    {'X', &my_put_nbr_hexa_tab},
    {'x', &my_put_nbr_hexamin_tab},
    {'o', &my_put_nbr_octal_tab},
    {'S', &my_put_nonprintable_tab},
    {'%', &my_print_percent},
    {0}
};

#endif
