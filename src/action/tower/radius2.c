/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** radius2
*/

#include "my_defender.h"

void check_node_pos_bis_bis_bis_bis(st_scene *scene, st_tower *node)
{
    if (node->pos.x > 400 && node->pos.x < 700 &&
        node->pos.y > 616 && node->pos.y < 889 && scene->game->in_hand == OFF) {
        if (node->type == 1)
            twr_1(scene, (sfVector2f){430, 632}, (sfVector2f){670, 872});
        if (node->type == 2)
            twr_2(scene, (sfVector2f){430, 632}, (sfVector2f){670, 872});
        if (node->type == 3)
            twr_3(scene, (sfVector2f){430, 632}, (sfVector2f){670, 872});
        if (node->type == 4)
            twr_4(scene, (sfVector2f){430, 632}, (sfVector2f){670, 872});
    } if (node->pos.x > 566 && node->pos.x < 863 &&
        node->pos.y > 60 && node->pos.y < 331 && scene->game->in_hand == OFF) {
        if (node->type == 1)
            twr_1(scene, (sfVector2f){594, 75}, (sfVector2f){834, 315});
        if (node->type == 2)
            twr_2(scene, (sfVector2f){594, 75}, (sfVector2f){834, 315});
        if (node->type == 3)
            twr_3(scene, (sfVector2f){594, 75}, (sfVector2f){834, 315});
        if (node->type == 4)
            twr_4(scene, (sfVector2f){594, 75}, (sfVector2f){834, 315});
    }
}

void check_node_pos_bis_bis_bis_bis_bis(st_scene *scene, st_tower *node)
{
    if (node->pos.x > 769 && node->pos.x < 1067 &&
        node->pos.y > 60 && node->pos.y < 330 && scene->game->in_hand == OFF) {
        if (node->type == 1)
            twr_1(scene, (sfVector2f){798, 75}, (sfVector2f){1038, 315});
        if (node->type == 2)
            twr_2(scene, (sfVector2f){798, 75}, (sfVector2f){1038, 315});
        if (node->type == 3)
            twr_3(scene, (sfVector2f){798, 75}, (sfVector2f){1038, 315});
        if (node->type == 4)
            twr_4(scene, (sfVector2f){798, 75}, (sfVector2f){1038, 315});
    } if (node->pos.x > 905 && node->pos.x < 1201 &&
        node->pos.y > 370 && node->pos.y < 644 && scene->game->in_hand == OFF) {
        if (node->type == 1)
            twr_1(scene, (sfVector2f){933, 387}, (sfVector2f){1173, 627});
        if (node->type == 2)
            twr_2(scene, (sfVector2f){933, 387}, (sfVector2f){1173, 627});
        if (node->type == 3)
            twr_3(scene, (sfVector2f){933, 387}, (sfVector2f){1173, 627});
        if (node->type == 4)
            twr_4(scene, (sfVector2f){933, 387}, (sfVector2f){1173, 627});
    }
}