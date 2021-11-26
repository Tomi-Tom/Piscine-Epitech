/*
** EPITECH PROJECT, 2021
** do_op_num_c
** File description:
** do operation with 2 numbers
*/

#include "eval_expr.h"

int     my_getnextnbr(char *str)
{
    int i = 0;

    if (str[i] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9')
        i++;
    return (my_getnbr(str + i + 1));
}

char    find_op(char *str)
{
    int i = 0;
    if (str[i] == '-')
        i++;
    while (str[i]) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' ||
            str[i] == '/' || str[i] == '%')
            return (str[i]);
        i++;
    }
    return (0);
}

int     do_op_number(char *str)
{
    int x = my_getnbr(str);
    int y = my_getnextnbr(str);
    char op = find_op(str);

    return (do_op(x, y, op));
}