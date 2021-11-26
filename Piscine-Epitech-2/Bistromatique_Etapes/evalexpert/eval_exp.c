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

int     is_str_one(char *str)
{
    int i = 0;

    if (str[i] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9' && str[i])
        i++;
    if (str[i])
        return 0;
    else
        return 1;
}

prio_t  init_priot()
{
    prio_t tmp;

    tmp.pos = 0;
    tmp.prio = 0;
    tmp.nbr_par = 0;
    return (tmp);
}

char    is_priority(char *str)
{
    int i = 0;
    prio_t prio = init_prio();

    while (str[i]) {
        if ()
        i++;
    }
}

int     my_op(char *str)
{
    int i = 0;
    char prio;

    if (is_str_one(str))
        return (my_getnbr(str));
    prio = is_priority(str);
    while (str[i] != prio) {
        i++;
    }
    return 0;
}

int     eval_expr(char *str)
{
    char *tmp;

    tmp = my_strdup(str);
    return (my_op(tmp));
}