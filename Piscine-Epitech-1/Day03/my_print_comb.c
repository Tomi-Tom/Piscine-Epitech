/*
** EPITECH PROJECT, 2021
** MY_PRINT_COMB_C
** File description:
** displays, in ascending order, all the numbers with 3 digits
*/

void	my_putchar(char c);

int    	my_add(int i, int j, int k)
{
    while (k <= 9) {
        my_putchar(48 + i);
        my_putchar(48 + j);
        my_putchar(48 + k);
        if (!(i == 7 && j == 8 && k == 9)) {
            my_putchar(',');
            my_putchar(' ');
        } k++;
    }
}

int    	my_print_comb(void)
{
    int i;
    int j;
    int k;

    i = 0;
    j = 1;
    k = 2;
    while (i <= 7) {
        while (j <= 8) {
            my_add(i, j, k);
            k = j + 2;
            j++;
        } j = i + 1;
        i++;
    } return (0);
}
