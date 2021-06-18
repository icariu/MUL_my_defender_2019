/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** pointeur
*/

#include "my_defender.h"

void if_one(st_scene *scene, sfRenderWindow *window)
{
    manage_mouse_play(scene, window);
    manage_mouse_quit(scene, window);
    manage_mouse_htp(scene, window);
    manage_mouse_sound(scene, window);
    manage_mouse_leaderboard(scene, window);
    display_home_menu(scene, window);
}

void if_two(st_scene *scene, sfRenderWindow *window)
{
    manage_mouse_resume(scene, window);
    manage_mouse_menu(scene, window);
    manage_mouse_quit(scene, window);
    manage_mouse_htp(scene, window);
    display_pause_menu(scene, window);
}

void if_three(st_scene *scene, sfRenderWindow *window)
{
    which_tower(scene, window);
    which_tower_2(scene, window);
    if (check_pos_tower(scene, window) == 1 &&
    scene->game->in_hand == ON && scene->game->price <= scene->game->money) {
        sfSprite_setPosition(scene->control_list->t_last->spr,
        scene->control_list->t_last->pos);
        scene->game->money -= scene->game->price;
        scene->game->in_hand = OFF;
        scene->game->print_pos = OFF;
    } else if (scene->game->in_hand == ON && check_pos_tower(scene, window) == 0
    && sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        scene->game->in_hand = OFF;
        scene->game->print_pos = OFF;
        free_tower(scene);
    }
    which_pos_tower(scene);
    display_game(scene, window);
}

void if_four(st_scene *scene, sfRenderWindow *window)
{
    manage_mouse_back(scene, window);
    display_leaderboard_menu(scene, window);
}

void if_five(st_scene *scene, sfRenderWindow *window)
{
    manage_mouse_quit(scene, window);
    display_gameover(scene, window);
}