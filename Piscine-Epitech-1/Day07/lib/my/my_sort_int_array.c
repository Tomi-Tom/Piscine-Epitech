/*
** EPITECH PROJECT, 2021
** MY_SORT_INT_ARRAY_C
** File description:
** on tri des int par ordre croissant
*/

void    my_swap(int *a, int *b);

void    my_sort_int_array(int *array , int size)
{
	int i = 0;
	int err = 1;

	while (err != 0) {
		err = 0;
		while (i < size - 1 ) {
			if (array[i] > array[i + 1]) {
				my_swap(&array[i], &array[i + 1]);
				err++;
			}
			i++;
		}
		i = 0;
	}
}
