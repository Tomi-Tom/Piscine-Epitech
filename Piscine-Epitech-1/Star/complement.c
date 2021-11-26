/*
** EPITECH PROJECT, 2021
** STAR_COMPLEMENT
** File description:
** sone utility for star
*/

void    my_putchar(char c);

void    comp(int i, int j)
{
    if (j == i + 1)
        my_putchar('*');
    else
        my_putchar(' ');
}
