/*
** EPITECH PROJECT, 2021
** THE_SQUARES
** File description:
** do a square x by y
*/

#include "unistd.h"

void    my_putchar(char c);

void    line1(int x, int end, int y, char *str)
{
    my_putchar(str[1]);
    while (x > 2) {
        my_putchar(str[0]);
        x--;
    }
    if (x > 1)
        my_putchar(str[1]);
    if (end == 0 && y > 1)
        my_putchar('\n');
}

void    content1(int x, int y, char *str)
{
    int i = 0;

    while (y > 2) {
        my_putchar(str[0]);
        while (i < x - 2) {
            my_putchar(' ');
            i++;
        }
        if (x > 1)
            my_putchar(str[0]);
        my_putchar('\n');
        i = 0;
        y--;
    }
}

void    rush1(int x, int y, char *str)
{
    if (x > 0 && y > 0) {
        line1(x, 0, y, str);
        content1(x, y, str);
        if (y > 1)
            line1(x, 1, y, str);
    } else {
        write(2, "Invalid size\n", 13);
    }
}
