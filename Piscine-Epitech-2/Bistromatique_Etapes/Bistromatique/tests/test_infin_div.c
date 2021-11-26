/*
** EPITECH PROJECT, 2021
** TEST_INFIN_DIV_C
** File description:
** unit test in infin_div
*/

#include <criterion/criterion.h>
#include "bistromatic.h"

Test(infin_div, do_simple_div)
{
    cr_assert_str_eq(infin_div("6", "2"), "3");
}

Test(infin_div, do_simple_div_2)
{
    cr_assert_str_eq(infin_div("8", "2"), "4");
}

Test(infin_div, do_simple_div_3)
{
    cr_assert_str_eq(infin_div("7", "3"), "2");
}

Test(infin_div, do_simple_div_4)
{
    cr_assert_str_eq(infin_div("8", "4"), "2");
}

Test(infin_div, do_normal_div)
{
    cr_assert_str_eq(infin_div("458", "21"), "21");
}

Test(infin_div, do_normal_div_2)
{
    cr_assert_str_eq(infin_div("123456789", "456"), "270738");
}
