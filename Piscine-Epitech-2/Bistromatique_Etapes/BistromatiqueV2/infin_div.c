/*
** EPITECH PROJECT, 2021
** INFIN_DIV_C
** File description:
** do infinite division
*/

#include "bistromatic.h"

void put_str_in_str(char *dest, char *src)
{
    int i = 0;

    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    free(src);
}

char *infin_div(char const *str1, char const *str2)
{
    char *res = malloc(sizeof(char) * (my_strlen(str1) + 3));
    char *tot = malloc(sizeof(char) * (my_strlen(str1) + 3));
    int i = 0;

    res[0] = '0';
    res[1] = '\0';
    while (is_greater(str1, tot)) {
        put_str_in_str(tot, infin_add(tot, str2));
        put_str_in_str(res, infin_add(res, my_strdup("1")));
        i++;
    }
    res = infin_sub(res, my_strdup("-1"));
    return (res);
}