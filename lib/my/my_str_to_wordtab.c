/*
** EPITECH PROJECT, 2020
** PSU_minishell1_2019
** File description:
** my_str_to_wordtab
*/

#include <stdlib.h>

int word_count(char *str, char symb)
{
    int nb_word = 1;
    for (int i = 0; str[i]; i++) {
        if (str[i] == symb || str[i] == '\0') {
            for (; str[i] == symb; i++);
            nb_word++;
        }
    }
    return (nb_word);
}

int sizeof_word(char *str, int i, char symb)
{
    int count = 0;
    for (; str[i]; i++, count++) {
        if (str[i] == symb || str[i] == '\0')
            return (count);
    }
    return (count);
}

char **my_str_to_wordtab(char *str, char symb)
{
    int nb_word = word_count(str, symb);
    char **tab = malloc(sizeof(char *) * (nb_word + 1));
    int i = 0;
    int y;
    int step;

    for (step = 0; step < nb_word; step++, i++) {
        for (; str[i] == symb; i++);
        tab[step] = malloc(sizeof(char) * (sizeof_word(str, i, symb) + 1));
        for (y = 0; str[i] != symb && str[i]; y++, i++) {
            tab[step][y] = str[i];
        }
        tab[step][y] = '\0';
    }
    tab[step] = NULL;
    return (tab);
}