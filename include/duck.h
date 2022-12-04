/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** duck
*/

#include <SFML/System/Clock.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/RenderWindow.h>
#include "tools.h"

#ifndef DUCK_H_
    #define DUCK_H_

#define DUCK_IMG "assets/images/duck/"

typedef enum duck_color_e{
    RED,
    BLACK
}duck_color_t;

typedef enum duck_state_e {
    DUCK_FLY_LEFT,
    DUCK_FLY_RIGHT,
    DUCK_FLY_RIGHT_TOP,
    DUCK_FLY_LEFT_TOP,
    DUCK_DEAD,
    DUCK_SHOT,
    DUCK_NONE,
}duck_state_t;

typedef struct duck_sprite_s{
    duck_state_t name;
    sfSprite *spr;
}duck_sprite_t;

typedef struct duck_s {
    duck_state_t curent_state;
    int time_anim;
    int speed;
    sfIntRect rect;
    sfVector2f pos;
    sfClock *clock;
    duck_sprite_t sprites[6];
}duck_t;

void init_duck(duck_t *duck, duck_color_t color);
void update_duck(duck_t *duck);
void draw_duck(duck_t *duck, sfRenderWindow *window);


#endif /* !DUCK_H_ */
