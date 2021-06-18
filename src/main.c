/*
** EPITECH PROJECT, 2020
** MUL_my_defender_2019
** File description:
** main
*/

#include "my_defender.h"

void which_window(st_scene *scene, sfRenderWindow *window)
{
    typedef void (*replace)(st_scene *, sfRenderWindow *);
    int const important_status[] = {1, 2, 3, 4, 5, 6, 0};
    replace const diff_func[] = {&if_one, &if_two, &if_three, &if_four,
    &if_five, &if_six, NULL};
    int i = 0;

    while (important_status[i]) {
        if (important_status[i] == scene->state) {
            (diff_func[i])(scene, window);
            break;
        }
        i++;
    }
}

void main_loop(sfRenderWindow *window, st_scene *scene)
{
    sfEvent event;

    while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(window);
            if (event.type == sfEvtKeyPressed &&
                event.key.code == sfKeyEscape && scene->state == 3)
                scene->state = 2;
        }
        sound_gestion(scene);
        which_window(scene, window);
        cursor(scene, window);
        sfRenderWindow_display(window);
        sfRenderWindow_clear(window, sfBlack);
    }
    destroy(scene);
}

int main(int ac, char **av)
{
    st_scene scene;
    sfVideoMode mode = {1517, 963, 32};
    sfRenderWindow *window;

    if (ac > 3)
        return (84);
    initialise(&scene);
    if (ac == 1)
        scene.leaderboard->pseudo = "ANONYMOUS";
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        display_usage();
        return (0);
    } else
        scene.leaderboard->pseudo = av[1];
    window = sfRenderWindow_create(mode, "FARM DEFENSE", sfClose, NULL);
    sfRenderWindow_setMouseCursorVisible(window, sfFalse);
    main_loop(window, &scene);
    return (0);
}