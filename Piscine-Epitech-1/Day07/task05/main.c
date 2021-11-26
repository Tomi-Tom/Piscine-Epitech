/*
** EPITECH PROJECT, 2021
** MY_PRINT_PARAMS
** File description:
** PRINT PARAMS
*/

void    my_putchar(char c);

void    my_putstr(char *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
}

int     main(int ac, char **av)
{
    while (ac > 0) {
        my_putstr(av[ac - 1]);
        ac--;
    }
    return (0);;;;;
}
