/*
** EPITECH PROJECT, 2021
** find_type
** File description:
** rush3
*/

#include "stumper.h"

int     end_of_line(char **str)
{
    int i = 0;

    while (str[0][i]) {
        i = i + 1;
    }
    return i;
}

int     end_of_tab(char **str)
{
    int i = 0;

    while (str[i]) {
        i = i + 1;
    }
    return i;
}

char    *str_write(char *type, char *src)
{
    int i = 0;

    while (src[i]) {
        type[i] = src[i];
        i++;
    }
    return type;
}

char    *exception(char *type, char **tab)
{
    char *size = find_size(tab, 0);

    type = my_strcat(type, "[rush1-3]  ");
    type = my_strcat(type, size);
    type = my_strcat(type, " || [rush1-4]  ");
    type = my_strcat(type, size);
    type = my_strcat(type, " || [rush1-5]  ");
    free (size);
    return (type);
}

char    *find_type(char **str)
{
    int e = end_of_tab(str) - 1;
    int j = end_of_line(str) - 1;
    char *type;

    type = malloc(sizeof(char) * 100);
    if (str[e][0] == 'o')
        type = str_write(type, "[rush1-1] ");
    if (str[e][0] == '\\' || str[e][0] == '*')
        type = str_write(type, "[rush1-2] ");
    if (str[0][0] == 'B')
        type = exception(type, str);
    if (str[e][0] == 'C' && str[e][j] == 'C')
        type = str_write(type, "[rush1-3] ");
    if (str[e][0] == 'A' && str[e][j] == 'C')
        type = str_write(type, "[rush1-4] ");
    if (str[e][0] == 'C' && str[e][j] == 'A')
        type = str_write(type, "[rush1-5] ");
    return type;
}
