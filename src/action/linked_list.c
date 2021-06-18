/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** linked_list
*/

#include "my_defender.h"
#include "my.h"

void fill_tower(st_scene *scene, char *path)
{
    st_tower *node = malloc(sizeof(st_tower));

    if (node == NULL)
        return;
    node->spr = tower_sprite(path);
    node->next = NULL;
    if (scene->control_list->t_first == NULL &&
        scene->control_list->t_last == NULL) {
        scene->control_list->t_last = node;
        scene->control_list->t_first = node;
    } else {
        scene->control_list->t_last->next = node;
        node->prev = scene->control_list->t_last;
        scene->control_list->t_last = node;
    }
}

void fill_mobs_set_param(st_mobs **node)
{
    (*node)->clock = sfClock_create();
    (*node)->pos.x = 0;
    (*node)->pos.y = 0.3;
    (*node)->rect.top = 147;
    (*node)->rect.height = 74;
    (*node)->rect.left = 0;
    (*node)->rect.width = 62;
    (*node)->dead = 0;
    (*node)->mov_clock = sfClock_create();
    sfSprite_setTextureRect((*node)->spr, (*node)->rect);
}

void fill_mobs(st_scene *scene, char *path)
{
    st_mobs *node = malloc(sizeof(st_mobs));

    if (node == NULL)
        return;
    node->spr = mobs_sprite(path);
    fill_mobs_set_param(&node);
    if (my_strncmp(path, "img/fadventurer", 15) == 0 ||
    my_strncmp(path, "img/madventurer", 15) == 0)
        node->life = 15 * (scene->game->wave * 0.2 + 1);
    node->next = NULL;
    node->txt_life = text(my_itoa(node->life), 12, sfRed);
    if (scene->control_list->m_first == NULL &&
        scene->control_list->m_last == NULL) {
        scene->control_list->m_last = node;
        scene->control_list->m_first = node;
    } else {
        scene->control_list->m_last->next = node;
        node->prev = scene->control_list->m_last;
        scene->control_list->m_last = node;
    }
}

void free_tower(st_scene *scene)
{
    st_tower *node = scene->control_list->t_first;
    int i = 0;
    if (scene->control_list->t_last == NULL ||
    scene->control_list->t_first == NULL)
        return;
    while (node != NULL) {
        i++;
        node = node->next;
    }
    if (i == 1) {
        sfSprite_destroy(scene->control_list->t_first->spr);
        free(scene->control_list->t_first);
        scene->control_list->t_last = NULL;
        scene->control_list->t_first = NULL;
    } else {
        scene->control_list->t_last = scene->control_list->t_last->prev;
        free(scene->control_list->t_last->next);
        scene->control_list->t_last->next = NULL;
        if (i == 1)
            scene->control_list->t_last = scene->control_list->t_first;
    }
}

void free_mobs(st_scene *scene)
{
    st_mobs *node = scene->control_list->m_first;
    int i = 0;
    if (scene->control_list->m_last == NULL ||
    scene->control_list->m_first == NULL)
        return;
    while (node != NULL) {
        i++;
        node = node->next;
    }
    if (i == 1) {
        sfSprite_destroy(scene->control_list->m_first->spr);
        free(scene->control_list->m_first);
        scene->control_list->m_last = NULL;
        scene->control_list->m_first = NULL;
    } else {
        scene->control_list->m_first = scene->control_list->m_first->next;
        free(scene->control_list->m_first->prev);
        scene->control_list->m_first->prev = NULL;
        if (i == 1)
            scene->control_list->m_first = scene->control_list->m_last;
    }
}