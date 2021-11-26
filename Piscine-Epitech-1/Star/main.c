#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

void	star(unsigned int size);

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	while (i < ac) {
		printf("\n---------------- etoile de %d -------------------\n\n", atoi(av[i]));
		star(atoi(av[i]));
		printf("\n-------------------------------------------------\n");
		i++;
	}
	return (0);
}
