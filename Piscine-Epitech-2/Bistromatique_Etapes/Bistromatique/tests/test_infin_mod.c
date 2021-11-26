/*
** EPITECH PROJECT, 2021
** TEST_INFIN_MOD_C
** File description:
** unit test for infinite modulo
*/

#include <criterion/criterion.h>
#include "bistromatic.h"

Test(infin_mod, do_simple_modulo)
{
    cr_assert_str_eq(infin_mod("7", "3"), "1");
}

Test(infin_mod, do_simple_modulo2)
{
    cr_assert_str_eq(infin_mod("12", "7"), "5");
}

Test(infin_mod, do_simple_modulo3)
{
    cr_assert_str_eq(infin_mod("8", "2"), "0");
}

Test(infin_mod, do_simple_modulo4)
{
    cr_assert_str_eq(infin_mod("10", "10"), "0");
}
