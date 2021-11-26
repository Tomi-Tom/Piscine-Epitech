/*
** EPITECH PROJECT, 2021
** eval_expr
** File description:
** eval_expr function
*/

#include "eval_expr.h"

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

char     *cut_before(char *str, int pri)
{
    int i = 0;
    char *cut = malloc(sizeof(char) * (my_strlen(str)));

    while (i + 1 < pri) {
        cut[i] = str[i];
        i++;
    }
    return (cut);
}

stock_t  cut_expr(char *str, int pri, stock_t cat)
{
    int i = pri;
    int j = 0;
    char *cut = malloc(sizeof(char) * (my_strlen(str)));

    if (str[i] == '-')
        i++;
    while (is_num(str[i])) {
        i++;
    }
    i++;
    while (is_num(str[i])) {
        i++;
    }
    while (str[i + j]){
        cut[j] = str[i + j];
        j++;
    }
    cut[i + j] = '\0';
    cat.before = cut_before(str, pri);
    cat.next = my_strdup(cut);
    return (cat);
}


int     eval_expr(char *str)
{
    int res = 0;
    stock_t cat;
    int pri = 0;
    int i = 0;
    int start;

    while (!(is_str_one(str)) && i < 10) {
        pri = find_prio(str);
        start = start_prio(str, pri);
        if (start > 0)
            start = start - 1;
        res = do_op_number(str + start);
        cat.now = my_itoa(res);
        cat = cut_expr(str, pri, cat);
        str = my_strcat(cat.before, cat.now);
        str = my_strcat(str, cat.next);
        cat.now = NULL;
        res = 0;
        i++;
    }
    return (my_getnbr(str));
}
