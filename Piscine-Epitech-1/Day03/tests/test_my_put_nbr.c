/*
** EPITECH PROJECT , 2021
** TESTING PUT_NBR
** File description:
** a main to test my_put_nbr
*/

int		my_put_nbr(int nb);

void	my_putchar(char c);

int		main(void)
{
	my_put_nbr(0);
	my_putchar('\n');
	my_put_nbr(1);
	my_putchar('\n');
	my_put_nbr(-1);
	my_putchar('\n');
	my_put_nbr(666);
	my_putchar('\n');
	my_put_nbr(-2048);
	my_putchar('\n');
	my_put_nbr(-102030);
	my_putchar('\n');
	my_put_nbr(102030);
	my_putchar('\n');
	my_put_nbr(2147483647);
	my_putchar('\n');
	my_put_nbr(-2147483648);
	return (0);
}
