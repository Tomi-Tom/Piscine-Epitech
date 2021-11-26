/*
** EPITECH PROJECT, 2021
** INFINADD_C
** File description:
** fonction to infinadd without main
*/

#include "infinadd.h"

int     is_more(char const *s1, char const *s2)
{
    int len1 = my_strlen(s1);
    int len2 = my_strlen(s2);

    if (len1 >= len2)
        return 1;
    else
        return 0;
}

void    set_neg(char *res, int neg)
{
    int len = my_strlen(res);

    if (neg == 1) {
        res[len] = '-';
        res[len + 1] = '\0';
    }
}

char    *do_add(char *res, char *nb1, char *nb2)
{
    int acc = 0;
    int i = 0;

    while (nb2[i]) {
        res[i] = DTOA((ATOD(nb1[i]) + ATOD(nb2[i]) + acc) % 10);
        acc = ABS_ACC(ATOD(nb1[i]) + ATOD(nb2[i]) + acc);
        i++;
    }
    while (nb1[i]) {
        res[i] = DTOA((ATOD(nb1[i]) + acc) % 10);
        acc = ABS_ACC(ATOD(nb1[i]) + acc);
        i++;
    }
    if (acc)
        res[i] = '1';
    res[i + 1] = '\0';
    return (res);
}

char    *infinadd(char const *nb1, char const *nb2, int i)
{
    char *res;
    char *tmp1 = my_revstr(my_strdup(nb1));
    char *tmp2 = my_revstr(my_strdup(nb2));

    if (my_strlen(nb1) >= my_strlen(nb2))
        res = malloc((my_strlen(nb1) + 3) * sizeof(char));
    if (my_strlen(nb1) < my_strlen(nb2))
        res = malloc((my_strlen(nb2) + 3) * sizeof(char));
    if (res == NULL)
        return NULL;
    if (is_more(nb1, nb2)) {
        res = do_add(res, tmp1, tmp2);
    } else if (is_more(nb2, nb1)) {
        res = do_add(res, tmp2, tmp1);
    }
    set_neg(res, i);
    res = my_revstr(res);
    return (res);
}
