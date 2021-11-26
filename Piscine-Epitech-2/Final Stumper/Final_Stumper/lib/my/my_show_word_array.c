/*
** EPITECH PROJECT, 2021
** SHOW_WORD_ARRAY
** File description:
** show word array
*/

void    my_putchar(char c);

void    my_putstr_array(char const *str)
{
    int i = 0;

    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
}

int    	my_show_word_array(char **tab)
{
    int i = 0;

    while(tab[i]) {
        my_putstr_array(tab[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}
