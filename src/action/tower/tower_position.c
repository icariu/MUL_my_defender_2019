/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** tower_position
*/

#include "my_defender.h"

int check_pos_tower_bis(st_scene *scene, sfRenderWindow *window)
{
    if (MOUSE_POS_X > 1225 && MOUSE_POS_X < 1325 &&
    MOUSE_POS_Y > 470 && MOUSE_POS_Y < 542
    && sfMouse_isButtonPressed(sfMouseLeft)) {
        if (scene->control_list->t_last != NULL)
            scene->control_list->t_last->pos = (sfVector2f){1225 + 15, 410};
        return (1);
    } if (MOUSE_POS_X > 1225 && MOUSE_POS_X < 1325 &&
    MOUSE_POS_Y > 160 && MOUSE_POS_Y < 230
    && sfMouse_isButtonPressed(sfMouseLeft)) {
        if (scene->control_list->t_last != NULL)
            scene->control_list->t_last->pos = (sfVector2f){1225 + 15, 100};
        return (1);
    } if (MOUSE_POS_X > 720 && MOUSE_POS_X < 800 &&
    MOUSE_POS_Y > 355 && MOUSE_POS_Y < 411
    && sfMouse_isButtonPressed(sfMouseLeft)) {
        if (scene->control_list->t_last != NULL)
            scene->control_list->t_last->pos = (sfVector2f){720 + 15, 355 - 60};
        return (1);
    }
    return (0);
}

int check_pos_tower_bis_bis(st_scene *scene, sfRenderWindow *window)
{
    if (MOUSE_POS_X > 807 && MOUSE_POS_X < 887 &&
    MOUSE_POS_Y > 355 && MOUSE_POS_Y < 411
    && sfMouse_isButtonPressed(sfMouseLeft)) {
        if (scene->control_list->t_last != NULL)
            scene->control_list->t_last->pos = (sfVector2f){807 + 15, 355 - 60};
        return (1);
    } if (MOUSE_POS_X > 720 && MOUSE_POS_X < 810 &&
    MOUSE_POS_Y > 415 && MOUSE_POS_Y < 475
    && sfMouse_isButtonPressed(sfMouseLeft)) {
        if (scene->control_list->t_last != NULL)
            scene->control_list->t_last->pos = (sfVector2f){720 + 15, 415 - 60};
        return (1);
    } if (MOUSE_POS_X > 807 && MOUSE_POS_X < 887 &&
    MOUSE_POS_Y > 415 && MOUSE_POS_Y < 475
    && sfMouse_isButtonPressed(sfMouseLeft)) {
        if (scene->control_list->t_last != NULL)
            scene->control_list->t_last->pos = (sfVector2f){807 + 15, 415 - 60};
        return (1);
    }
    return (0);
}

int check_pos_tower_bis_bis_bis(st_scene *scene, sfRenderWindow *window)
{
    if (MOUSE_POS_X > 300 && MOUSE_POS_X < 400 &&
    MOUSE_POS_Y > 527 && MOUSE_POS_Y < 599
    && sfMouse_isButtonPressed(sfMouseLeft)) {
        if (scene->control_list->t_last != NULL)
            scene->control_list->t_last->pos = (sfVector2f){300 + 15, 527 - 60};
        return (1);
    } if (MOUSE_POS_X > 300 && MOUSE_POS_X < 400 &&
    MOUSE_POS_Y > 716 && MOUSE_POS_Y < 789
    && sfMouse_isButtonPressed(sfMouseLeft)) {
        if (scene->control_list->t_last != NULL)
            scene->control_list->t_last->pos = (sfVector2f){300 + 15, 716 - 60};
        return (1);
    } if (MOUSE_POS_X > 500 && MOUSE_POS_X < 600 &&
    MOUSE_POS_Y > 716 && MOUSE_POS_Y < 789
    && sfMouse_isButtonPressed(sfMouseLeft)) {
        if (scene->control_list->t_last != NULL)
            scene->control_list->t_last->pos = (sfVector2f){500 + 15, 716 - 60};
        return (1);
    }
    return (0);
}

int check_pos_tower(st_scene *scene, sfRenderWindow *window)
{
    if (MOUSE_POS_X > 666 && MOUSE_POS_X < 763 &&
    MOUSE_POS_Y > 160 && MOUSE_POS_Y < 231
    && sfMouse_isButtonPressed(sfMouseLeft)) {
        if (scene->control_list->t_last != NULL)
            scene->control_list->t_last->pos = (sfVector2f){666 + 15, 160 - 60};
        return (1);
    } if (MOUSE_POS_X > 869 && MOUSE_POS_X < 967 &&
    MOUSE_POS_Y > 160 && MOUSE_POS_Y < 230
    && sfMouse_isButtonPressed(sfMouseLeft)) {
        if (scene->control_list->t_last != NULL)
            scene->control_list->t_last->pos = (sfVector2f){869 + 15, 160 - 60};
        return (1);
    } if (MOUSE_POS_X > 1005 && MOUSE_POS_X < 1101 &&
    MOUSE_POS_Y > 470 && MOUSE_POS_Y < 544
    && sfMouse_isButtonPressed(sfMouseLeft)) {
        if (scene->control_list->t_last != NULL)
            scene->control_list->t_last->pos = (sfVector2f){1005 + 15, 410};
        return (1);
    } if (check_pos_tower_bis(scene, window) == 1 ||
        check_pos_tower_bis_bis(scene, window) == 1 ||
        check_pos_tower_bis_bis_bis(scene, window) == 1) return (1);
    return (0);
}