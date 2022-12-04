/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw
*/

#include "hunter.h"

#ifndef DRAW_H_
    #define DRAW_H_

/* DRAW */
void draw_menu(hunt_t *game);
void draw_game(hunt_t *hunt);

static void (*DRAW_STATE[2])(hunt_t *) = {
    draw_menu,
    draw_game
};

#endif /* !DRAW_H_ */
