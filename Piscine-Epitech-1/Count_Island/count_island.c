/*
** EPITECH PROJECT, 2021
** COUNT_ISLAND
** File description:
** count island
*/

#include "include/my.h"

char    **vir_island(char **world, int i, int j, int is)
{
    world[i][j] = '0' + is;
	if (world[i + 1] != 0 )
    	if (world[i + 1][j] == 'X')
        	world = vir_island(world, i + 1, j, is);
	if (i > 1)
    	if (world[i - 1][j] == 'X')
        	world = vir_island(world, i - 1, j, is);
	if (world[i][j + 1] != '\0')
    	if (world[i][j + 1] == 'X')
        	world = vir_island(world, i, j + 1, is);
	if (j > 1)
    	if (world[i][j - 1] == 'X')
        	world = vir_island(world, i, j - 1, is);
    return (world);
}

int     count_island(char** world)
{
    int i = 0;
    int j = 0;
    int nb_is = 0;

    while (world[i]) {
        while (world[i][j] != '\0') {
            if (world[i][j] == 'X') {
                vir_island(world, i, j, nb_is);
				nb_is++;
            }
            j++;
        }
		j = 0;
        i++;
    }
    return (nb_is);
}
