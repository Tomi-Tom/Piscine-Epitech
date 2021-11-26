/*
** EPITECH PROJECT, 2021
** STUMPER_H_
** File description:
** all include for stumper
*/

#ifndef STUMPER_H_
#define STUMPER_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

#define BUFF_SIZE = 1

int		read_std_input(void);
char	*find_size(char **tab);
char	*find_type(char **str);

#endif
