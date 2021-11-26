/*
** EPITECH PROJECT, 2021
** test_infini_mult
** File description:
** desc
*/

#include <criterion/criterion.h>
#include "my.h"
#include "infin_add.h"
#include "bistromatic.h"

Test(infin_mult, contains_zero)
{
    cr_assert_str_eq(infin_mult("0", "42"), "0");
}

Test(infin_mult, contains_zero2)
{
    cr_assert_str_eq(infin_mult("658368565822", "0"), "0");
}

Test(infin_mult, contains_zero3)
{
    cr_assert_str_eq(infin_mult("0", "658368565822"), "0");
}

Test(infin_mult, contains_zero4)
{
    cr_assert_str_eq(infin_mult("0", "0"), "0");
}

Test(infin_mult, same_number_digits)
{
    cr_assert_str_eq(infin_mult("3", "5"), "15");
}

Test(infin_mult, same_number_digits2)
{
    cr_assert_str_eq(infin_mult("10", "3"), "30");
}

Test(infin_mult, same_number_digits3)
{
    cr_assert_str_eq(infin_mult("42", "69"), "2898");
}

Test(infin_mult, classic_mult)
{
    cr_assert_str_eq(infin_mult("2", "64"), "128");
}

Test(infin_mult, classic_mult2)
{
    cr_assert_str_eq(infin_mult("5", "100"), "500");
}

Test(infin_mult, negative_mult)
{
    cr_assert_str_eq(infin_mult("-5", "100"), "-500");
}

Test(infin_mult, negative_mult2)
{
    cr_assert_str_eq(infin_mult("5", "-100"), "-500");
}

Test(infin_mult, negative_mult3)
{
    cr_assert_str_eq(infin_mult("-5", "-100"), "500");
}
