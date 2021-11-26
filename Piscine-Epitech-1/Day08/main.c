
#include "unistd.h"

char	**my_str_to_word_array(char const *str);
int	my_show_word_array(char const **tab);

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int main(int ac, char **av)
{
	char **tab;

	if (ac == 2) {
		tab = my_str_to_word_array(av[1]);
		my_show_word_array((char const **)tab);
	}
	return (0);
}
