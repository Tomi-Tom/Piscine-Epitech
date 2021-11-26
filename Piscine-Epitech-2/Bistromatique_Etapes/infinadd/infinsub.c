/*
** EPITECH PROJECT, 2021
** INFINSUB_C
** File description:
** do infinite sub
*/

#include "infinadd.h"

int     is_greater(char const *n1, char const *n2)
{
    int i = 0;

    if (my_strlen(n1) > my_strlen(n2))
        return 1;
    if (my_strlen(n2) > my_strlen(n1))
        return 0;
    while (n1[i]) {
        if (n1[i] > n2[i])
            return 1;
        if (n2[i] > n1[i])
            return 0;
        i++;
    }
    return -1;
}

void    comp_sub(char *res, int i, int acc, char *tmp1)
{
    while(tmp1[i] ) {
        res[i] = DTOA(REA(ATOD(tmp1[i]) - acc));
        acc = 0;
        if (ATOD(tmp1[i] - acc) < 0)
            acc = 1;
        i++;
    }
    if (acc == 1)
        res[i - 1] = res[i - 1] - 1;
}

char	*do_sub(char *res, char const *n1, char const *n2, int sub)
{
    int i = 0;
    int acc = 0;
    char *tmp1 = my_revstr(my_strdup(n1));
    char *tmp2 = my_revstr(my_strdup(n2));

    while (tmp2[i]) {
        res[i] = DTOA(REA(ATOD(tmp1[i]) - ATOD(tmp2[i])) - acc);
        acc = 0;
        res[i] = DTOA(REA(ATOD(tmp1[i]) - ATOD(tmp2[i])) - acc);
        if ((ATOD(tmp1[i]) - ATOD(tmp2[i]) - acc) < 0)
            acc = 1;
        i++;
        sub++;
    }
    comp_sub(res, i, acc, tmp1);
    res = my_revstr(res);
    return (res);
}

char    *set_format_skip(char *res)
{
    int i = 0;
    int j = 0;

    while (res[i] == '0') {
            i++;
    }
    while (res[i]) {
        res[j] = res[i];
        i++;
        j++;
    }
    res[j] = '\0';
    return (res);
}

char	*infinsub(char const *nb1, char const *nb2, int i)
{
    char *res;
    int len1 = my_strlen(nb1);
    int len2 = my_strlen(nb2);

    if (len1 >= len2)
        res = malloc(sizeof(char) * (len1 + 2));
    if (len2 > len1)
        res = malloc(sizeof(char) * (len2 + 2));
    if (is_greater(nb1, nb2)) {
        do_sub(res, nb1, nb2, i);
    } else if (is_greater(nb2, nb1)) {
        do_sub(res, nb2, nb1, i);
    } else {
        res[0] = '0';
        res[1] = '\0';
    }
    res = set_format_skip(res);
    return (res);
}
