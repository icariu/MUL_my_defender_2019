/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** display_home
*/

#include "my_defender.h"

void display_home_menu(st_scene *scene, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, scene->tab[4]->spr, NULL);
    sfSprite_setTextureRect(scene->button[1]->spr, scene->button[1]->rect);
    sfSprite_setPosition(scene->button[1]->spr, scene->button[1]->pos);
    sfRenderWindow_drawSprite(window, scene->button[1]->spr, NULL);
    sfSprite_setTextureRect(scene->button[0]->spr, scene->button[0]->rect);
    sfSprite_setPosition(scene->button[0]->spr, scene->button[0]->pos);
    sfRenderWindow_drawSprite(window, scene->button[0]->spr, NULL);
    sfSprite_setTextureRect(scene->button[4]->spr, scene->button[4]->rect);
    sfSprite_setPosition(scene->button[4]->spr, scene->button[4]->pos);
    sfRenderWindow_drawSprite(window, scene->button[4]->spr, NULL);
    sfSprite_setTextureRect(scene->button[5]->spr, scene->button[5]->rect);
    sfSprite_setPosition(scene->button[5]->spr, scene->button[5]->pos);
    sfRenderWindow_drawSprite(window, scene->button[5]->spr, NULL);
    sfSprite_setTextureRect(scene->button[6]->spr, scene->button[6]->rect);
    sfSprite_setPosition(scene->button[6]->spr, scene->button[6]->pos);
    sfRenderWindow_drawSprite(window, scene->button[6]->spr, NULL);
}

void display_pause_menu(st_scene *scene, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, scene->tab[5]->spr, NULL);
    sfSprite_setTextureRect(scene->button[3]->spr, scene->button[3]->rect);
    sfSprite_setPosition(scene->button[3]->spr, scene->button[3]->pos);
    sfRenderWindow_drawSprite(window, scene->button[3]->spr, NULL);
    sfSprite_setTextureRect(scene->button[2]->spr, scene->button[2]->rect);
    sfSprite_setPosition(scene->button[2]->spr, scene->button[2]->pos);
    sfRenderWindow_drawSprite(window, scene->button[2]->spr, NULL);
    sfSprite_setTextureRect(scene->button[0]->spr, scene->button[0]->rect);
    sfSprite_setPosition(scene->button[0]->spr, scene->button[0]->pos);
    sfRenderWindow_drawSprite(window, scene->button[0]->spr, NULL);
}

void display_game(st_scene *scene, sfRenderWindow *window)
{
    sfVector2f pos_text;
    pos_text.x = 100;
    pos_text.y = 25;
    sfRenderWindow_drawSprite(window, scene->tab[0]->spr, NULL);
    if (scene->game->print_pos == ON)
        sfRenderWindow_drawSprite(window, scene->tab[8]->spr, NULL);
    sfRenderWindow_drawSprite(window, scene->tab[1]->spr, NULL);
    sfSprite_setTextureRect(scene->tab[3]->spr, scene->tab[3]->rect);
    sfSprite_setPosition(scene->tab[3]->spr, scene->tab[3]->pos);
    sfRenderWindow_drawSprite(window, scene->tab[3]->spr, NULL);
    sfRenderWindow_drawSprite(window, scene->tab[7]->spr, NULL);
    sfText_setPosition(scene->game->txt_money, pos_text);
    sfRenderWindow_drawText(window, scene->game->txt_money, NULL);
    pos_text.y = 85;
    sfText_setPosition(scene->game->txt_wave, pos_text);
    scene->game->txt_money = text(my_itoa(scene->game->money), 12, sfWhite);
    sfRenderWindow_drawText(window, scene->game->txt_wave, NULL);
    display_game_bis(scene, window);
}

void display_leaderboard_menu(st_scene *scene, sfRenderWindow *window)
{
    sfVector2f pos_text;
    pos_text.x = 600;
    pos_text.y = 350;
    sfRenderWindow_drawSprite(window, scene->tab[6]->spr, NULL);
    sfSprite_setTextureRect(scene->button[7]->spr, scene->button[7]->rect);
    sfSprite_setPosition(scene->button[7]->spr, scene->button[7]->pos);
    sfRenderWindow_drawSprite(window, scene->button[7]->spr, NULL);
    sfText_setPosition(scene->leaderboard->name_0, pos_text);
    sfRenderWindow_drawText(window, scene->leaderboard->name_0, NULL);
    pos_text.y += 100;
    sfText_setPosition(scene->leaderboard->name_1, pos_text);
    sfRenderWindow_drawText(window, scene->leaderboard->name_1, NULL);
    pos_text.y += 100;
    sfText_setPosition(scene->leaderboard->name_2, pos_text);
    sfRenderWindow_drawText(window, scene->leaderboard->name_2, NULL);
}

void cursor(st_scene *scene, sfRenderWindow *window)
{
    sfSprite_setPosition(scene->tab[2]->spr, (sfVector2f){
                            sfMouse_getPositionRenderWindow(window).x - 20,
                            sfMouse_getPositionRenderWindow(window).y - 2});
    sfRenderWindow_drawSprite(window, scene->tab[2]->spr, NULL);
}