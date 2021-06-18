/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** display_mobs
*/

#include "my_defender.h"

void draw_mobs(st_mobs **node, sfRenderWindow *window)
{
    if ((*node)->life > 0) {
        sfSprite_setTextureRect((*node)->spr, (*node)->rect);
        sfText_setPosition((*node)->txt_life, (sfVector2f){
            sfSprite_getPosition((*node)->spr).x + 60,
            sfSprite_getPosition((*node)->spr).y});
        sfRenderWindow_drawText(window, (*node)->txt_life, NULL);
        sfRenderWindow_drawSprite(window, (*node)->spr, NULL);
    }
}

void display_mobs(st_scene *scene, sfRenderWindow *window)
{
    st_mobs *node = scene->control_list->m_first;
    sfTime time;
    float cooldown;

    while (node != NULL) {
        time = sfClock_getElapsedTime(node->clock);
        cooldown = (float) time.microseconds / 1000000.0;
        if (cooldown > 0.3 && node->rect.left == 0) {
            node->rect.left = 62;
            sfClock_restart(node->clock);
        } else if (cooldown > 0.3 && node->rect.left == 62) {
            node->rect.left = 0;
            sfClock_restart(node->clock);
        }
        handle_offset(&node);
        draw_mobs(&node, window);
        node = node->next;
    }
    handle_life(scene);
}

void check_if_all_dead(st_scene *scene)
{
    st_mobs *mobs = scene->control_list->m_first;
    int i = 0;

    while (mobs != NULL) {
        if (mobs->life > 0)
            i++;
        mobs = mobs->next;
    }
    if (i == 0)
        scene->game->nb_enm = 0;
}

void manage_wave(st_scene *scene, sfRenderWindow *window)
{
    sfTime time = sfClock_getElapsedTime(scene->game->gen_clock);
    float cooldown = (float) time.microseconds / 1000000.0;

    while (srand_gen())
        srand_gen();
    if (rand() % 3 == 0 && cooldown > 2 && scene->game->nb_enm != 8) {
        fill_mobs(scene, "img/fadventurer_sheet.png");
        scene->game->nb_enm++;
        sfClock_restart(scene->game->gen_clock);
    } else if (rand() % 2 == 0 && cooldown > 2 && scene->game->nb_enm != 8) {
        fill_mobs(scene, "img/madventurer_sheet.png");
        scene->game->nb_enm++;
        sfClock_restart(scene->game->gen_clock);
    }
    check_if_all_dead(scene);
    if (scene->game->nb_enm == 0 && cooldown > 2) {
        sfClock_restart(scene->game->gen_clock);
        scene->game->wave++;
        scene->game->txt_wave = text(my_itoa(scene->game->wave), 12, sfWhite);
    }
    display_mobs(scene, window);
}