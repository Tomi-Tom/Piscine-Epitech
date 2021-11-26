/*
** EPITECH PROJECT, 2021
** THE_SQUARES
** File description:
** do a square x by y
*/

#include "unistd.h"

void    my_putchar(char c);

void    top2(int x, int y, char *str)
{
    my_putchar(str[1]);
    while (x > 2) {
        my_putchar(str[0]);
        x--;
    }
    my_putchar(str[2]);
	if (y > 1)
            my_putchar('\n');
}

void    content2(int x, int y, char *str)
{
    int i = 0;

    while (y > 2) {
        my_putchar(str[0]);
        while (i < x - 2) {
            my_putchar(' ');
            i++;
        }
        my_putchar(str[0]);
        my_putchar('\n');
        y--;
        i = 0;
    }
}

void    down2(int x, char *str)
{
    my_putchar(str[2]);
    while (x > 2) {
        my_putchar(str[0]);
        x--;
    }
    my_putchar(str[1]);
}

void    one2(int x, int y, char *str)
{
    if (x == 1) {
        while (y > 0) {
            my_putchar(str[0]);
            if (y != 1)
                my_putchar('\n');
            y--;
        }
    } else {
        while (x > 0) {
            my_putchar(str[0]);
            x--;
        }
    }
}

void    rush2(int x, int y, char *str)
{
    if (x > 1 && y > 1) {
        top2(x, y, str);
        content2(x, y, str);
        down2(x, str);
    } else if ((x == 1 || y == 1) && (x != 0 && y != 0)) {
        one2(x, y, str);
    } else {
        write(2, "Invalid size\n", 13);
    }
}
