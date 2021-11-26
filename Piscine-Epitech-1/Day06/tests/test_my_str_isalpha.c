#include "criterion/criterion.h"

int		my_str_isalpha(char *str);

Test(my_str_isalpha, global_test)
{
    char str[] = "IncroyableYaQueDesCaracteresALPHA";
    int t1 = 0;

    t1 = my_str_isalpha(str);
    cr_assert_eq(t1, 1);
}
