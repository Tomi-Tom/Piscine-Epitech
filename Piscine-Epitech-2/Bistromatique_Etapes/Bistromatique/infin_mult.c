/*
** EPITECH PROJECT, 2021
** infin_mult
** File description:
** desc
*/

#include "bistromatic.h"

char *init_str(char *str, int len)
{
    int i = 0;
    while (i < len) {
        str[i] = '0';
        i++;
    }
    return (str);
}

int is_neg_mult(char const *nb1, char const *nb2)
{
    if (nb1[0] == '-' && nb2[0] == '-' ) {
        return 0;
    }
    if (nb1[0] == '-' || nb2[0] == '-' ) {
        return 1;
    }
    return 0;
}

char *infin_mult(char const *str1, char const *str2)
{
    char *res = malloc((my_strlen(str1) + my_strlen(str2) + 2) * sizeof(char));
    char *nb1 = my_revstr(remove_sub(my_strdup(str1)));
    char *nb2 = my_revstr(remove_sub(my_strdup(str2)));
    int neg = is_neg_mult(str1, str2);
    int tmp = 0;
    int ret = 0;
    int i = 0;
    int j = 0;

    res = init_str(res, (my_strlen(str1) + my_strlen(str2)));
    while (nb1[i]) {
        j = 0;
        ret = 0;
        while (nb2[j]) {
            tmp = (ASTD(nb1[i]) * ASTD(nb2[j])) + ret + ASTD(res[i + j]);
            res[i + j] = DTAS(tmp % 10);
            ret = tmp / 10;
            j++;
        }
        if (ret)
            res[i + j] = DTAS(ret);
        i++;
    }
    if (ret)
            res[i + j++ - 1] = DTAS(ret);
    res[i + j - 1] = '\0';
    if (neg)
        my_strcat(res, "-");
    return (remove_zero(my_revstr(res)));
}
