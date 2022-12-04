/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** duck
*/

#include "duck.h"

void init_duck(duck_t *duck, duck_color_t color)
{
    switch (color) {
        case BLACK:
            duck->sprites[0] = (duck_sprite_t){DUCK_FLY_LEFT, initialize_sprite_from_file(DUCK_IMG "black/left/0.png", NULL, sfTrue)};
            duck->sprites[1] = (duck_sprite_t){DUCK_FLY_RIGHT, initialize_sprite_from_file(DUCK_IMG "black/right/0.png", NULL, sfTrue)};
            duck->sprites[2] = (duck_sprite_t){DUCK_FLY_RIGHT_TOP, initialize_sprite_from_file(DUCK_IMG "black/top-right/0.png", NULL, sfTrue)};
            duck->sprites[3] = (duck_sprite_t){DUCK_FLY_LEFT_TOP, initialize_sprite_from_file(DUCK_IMG "black/top-left/0.png", NULL, sfTrue)};
            duck->sprites[4] = (duck_sprite_t){DUCK_DEAD, initialize_sprite_from_file(DUCK_IMG "black/dead/0.png", NULL, sfTrue)};
            duck->sprites[5] = (duck_sprite_t){DUCK_SHOT, initialize_sprite_from_file(DUCK_IMG "black/shot/0.png", NULL, sfTrue)};
            break;
        case RED:
            duck->sprites[0] = (duck_sprite_t){DUCK_FLY_LEFT, initialize_sprite_from_file(DUCK_IMG "red/left/0.png", NULL, sfTrue)};
            duck->sprites[1] = (duck_sprite_t){DUCK_FLY_RIGHT, initialize_sprite_from_file(DUCK_IMG "red/right/0.png", NULL, sfTrue)};
            duck->sprites[2] = (duck_sprite_t){DUCK_FLY_RIGHT_TOP, initialize_sprite_from_file(DUCK_IMG "red/top-right/0.png", NULL, sfTrue)};
            duck->sprites[3] = (duck_sprite_t){DUCK_FLY_LEFT_TOP, initialize_sprite_from_file(DUCK_IMG "red/top-left/0.png", NULL, sfTrue)};
            duck->sprites[4] = (duck_sprite_t){DUCK_DEAD, initialize_sprite_from_file(DUCK_IMG "red/dead/0.png", NULL, sfTrue)};
            duck->sprites[5] = (duck_sprite_t){DUCK_SHOT, initialize_sprite_from_file(DUCK_IMG "red/shot/0.png", NULL, sfTrue)};
            break;
    }
    duck->curent_state = DUCK_NONE;
    //duck->rect = (sfIntRect){0, 0, 0, 0};
    duck->pos = (sfVector2f){500, 500};
    duck->time_anim = 500;
    duck->speed = 100;
    duck->clock = sfClock_create();
}

void update_duck(duck_t *duck)
{
    float move = sfTime_asSeconds(sfClock_restart(duck->clock)) * duck->speed;

    duck->pos.y -= move / 1.5;
    duck->pos.x -= move;
    sfSprite_setPosition(duck->sprites[duck->curent_state].spr, duck->pos);
}

void draw_duck(duck_t *duck, sfRenderWindow *window)
{
    if (duck->curent_state == DUCK_NONE)
        return;
    sfRenderWindow_drawSprite(window, duck->sprites[duck->curent_state].spr, NULL);
}