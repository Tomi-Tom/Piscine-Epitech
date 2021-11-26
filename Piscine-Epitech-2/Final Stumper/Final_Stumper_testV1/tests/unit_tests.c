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
	char str[] = "o---o\n|   |\n|   |\n|   |\no---o\n";

	tab = my_str_to_word_array(str);
	cr_assert_str_eq(find_type(tab), "[rush1-1] ");
}

Test(find_type, find_rush1_2_with_normal_case)
{
	char **tab;
	char str[] = "/***/\n|   |\n|   |\n|   |\n/---/\n";

	tab = my_str_to_word_array(str);
	cr_assert_str_eq(find_type(tab), "[rush1-2] ");
}

Test(find_type, find_rush1_3_with_normal_case)
{
	char **tab;
	char str[] = "A---A\n|   |\n|   |\n|   |\nC---C\n";

	tab = my_str_to_word_array(str);
	cr_assert_str_eq(find_type(tab), "[rush1-3] ");
}

Test(find_type, find_rush1_4_with_normal_case)
{
	char **tab;
	char str[] = "A---C\n|   |\n|   |\n|   |\nA---C\n";

	tab = my_str_to_word_array(str);
	cr_assert_str_eq(find_type(tab), "[rush1-4] ");
}

Test(find_type, find_rush1_5_with_normal_case)
{
	char **tab;
	char str[] = "A---C\n|   |\n|   |\n|   |\nC---A\n";

	tab = my_str_to_word_array(str);
	cr_assert_str_eq(find_type(tab), "[rush1-5] ");
}

Test(find_size, find_a_large_size)
{
	char **tab;
	char str[] = "XXXXXXXXXX\nXXXXXXXXXX\nXXXXXXXXXX\nXXXXXXXXXX\nXXXXXXXXXX\nXXXXXXXXXX\nXXXXXXXXXX\nXXXXXXXXX\nXXXXXXXXXX\nXXXXXXXXXX\n";

	tab = my_str_to_word_array(str);
	cr_assert_str_eq(find_size(tab), "10 10\n");
}

Test(find_size, find_the_smallest_size)
{
	char **tab;
	char str[] = "X\n";

	tab = my_str_to_word_array(str);
	cr_assert_str_eq(find_size(tab), "1 1\n");
}

Test(find_type, find_every_rush_with_1_1_B)
{
	char **tab;
	char str[] = "B\n";

	tab = my_str_to_word_array(str);
	cr_assert_str_eq(find_type(tab), "[rush1-3] || [rush1-4] || [rush1-5] ");
}
