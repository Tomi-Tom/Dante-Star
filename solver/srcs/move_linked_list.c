/*
** EPITECH PROJECT, 2022
** dante
** File description:
** move_linked_list
*/

#include "my_solver.h"

vec_t *add_new_element(int y, int x)
{
    vec_t *new = malloc(sizeof(vec_t));

    new->y = y;
    new->x = x;
    new->last = NULL;
    new->next = NULL;
    return (new);
}

vec_t *move_element_list(vec_t *head, int y, int x)
{
    vec_t *tmp = NULL;
    vec_t *new_elem = NULL;

    new_elem = add_new_element(y, x);
    if (head == NULL)
        head = new_elem;
    else {
        tmp = get_last_element(head);
        tmp->next = new_elem;
    }

    head->last = new_elem;

    return (head);
}

int linked_list_len(vec_t *head)
{
    vec_t *tmp = NULL;
    int i = 0;

    for (; head != NULL; i++)
        head = head->next;
    return i;
}

vec_t *get_last_element(vec_t *head)
{
    vec_t *tmp = head;

    if (head->last != NULL)
        return head->last;

    while (tmp->next != NULL)
        tmp = tmp->next;

    head->last = tmp;

    return tmp;
}

vec_t *remove_last_element(vec_t *head)
{
    vec_t *tmp = head;
    vec_t *elem = head;

    if (head->next == NULL)
        return head;
    while (tmp->next != NULL) {
        elem = tmp;
        tmp = tmp->next;
    }
    if (tmp == NULL)
        return head;
    elem->next = NULL;
    free(tmp);
    head->last = elem;
    head->a->x = elem->x;
    head->a->y = elem->y;
    return head;
}
