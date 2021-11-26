/*
** EPITECH PROJECT, 2021
** FIND_SIZE_C
** File description:
** find the size of the rush
*/

#include "stumper.h"

char	*format_str(char *str, int i, int j)
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
	return (str);
}

char	*find_size(char **tab)
{
	int i = 0;
	int j = 0;
	char *ret;

	while (tab[i]) {
		i++;
	}
	while (tab[0][j]) {
		j++;
	}
	ret = malloc(sizeof(char) * (my_nbrlen(i) + my_nbrlen(j) + 4));
	ret = format_str(ret, i, j);
	printf("%s", ret);
	return (ret);
}
