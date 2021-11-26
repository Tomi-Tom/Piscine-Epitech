/*
** EPITECH PROJECT, 2021
** MY_EVIL_STR_C
** File description:
** fait un strrev
*/

int     count(char *str)
{
    int i;

    i = 0;
    while (str[i]) {
        i++;
    }
    return (i);
}

char    *my_evil_str(char *str)
{
    int	 len;
    int	 i;
    char tmp;

    i = 0;
    len = count(str);
    while (i < len - 1) {
        tmp = str[i];
        str[i] = str[len - 1];
        str[len - 1] = tmp;
        i++;
        len--;
    }
    return (str);
}
