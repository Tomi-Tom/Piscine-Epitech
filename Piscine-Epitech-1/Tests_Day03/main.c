#include "unistd.h"

int		my_print_alpha(void);
int		my_print_revalpha(void);
int		my_print_digits(void);
int		my_isneg(int n);
int		my_print_comb(void);
int		my_print_comb2(void);
int		my_put_nbr(int nb);

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	my_print_alpha();
	my_putchar('\n');
	my_putchar('\n');
	my_print_revalpha();
	my_putchar('\n');
	my_putchar('\n');
	my_print_digits();
	my_putchar('\n');
	my_putchar('\n');
	my_isneg(50);
	my_putchar('\n');
	my_isneg(1);
	my_putchar('\n');
	my_isneg(0);
	my_putchar('\n');
	my_isneg(-1);
	my_putchar('\n');
	my_isneg(-50);
	my_putchar('\n');
	my_putchar('\n');
	my_print_comb();
	my_putchar('\n');
	my_putchar('\n');
	my_print_comb2();
	my_putchar('\n');
	my_putchar('\n');
	my_put_nbr(0);
	my_putchar('\n');
	my_put_nbr(126);
	my_putchar('\n');
	my_put_nbr(-265);
	my_putchar('\n');
	my_put_nbr(-2147483647);
	my_putchar('\n');
	my_put_nbr(2147483646);
	my_putchar('\n');
	my_putchar('\n');
	return(0);
}
