/*
** EPITECH PROJECT, 2021
** DO_OP
** File description:
** une calculatrice
*/

#include "../include/my.h"
#include "../include/do-op.h"

int		is_operateur(char c)
{
	if (c == '+')
		return (1);
	if (c == '-')
		return (2);
	if (c == '*')
		return (3);
	if (c == '/')
		return (4);
	if (c == '%')
		return (5);
	return (0);
}

void	display_res(int res)
{
}

int		do_op(char **av)
{
	int i = 0;
	int op = 0

	if (is_operateur(av) == 0)
		return (0)
	
}

int		main(int ac, char **av)
{
	int res = 0;

	if (av == 4){
		do_op(av);
	}
	return 0;
}
