/*
** EPITECH PROJECT, 2021
** Bistromatic
** File description:
** Functions to replace base characters and operators by the normal ones
*/

#include <stddef.h>
#include "my.h"
#include "eval_expr.h"
#include "bistromatic.h"

static char check_op_mult_div_mod(char c, char const *ops)
{
    if (c == ops[OP_MULT_IDX])
        return '*';
    else if (c == ops[OP_DIV_IDX])
        return '/';
    else
        return '%';
}

static char check_op_add_sub(char c, char const *ops)
{
    if (c == ops[OP_PLUS_IDX])
        return '+';
    else if (c == ops[OP_SUB_IDX])
        return '-';
    else
        return (check_op_mult_div_mod(c, ops));
}

static char get_op_char(char c, char const *ops)
{
    if (c == ops[OP_OPEN_PARENT_IDX])
        return '(';
    else if (c == ops[OP_CLOSE_PARENT_IDX])
        return ')';
    else
        return (check_op_add_sub(c, ops));
}

void clean_ops(char **expr_ptr, char const *ops)
{
    int len = my_strlen(*expr_ptr);

    for (int i = 0; i < len; i++) {
        if (my_strstr(my_strdup(ops), char_to_str((*expr_ptr)[i])) != NULL)
            (*expr_ptr)[i] = get_op_char((*expr_ptr)[i], ops);
    }
}
