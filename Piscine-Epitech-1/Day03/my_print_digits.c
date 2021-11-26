/*
** EPITECH PROJECT, 2021
** MY_PRINT_DIGITS
** File description:
** displays all the digits, on a single line, in ascending order.
*/

void	my_putchar(char c);

int    	my_print_digits(void)
{
    int	i;

    i = 48;
    while (i <= 57) {
        my_putchar(i);
        i++;
    } return (0);
}
