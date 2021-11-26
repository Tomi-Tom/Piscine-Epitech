/*
** EPITECH PROJECT, 2021
** Bistro-matic
** File description:
** .h
*/

#ifndef BISTROMATIC_H_
    #define BISTROMATIC_H_
    #define OP_OPEN_PARENT_IDX 0
    #define OP_CLOSE_PARENT_IDX 1
    #define OP_PLUS_IDX 2
    #define OP_SUB_IDX 3
    #define OP_NEG_IDX 3
    #define OP_MULT_IDX 4
    #define OP_DIV_IDX 5
    #define OP_MOD_IDX 6
    #define EXIT_USAGE 84
    #define EXIT_BASE 84
    #define EXIT_SIZE_NEG 84
    #define EXIT_MALLOC 84
    #define EXIT_READ 84
    #define EXIT_OPS 84
    #define SYNTAX_ERROR_MSG "syntax error"
    #define ERROR_MSG "error"
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
<<<<<<< HEAD
    #include "infin_add.h"
    #include "eval_expr.h"
    #include "my.h"

int eval_expr(char const *base, char const *ops,
    char const *expr, unsigned int size);
=======
    #include "eval_expr.h"
    #include "my.h"
    #include "infin_add.h"
int is_neg(char const *nb1, char const *nb2);
char *remove_sub(char const *str);
int is_greater(char const *n1, char const *n2);
char *eval_expr(char const *ops, char const *expr);
>>>>>>> 80bfc1e179dcbfe8c4767a6f3a20bd4f4102eb44
void clean_ops(char **expr_ptr, char const *ops);
void check_unknown_digit(char *expr, char const *base, char const *ops);
void check_ops(char const *ops, char const *base);
void check_base(char const *base);
void check_par(char *str, char *ops);
char *remove_zero(char const *str);
char get_the_sign(char const *str1, char const *str2);
char *pow_of_ten(char *str, int count);
char *remove_sub(char const *str);
int sign(char const *str);
#endif