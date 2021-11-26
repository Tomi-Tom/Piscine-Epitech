/*
** EPITECH PROJECT, 2021
** COMPLEMENT
** File description:
**
*/

void    my_putchar(char c);

int     line_up(int x, int i);

int     line_mid(int x, int i);

int     line_down(int x, int i);

void    complement(int y, int i)
{
    if (i < y - 1)
        my_putchar('\n');
}

void    complement2(int c, int y, int x, int i)
{
    if (c == 1) {
        line_up(x, i);
    } else if (c == y) {
        line_down(x, i);
    } else {
        line_mid(x, i);
    }
}
