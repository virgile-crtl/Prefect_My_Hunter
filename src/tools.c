/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** tools
*/

#include "hunter.h"

sfSprite *initialize_sprite_from_file
(char *file, sfIntRect *text_rect, sfBool resetRect)
{
    sfTexture *texture = sfTexture_createFromFile(file, text_rect);
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, resetRect);
    return sprite;
}