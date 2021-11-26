/*
** EPITECH PROJECT, 2021
** MY_PARAMS_TO_LIST
** File description:
** MY_PARAMS_TO_LIST
*/

#include <stdlib.h>
#include "include/mylist.h"

linked_list_t *my_putinlist(void *data, linked_list_t *list)
{
    linked_list_t *tmp;

    tmp = malloc(sizeof(*tmp));
    list->data = data;
    list->next = tmp;
    tmp = list;
    return (list);
}

linked_list_t *my_params_to_list(int ac, char * const *av)
{
    int i = 0;
    linked_list_t *list;

    while (i < ac) {
        list = my_putinlist(av[i], list);
        i++;
    }
    return (list);
}
