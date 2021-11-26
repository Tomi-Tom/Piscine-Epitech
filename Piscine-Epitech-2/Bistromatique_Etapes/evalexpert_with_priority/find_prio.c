/*
** EPITECH PROJECT, 2021
** PRIO
** File description:
** all for prio
*/

#include "eval_expr.h"

int     start_prio(char *str, int i)
{
    if (i == 0)
        return 0;
    while (i > 0) {
        if (!(is_num(str[i])))
            return (i);
        i--;
    }
    i--;
    return (i);
}

int     find_prio(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] == '*' || str[i] == '/') {
            i = start_prio(str, i);
            return (i);
        }
        i++;
    }
    return 0;
}