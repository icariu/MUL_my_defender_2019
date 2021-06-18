/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2019
** File description:
** my_defender
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <SFML/Window/Export.h>
#include <SFML/Window/Types.h>
#include <SFML/System/Vector2.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "my.h"
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"
#define ON 1
#define OFF 0
#define MOUSE_POS_X sfMouse_getPositionRenderWindow(window).x
#define MOUSE_POS_Y sfMouse_getPositionRenderWindow(window).y

#ifndef MY_DEFENDER_H_
#define MY_DEFENDER_H_

typedef struct {
    sfSprite *spr;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f pos;
    sfMusic *music;
    sfClock *clock;
}object;

typedef struct {
    char **name;
    char *pseudo;
    sfText *name_0;
    sfText *name_1;
    sfText *name_2;
}st_leaderboard;

typedef struct {
    sfText *txt_wave;
    sfText *txt_money;
    int money;
    int price;
    int wave;
    int in_hand;
    int print_pos;
    int nb_enm;
    sfMusic *m_castle;
    sfClock *clock;
    sfClock *gen_clock;
}game;

typedef struct tower {
    sfSprite *spr;
    sfVector2f pos;
    int type;
    struct tower *prev;
    struct tower *next;
}st_tower;

typedef struct mobs {
    sfSprite *spr;
    sfVector2f pos;
    float life;
    int dead;
    sfIntRect rect;
    sfText *txt_life;
    sfClock *clock;
    sfClock *mov_clock;
    struct mobs *prev;
    struct mobs *next;
}st_mobs;

typedef struct control_list {
    st_tower *t_first;
    st_tower *t_last;
    st_mobs *m_first;
    st_mobs *m_last;
}st_control_list;

typedef struct {
    object **button;
    object **tab;
    st_leaderboard *leaderboard;
    game *game;
    st_tower *tower;
    st_mobs *mobs;
    st_control_list *control_list;
    int state;
    int sound;
    int play_music;
}st_scene;

// init struct
void initialise(st_scene *scene);
void initialise_button_2(st_scene *scene);
void initialise_button_3(st_scene *scene);
void initialise_button_4(st_scene *scene);
void initialise_gameplay(st_scene *scene);
void initialise_leaderboard(st_scene *scene);
void initialise_tower(st_scene *scene);
void initialise_mobs(st_scene *scene);
void initialise_usefull_game(st_scene *scene);
void initialise_music(st_scene *scene);
void reset_game(st_scene *scene);

//manage_sprite
object *new_sprite (char *text);

sfSprite *tower_sprite(char *text);

sfSprite *mobs_sprite(char *text);

void destroy(st_scene *scene);

void handle_life(st_scene *scene);

void handle_offset(st_mobs **node);

//display
void display_home_menu(st_scene *scene, sfRenderWindow *window);

void display_pause_menu(st_scene *scene, sfRenderWindow *window);

void display_leaderboard_menu(st_scene *scene, sfRenderWindow *window);

void display_game(st_scene *scene, sfRenderWindow *window);

void display_game_bis(st_scene *scene, sfRenderWindow *window);

void display_gameover(st_scene *scene, sfRenderWindow *window);

void cursor(st_scene *scene, sfRenderWindow *window);

void display_towers(st_scene *scene, sfRenderWindow *window);

void manage_wave(st_scene *scene, sfRenderWindow *window);

//linked_list
void fill_tower(st_scene *scene, char *path);

void fill_mobs(st_scene *scene, char *path);

void free_tower(st_scene *scene);

void free_mobs(st_scene *scene);

//mouse on button managing
void manage_mouse_resume(st_scene *scene, sfRenderWindow *window);

void manage_mouse_play(st_scene *scene, sfRenderWindow *window);

void manage_mouse_quit(st_scene *scene, sfRenderWindow *window);

void manage_mouse_menu(st_scene *scene, sfRenderWindow *window);

void manage_mouse_htp(st_scene *scene, sfRenderWindow *window);

void manage_mouse_sound(st_scene *scene, sfRenderWindow *window);

void manage_mouse_sound_hover(st_scene *scene, sfRenderWindow *window);

void manage_mouse_leaderboard(st_scene *scene, sfRenderWindow *window);

void manage_mouse_back(st_scene *scene, sfRenderWindow *window);

//point on function
void if_one(st_scene *scene, sfRenderWindow *window);

void if_two(st_scene *scene, sfRenderWindow *window);

void if_three(st_scene *scene, sfRenderWindow *window);

void if_four(st_scene *scene, sfRenderWindow *window);

void if_five(st_scene *scene, sfRenderWindow *window);

void if_six(st_scene *scene, sfRenderWindow *window);

//tower handling
int check_pos_tower(st_scene *scene, sfRenderWindow *window);

void which_tower(st_scene *scene, sfRenderWindow *window);

void which_tower_2(st_scene *scene, sfRenderWindow *window);

//leaderboard
void leaderboard(void);

sfText *text(char *str, int size, sfColor color);

char *read_file(char *filepath);

//sound
void sound_gestion(st_scene *scene);

void sound_button(st_scene *scene, sfMusic *music);

//random
int srand_gen(void);

// radius
void twr_1(st_scene *scene, sfVector2f o, sfVector2f t);
void twr_2(st_scene *scene, sfVector2f o, sfVector2f t);
void twr_3(st_scene *scene, sfVector2f o, sfVector2f t);
void twr_4(st_scene *scene, sfVector2f o, sfVector2f t);

void check_node_pos(st_scene *scene, st_tower *node);
void check_node_pos_bis(st_scene *scene, st_tower *node);
void check_node_pos_bis_bis(st_scene *scene, st_tower *node);
void check_node_pos_bis_bis_bis(st_scene *scene, st_tower *node);
void check_node_pos_bis_bis_bis_bis(st_scene *scene, st_tower *node);
void check_node_pos_bis_bis_bis_bis_bis(st_scene *scene, st_tower *node);

void which_pos_tower(st_scene *scene);
// my_defender by alizee.soussan@epitech.eu & paul.fermey@epitech.eu

#endif /* !MY_DEFENDER_H_ */