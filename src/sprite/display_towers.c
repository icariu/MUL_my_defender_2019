/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** display_towers
*/

#include "my_defender.h"

void display_towers(st_scene *scene, sfRenderWindow *window)
{
    st_tower *node = scene->control_list->t_first;

    while (node != NULL) {
        sfRenderWindow_drawSprite(window, node->spr, NULL);
        node = node->next;
    }
}