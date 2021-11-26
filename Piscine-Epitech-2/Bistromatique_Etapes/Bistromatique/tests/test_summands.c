/*
** EPITECH PROJECT, 2021
** Tests summands
** File description:
** Tests
*/

#include <criterion/criterion.h>
#include "eval_expr.h"
#include "bistromatic.h"

Test(summands, basic_test)
{
    char *str = "-3";

    cr_assert_str_eq(summands(&str), "-3");
}

Test(summands, mid_test)
{
    char *str = "-3-8+1";

    cr_assert_str_eq(summands(&str), "-10");
}

Test(summands, advanced_test)
{
    char *str = "42+25+1+6+9+76+36-10-1";

    cr_assert_str_eq(summands(&str), "184");
}

Test(summands, full_minus_test)
{
    char *str = "-42--2";

    cr_assert_str_eq(summands(&str), "-40");
}
