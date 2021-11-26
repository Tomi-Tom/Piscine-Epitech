/*
** EPITECH PROJECT, 2021
** FIND_SIZE_C
** File description:
** find the size of the rush
*/

#include "stumper.h"

char    *format_str(char *str, int i, int j)
{
    char *tmp1;
    char *tmp2;
    int count = 0;

    tmp1 = my_itoa(j);
    tmp2 = my_itoa(i);
    while (tmp1[count]) {
        str[count] = tmp1[count];
        count++;
    }
    str[count] = ' ';
    count = 0;
    while (tmp2[count]) {
        str[my_strlen(str)] = tmp2[count];
        count++;
    }
    str[my_strlen(str)] = '\n';
    str[my_strlen(str) + 1] = '\0';
    return (str);
}

char    *find_size(char **tab, int oui)
{
    int i = 0;
    int j = 0;
    char *ret;

    ret = malloc(sizeof(char) * 100);
    while (tab[i]) {
        i++;
    }
    while (tab[0][j]) {
        j++;
    }
    ret = format_str(ret, i, j);
	printf("ret = %s | oui = %d\n", ret, oui);
    if (oui)
        my_putstr(ret);
    return (ret);
}
