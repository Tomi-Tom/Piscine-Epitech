/*
** EPITECH PROJECT, 2021
** eval_expr
** File description:
** eval_expr function
*/

#include "eval_expr.h"

int     my_getnextnbr(char *str)
{
    int i = 0;

    while (str[i] >= '0' && str[i] <= '9')
        i++;
    return (my_getnbr(str + i + 1));
}

char    find_op(char *str)
{
    int i = 0;
    while (str[i]) {
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' ||
            str[i] == '/' || str[i] == '%')
            return (str[i]);
        i++;
    }
    return (0);
}

int     do_op_number( char *str)
{
    int x = my_getnbr(str);
    int y = my_getnextnbr(str);
    char op = find_op(str);

    return (do_op(x, y, op));
}

int eval_expr(char *str)
{
    return (do_op_number(str));
}
