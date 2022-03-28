/*
** EPITECH PROJECT, 2021
** MY_PUTSTR_C
** File description:
** do a putstr
*/

void    my_putchar(char c);

int     my_putstr(char const *str)
{
    int i;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}
