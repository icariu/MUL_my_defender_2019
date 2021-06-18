/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** display_text
*/

#include "my_defender.h"

sfText *text(char *str, int size, sfColor color)
{
    sfText *score = sfText_create();
    sfFont *font;
    font = sfFont_createFromFile("resources/Splatch.ttf");
    sfText_setString(score, str);
    sfText_setFont(score, font);
    sfText_setColor(score, color);
    sfText_setCharacterSize(score, size);
    return (score);
}