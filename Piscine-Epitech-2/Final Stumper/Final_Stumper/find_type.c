/*
** EPITECH PROJECT, 2021
** find_type
** File description:
** rush3
*/

#include "stumper.h"

int end_of_line(char **str)
{
    int i = 0;

    while (str[0][i] != '\0') {
        i = i + 1;
    }
    return i;
}

int end_of_tab(char **str)
{
    int i = 0;

    while (str[i]) {
        i = i + 1;
    }
    return i;
}

char *str_write(char *type, char *src)
{
    int i = 0;
    
    while (src[i] != '\0') {
        type[i] = src[i];
        i++;
    }
    return type;
}



char *find_type(char **str)
{
    int e = end_of_tab(str) - 1;
    int j = end_of_line(str) - 1;
    char *type;

    type = malloc(sizeof(char) * 100);
    type[0] = 8;
    if (str[0][0] == 'o')
        type = str_write(type, "[rush1-1] ");
    if (str[0][0] == '/' || str[0][0] == '*')
        type = str_write(type, "[rush1-2] ");
    if (str[0][0] == 'B')
        type = str_write(type, "[rush1-3] || [rush1-4] || [rush1-5] ");
    if (str[0][0] == 'A' && str[0][j] == 'A')
        type = str_write(type, "[rush1-3] ");
    if (str[0][0] == 'A' && str[0][j] == 'C' && e != 1) {
        if (str[e][0] == 'A')
            type = str_write(type, "[rush1-4] ");
        if (str[e][0] == 'C')
            type = str_write(type, "[rush1-5] ");
    }
    if (str[0][0] == 'A' && str[0][j] == 'C' && e == 1)
        type = str_write(type, "[rush1-4] [rush1-5] ");
    return type;
}