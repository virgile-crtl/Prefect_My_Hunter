/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** dog
*/

#include "dog.h"

void initDogSprits(dog_t *dog)
{
    char *path_buff = DOG_IMG "sniff/0.png";

    for (int i = 0; i < 5; ++i) {
        path_buff[24] = i + '0';
        dog->sniff[i] = initialize_sprite_from_file(path_buff, NULL, sfTrue);
    }
    dog->find = initialize_sprite_from_file(DOG_IMG "find/0.png", NULL, sfTrue);
    dog->jump[0] = initialize_sprite_from_file(DOG_IMG "jump/0.png", NULL, sfTrue);
    dog->jump[1] = initialize_sprite_from_file(DOG_IMG "jump/1.png", NULL, sfTrue);
    dog->find_one = initialize_sprite_from_file(DOG_IMG "single/0.png", NULL, sfTrue);
    dog->find_two = initialize_sprite_from_file(DOG_IMG "double/0.png", NULL, sfTrue);
    dog->laugh[0] = initialize_sprite_from_file(DOG_IMG "laugh/0.png", NULL, sfTrue);
    dog->laugh[1] = initialize_sprite_from_file(DOG_IMG "laugh/1.png", NULL, sfTrue);
    dog->sprites[0] = dog->sniff;
    dog->sprites[1] = &dog->find;
    dog->sprites[2] = dog->jump;
    dog->sprites[3] = &dog->find_one;
    dog->sprites[4] = &dog->find_two;
    dog->sprites[5] = dog->laugh;
}

void initDog(dog_t *dog)
{
    dog->old_state = DOG_NONE;
    dog->curent_state = DOG_NONE;

    initDogSprits(dog);
}

void dog_update_animation(sfRenderWindow *window, dog_t *dog)
{
    const float elapsTime = sfTime_asSeconds(
        sfClock_getElapsedTime(dog->animation_clock));

    if (elapsTime > dog->animation_time) {
        sfClock_restart(dog->animation_clock);
        dog->animation_step += 1;
        if (dog->animation_step >= dog->animation_length) {
            dog->curent_state = DOG_NONE;
            return;
        }
    }
    sfRenderWindow_drawSprite(window, dog->laugh[dog->animation_step], NULL);
}

void dog_on_animation_end(dog_t *dog)
{
    switch (dog->curent_state) {
        case DOG_SNIFF:
            break;
        case DOG_FIND:
            break;
        case DOG_JUMP:
            break;
        case DOG_FIND_ONE:
            break;
        case DOG_FIND_TWO:
            break;
        case DOG_LAUGH:
            break;
    }
}

void draw_dog(sfRenderWindow *window, dog_t *dog) {
    sfSprite *sprite = NULL;

    if (dog->curent_state == DOG_NONE)
        return;
    const float elapsTime = sfTime_asSeconds(
        sfClock_getElapsedTime(dog->animation_clock));

    if (elapsTime > dog->animation_time) {
        sfClock_restart(dog->animation_clock);
        dog->animation_step += 1;
        if (dog->animation_step >= dog->animation_length) {
            dog_on_animation_end(dog);
            return;
        }
    }
    sfRenderWindow_drawSprite(window,
    dog->sprites[dog->curent_state][dog->animation_step], NULL);
}
