/*
** EPITECH PROJECT, 2021
** LINKED_LIST
** File description:
** liste chainees
*/

#ifndef LINKED_LIST
# define LINKED_LIST

typedef struct linked_list
{
    void *data;
    struct linked_list *next;
} linked_list_t;
#endif
