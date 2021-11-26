/*
** EPITECH PROJECT, 2021
** factors
** File description:
** desc
*/

#include <stdlib.h>
#include "bistromatic.h"
#include "eval_expr.h"
#include "my.h"

static int get_next_result(int result, char **str_ptr)
{
    char sign = (*str_ptr)[0];
    int next_number = 0;

    (*str_ptr)++;
    next_number = number(str_ptr);
    if ((sign == '/' || sign == '%') && next_number == 0) {
        my_putstr(ERROR_MSG);
        exit(EXIT_USAGE);
    }
    if (sign == '*')
        return (result * next_number);
    else if (sign == '/')
        return (result / next_number);
    else
        return (result % next_number);
}

static void if_reduct1(int result, char *new_str, int len)
{
    if (result >= 0)
        my_strcat(new_str, "+");
    my_strcat(new_str, int_to_str(result, len));
}

static void while_reduct(int result, char *new_str, int len, char **ptr)
{
    while ((*ptr)[0] == '*' || (*ptr)[0] == '/' || (*ptr)[0] == '%')
        result = get_next_result(result, ptr);
    my_strcat(new_str, int_to_str(result, len));
}

static void if_ultimate(int result, char **ptr, int len, char *new_str)
{
    char *sign = "";

    if ((*ptr)[0] == '+' || (*ptr)[0] == '-') {
        sign = char_to_str((*ptr)[0]);
        my_strcat(new_str, my_strcat(int_to_str(result, len), sign));
        (*ptr)++;
    } else if ((*ptr)[0] == '*' || (*ptr)[0] == '/' || (*ptr)[0] == '%') {
        while_reduct(result, new_str, len, ptr);
    } else {
        if_reduct1(result, new_str, len);
    }
}

char *factors(char **ptr)
{
    int len = my_strlen(*ptr);
    char *new_str = malloc(sizeof(char) * len);
    int result = 0;

    while ((*ptr)[0] != '\0') {
        if ((*ptr)[0] >= '0' && (*ptr)[0] <= '9')
            result = number(ptr);
        else {
            my_strcat(new_str, char_to_str((*ptr)[0]));
            (*ptr)++;
            continue;
        }
        if_ultimate(result, ptr, len, new_str);
    }
    return (new_str);
}
