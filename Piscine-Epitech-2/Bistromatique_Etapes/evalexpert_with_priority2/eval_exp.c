/*
** EPITECH PROJECT, 2021
** eval_expr
** File description:
** eval_expr function
*/

#include "eval_expr.h"

int     is_str_one(char *str)
{
    int i = 0;

    if (str[i] == '-')
        i++;
    while (str[i] >= '0' && str[i] <= '9' && str[i])
        i++;
    if (str[i])
        return 0;
    else
        return 1;
}

char     *cut_before(char *str, int pri)
{
    int i = 0;
    char *cut = malloc(sizeof(char) * (my_strlen(str)));

    while (i + 1 < pri) {
        cut[i] = str[i];
        i++;
    }
    return (cut);
}

stock_t  cut_expr(char *str, int pri, stock_t cat)
{
    int i = pri;
    int j = 0;
    char *cut = malloc(sizeof(char) * (my_strlen(str)));

    if (str[i] == '-')
        i++;
    while (is_num(str[i])) {
        i++;
    }
    i++;
    while (is_num(str[i])) {
        i++;
    }
    while (str[i + j]){
        cut[j] = str[i + j];
        j++;
    }
    cut[i + j] = '\0';
    cat.before = cut_before(str, pri);
    cat.next = my_strdup(cut);
    return (cat);
}

int     is_par_one(char *str)
{
	int i = 0;
	int j = 1;

    printf("-----IS_PAR_ONE---\nLA STRING A TRAITER str = %s\n", str);
	while (str[i])
	{
        printf("str[%d] = %c\n", i, str[i]);
		if (str[i] == '(') {
            printf("on passe dans le if (\n");
			while(is_num(str[i + j])) {
                printf("on check apres la ( str[%d] = %c\n", i + j, str[i + j]);
				j++;
			}
            printf("post check if num str[i + j] = %c\n", str[i + j]);
			if (str[i + j] == ')') {
				return i;
			}
            printf("on a fini le if (\n");
		}
		i++;
	}
	return 0;
}

char    *do_resize(char *str, int i)
{
	char *ret;
	int j = 0;

    printf("======DO_RESIZE======\n");
	ret = malloc(sizeof(char) * (my_strlen(str) + 1));
	while (j < i) {
		ret[j] = str[j];
		j++;
	}
	j++;
	while (is_num(str[j])) {
		ret[j] = str[j];
	}
	j++;
	while (str[j]) {
		ret[j] = str[j];
		j++;
	}
	ret[j] = '\0';
	printf("voici ret : %s\n", ret);
	return (ret);
}

int     eval_expr(char *str)
{
    int res = 0;
    stock_t cat;
    int pri = 0;
    int i = 0;
    int start;

    while (!(is_str_one(str))) {
        pri = find_prio(str);
        start = start_prio(str, pri);
        if (start > 0)
            start = start - 1;
        res = do_op_number(str + start);
        cat.now = my_itoa(res);
        cat = cut_expr(str, pri, cat);
        str = my_strcat(cat.before, cat.now);
        str = my_strcat(str, cat.next);
                if (is_par_one(str)) {
			start = is_par_one(str);
			str = do_resize(str, start);
		}
        cat.now = NULL;
        res = 0;
        i++;
    }
    return (my_getnbr(str));
}
