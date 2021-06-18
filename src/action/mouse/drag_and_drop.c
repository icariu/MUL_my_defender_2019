/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** drag_and_drop
*/

#include "my_defender.h"

void in_hand_activation(st_scene *scene)
{
    scene->game->print_pos = ON;
    scene->game->in_hand = ON;
}

void which_tower(st_scene *scene, sfRenderWindow *window)
{
    if (MOUSE_POS_X > 1094 && MOUSE_POS_X < 1154 && MOUSE_POS_Y > 836
        && MOUSE_POS_Y < 917 && sfMouse_isButtonPressed(sfMouseLeft)
        && scene->game->money >= 10) {
        fill_tower(scene, "img/magma.png");
        in_hand_activation(scene);
        scene->game->price = 10;
        scene->control_list->t_last->type = 1;
    } if (MOUSE_POS_X > 1197 && MOUSE_POS_X < 1274 && MOUSE_POS_Y > 822
        && MOUSE_POS_Y < 927 && sfMouse_isButtonPressed(sfMouseLeft)
        && scene->game->money >= 20) {
        fill_tower(scene, "img/archer.png");
        in_hand_activation(scene);
        scene->game->price = 20;
        scene->control_list->t_last->type = 2;
    }
}

void which_tower_2(st_scene *scene, sfRenderWindow *window)
{
    if (MOUSE_POS_X > 1310 && MOUSE_POS_X < 1388 && MOUSE_POS_Y > 812
        && MOUSE_POS_Y < 921 && sfMouse_isButtonPressed(sfMouseLeft)
        && scene->game->money >= 30) {
        fill_tower(scene, "img/arcane.png");
        in_hand_activation(scene);
        scene->game->price = 30;
        scene->control_list->t_last->type = 3;
    } if (MOUSE_POS_X > 1415 && MOUSE_POS_X < 1485 && MOUSE_POS_Y > 836
        && MOUSE_POS_Y < 912 && sfMouse_isButtonPressed(sfMouseLeft)
        && scene->game->money >= 40) {
        fill_tower(scene, "img/mortar.png");
        in_hand_activation(scene);
        scene->game->price = 40;
        scene->control_list->t_last->type = 4;
    }
}