/*
** EPITECH PROJECT, 2021
** rush-1-3
** File description:
** rush-1-3
*/

#include "unistd.h"

int     my_putchar();

int     line_up3(int x, int i)
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

int     line_down3(int x, int i)
{
    i = 0;
    while (i < x) {
        if (i == 0 || i == x - 1) {
            my_putchar('C');
            i++;
        }else {
            my_putchar('B');
            i++;
        }
    }
        return 0;
}

int     line_mid3(int x, int i)
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

int     cas_par3(int i, int x, int y)
{
    i = 0;
    if (x == 1 && y != 1) {
        while (i < y) {
            my_putchar('B');
            if (i < y - 1)
                my_putchar('\n');
            i++;
        }
    }else if (y == 1 && x != 1) {
        while(i < x) {
            my_putchar('B');
            i++;
        }        
    }else {
        my_putchar('B');
    }
    return 0;
}


void    rush3(int x, int y)
{
    int c = 1;
    int i = 0;

    if ((x == 1 || y == 1) && (x != 0 && y != 0)) {
        cas_par3(i, x, y);
    } else if (x <= 0 || y <= 0){
        write(2, "Invalid size\n", 13);
    } else {
        while (c <= y){
	    if (c == 1) {
                line_up3(x, i);
            } else if (c == y) {
                line_down3(x, i);
            } else {
                line_mid3(x, i);
            }
            my_putchar('\n');
            c++;
        }
    }
}
