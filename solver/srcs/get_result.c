/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** get_result
*/

#include "my_solver.h"

char **draw_path(char **result, vec_t *pos, int max_y, int max_x)
{
    while (pos != NULL) {
        result[pos->y][pos->x] = 'o';
        pos = pos->next;
    }
    result[max_y][max_x] = 'o';
    return result;
}

void print_maze(char **maze)
{
    for (int i = 0; maze[i] != NULL; ++i) {
        if (i > 0)
            printf("\n");
        printf("%s", maze[i]);
    }
}
