#include <criterion/criterion.h>

int     cat(int ac, char **av);

Test(my_cat, cat_an_existing_file)
{
	cr_assert_eq(0, 0);
}
