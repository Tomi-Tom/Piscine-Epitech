/*
** EPITECH PROJECT, 2021
** THE_SQUARES
** File description:
** do a square x by y
*/

#include "unistd.h"

void    my_putchar(char c);

void    complement(int y);

void    top(int x, int y)
{
    my_putchar('/');
    while (x > 2) {
        my_putchar('*');
        x--;
    }
    my_putchar('\\');
    if (y > 1)
        my_putchar('\n');
}

void    content(int x, int y)
{
    int i = 0;

    while (y > 2) {
        my_putchar('*');
        while (i < x - 2) {
            my_putchar(' ');
            i++;
        }
        my_putchar('*');
        my_putchar('\n');
        y--;
        i = 0;
    }
}

void    down(int x)
{
    my_putchar('\\');
    while (x > 2) {
        my_putchar('*');
        x--;
    }
    my_putchar('/');
}

void    one(int x, int y)
{
    if (x == 1) {
        while (y > 0) {
            my_putchar('*');
            complement(y);
            y--;
        }
    } else {
        while (x > 0) {
            my_putchar('*');
            x--;
        }
    }
}

void    rush(int x, int y)
{
    if (x > 1 && y > 1) {
        top(x, y);
        content(x, y);
        down(x);
    } else if ((x == 1 || y == 1) && (x != 0 && y != 0)) {
        one(x, y);
    } else {
        write(2, "Invalid size\n", 13);
    }
}
