/*
** EPITECH PROJECT, 2021
** MY_BASE_TO_BASE_C
** File description:
** convert something from a base to a base
*/

int my_nbrlen(int nb)
{
    int i = 1;

    if (nb < 0) {
        nb *= -1;
        i++;
    }
    while (nb > 10) {
        i++;
        nb /= 10;
    }
    return (i);
}

char *my_itoa(int nb)
{
    char *str;
    int n = nb;
    int i = my_nbrlen(n);

    str = malloc(sizeof(char) * (i + 1));
    str[i--] = '\0';
    if (n == 0) {
        str[0] = 48;
        return (str);
    }
    if (n < 0) {
        str[0] = '-';
        n *= -1;
    }
    while (n > 0) {
        str[i] = 48 + (n % 10);
        n /= 10;
        i--;
    }
    return (str);
}

long long calc_base(char c, char *base, int p)
{
    int i = 1;
    int res = 0;
    int len = my_strlen(base);

    while (base[i] != c)
        i++;
    res = i * my_compute_power_rec(len, p);
    return (res);
}

char *base_to_dec(char *str, char *from)
{
    int i = 0;
    long long tmp = 0;
    int nb_base = my_strlen(from);
    char *res;

    my_revstr(str);
    while (str[i]) {
        tmp += calc_base(str[i], from, i);
        i++;
    }
    return (my_itoa(tmp));
}
