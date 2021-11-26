/*
** EPITECH PROJECT, 2021
** MY_ATOI
** File description:
** take number without sign
*/

int     number(char **str)
{
    int nbr;

    nbr = 0;
    while (**str >= '0' && **str <= '9') {
        nbr = nbr * 10 + (**str - '0');
        (*str)++;
    }
    return (nbr);
}
