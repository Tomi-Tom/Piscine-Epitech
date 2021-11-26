/*
** EPITECH PROJECT, 2021
** MY_ITOA_C
** File description:
** convert an int into a string
*/

#include "my.h"

int     my_nbrlen(int nb)
{
    int i = 1;

    if (nb < 0) {
        nb = nb * -1;
        i++;
    }
    while (nb >= 10) {
        i++;
        nb = nb / 10;
    }
    return (i);
}

char    *my_itoa(int nb)
{
    int n = nb;
    int i = my_nbrlen(n);
    char *str = malloc(sizeof(char) * (i + 1));

    str[i--] = '\0';
    if (n == 0) {
        str[0] = 48;
        return (str);
    }
<<<<<<< HEAD
    n < 0 ? n = n * -1 : n;
=======
>>>>>>> b093fa4b14b65a1f943fd64b0d1c767b81564ae5
    if (n < 0) {
        str[0] = '-';
    }
    while (n > 0) {
<<<<<<< HEAD
        str[i--] = 48 + (n % 10);
=======
        str[i] = 48 + (n % 10);
>>>>>>> b093fa4b14b65a1f943fd64b0d1c767b81564ae5
        n = n / 10;
    }
    return (str);
}