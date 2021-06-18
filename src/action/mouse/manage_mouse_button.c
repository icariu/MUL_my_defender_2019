/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** manage_mouse_button
*/

#include "my_defender.h"

void manage_mouse_play(st_scene *scene, sfRenderWindow *window)
{
    sfTime time = sfClock_getElapsedTime(scene->button[1]->clock);
    float cooldown = (float) time.microseconds / 1000000.0;
    scene->button[1]->rect.left = 438;
    if (sfMouse_getPositionRenderWindow(window).x > 565 &&
        sfMouse_getPositionRenderWindow(window).x < 940 &&
        sfMouse_getPositionRenderWindow(window).y > 180 &&
        sfMouse_getPositionRenderWindow(window).y < 280 &&
        sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        scene->button[1]->rect.left = 886;
        if (cooldown > 0.05) {
            sound_button(scene, scene->button[1]->music);
            scene->state = 3;
        }
    } else if (sfMouse_getPositionRenderWindow(window).x > 565 &&
        sfMouse_getPositionRenderWindow(window).x < 940 &&
        sfMouse_getPositionRenderWindow(window).y > 180 &&
        sfMouse_getPositionRenderWindow(window).y < 280) {
        scene->button[1]->rect.left = 0;
        sfClock_restart(scene->button[1]->clock);
    }
}

void manage_mouse_quit(st_scene *scene, sfRenderWindow *window)
{
    sfTime time = sfClock_getElapsedTime(scene->button[0]->clock);
    float cooldown = (float) time.microseconds / 1000000.0;
    scene->button[0]->rect.left = 438;
    if (sfMouse_getPositionRenderWindow(window).x > 565 &&
        sfMouse_getPositionRenderWindow(window).x < 940 &&
        sfMouse_getPositionRenderWindow(window).y > 590 &&
        sfMouse_getPositionRenderWindow(window).y < 700 &&
        sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        scene->button[0]->rect.left = 886;
        if (cooldown > 0.05) {
            sound_button(scene, scene->button[0]->music);
            sfRenderWindow_close(window);
        }
    } else if (sfMouse_getPositionRenderWindow(window).x > 565 &&
        sfMouse_getPositionRenderWindow(window).x < 940 &&
        sfMouse_getPositionRenderWindow(window).y > 590 &&
        sfMouse_getPositionRenderWindow(window).y < 700) {
        scene->button[0]->rect.left = 0;
        sfClock_restart(scene->button[0]->clock);
    }
}

void manage_mouse_resume(st_scene *scene, sfRenderWindow *window)
{
    sfTime time = sfClock_getElapsedTime(scene->button[3]->clock);
    float cooldown = (float) time.microseconds / 1000000.0;
    scene->button[3]->rect.left = 438;
    if (sfMouse_getPositionRenderWindow(window).x > 565 &&
        sfMouse_getPositionRenderWindow(window).x < 940 &&
        sfMouse_getPositionRenderWindow(window).y > 180 &&
        sfMouse_getPositionRenderWindow(window).y < 280 &&
        sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        scene->button[3]->rect.left = 886;
        if (cooldown > 0.05) {
            sound_button(scene, scene->button[3]->music);
            scene->state = 3;
        }
    } else if (sfMouse_getPositionRenderWindow(window).x > 565 &&
        sfMouse_getPositionRenderWindow(window).x < 940 &&
        sfMouse_getPositionRenderWindow(window).y > 180 &&
        sfMouse_getPositionRenderWindow(window).y < 280) {
        scene->button[3]->rect.left = 0;
        sfClock_restart(scene->button[3]->clock);
    }
}

void manage_mouse_menu(st_scene *scene, sfRenderWindow *window)
{
    sfTime time = sfClock_getElapsedTime(scene->button[2]->clock);
    float cooldown = (float) time.microseconds / 1000000.0;
    scene->button[2]->rect.left = 438;
    if (sfMouse_getPositionRenderWindow(window).x > 565 &&
        sfMouse_getPositionRenderWindow(window).x < 940 &&
        sfMouse_getPositionRenderWindow(window).y > 395 &&
        sfMouse_getPositionRenderWindow(window).y < 495 &&
        sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        scene->button[2]->rect.left = 886;
        if (cooldown > 0.05) {
            sound_button(scene, scene->button[2]->music);
            scene->state = 1;
            reset_game(scene);
        }
    } else if (sfMouse_getPositionRenderWindow(window).x > 565 &&
        sfMouse_getPositionRenderWindow(window).x < 940 &&
        sfMouse_getPositionRenderWindow(window).y > 395 &&
        sfMouse_getPositionRenderWindow(window).y < 495) {
        scene->button[2]->rect.left = 0;
        sfClock_restart(scene->button[2]->clock);
    }
}

void manage_mouse_htp(st_scene *scene, sfRenderWindow *window)
{
    sfTime time = sfClock_getElapsedTime(scene->button[4]->clock);
    float cooldown = (float) time.microseconds / 1000000.0;
    scene->button[4]->rect.left = 0;
    if (sfMouse_getPositionRenderWindow(window).x > 1375 &&
        sfMouse_getPositionRenderWindow(window).x < 1454 &&
        sfMouse_getPositionRenderWindow(window).y > 810 &&
        sfMouse_getPositionRenderWindow(window).y < 890 &&
        sfMouse_isButtonPressed(sfMouseLeft) == sfTrue) {
        scene->button[4]->rect.left = 117;
        if (cooldown > 0.05) {
            sound_button(scene, scene->button[4]->music);
            scene->state = 6;
        }
    } else if (sfMouse_getPositionRenderWindow(window).x > 1375 &&
        sfMouse_getPositionRenderWindow(window).x < 1454 &&
        sfMouse_getPositionRenderWindow(window).y > 810 &&
        sfMouse_getPositionRenderWindow(window).y < 890) {
        scene->button[4]->rect.left = 117;
        sfClock_restart(scene->button[4]->clock);
    }
}