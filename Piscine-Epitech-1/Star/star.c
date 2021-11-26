/*
** EPITECH PROJECT, 2021
** STAR
** File description:
** draw a star
*/

void    my_putchar(char c);
void    top(int size);
void    line(int size);
void    side_high(int size);
void    side_down(int size);

void    do_bot(int j, int size, int i)
{
    if ( j == ((3 * size) - i))
        my_putchar('*');
    else
        my_putchar(' ');
    j++;
}

void    my_putstr(char *str)
{
    int i;

    i = 0;
    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
}

void    bottom(int size)
{
    int i;
    int j;

    i = size;
    j = 0;
    while (i > 0) {
        while(j < size * 3 + i - 2) {
            do_bot(j, size, i);
            j++;
        }
        my_putchar('*');
        my_putchar('\n');
        i--;
        j = 0;
    }
}

void    size_one(int i)
{
    i = 0;
    my_putstr("   *\n");
    my_putstr("*** ***\n");
    my_putstr(" *   *\n");
    my_putstr("*** ***\n");
    my_putstr("   *\n");
}

void    star(unsigned int size)
{
    if (size == 1)
        size_one(size);
    else if (size > 0) {
        top(size);
        line(size);
        side_high(size);
        side_down(size);
        line(size);
        bottom(size);
    }
}
