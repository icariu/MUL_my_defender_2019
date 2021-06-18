/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** initialiase
*/

#include "my_defender.h"

void initialise(st_scene *scene)
{
    scene->button = malloc(sizeof(object) * 9);
    scene->button[0] = new_sprite("img/quit_b.png");
    scene->button[1] = new_sprite("img/play.png");
    scene->button[2] = new_sprite("img/menu_b.png");
    scene->button[3] = new_sprite("img/resume.png");
    scene->button[4] = new_sprite("img/htp.png");
    scene->button[5] = new_sprite("img/sound.png");
    scene->button[6] = new_sprite("img/leaderboard.png");
    scene->button[7] = new_sprite("img/back_button.png");
    scene->button[8] = NULL;
    initialise_button_2(scene);
    initialise_button_3(scene);
    initialise_button_4(scene);
    initialise_gameplay(scene);
    initialise_leaderboard(scene);
    initialise_tower(scene);
    initialise_mobs(scene);
    initialise_usefull_game(scene);
    initialise_music(scene);
}

void initialise_button_2(st_scene *scene)
{
    scene->button[0]->rect.top = 0;
    scene->button[0]->rect.width = 438;
    scene->button[0]->rect.height = 174;
    scene->button[0]->rect.left = 438;
    scene->button[0]->pos.x = 531;
    scene->button[0]->pos.y = 569;
    scene->button[1]->rect.top = 0;
    scene->button[1]->rect.width = 438;
    scene->button[1]->rect.height = 174;
    scene->button[1]->rect.left = 438;
    scene->button[1]->pos.x = 531;
    scene->button[1]->pos.y = 153;
    scene->button[2]->rect.top = 0;
    scene->button[2]->rect.width = 438;
    scene->button[2]->rect.height = 174;
    scene->button[2]->rect.left = 438;
    scene->button[2]->pos.x = 531;
    scene->button[2]->pos.y = 365;
}

void initialise_button_3(st_scene *scene)
{
    scene->button[3]->rect.top = 0;
    scene->button[3]->rect.width = 438;
    scene->button[3]->rect.height = 174;
    scene->button[3]->rect.left = 438;
    scene->button[3]->pos.x = 531;
    scene->button[3]->pos.y = 153;
    scene->button[4]->rect.top = 0;
    scene->button[4]->rect.width = 127;
    scene->button[4]->rect.height = 100;
    scene->button[4]->rect.left = 0;
    scene->button[4]->pos.x = 1350;
    scene->button[4]->pos.y = 800;
    scene->button[5]->rect.top = 0;
    scene->button[5]->rect.width = 176;
    scene->button[5]->rect.height = 140;
    scene->button[5]->rect.left = 525;
    scene->button[5]->pos.x = 770;
    scene->button[5]->pos.y = 365;
}

void initialise_button_4(st_scene *scene)
{
    scene->button[6]->rect.top = 0;
    scene->button[6]->rect.width = 176;
    scene->button[6]->rect.height = 140;
    scene->button[6]->rect.left = 0;
    scene->button[6]->pos.x = 570;
    scene->button[6]->pos.y = 365;
    scene->button[7]->rect.top = 0;
    scene->button[7]->rect.width = 175;
    scene->button[7]->rect.height = 140;
    scene->button[7]->rect.left = 0;
    scene->button[7]->pos.x = 105;
    scene->button[7]->pos.y = 800;
    scene->button[0]->clock = sfClock_create();
    scene->button[1]->clock = sfClock_create();
    scene->button[2]->clock = sfClock_create();
    scene->button[3]->clock = sfClock_create();
    scene->button[4]->clock = sfClock_create();
    scene->button[5]->clock = sfClock_create();
    scene->button[6]->clock = sfClock_create();
}

void initialise_gameplay(st_scene *scene)
{
    scene->tab = malloc(sizeof(object) * 11);
    scene->tab[0] = new_sprite("img/map.png");
    scene->tab[1] = new_sprite("img/build_menu.png");
    scene->tab[2] = new_sprite("img/cursor.png");
    scene->tab[3] = new_sprite("img/lifebar.png");
    scene->tab[4] = new_sprite("img/background.jpg");
    scene->tab[5] = new_sprite("img/map_blur.png");
    scene->tab[6] = new_sprite("img/leaderboard_menu.png");
    scene->tab[7] = new_sprite("img/money.png");
    scene->tab[8] = new_sprite("img/tower_position.png");
    scene->tab[9] = new_sprite("img/circle.png");
    scene->tab[10] = new_sprite("img/gameover.png");
    scene->tab[11] = new_sprite("img/htpmenu.png");
    scene->tab[12] = NULL;
    scene->tab[3]->rect.top = 0;
    scene->tab[3]->rect.width = 52;
    scene->tab[3]->rect.height = 507;
    scene->tab[3]->rect.left = 80;
    scene->tab[3]->pos.x = 1450;
    scene->tab[3]->pos.y = 0;
}