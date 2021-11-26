/*
** EPITECH PROJECT, 2021
** CAT_C
** File description:
** remake cat shell function in C
*/

#include "../include/cat.h"

void    my_putstr_err(char *str)
{
	int i = 0;

	while (str[i]) {
		write(2, &str[i], 1);
		i++;
	}
}

int     is_error(int fd, char *av, int err)
{
    if (fd == -1) {
		my_putstr_err("cat: ");
		my_putstr_err(av);
        my_putstr_err(": No such file or directory\n");
        return (84);
    }
	if (err == 0)
    	return 0;
	else
		return 84;
}

int     cat(int ac, char **av)
{
    int i = 1;
    int fd = 0;
    char buf[2048];
    int err = 0;
    int r;

	if (ac == 1)
		while (r = read(0, buf, 2048))
			write(1, buf, r);
    while (i < ac) {
		fd = open(av[i], O_RDONLY);
        err = is_error(fd, av[i], err);
        while ((r = read(fd, buf, 2048)) > 0)
            write(1, buf, r);
        i++;
        fd = close(fd);
    }
    return (err);
}

int    main(int ac, char **av)
{
	return (cat(ac, av));
}
