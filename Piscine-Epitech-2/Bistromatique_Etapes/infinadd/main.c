/*
** EPITECH PROJECT, 2021
** MAIN_C
** File description:
** main for infinadd
*/

#include "infinadd.h"

int		is_bigger(char const *n1, char const *n2)
{
    char *tmp1 = malloc(sizeof(char) * (my_strlen(n1) + 2));
    char *tmp2 = malloc(sizeof(char) * (my_strlen(n2) + 2));
    int i = 0;

    tmp1 = (char *)n1;
    tmp2 = (char *)n2;
    set_format(tmp1);
    set_format(tmp2);
    if (my_strlen(tmp1) > my_strlen(tmp2))
        return 1;
    while (tmp1[i]) {
        if (tmp1[i] > tmp2[i])
            return 1;
        else
            return 0;
        i++;
    }
    return 0;
}

int     check_neg(char const *n1, char const *n2)
{
    if (n1[0] == '-' &&  n2[0] == '-')
        return (1);
    if (n1[0] == '-' && is_bigger(n1, n2))
        return (-1);
    if (n2[0] == '-' && is_bigger(n1, n2))
        return (-2);
    if (n1[0] == '-' || n2[0] == '-')
        return (-3);
    if ((n1[0] >= '0' && n1[0] <= '9') && (n2[0] >= '0' && n2[0] <= '9'))
        return (0);
    return (84);
}

void	comp_main(int i, char **av)
{
    if (i >= 0) {
        set_format(av[1]);
        set_format(av[2]);
        my_putstr(infinadd(av[1], av[2], i));
    } else if (i < 0) {
        set_format(av[1]);
        set_format(av[2]);
        if (i == -1 || i == -2)
            my_putchar('-');
        my_putstr(infinsub(av[1], av[2], i));
    }
}

int     main(int ac, char **av)
{
    int err;
    int i = 0;

    if (ac == 3) {
        i = check_neg(av[1], av[2]);
        err = check_error(av[1], av[2]);
        if (err == 84)
            return (err);
        comp_main(i, av);
        return 0;
    }
    return 84;
}
