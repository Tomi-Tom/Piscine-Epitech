/*
** EPITECH PROJECT, 2021
** INFINADD_H_
** File description:
** all include for infinadd
*/

#ifndef INFINADD_H_
# define INFINADD_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

#define DTOA(x) (x + '0')
#define ATOD(x) (x - '0')
#define ABS_ACC(x) ((x) >= 10 ? 1 : 0)
#define LIMNUM(x) ((x) >= 10 ? x - 10 : x)
#define REA(x) ((x) < 0 ? (10 + (x)) : (x))


char    *infinadd(char const *nb1, char const *nb2, int i);
char    *infinsub(char const *nb1, char const *nb2, int i);
void    set_format(char *str);
int     check_error(char const *s1, char const *s2);


#endif
