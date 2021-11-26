/*
** EPITECH PROJECT, 2021
** RUSH3_C
** File description:
** base of the rush3
*/

#include "stumper.h"

void    rush3(char *str)
{
    char **tab;

    tab = my_str_to_word_array(str);
    my_putstr(find_type(tab));
    find_size(tab, 1);
}

int     read_std_input(void)
{
    int bf = 30000;
    char buff[bf + 1];
    int offset = 0;
    int len;

    while ((len = read(0 , buff + offset , bf - offset)) > 0) {
        offset = offset + len;
    }
    buff[offset] = '\0';
    if (len < 0)
        return (84);
    rush3(buff);
    return (0);
}
