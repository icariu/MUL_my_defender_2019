/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** tower_1
*/

#include "my_defender.h"

void twr_1(st_scene *scene, sfVector2f o, sfVector2f t)
{
    st_mobs *node = scene->control_list->m_first;

    while (node != NULL) {
        if (sfSprite_getPosition(node->spr).x + 27 >= o.x &&
        sfSprite_getPosition(node->spr).x + 27 <= t.x &&
        sfSprite_getPosition(node->spr).y + 37 >= o.y &&
        sfSprite_getPosition(node->spr).y + 37 <= t.y) {
            node->life -= 1;
            node->txt_life = text(my_itoa(node->life), 12, sfRed);
            if (node->life <= 0 && node->dead == 0) {
                scene->game->money += 3;
                node->dead = 1;
            }
        }
        node = node->next;
    }
}

void twr_2(st_scene *scene, sfVector2f o, sfVector2f t)
{
    st_mobs *node = scene->control_list->m_first;

    while (node != NULL) {
        if (sfSprite_getPosition(node->spr).x + 27 >= o.x &&
        sfSprite_getPosition(node->spr).x + 27 <= t.x &&
        sfSprite_getPosition(node->spr).y + 37 >= o.y &&
        sfSprite_getPosition(node->spr).y + 37 <= t.y) {
            node->life -= 2;
            node->txt_life = text(my_itoa(node->life), 12, sfRed);
            if (node->life <= 0 && node->dead == 0) {
                scene->game->money += 3;
                node->dead = 1;
            }
        }
        node = node->next;
    }
}

void twr_3(st_scene *scene, sfVector2f o, sfVector2f t)
{
    st_mobs *node = scene->control_list->m_first;

    while (node != NULL) {
        if (sfSprite_getPosition(node->spr).x + 27 >= o.x &&
        sfSprite_getPosition(node->spr).x + 27 <= t.x &&
        sfSprite_getPosition(node->spr).y + 37 >= o.y &&
        sfSprite_getPosition(node->spr).y + 37 <= t.y) {
            node->life -= 3;
            node->txt_life = text(my_itoa(node->life), 12, sfRed);
            if (node->life <= 0 && node->dead == 0) {
                scene->game->money += 2;
                node->dead = 1;
            }
        }
        node = node->next;
    }
}

void twr_4(st_scene *scene, sfVector2f o, sfVector2f t)
{
    st_mobs *node = scene->control_list->m_first;

    while (node != NULL) {
        if (sfSprite_getPosition(node->spr).x + 27 >= o.x &&
        sfSprite_getPosition(node->spr).x + 27 <= t.x &&
        sfSprite_getPosition(node->spr).y + 37 >= o.y &&
        sfSprite_getPosition(node->spr).y + 37 <= t.y) {
            node->life -= 4;
            node->txt_life = text(my_itoa(node->life), 12, sfRed);
            if (node->life <= 0 && node->dead == 0) {
                scene->game->money += 2;
                node->dead = 1;
            }
        }
        node = node->next;
    }
}