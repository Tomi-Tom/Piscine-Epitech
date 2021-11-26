/*
** EPITECH PROJECT, 2021
** MY_PRINT_COMB2_C
** File description:
** displays in ascending order all combinations of 2 2-digit numbers
*/

void	my_putchar(char c);

void	print_number(int i)
{
    int first;
    int second;

    first = 0;
    second = 0;
    while (i % 10 != 0) {
        i--;
        second++;
    } first = i / 10;
    my_putchar(first + 48);
    my_putchar(second + 48);
}

int    	my_add2(int i, int j)
{
    while (j <= 99) {
        print_number(i);
        my_putchar(' ');
        print_number(j);
        if (!(j == 99 && i == 98)) {
            my_putchar(',');
            my_putchar(' ');
        } j++;
    }
}

int    	my_print_comb2(void)
{
    int i;
    int j;

    i = 0;
    j = 1;
    while (i <= 98) {
        my_add2(i, j);
        i++;
        j = i + 1;
    }
}
