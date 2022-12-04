/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** initialize
*/

#include "initialize.h"

void initialize_menu(menu_t *menu, sfVector2u window_size)
{
    // menu->background = initialize_sprite_from_file(
    // "assets/images/scene/back/0.png", &(sfIntRect){0, 0, window_size.x, window_size.y}, sfTrue);
}

void initialize_game(game_t *game)
{
    game->floor = initialize_sprite_from_file(
    "assets/images/scene/back/0.png", NULL, sfTrue);
    sfSprite_setPosition(game->floor, (sfVector2f){0, 10});
    game->tree = initialize_sprite_from_file(
    "assets/images/scene/tree/0.png", NULL, sfTrue);
    sfSprite_setPosition(game->tree, (sfVector2f){154, 243});
    init_duck(&game->duck, BLACK);

}

void initialize(hunt_t *hunt)
{
    hunt->window = sfRenderWindow_create((sfVideoMode)
    {800, 600, 32}, "Hunter", sfClose | sfResize, NULL);
    hunt->curent_state = Game;
    initialize_menu(&hunt->menu, sfRenderWindow_getSize(hunt->window));
    initialize_game(&hunt->game);
    return;
}