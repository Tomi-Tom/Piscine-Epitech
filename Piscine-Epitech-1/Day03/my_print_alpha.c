/*
** EPITECH PROJECT, 2021
** MY_PRINT_ALPHA_C
** File description: 
** displays lowercase alphabet in ascending order
*/

void    my_putchar(char c);

int     my_print_alpha(void)
{
    int i;

    i = 0;
    while (i < 26) {
        my_putchar(97 + i);
        i++;
    } return (0);
}
