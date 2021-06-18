/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** initialiase
*/

#include "my_defender.h"

object *new_sprite(char *text)
{
    object *new = malloc(sizeof(object));

    new->texture = sfTexture_createFromFile(text, NULL);
    new->spr = sfSprite_create();
    sfSprite_setTexture(new->spr, new->texture, sfTrue);
    return (new);
}

sfSprite *tower_sprite(char *text)
{
    sfSprite *spr = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(text, NULL);
    sfSprite_setTexture(spr, texture, sfTrue);
    return (spr);
}

sfSprite *mobs_sprite(char *text)
{
    sfVector2f pos = {230, -100};
    sfSprite *spr = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(text, NULL);
    sfSprite_setTexture(spr, texture, sfTrue);
    sfSprite_setPosition(spr, pos);
    return (spr);
}

void destroy(st_scene *scene)
{
    sfMusic_destroy(scene->tab[0]->music);
    sfMusic_destroy(scene->game->m_castle);
    for (int i = 0; i < 5; i++)
        sfMusic_destroy(scene->button[i]->music);
    for (int i = 0; i < 7; i++)
        sfClock_destroy(scene->button[i]->clock);
    for (int i = 0; scene->button[i]; i++) {
        sfTexture_destroy(scene->button[i]->texture);
        sfSprite_destroy(scene->button[i]->spr);
        free(scene->button[i]);
    }
    free(scene->button);
    for (int i = 0; scene->tab[i]; i++) {
        sfTexture_destroy(scene->tab[i]->texture);
        sfSprite_destroy(scene->tab[i]->spr);
        free(scene->tab[i]);
    }
    free(scene->tab);
}