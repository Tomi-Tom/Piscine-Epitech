#include "stdlib.h"
#include "unistd.h"
#include "stdio.h"

void 	my_swap(int *a, int *b);
int 	my_putstr(char const *str);
int		my_strlen(char const *str);
char 	*my_evil_str(char *str);
int 	my_getnbr(char const *str);
void	my_sort_int_array(int *array, int size);

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int a;
	int b;
	int i;
	char str[5] = "truc";
	char *str2 = "2147483648";
	char *str3 = "-2147483649";
	int tableau[6];
	int j = 0;

	tableau[0] = 5;
	tableau[1] = 3;
	tableau[2] = 4;
	tableau[3] = 1;
	tableau[4] = 6;
	tableau[5] = 2;
	a = 1;
	b = 2;
	i = 6;
	printf("\nvoici a : %d | voici b : %d\n", a, b);
	my_swap(&a, &b);
	printf("\nvoici a : %d | voici b : %d\n\n", a, b);
	my_putstr("\nj'ai une grosse ball\n");
	printf("\nvoici le strlen de -truc- : %d\n\n", my_strlen(str));
	printf("%s\n\n", str);
	printf("%s\n", my_evil_str(str));
	printf("getnbr : %d\n", my_getnbr(str2));
	printf("getnbr : %d\n\n", my_getnbr(str3));
	while (j++ != i) {
		printf("%d, \n", tableau[j]);
	}
	printf("\n");
	my_sort_int_array(tableau, i);
	j = 0;
	while (j++ != i) {
		printf("%d, \n", tableau[j]);
	}

}
