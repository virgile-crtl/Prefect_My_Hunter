/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** draw
*/

#include "draw.h"

void draw_menu(hunt_t *hunt)
{
    sfRenderWindow_drawSprite(hunt->window, hunt->menu.background, NULL);
    return;
}

void draw_game(hunt_t *hunt)
{
    sfRenderWindow_drawSprite(hunt->window, hunt->game.floor, NULL);
    draw_duck(&hunt->game.duck, hunt->window);
    sfRenderWindow_drawSprite(hunt->window, hunt->game.tree, NULL);
    return;
}

void draw(hunt_t *hunt)
{
    sfRenderWindow_clear(hunt->window, sfBlue);
    DRAW_STATE[hunt->curent_state](hunt);
    sfRenderWindow_display(hunt->window);
}