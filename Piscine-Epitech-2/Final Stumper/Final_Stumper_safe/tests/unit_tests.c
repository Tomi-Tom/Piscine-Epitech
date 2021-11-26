/*
** EPITECH PROJECT, 2021
** UNIT_TESTS
** File description:
** UNIT_TEST
*/

#include "criterion/criterion.h"
#include "stumper.h"

Test(find_size, find_a_small_size)
{
	char **tab;
	char str[] = "XXXXX\nXXXXX\nXXXXX\nXXXXX\nXXXXX";

	tab = my_str_to_word_array(str);
	cr_assert_str_eq(find_size(tab), "5 5\n");
}

Test(find_type, find_rush1_1_with_normal_case)
{
	char **tab;
	char str[] = "o---o\n|   |\n|   |\n|   |\no---o";

	tab = my_str_to_word_array(str);
	cr_assert_str_eq(find_type(tab), "[rush1-1] ");
}
