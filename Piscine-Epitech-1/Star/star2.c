/*
** EPITECH PROJECT, 2021
** Star_2
** File description:
** les complement de stars
*/

void    my_putchar(char c);

void    comp(int i, int j);

void    do_top(int j, int size, int i)
{
    if ( j == ((3 * size) - i - 1))
        my_putchar('*');
    else
        my_putchar(' ');
}

void    top(int size)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i < size) {
        while (j < (3 * size) + i - 1) {
            do_top(j, size, i);
            j++;
        }
        my_putchar('*');
        my_putchar('\n');
        i++;
        j = 0;
    }
}

void    line(int size)
{
    int i;

    i = 0;
    while(i != 6 * size - 1) {
        if (i <= size * 2 || i >= size * 4 - 2)
            my_putchar('*');
        else
            my_putchar(' ');
        i++;
    }
    my_putchar('\n');
}

void    side_high(int size)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (i <= size - 2) {
        while (j <= 6 * size - 4 - i) {
            comp(i, j);
            j++;
        }
        j = 0;
        my_putchar('*');
        my_putchar('\n');
        i++;
    }
}

void    side_down(int size)
{
    int i;
    int j;

    i = size - 1;
    j = 0;
    while(i >= 0) {
        while (j <= 6 * size - 4 - i) {
            comp(i, j);
            j++;
        }
        j = 0;
        my_putchar('*');
        my_putchar('\n');
        i--;
    }
}
