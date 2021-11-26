#include "criterion/criterion.h"

int 	my_strncmp(char *s1, char *s2, int n);

Test(my_strncmp, same_strings)
{
    char *str = "Terrible";
    char *find = "Terrible";
    int  res;
    int	 res2;

    res = my_strncmp(str, find, 7);
    res2 = strncmp(str, find, 7);
    cr_assert_eq(res, res2);
}

Test(my_strncmp, differents_strings)
{
    char *str = "Terrible";
    char *find = "Tomate";
    int  res;
    int  res2;

    res = my_strncmp(str, find, 5);
    res2 = strncmp(str, find, 5);
    cr_assert_neq(res, res2);
}
