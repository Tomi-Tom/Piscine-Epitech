/*
** EPITECH PROJECT, 2021
** MAIN_C
** File description:
** 
*/

#include "unistd.h"
#include "stdio.h"
#include "stdlib.h"

void    rush(int x, int y, int mode, char *str);

void    my_putchar(char c)
{
    write(1, &c, 1);
}

int    	main(int ac, char **av)
{
	int mode = atoi(av[3]);

    if (ac == 5) {
        rush(atoi(av[1]), atoi(av[2]), mode, av[4]);
        printf("\n");
    }
    return (0);
}
