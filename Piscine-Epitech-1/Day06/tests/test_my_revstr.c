#include "criterion/criterion.h"

char	*my_revstr(char *str);

Test(my_revstr, rev_string_empty)
{
    char *str = "";
    char *res;

    res = my_revstr(str);
    cr_assert_str_eq(res, "");
}

Test(my_revstr, rev_palindrome)
{
    char str[] = "kayak";
    char *res;

    res = my_revstr(str);
    cr_assert_str_eq(res, "kayak");
}

Test(my_revstr, rev_string_Bonjour_monde)
{
    char str[] = "Bonjour monde";
    char *res;

    res = my_revstr(str);
    cr_assert_str_eq(res, "ednom ruojnoB");
}

Test(my_revstr, rev_chaine_caracteres_speciaux)
{
    char str[] = "\t\n\r\v\f\\\\\\\n";
    char *res;

    res = my_revstr(str);
    cr_assert_str_eq(res, "\n\\\\\\\f\v\r\n\t");
}
