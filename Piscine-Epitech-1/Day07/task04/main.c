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
    int i = 0;

    while (i < ac) {
        my_putstr(av[i]);
        my_putchar('\n');
        i++;
    }
    return (0);;;;;
}
