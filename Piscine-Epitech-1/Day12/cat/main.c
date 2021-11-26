/*
** EPITECH PROJECT, 2021
** CAT_C
** File description:
** remake cat shell function in C
*/

#include "../include/cat.h"

int     cat(int ac, char **aV);

void    my_putchar_err(char c)
{
	write(2, &c, 1);
}

void    my_putstr_err(char *str)
{
	int i = 0;

	while (str[i]) {
		my_putchar_err(str[i]);
		i++;
	}
}

int     is_error(int fd, char *av)
{
    if (fd == -1) {
		my_putstr_err("my_cat: ");
		my_putstr_err(av);
        my_putstr_err(": No such file or directory\n");
        return (84);
    }
    return 0;
}

int     main(int ac, char **av)
{
    char buf[2048];
    int r = 0;
	int err = 0;

	if (ac == 1)
		while (r = read(0, buf, 2048))
			write(1, buf, r);
    err = cat(ac, av);
    return (err);
}
