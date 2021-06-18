/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** display_gameover
*/

#include "my_defender.h"

void display_gameover(st_scene *scene, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, scene->tab[10]->spr, NULL);
    scene->game->txt_wave = text(my_itoa(scene->game->wave), 52, sfWhite);
    sfText_setPosition(scene->game->txt_wave, (sfVector2f){525, 364});
    sfRenderWindow_drawText(window, scene->game->txt_wave, NULL);
    sfSprite_setTextureRect(scene->button[0]->spr, scene->button[0]->rect);
    sfSprite_setPosition(scene->button[0]->spr, scene->button[0]->pos);
    sfRenderWindow_drawSprite(window, scene->button[0]->spr, NULL);
}