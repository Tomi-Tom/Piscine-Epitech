#include "criterion/criterion.h"

int		my_str_islower(char *str);

Test(my_str_islower, global_test)
{
    char str[] = "qfejqofjoqmfqoioiqqioiufnqifn";
    int t1 = 0;

    t1 = my_str_islower(str);
    cr_assert_eq(t1, 1);
}
