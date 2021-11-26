#include "criterion/criterion.h"

char	*my_strstr(char *str, char const *to_find);

Test(my_strstr, classic)
{
    char *str = "ma bite est grosse";
    char *find = "bite";
    char *res;
    char *res2;

    res = my_strstr(str, find);
    res2 = strstr(str, find);
    cr_assert_str_eq(res, res2);
}

Test(my_strstr, nothing_to_find)
{
    char *str = "la tomate ca fait du bien";
    char *find = "bite";
    char *res;
    char *res2;

    res = my_strstr(str, find);
    res2 = strstr(str, find);
    cr_assert_str_eq(res, res2);
}
