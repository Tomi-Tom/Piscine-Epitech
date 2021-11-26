/*
** EPITECH PROJECT, 2021
** Tests new_number
** File description:
** Tests
*/

#include <criterion/criterion.h>
#include "bistromatic.h"
#include "eval_expr.h"

Test(new_number, basic_test)
{
    char *str = "42+25";

    cr_assert_str_eq(new_number(&str), "42");
    cr_assert_str_eq(str, "+25");
}

Test(new_number, complex_example)
{
    char *str = "423058996558935697-6976";

    cr_assert_str_eq(new_number(&str), "423058996558935697");
    cr_assert_str_eq(str, "-6976");
}

Test(new_number, negative_example)
{
    char *str = "-6155459621452554565256524524522462+98215*28415/264";

    cr_assert_str_eq(new_number(&str), "-6155459621452554565256524524522462");
    cr_assert_str_eq(str, "+98215*28415/264");
}
