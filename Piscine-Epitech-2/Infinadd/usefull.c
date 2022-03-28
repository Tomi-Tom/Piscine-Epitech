/*
** EPITECH PROJECT, 2021
** USEFULL_C
** File description:
** some usefull function
*/

void    set_format(char *str)
{
    int i = 1;
    if (str[0] == '-') {
        while (str[i]) {
            str[i - 1] = str[i];
            i++;
        }
        str[i - 1] = '\0';
    }
}

int     check_error(char const *s1, char const *s2)
{
    int i = 1;

    while (s1[i]) {
        if (!(s1[i] >= '0' && s1[i] <= '9'))
            return 84;
        i++;
    }
    i = 1;
    while (s2[i]) {
        if (!(s2[i] >= '0' && s2[i] <= '9'))
            return 84;
        i++;
    }
    return 0;
}
