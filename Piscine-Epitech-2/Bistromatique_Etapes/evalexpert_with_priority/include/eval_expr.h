/*
** EPITECH PROJECT, 2021
** EVAL_EXPR_H_
** File description:
** all include for the project
*/

#ifndef EVAL_EXPR_H_
# define EVAL_EXPR_H_

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct stock_strs
{
    char *before;
    char *now;
    char *next;
} stock_t;

int     eval_expr(char *str);
int     do_op(int nb1, int nb2, char op);
int     do_op_number(char *str);
int     start_prio(char *str, int i);
int     find_prio(char *str);

#endif
