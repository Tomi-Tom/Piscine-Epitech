#include "criterion/criterion.h"

int		my_str_isprintable(char *str);

Test(my_str_isprintable, global_test)
{
    char str[] = "qfejqofjoqmfqoioiqqioiufnqi q[] cq; q' ]302r 902t9t 0280 482!)$(!)%* 159 051 0150fn";
    int t1 = 0;

    t1 = my_str_isprintable(str);
    cr_assert_eq(t1, 1);
}
