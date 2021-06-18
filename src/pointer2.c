/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** pointer2
*/

#include "my_defender.h"

void if_six(st_scene *scene, sfRenderWindow *window)
{
    manage_mouse_back(scene, window);
    sfRenderWindow_drawSprite(window, scene->tab[11]->spr, NULL);
    sfSprite_setTextureRect(scene->button[7]->spr, scene->button[7]->rect);
    sfSprite_setPosition(scene->button[7]->spr, scene->button[7]->pos);
    sfRenderWindow_drawSprite(window, scene->button[7]->spr, NULL);
}