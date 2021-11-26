/*
** EPITECH PROJECT, 2021
** CONCAT_PARAMS
** File description:
** CONCAT PARAMS
*/

char    *concat_params(int ac, char **av)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *str;

    str = malloc(sizeof(char) * (ac + 1));
    while (i < ac) {
        while (av[i][j]) {
            str[k] = av[i][j];
            j++;
            k++;
        }
        if (i != ac - 1)
            str[k++] = '\n';
        j = 0;
        i++;
    }
    str[k] = '\0';
    return (str);
}
