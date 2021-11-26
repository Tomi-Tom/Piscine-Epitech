/*
** EPITECH PROJECT, 2021
** MY_SORT_PARAMS
** File description:
** sort params of an array
*/

int		compare(char *s1, char *s2)
{
    int i = 0;

    while (s1[i] == *s2) {
        i++;
    }
    return (*s1 - *s2);
}

int		my_bubble_sort_str(int i, char **av, int good)
{
    char *tmp;

    if (compare(av[i], av[i + 1])) {
        tmp = av[i];
        av[i] = av[i + 1];
        av[i + 1] = tmp;
        good++;
    }
    return (good);
}

int		main(int ac, char **av)
{
    int i = 0;
    int good = 1;

    while (good) {
        good = 0;
        while (i < ac - 1) {
            good = my_bubble_sort_str(i, av, good);
            i++;
        }
        i = 0;
    }
    return (0);
}
