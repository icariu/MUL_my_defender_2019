/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** manage_mouse_button2
*/

#include "my_defender.h"

void manage_mouse_sound(st_scene *scene, sfRenderWindow *window)
{
    sfTime time = sfClock_getElapsedTime(scene->button[5]->clock);
    float cooldown = (float) time.microseconds / 1000000.0;
    if (scene->sound == ON)
        scene->button[5]->rect.left = 0;
    else if (scene->sound == OFF)
        scene->button[5]->rect.left = 348;
    if (MOUSE_POS_X > 770 && MOUSE_POS_X < 945 && MOUSE_POS_Y > 365 &&
        MOUSE_POS_Y < 505 && cooldown > 0.2 &&
        sfMouse_isButtonPressed(sfMouseLeft) == sfTrue && scene->sound) {
        scene->button[5]->rect.left = 348;
        scene->sound = OFF;
        sfClock_restart(scene->button[5]->clock);
    } else if (MOUSE_POS_X > 770 && MOUSE_POS_X < 945 && MOUSE_POS_Y > 365 &&
        MOUSE_POS_Y < 505 && cooldown > 0.2 &&
        sfMouse_isButtonPressed(sfMouseLeft) == sfTrue && scene->sound == OFF) {
        scene->button[5]->rect.left = 0;
        scene->sound = ON;
        sfClock_restart(scene->button[5]->clock);
    }
    manage_mouse_sound_hover(scene, window);
}

void manage_mouse_sound_hover(st_scene *scene, sfRenderWindow *window)
{
    if (MOUSE_POS_X > 770 && MOUSE_POS_X < 945 &&
        MOUSE_POS_Y > 365 && MOUSE_POS_Y < 505 &&
        scene->sound == ON)
        scene->button[5]->rect.left = 176;
    else if (MOUSE_POS_X > 770 && MOUSE_POS_X < 945 &&
        MOUSE_POS_Y > 365 && MOUSE_POS_Y < 505 && scene->sound == OFF)
        scene->button[5]->rect.left = 525;
}

void manage_mouse_leaderboard(st_scene *scene, sfRenderWindow *window)
{
    sfTime time = sfClock_getElapsedTime(scene->button[2]->clock);
    float cooldown = (float) time.microseconds / 1000000.0;

    scene->button[6]->rect.left = 0;
    if (sfMouse_getPositionRenderWindow(window).x > 570 &&
        sfMouse_getPositionRenderWindow(window).x < 745 &&
        sfMouse_getPositionRenderWindow(window).y > 365 &&
        sfMouse_getPositionRenderWindow(window).y < 505 &&
        sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        scene->button[6]->rect.left = 0;
        if (cooldown > 1)
            scene->state = 4;
    } else if (sfMouse_getPositionRenderWindow(window).x > 570 &&
        sfMouse_getPositionRenderWindow(window).x < 745 &&
        sfMouse_getPositionRenderWindow(window).y > 365 &&
        sfMouse_getPositionRenderWindow(window).y < 505) {
        scene->button[6]->rect.left = 175;
    }
}

void manage_mouse_back(st_scene *scene, sfRenderWindow *window)
{
    scene->button[7]->rect.left = 0;
    if (sfMouse_getPositionRenderWindow(window).x > 105 &&
        sfMouse_getPositionRenderWindow(window).x < 280 &&
        sfMouse_getPositionRenderWindow(window).y > 800 &&
        sfMouse_getPositionRenderWindow(window).y < 940 &&
        sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        scene->button[7]->rect.left = 0;
        scene->state = 1;
    } else if (sfMouse_getPositionRenderWindow(window).x > 105 &&
        sfMouse_getPositionRenderWindow(window).x < 280 &&
        sfMouse_getPositionRenderWindow(window).y > 800 &&
        sfMouse_getPositionRenderWindow(window).y < 940) {
        scene->button[7]->rect.left = 175;
    }
}