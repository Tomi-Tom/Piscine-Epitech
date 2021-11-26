/*
** EPITECH PROJECT, 2021
** PARAMS_TO_ARRAY
** File description:
** copy parametters to array
*/

#include "include/my.h"

struct info_param *my_params_to_array(int ac , char **av)
{
    int i = 0;
    int j = 0;
    struct info_param *par;

    while (i < ac) {
        par[i].length = my_strlen(av[i]);
		par[i].str = av[i];
        while (av[i][j]) {
			par[i].copy[j] = av[i][j];
        }
		par[i].copy[j] = '\0';
		j = 0;
		par[i].word_array = my_str_to_word_array(av[i]);
        i++;
    }
}
