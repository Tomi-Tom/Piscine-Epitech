/*
** EPITECH PROJECT, 2021
** MY_LIST_SIZE_C
** File description:
** listlen
*/

#include "include/mylist.h"

int     my_list_size(linked_list_t const *begin)
{
    linked_list *list = begin;
    int i = 0;

    while (list.data) {
        list = list.next;
        i++;
    }
    return (i);
}
