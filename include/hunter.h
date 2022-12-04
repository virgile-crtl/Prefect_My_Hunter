/*
** EPITECH PROJECT, 2022
** my_hunter
** File description:
** hunter
*/

#include <SFML/Config.h>
#include <SFML/Graphics/RenderWindow.h>
#include <SFML/Graphics/Texture.h>
#include <SFML/Graphics/Sprite.h>
#include <SFML/Graphics/RectangleShape.h>
#include <SFML/Graphics/Shape.h>
#include <SFML/Graphics/Rect.h>
#include <SFML/System/Vector2.h>
#include <SFML/Graphics/Transform.h>
#include <stddef.h>
#include <SFML/Audio/Export.h>
#include <SFML/Audio/SoundStatus.h>
#include <SFML/Audio/Types.h>
#include <SFML/System/InputStream.h>
#include <SFML/System/Vector3.h>
#include <SFML/Audio/Listener.h>
#include <SFML/Audio/Music.h>
#include <SFML/Audio/Sound.h>
#include <SFML/Audio/SoundBuffer.h>
#include <SFML/Audio/SoundBufferRecorder.h>
#include <SFML/Audio/SoundRecorder.h>
#include <SFML/Audio/SoundStream.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include <SFML/System/Clock.h>
#include "my.h"
#include "tools.h"
#include "duck.h"

#ifndef HUNTER_H_
    #define HUNTER_H_

typedef enum State_e{
    Menu = 0,
    Game = 1,
}State_t;

typedef struct menu_s{
    sfSprite *background;
}menu_t;

typedef struct game_s{
    sfSprite *floor;
    duck_t duck;
    sfSprite *tree;
}game_t;

typedef struct hunt_s{
    game_t game;
    sfRenderWindow *window;
    State_t curent_state;
    menu_t menu;
}hunt_t;

void hunter();
void loop(hunt_t hunt);

/* initialize */
void initialize(hunt_t *game);

/* draw */
void draw(hunt_t *game);

#endif /* !HUNTER_H_ */
