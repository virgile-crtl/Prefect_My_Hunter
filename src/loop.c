/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** loop
*/

#include "hunter.h"

void loop(hunt_t hunt)
{
    sfEvent event;

    hunt.game.duck.curent_state = DUCK_FLY_LEFT;
    while (sfRenderWindow_isOpen(hunt.window)) {
        while (sfRenderWindow_pollEvent(hunt.window, &event))
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(hunt.window);
        update_duck(&hunt.game.duck);
        draw(&hunt);
    }
    return;
}