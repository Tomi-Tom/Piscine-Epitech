/*
** EPITECH PROJECT, 2021
** my_compute_factorial_it_c
** File description:
** return the factorial of the number
*/

int    	my_compute_factorial_it(int nb)
{
    int res = 1;

    if (nb == 0)
        return (1);
    if (nb < 0 || nb > 12)
        return (0);
    while (nb >= 1) {
        res = res * nb;
        nb--;
    }
    return (res);
}
