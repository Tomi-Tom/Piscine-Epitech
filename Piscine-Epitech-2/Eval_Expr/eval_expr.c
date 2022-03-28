/*
** EPITECH PROJECT, 2021
** EVAL_EXPR_C
** File description:
** eval expression
*/

#include "eval_expr.h"

int     factors(char **str)
{
    int  nb = parenthesis(str);
    int  nbr2;
    char op;

    while (**str) {
        op = **str;
        if (!(op == '/' || op == '*' || op == '%'))
            return (nb);
        (*str)++;
        nbr2 = parenthesis(str);
        if (op == '*')
            nb = nb * nbr2;
        if (op == '/')
            nb = nb / nbr2;
        if (op == '%')
            nb = nb % nbr2;
    }
    return nb;
}

int     parenthesis(char **str)
{
    int nbr;

    if (**str == '(') {
        (*str)++;
        nbr = summands(str);
        if (**str == ')')
            (*str)++;
        return (nbr);
    }
    return (number(str));
}

int     summands(char **str)
{
    int  nb = factors(str);
    int  nbr2;
    char op;

    while (**str) {
        op = **str;
        if (!(op == '+' || op == '-'))
            return (nb);
        (*str)++;
        nbr2 = factors(str);
        if (op == '-')
            nb = nb - nbr2;
        if (op == '+')
            nb = nb + nbr2;
    }
    return nb;
}

int     eval_expr(char *str)
{
    return summands(&str);
}