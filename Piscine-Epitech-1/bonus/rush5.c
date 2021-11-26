/*
** EPITECH PROJECT, 2021
** THE_SQUARES
** File description:
** do a square x by y
*/

#include "unistd.h"

void    my_putchar(char c);

void    top5(int x, int y)
{
    my_putchar('A');
    while (x > 2) {
        my_putchar('B');
        x--;
    }
    my_putchar('C');
    if (y > 1)
        my_putchar('\n');
}

void    content5(int x, int y)
{
    int i = 0;

    while (y > 2) {
        my_putchar('B');
        while (i < x - 2) {
            my_putchar(' ');
            i++;
        }
        my_putchar('B');
        my_putchar('\n');
        y--;
        i = 0;
    }
}

void    down5(int x)
{
    my_putchar('C');
    while (x > 2) {
        my_putchar('B');
        x--;
    }
    my_putchar('A');
}

void    one5(int x, int y)
{
    if (x == 1) {
        while (y > 0) {
            my_putchar('B');
            if (y != 1)
                my_putchar('\n');
            y--;
        }
    } else {
        while (x > 0) {
            my_putchar('B');
            x--;
        }
    }
}

void    rush5(int x, int y)
{
    if (x > 1 && y > 1) {
        top5(x, y);
        content5(x, y);
        down5(x);
    } else if ((x == 1 || y == 1) && (x != 0 && y != 0)) {
        one5(x, y);
    } else {
        write(2, "Invalid size\n", 13);
    }
}
