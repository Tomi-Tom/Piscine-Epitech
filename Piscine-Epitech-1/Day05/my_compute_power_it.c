/*
** EPITECH PROJECT, 2021
** MY_COMPUTE_POWER_IT
** File description:
** return an int powered by another int
*/

int     my_compute_power_it(int nb ,int p)
{
    int res = 1;

    if (p == 0)
        return (0);
    if (p == 1)
        return (nb);
    while (p > 0) {
        res = res * nb;
        p--;
    }
    return (res);
}
