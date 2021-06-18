/*
** EPITECH PROJECT, 2019
** paul.fermey@epitech.eu
** File description:
** my_strcat
*/

#include <stdlib.h>

char *my_strcat(char *dest, const char *src)
{
    int i = 0;
    int j = 0;
    int k = 0;

    for (i = 0; dest[i]; i++);
    for (j = 0; src[j]; j++);
    j += i;
    while (i < j) {
        dest[i] = src[k];
        i++;
        k++;
    }
    dest[j] = '\0';
    return (dest);
}

char *my_strcat_realloc(char *src, char *dest)
{
    int j = 0;
    int i = 0;
    char *res;

    for (i; dest[i]; i++);
    for (j; src[j]; j++);
    res = malloc(sizeof(char) * (i + j + 1));
    if (res == NULL)
        return (NULL);
    res[0] = '\0';
    for (int x = 0; src[x]; x++)
        res[x] = src[x];
    for (int x = 0; dest[x]; x++)
        res[x + j] = dest[x];
    res[i + j] = '\0';
    return (res);
}