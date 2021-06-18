/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** handle_mobs
*/

#include "my_defender.h"

void handle_life(st_scene *scene)
{
    st_mobs *node = scene->control_list->m_first;
    sfVector2f pos;

    if (node == NULL)
        return;
    pos = sfSprite_getPosition(node->spr);
    if (pos.x > 400 && pos.y < -150) {
        if (node->life > 0)
            scene->tab[3]->rect.left += 100;
        free_mobs(scene);
        sfMusic_play(scene->game->m_castle);
    }
}

void move_mobs(st_mobs **node, float second)
{
    if (second > 0.04) {
        sfSprite_move((*node)->spr, (*node)->pos);
        sfClock_restart((*node)->mov_clock);
    }
}

void handle_offset(st_mobs **node)
{
    sfTime time = sfClock_getElapsedTime((*node)->mov_clock);
    float second = time.microseconds / 100000.0;
    sfVector2f pos = sfSprite_getPosition((*node)->spr);
    if ((pos.y > 795 && pos.y < 870 && pos.x > 200 && pos.x < 330) ||
    (pos.x > 585 && pos.x < 740 && pos.y > 230 && pos.y < 250) ||
    (pos.x > 915 && pos.x < 985 && pos.y > 540 && pos.y < 630)) {
        (*node)->pos.x = 0.3;
        (*node)->pos.y = 0;
        (*node)->rect.top = 72;
    } if ((pos.y > 795 && pos.y < 870 && pos.x > 640 && pos.x < 735) ||
    (pos.x > 1355 && pos.x < 1415 && pos.y > 540 && pos.y < 630)) {
        (*node)->pos.x = 0;
        (*node)->pos.y = -0.3;
        (*node)->rect.top = 0;
    } if (pos.x > 915 && pos.x < 985 && pos.y > 230 && pos.y < 250) {
        (*node)->pos.x = 0;
        (*node)->pos.y = 0.3;
        (*node)->rect.top = 147;
    }
    move_mobs(node, second);
}