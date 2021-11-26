/*
** EPITECH PROJECT, 2021
** Tests infin_sub
** File description:
** Tests
*/

#include <criterion/criterion.h>
#include "bistromatic.h"

Test(infini_sub, do_simple_sub)
{
    cr_assert_str_eq(infin_sub("42", "-12"), "30");
}

Test(infini_sub, do_simple_sub_inv)
{
    cr_assert_str_eq(infin_sub("-42", "12"), "-30");
}

Test(infini_sub, do_simple_sub_diff_string)
{
    cr_assert_str_eq(infin_sub("110", "-50"), "60");
}

Test(infini_sub, do_simple_sub_diff_string_inv)
{
    cr_assert_str_eq(infin_sub("-110", "5"), "-105");
}

Test(infini_sub, do_simple_sub_result_is_diferent_size)
{
    cr_assert_str_eq(infin_sub("1000", "-1"), "999");
}

Test(infini_sub, do_simple_sub_res_is_null)
{
    cr_assert_str_eq(infin_sub("1000", "-1000"), "0");
}

Test(infin_sub, negative_values)
{
    cr_assert_str_eq(infin_sub("-42", "27"), "-15");
    cr_assert_str_eq(infin_sub("42", "-27"), "15");
    cr_assert_str_eq(infin_sub("-42", "0"), "-42");
    cr_assert_str_eq(infin_sub("83", "-83"), "0");
    cr_assert_str_eq(infin_sub("1000", "-100"), "900");                                                                             
    cr_assert_str_eq(infin_sub("100", "-1000"), "-900");
}

Test(infin_sub, big_tests)
{
    cr_assert_str_eq(infin_sub("5544634646834632154632154321543215446213543154", "2"), "5544634646834632154632154321543215446213543152");
}
