/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** display2
*/

#include "my_defender.h"

void display_game_bis(st_scene *scene, sfRenderWindow *window)
{
    display_towers(scene, window);
    if (scene->game->in_hand == ON) {
        scene->control_list->t_last->pos = (sfVector2f){
            sfMouse_getPositionRenderWindow(window).x - 25,
            sfMouse_getPositionRenderWindow(window).y - 25};
        sfSprite_setPosition(scene->control_list->t_last->spr,
        scene->control_list->t_last->pos);
        scene->tab[9]->pos = (sfVector2f){
            sfMouse_getPositionRenderWindow(window).x - 128,
            sfMouse_getPositionRenderWindow(window).y - 128};
        sfSprite_setPosition(scene->tab[9]->spr, scene->tab[9]->pos);
        sfRenderWindow_drawSprite(window, scene->tab[9]->spr, NULL);
    }
    manage_wave(scene, window);
    if (scene->tab[3]->rect.left >= 720)
        scene->state = 5;
}