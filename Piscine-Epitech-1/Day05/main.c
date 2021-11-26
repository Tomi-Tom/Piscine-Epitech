#include "stdio.h"
#include "unistd.h"
#include "stdlib.h"

int		my_compute_factorial_it(int nb);
int		my_compute_factorial_rec(int nb);
int		my_compute_power_it(int nb , int p);
int		my_compute_power_rec(int nb , int p);
int		my_compute_square_root(int nb);
int		my_is_prime(int nb);
int		my_find_prime_sup(int nb);

int		main(int ac, char **av)
{
	if (ac == 3) {
		printf("%d\n", my_compute_factorial_it(atoi(av[1])));
		printf("%d\n", my_compute_factorial_it(atoi(av[1]) + 1));
		printf("%d\n", my_compute_factorial_it(atoi(av[1]) + 2));
		printf("%d\n", my_compute_factorial_rec(atoi(av[1])));
		printf("%d\n", my_compute_factorial_rec(atoi(av[1]) + 1));
		printf("%d\n", my_compute_factorial_rec(atoi(av[1]) + 2));
		printf("%d\n", my_compute_power_it(atoi(av[1]),atoi(av[2])));
		printf("%d\n", my_compute_power_rec(atoi(av[1]),atoi(av[2])));
		printf("%d racine de %d\n", atoi(av[1]), my_compute_square_root(atoi(av[1])));
		printf("%d is_prime retourne : %d\n", atoi(av[1]), my_is_prime(atoi(av[1])));
		printf("%d find_prime retourne : %d\n", atoi(av[1]), my_find_prime_sup(atoi(av[1])));
	}
}
