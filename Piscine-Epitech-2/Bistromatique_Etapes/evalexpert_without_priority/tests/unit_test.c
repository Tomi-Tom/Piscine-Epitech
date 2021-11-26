/*
** EPITECH PROJECT, 2021
** TEST_C
** File description:
** unit test for infinadd
*/

#include "../include/eval_expr.h"
#include "criterion/criterion.h"

Test(eval_expr, simple_add)
{
    char str[] = "5+5";

    cr_assert_eq(eval_expr(str), 10);
}

Test(eval_expr, simple_sub)
{
    char str[] = "5-3";

    cr_assert_eq(eval_expr(str), 2);
}

Test(eval_expr, simple_mult)
{
	char str[] = "7*6";

	cr_assert_eq(eval_expr(str), 42);
}

Test(eval_expr, simple_div)
{
	char str[] = "9/2";

	cr_assert_eq(eval_expr(str), 4);
}

Test(eval_expr, simple_modulo)
{
	char str[] = "9%5";

	cr_assert_eq(eval_expr(str), 4);
}

Test(eval_expr, simple_operation)
{
	char str[] = "9+5-2+7+2";

	cr_assert_eq(eval_expr(str), 21);
}

Test(eval_expr, simple_operation_with_1_parenthese)
{
	char str[] = "9+5-2*7+2+(7+8*2)";

	cr_assert_eq(eval_expr(str), 25);
}

Test(eval_expr, simple_operation_with_some_parentheses)
{
	char str[] = "9+5-2*7+2-(1*5+5+9/(5-7*8)+1-6)+4-(2+4)";

	cr_assert_eq(eval_expr(str), -5);
}

Test(eval_expr, simple_operation_with_numbers)
{
	char str[] = "957+5474";

	cr_assert_eq(eval_expr(str), 6431);
}
