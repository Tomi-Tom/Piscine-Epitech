/*
** EPITECH PROJECT, 2021
** INFIN_DIV_C
** File description:
** do infinite division
*/

#include "bistromatic.h"

int is_greater_s(char const *n1, char const *n2)
{
    int i = 0;
    int j = 0;

    remove_sub(n1);
    remove_sub(n2);
    if (my_strlen(n1) > my_strlen(n2))
        return 1;
    if (my_strlen(n2) > my_strlen(n1))
        return 0;
    while (n1[i] == n2[j]) {
        i++;
        j++;
    }
    printf("%c et %c sont comparer\n", n1[i], n2[i]);
    if (n1[i] > n2[j])
        return 1;
    return 0;
}

void str_npos_for_calc(char *ptr, char const *nb, int n)
{
    ptr[n] = nb[n];
    ptr[n + 1] = '\0';
}

void modif(char *nb, char *tot)
{
    my_revstr(nb);
    nb = my_strcat(nb, "-");
    my_revstr(nb);
    nb = infin_sub(nb, tot);
    nb = remove_sub(nb);
}

void do_div(char *nb1, char *nb2, char *res, int n)
{
    char *tot = malloc((my_strlen(nb1) + 1) * sizeof(char));
    int i = 0;

    tot = "0\0";
    while (is_greater_s(nb1, tot)) {
        tot = infin_add(tot, nb2);
        i++;
    }
    if (is_greater_s(tot, nb1)) {
        i--;
    }
    res[n] = DTAS(i);
    res[n + 1] = '\0';
    free(tot);
}

char *infin_div(char const *nb1, char const *nb2)
{
    char *res = malloc((my_strlen(nb1) + 1) * sizeof(char));
    char *tmp1 = my_strdup(nb1);
    char *tmp2 = my_strdup(nb2);
    int i = 0;

    printf("\n\n\n===================[DEBUT DE LA DIV]===================\n\n");
    printf("%s / %s = ?\n", nb1, nb2);
    printf("\n\nnb1 = %s\n", nb1);
    while (nb1[i]) {
        str_npos_for_calc(tmp1, nb1, i);
        printf("PRE DIV | tmp1[%d] = %c | tmp1 = %s\n", i, tmp1[i], tmp1);
        do_div(tmp1, tmp2, res, i);
        printf("POST DIV | tmp1[%d] = %c | tmp1 = %s\n", i, tmp1[i], tmp1);
        printf("RES TEMP | res = %s\n", res);
        i++;
    }
    printf("\nRES FINALE | res = %s\n\n", res);
    free(tmp1);
    free(tmp2);
    free(res);
    printf("\n\n====================[FIN DE LA DIV]====================\n\n");
    return (tmp1);
}
