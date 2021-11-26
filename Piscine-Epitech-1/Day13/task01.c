/*
** EPITECH PROJECT, 2021
** TASK01_CSFML
** File description:
** Open a 800*600 window
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stddef.h>

#include <SFML/Window.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>

int main(int ac, char **av)
{
    sfVideoMode mode = {1600, 800, 32};
    sfRenderWindow* window;
    sfTexture *texture;
    sfMusic *music;
    sfSprite *sprite;

	if (ac != 2 )
		return (84);
    window = sfRenderWindow_create(mode, "CSFML window", sfResize | sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);

    sprite = sfSprite_create();
    sfSprite_setTexture(sprite, texture, sfTrue);

	if (av[1][0] == '1') {
    	texture = sfTexture_createFromFile("files/jojo.jpg", NULL);
    	music = sfMusic_createFromFile("files/jojo5.ogg");
	}
	if (av[1][0] == '2') {
    	texture = sfTexture_createFromFile("files/hunter.jpg", NULL);
    	music = sfMusic_createFromFile("files/reasons.ogg");
	}
	if (av[1][0] == '3') {
    	texture = sfTexture_createFromFile("files/hollow_knight.jpg", NULL);
    	music = sfMusic_createFromFile("files/nice_music.ogg");
	}
	if (av[1][0] == '4') {
    	texture = sfTexture_createFromFile("files/dragon_ball.jpg", NULL);
    	music = sfMusic_createFromFile("files/kachi_daze.ogg");
	}

    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfMusic_setLoop(music, sfTrue);
    sfMusic_play(music);

    sfRenderWindow_display(window);

    while(1) {
    }

    return 0;
}
