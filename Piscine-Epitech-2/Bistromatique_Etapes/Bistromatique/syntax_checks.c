/*
** EPITECH PROJECT, 2021
** Bistro-matic
** File description:
** Functions to check for syntax errors
*/

#include <stdlib.h>
#include <stddef.h>
#include "bistromatic.h"
#include "eval_expr.h"
#include "my.h"

void check_unknown_digit(char *expr, char const *base, char const *ops)
{
    for (int i = 0; i < my_strlen(expr); i++) {
        if (my_strstr(my_strdup(ops), char_to_str(expr[i])) == NULL && \
            my_strstr(my_strdup(base), char_to_str(expr[i])) == NULL) {
            my_putstr(SYNTAX_ERROR_MSG);
            exit(EXIT_BASE);
        }
    }
}

void check_ops(char const *ops, char const *base)
{
    char *ops_cpy = malloc(sizeof(char) * my_strlen(ops));

    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
    for (int i = 0; i < my_strlen(ops); i++) {
        if (my_strstr(ops_cpy, char_to_str(ops[i])) != NULL || \
            my_strstr(my_strdup(base), char_to_str(ops[i])) != NULL) {
            my_putstr(SYNTAX_ERROR_MSG);
            exit(EXIT_OPS);
        }
        ops_cpy[i] = ops[i];
    }
    free(ops_cpy);
}

void check_base(char const *base)
{
    char *base_cpy = malloc(sizeof(char) * my_strlen(base));

    if (my_strlen(base) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
    for (int i = 0; i < my_strlen(base); i++) {
        if (my_strstr(base_cpy, char_to_str(base[i])) != NULL) {
            my_putstr(SYNTAX_ERROR_MSG);
            exit(EXIT_BASE);
        }
        base_cpy[i] = base[i];
    }
    free(base_cpy);
}

void check_par(char *str, char *ops)
{
    int i = 0;
    int check = 0;

    while (str[i]) {
        if (str[i] == ops[OP_OPEN_PARENT_IDX])
            check++;
        if (str[i] == ops[OP_CLOSE_PARENT_IDX])
            check--;
        if (check < 0) {
            my_putstr(SYNTAX_ERROR_MSG);
            exit(EXIT_BASE);
        }
        i++;
    }
    if (check > 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
}
