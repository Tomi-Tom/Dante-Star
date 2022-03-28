/*
** EPITECH PROJECT, 2022
** Dante
** File description:
** free_all
*/

#include "my_solver.h"

void free_str(char **str)
{
    int size = 0;

    for (int n = 0; str[n] != NULL; n++) {
        free(str[n]);
    }
    free(str);
}

void free_linked_list(vec_t *head)
{
    vec_t *tmp = head;
    vec_t *to_del = NULL;

    while (tmp != NULL) {
        to_del = tmp;
        tmp = tmp->next;
        free(to_del);
    }
}

void free_all(char **result, char **maze, char *tmp, vec_t *head)
{
    free_str(result);
    free_str(maze);
    free(tmp);
    free_linked_list(head);
}
