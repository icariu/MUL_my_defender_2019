/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** radius
*/

#include "my_defender.h"

void which_pos_tower(st_scene *scene)
{
    st_tower *node = scene->control_list->t_first;
    sfTime time = sfClock_getElapsedTime(scene->game->clock);
    float second = (float) time.microseconds / 1000000.0;

    if (second > 2.5)
        while (node != NULL) {
            node->pos = sfSprite_getPosition(node->spr);
            check_node_pos(scene, node);
            check_node_pos_bis(scene, node);
            check_node_pos_bis_bis(scene, node);
            check_node_pos_bis_bis_bis(scene, node);
            check_node_pos_bis_bis_bis_bis(scene, node);
            check_node_pos_bis_bis_bis_bis_bis(scene, node);
            node = node->next;
            sfClock_restart(scene->game->clock);
        }
}

void check_node_pos(st_scene *scene, st_tower *node)
{
    if (node->pos.x > 1125 && node->pos.x < 1425 &&
        node->pos.y > 370 && node->pos.y < 642 && scene->game->in_hand == OFF) {
        if (node->type == 1)
            twr_1(scene, (sfVector2f){1155, 386}, (sfVector2f){1395, 626});
        if (node->type == 2)
            twr_2(scene, (sfVector2f){1155, 386}, (sfVector2f){1395, 626});
        if (node->type == 3)
            twr_3(scene, (sfVector2f){1155, 386}, (sfVector2f){1395, 626});
        if (node->type == 4)
            twr_4(scene, (sfVector2f){1155, 386}, (sfVector2f){1395, 626});
    } if (node->pos.x > 1125 && node->pos.x < 1425 &&
        node->pos.y > 60 && node->pos.y < 330) {
        if (node->type == 1)
            twr_1(scene, (sfVector2f){1155, 75}, (sfVector2f){1395, 315});
        if (node->type == 2)
            twr_2(scene, (sfVector2f){1155, 75}, (sfVector2f){1395, 315});
        if (node->type == 3)
            twr_3(scene, (sfVector2f){1155, 75}, (sfVector2f){1395, 315});
        if (node->type == 4)
            twr_4(scene, (sfVector2f){1155, 75}, (sfVector2f){1395, 315});
    }
}

void check_node_pos_bis(st_scene *scene, st_tower *node)
{
    if (node->pos.x > 620 && node->pos.x < 900 &&
        node->pos.y > 255 && node->pos.y < 511 && scene->game->in_hand == OFF) {
        if (node->type == 1)
            twr_1(scene, (sfVector2f){640, 263}, (sfVector2f){880, 503});
        if (node->type == 2)
            twr_2(scene, (sfVector2f){640, 263}, (sfVector2f){880, 503});
        if (node->type == 3)
            twr_3(scene, (sfVector2f){640, 263}, (sfVector2f){880, 503});
        if (node->type == 4)
            twr_4(scene, (sfVector2f){640, 263}, (sfVector2f){880, 503});
    } if (node->pos.x > 707 && node->pos.x < 987 &&
        node->pos.y > 255 && node->pos.y < 511 && scene->game->in_hand == OFF) {
        if (node->type == 1)
            twr_1(scene, (sfVector2f){967, 263}, (sfVector2f){967, 263});
        if (node->type == 2)
            twr_2(scene, (sfVector2f){967, 263}, (sfVector2f){967, 263});
        if (node->type == 3)
            twr_3(scene, (sfVector2f){967, 263}, (sfVector2f){967, 263});
        if (node->type == 4)
            twr_4(scene, (sfVector2f){967, 263}, (sfVector2f){967, 263});
    }
}

void check_node_pos_bis_bis(st_scene *scene, st_tower *node)
{
    if (node->pos.x > 620 && node->pos.x < 910 &&
        node->pos.y > 315 && node->pos.y < 575 && scene->game->in_hand == OFF) {
        if (node->type == 1)
            twr_1(scene, (sfVector2f){645, 325}, (sfVector2f){930, 565});
        if (node->type == 2)
            twr_2(scene, (sfVector2f){645, 325}, (sfVector2f){930, 565});
        if (node->type == 3)
            twr_3(scene, (sfVector2f){645, 325}, (sfVector2f){930, 565});
        if (node->type == 4)
            twr_4(scene, (sfVector2f){645, 325}, (sfVector2f){930, 565});
    } if (node->pos.x > 707 && node->pos.x < 987 &&
        node->pos.y > 315 && node->pos.y < 575 && scene->game->in_hand == OFF) {
        if (node->type == 1)
            twr_1(scene, (sfVector2f){967, 325}, (sfVector2f){967, 565});
        if (node->type == 2)
            twr_2(scene, (sfVector2f){967, 325}, (sfVector2f){967, 565});
        if (node->type == 3)
            twr_3(scene, (sfVector2f){967, 325}, (sfVector2f){967, 565});
        if (node->type == 4)
            twr_4(scene, (sfVector2f){967, 325}, (sfVector2f){967, 565});
    }
}

void check_node_pos_bis_bis_bis(st_scene *scene, st_tower *node)
{
    if (node->pos.x > 200 && node->pos.x < 500 &&
        node->pos.y > 427 && node->pos.y < 699 && scene->game->in_hand == OFF) {
        if (node->type == 1)
            twr_1(scene, (sfVector2f){230, 443}, (sfVector2f){470, 683});
        if (node->type == 2)
            twr_2(scene, (sfVector2f){230, 443}, (sfVector2f){470, 683});
        if (node->type == 3)
            twr_3(scene, (sfVector2f){230, 443}, (sfVector2f){470, 683});
        if (node->type == 4)
            twr_4(scene, (sfVector2f){230, 443}, (sfVector2f){470, 683});
    } if (node->pos.x > 200 && node->pos.x < 500 &&
        node->pos.y > 616 && node->pos.y < 889 && scene->game->in_hand == OFF) {
        if (node->type == 1)
            twr_1(scene, (sfVector2f){230, 632}, (sfVector2f){470, 872});
        if (node->type == 2)
            twr_2(scene, (sfVector2f){230, 632}, (sfVector2f){470, 872});
        if (node->type == 3)
            twr_3(scene, (sfVector2f){230, 632}, (sfVector2f){470, 872});
        if (node->type == 4)
            twr_4(scene, (sfVector2f){230, 632}, (sfVector2f){470, 872});
    }
}