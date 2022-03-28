/*
** EPITECH PROJECT, 2021
** TEST_C
** File description:
** unit test for infinadd
*/

#include "../include/infinadd.h"
#include "criterion/criterion.h"

Test(infinadd, add_by_zero)
{
	cr_assert_str_eq(infinadd("0","0", 0), "0");
}

Test(infinadd, add_by_one)
{
	cr_assert_str_eq(infinadd("4","1", 0), "5");
}

Test(infinadd, add_by_one_other)
{
	cr_assert_str_eq(infinadd("1","4", 0), "5");
}

Test(infinadd, add_res_sup_ten)
{
	cr_assert_str_eq(infinadd("7","6", 0), "13");
}

Test(infinadd, add_by_more_than_ten)
{
	cr_assert_str_eq(infinadd("42","5", 0), "47");
}

Test(infinadd, add_by_more_than_ten_other)
{
	cr_assert_str_eq(infinadd("6","42", 0), "48");
}

Test(infinadd, add_by_really_big_number)
{
	cr_assert_str_eq(infinadd("4187549571747","123467979794618754", 0), "123472167344190501");
}

Test(infinadd, retenu_reporter_sur_grand_nombre)
{
	cr_assert_str_eq(infinadd("999","1", 0), "1000");
}

Test(infinadd, add_exemple_subject)
{
	cr_assert_str_eq(infinadd("435439435845843984358439","45359766785665822182412343254343435433339459569", 0), "45359766785665822182412778693779281277323818008");
}

Test(infinadd, two_sub)
{
	cr_assert_str_eq(infinadd("60","40", 1), "-100");
}

Test(infinadd, one_sub)
{
	cr_assert_str_eq(infinsub("6","42", -1), "36");
}

Test(infinadd, one_sub_other)
{
	cr_assert_str_eq(infinsub("24","20", -2), "4");
}
