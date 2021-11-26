/*
** EPITECH PROJECT, 2021
** rush-1-3
** File description:
** rush-1-3
*/

#include "unistd.h"

int     my_putchar(char c);

void    complement(int y, int i);

void    complement2(int c, int y, int x, int i);

int     line_up(int x, int i)
{
    i = 0;
    while (i < x) {
        if(i == 0 || i == x - 1){
            my_putchar('A');
            i++;
        } else {
            my_putchar('B');
            i++;
        }
    }
    return 0;
}

int     line_down(int x, int i)
{
    i = 0;
    while (i < x) {
        if (i == 0 || i == x - 1) {
            my_putchar('C');
            i++;
        } else {
            my_putchar('B');
            i++;
        }
    }
    return 0;
}

int     line_mid(int x, int i)
{
    i = 0;
    my_putchar('B');
    while (i < x - 2) {
        my_putchar(' ');
        i++;
    }
    my_putchar('B');
    return 0;
}

int     cas_par(int i, int x, int y)
{
    i = 0;
    if (x == 1 && y != 1) {
        while (i < y) {
            my_putchar('B');
            complement(y, i);
            i++;
        }
    } else if (y == 1 && x != 1) {
        while (i < x) {
            my_putchar('B');
            i++;
        }
    } else {
        my_putchar('B');
    }
    return 0;
}

void    rush(int x, int y)
{
    int c = 1;
    int i = 0;

    if ((x == 1 || y == 1) && (x != 0 && y != 0)) {
        cas_par(i, x, y);
    } else if (x <= 0 || y <= 0){
        write(2, "Invalid size\n", 13);
    } else {
        while (c <= y) {
            complement2(c, y, x, i);
            my_putchar('\n');
            c++;
        }
    }
}
