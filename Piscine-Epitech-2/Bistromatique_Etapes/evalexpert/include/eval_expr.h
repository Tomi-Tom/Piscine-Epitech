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

int     eval_expr(char *str);
int do_op(int nb1, int nb2, char op);

typedef struct stock_strs
{
    char *before;
    char *now;
    char *after;
} stock_t;

typedef struct stock priority
{
    int pos;
    char prio;
} prio_t;

#endif
