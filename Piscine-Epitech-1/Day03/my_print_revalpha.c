/*
** EPITECH PROJECT, 2021
** MY_PRINT_REVALPHA_C
** File description: 
** displays lowercase alphabet in descending order
*/

void	my_putchar(char c);

int    	my_print_revalpha(void)
{
    int i;

    i = 25;
    while (i >= 0) {
        my_putchar(97 + i);
        i--;
    } return (0);
}
