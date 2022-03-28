/*
** EPITECH PROJECT, 2022
** MY_LINKED_LIST_C
** File description:
** my_linked_list
*/

#include "my_generator.h"

position_t *my_init_elem(int x, int y)
{
    position_t *elem = malloc(sizeof(position_t));

    elem->x = x;
    elem->y = y;
    elem->prev = NULL;
    elem->next = NULL;
    return elem;
}

position_t *my_append_elem(position_t *head, int x, int y)
{
    position_t *add = my_init_elem(x, y);

    if (head == NULL)
        return add;
    add->next = head;
    return add;
}

position_t *my_delete_last_elem(position_t *dig)
{
    position_t *tmp = dig->next;

    free(dig);
    return tmp;
}
