/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** initialise2
*/

#include "my_defender.h"

void initialise_tower(st_scene *scene)
{
    scene->tower = malloc(sizeof(st_tower));
    scene->control_list = malloc(sizeof(st_control_list));
    scene->tower->next = NULL;
    scene->tower->prev = NULL;
    scene->control_list->t_first = NULL;
    scene->control_list->t_last = NULL;
}

void initialise_mobs(st_scene *scene)
{
    scene->mobs = malloc(sizeof(st_mobs));
    scene->mobs->next = NULL;
    scene->mobs->prev = NULL;
    scene->control_list->m_last = NULL;
    scene->control_list->m_first = NULL;
}

void initialise_leaderboard(st_scene *scene)
{
    scene->leaderboard = malloc(sizeof(st_leaderboard));
    scene->leaderboard->name = my_str_to_wordtab(read_file("score"), '\n');
    scene->leaderboard->name_0 = text(scene->leaderboard->name[0], 40, sfBlack);
    scene->leaderboard->name_1 = text(scene->leaderboard->name[1], 40, sfBlack);
    scene->leaderboard->name_2 = text(scene->leaderboard->name[2], 40, sfBlack);
}

void initialise_usefull_game(st_scene *scene)
{
    scene->state = 1;
    scene->sound = ON;
    scene->play_music = ON;
    scene->game = malloc(sizeof(game));
    scene->game->wave = 0;
    scene->game->money = 50;
    scene->game->txt_money = text(my_itoa(scene->game->money), 12, sfWhite);
    scene->game->txt_wave = text(my_itoa(scene->game->wave), 12, sfWhite);
    scene->game->price = OFF;
    scene->game->in_hand = OFF;
    scene->game->print_pos = OFF;
    scene->game->clock = sfClock_create();
    scene->game->gen_clock = sfClock_create();
    scene->game->nb_enm = 0;
}

void initialise_music(st_scene *scene)
{
    scene->button[0]->music = sfMusic_createFromFile("resources/music/btn.wav");
    scene->button[1]->music = sfMusic_createFromFile("resources/music/btn.wav");
    scene->button[2]->music = sfMusic_createFromFile("resources/music/btn.wav");
    scene->button[3]->music = sfMusic_createFromFile("resources/music/btn.wav");
    scene->button[4]->music = sfMusic_createFromFile("resources/music/btn.wav");
    scene->tab[0]->music = sfMusic_createFromFile("resources/music/game.ogg");
    scene->game->m_castle = sfMusic_createFromFile("resources/music/life.ogg");
}