/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** sound
*/

#include "my_defender.h"

void sound_gestion(st_scene *scene)
{
    if (scene->sound == OFF) {
        sfMusic_pause(scene->tab[0]->music);
        scene->play_music = 1;
    } if (scene->play_music == 1 && scene->sound == ON) {
        sfMusic_setVolume(scene->tab[0]->music, 10);
        sfMusic_play(scene->tab[0]->music);
        sfMusic_setLoop(scene->tab[0]->music, sfTrue);
        scene->play_music = 2;
    }
}

void sound_button(st_scene *scene, sfMusic *music)
{
    if (scene->sound == ON) {
        sfMusic_play(music);
    }
}