/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** leaderboard
*/

#include "my_defender.h"

char *read_file(char *filepath)
{
    char *buffer = malloc(sizeof(char) * 41);
    char *res = "\0";
    int fd = open(filepath, O_RDONLY);
    int i = 1;

    buffer[0] = '\0';
    while (i) {
        i = read(fd, buffer, 40);
        buffer[i] = '\0';
        res = my_strcat_realloc(res, buffer);
    }
    close(fd);
    return (res);
}

void write_in_file(char **name)
{
    int fd = open("score", O_WRONLY | O_TRUNC);
    for (int i = 0; i < 3; i++) {
        for (int y = 3; name[i][y]; y++)
            if (name[i][y] < 'A' || name[i][y] > 'Z')
                name[i][y] = name[i][y] + 32;
        write(fd, name[i], my_strlen(name[i]));
        write(fd, "\n", 1);
    }
    close(fd);
}