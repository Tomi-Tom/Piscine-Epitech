/*
** EPITECH PROJECT, 2021
** INFIN_MOD_C
** File description:
** do infinite modulo
*/

#include "bistromatic.h"

char *infin_mod(char const *str1, char const *str2)
{
    char *stock;
    char *res = malloc(sizeof(char) * (my_strlen(str1) + 2));

    if (my_strlen(str2) > my_strlen(str1)) {
        return (my_strdup(str1));
    }
    stock = infin_mult(infin_div(str1, str2), str2);
    my_revstr(res);
    my_strcat(res, "-");
    my_revstr(res);
    res = infin_sub(str1, stock);
    return (res);
}