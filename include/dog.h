/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** dog
*/

#include <SFML/System/Clock.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/RenderWindow.h>

#ifndef DOG_H_
    #define DOG_H_

#define DOG_IMG "assets/images/dog/"

sfSprite *initialize_sprite_from_file(char *file, sfIntRect *text_rect, sfBool resetRect);

typedef enum dog_state_e {
    DOG_SNIFF,
    DOG_FIND,
    DOG_JUMP,
    DOG_FIND_ONE,
    DOG_FIND_TWO,
    DOG_LAUGH,
    DOG_NONE,
}dog_state_t;

typedef struct dog_s {
    dog_state_t old_state;
    dog_state_t curent_state;

    sfClock *animation_clock;
    float animation_time;
    int animation_step;
    int animation_length;

    sfSprite *sniff[5];
    sfSprite *find;
    sfSprite *jump[2];
    sfSprite *find_one;
    sfSprite *find_two;
    sfSprite *laugh[2];
    sfSprite **sprites[6];
}dog_t;

#endif /* !DOG_H_ */
