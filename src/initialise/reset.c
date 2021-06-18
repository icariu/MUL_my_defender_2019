/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** reset
*/

#include "my_defender.h"

void reset_sprites(st_scene *scene)
{
    scene->tab[3]->rect.top = 0;
    scene->tab[3]->rect.width = 52;
    scene->tab[3]->rect.height = 507;
    scene->tab[3]->rect.left = 80;
    scene->game->wave = 0;
    scene->game->money = 50;
    scene->game->price = 0;
    scene->game->in_hand = 0;
    scene->game->print_pos = 0;
    scene->game->txt_money = text(my_itoa(scene->game->money), 12, sfWhite);
    scene->game->txt_wave = text(my_itoa(scene->game->wave), 12, sfWhite);
}

void reset_game(st_scene *scene)
{
    st_tower *tower = scene->control_list->t_first;
    st_mobs *mobs = scene->control_list->m_first;
    int i = 0;
    int j = 0;

    while (tower != NULL) {
        tower = tower->next;
        i++;
    }
    while (mobs != NULL) {
        mobs = mobs->next;
        j++;
    }
    for (int k = 0; k < i; k++)
        free_tower(scene);
    for (int k = 0; k < j; k++)
        free_mobs(scene);
    reset_sprites(scene);
}