/*
** EPITECH PROJECT, 2021
** CAT_C
** File description:
** remake cat shell function in C
*/

#include "../include/cat.h"

int		is_error(int fd, char *av);

int     cat(int ac, char **av)
{
	int r;
	char *buf;
	int fd;
	int i = 1;
	int err = 0;

    while (i < ac) {
        fd = open(av[i], O_RDONLY);
		if (err == 0)
        	err = is_error(fd, av[i]);
		else
			is_error(fd, av[i]);
        while ((r = read(fd, buf, 2)) > 0)
            write(1, buf, r);
        i++;
        fd = close(fd);
    }
	return (err);
}
