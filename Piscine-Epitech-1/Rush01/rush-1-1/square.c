/*
** EPITECH PROJECT, 2021
** THE_SQUARES
** File description:
** do a square x by y
*/

#include "unistd.h"

void    my_putchar(char c);

void    line(int x, int end, int y)
{
    my_putchar('o');
    while (x > 2) {
        my_putchar('-');
        x--;
    }
    if (x > 1)
        my_putchar('o');
    if (end == 0 && y > 1)
        my_putchar('\n');
}

void    content(int x, int y)
{
    int i = 0;

    while (y > 2) {
        my_putchar('|');
        while (i < x - 2) {
            my_putchar(' ');
            i++;
        }
        if (x > 1)
            my_putchar('|');
        my_putchar('\n');
        i = 0;
        y--;
    }
}

void    rush(int x, int y)
{
    if (x > 0 && y > 0) {
        line(x, 0, y);
        content(x, y);
        if (y > 1)
            line(x, 1, y);
    } else {
        write(2, "Invalid size\n", 13);
    }
}
