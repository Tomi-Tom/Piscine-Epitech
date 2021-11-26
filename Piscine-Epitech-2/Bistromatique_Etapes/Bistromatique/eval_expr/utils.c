/*
** EPITECH PROJECT, 2021
** utils
** File description:
** desc
*/

#include <stdlib.h>
#include "my.h"

char *char_to_str(char c)
{
    char str[2] = "\0";

    str[0] = c;
    return (my_strdup(str));
}

char *remove_zero(char const *str)
{
    int i = 0;
    int j = 0;
    char *res = my_strdup(str);

    if (str[0] == '-') {
        res[0] = '-';
        i = 1;
        j = 1;
    }
    while (str[i] == '0' && str[i + 1])
        i++;
    while (str[i]) {
        res[j] = str[i];
        i++;
        j++;
    }
    res[j] = '\0';
    return (res);
}
