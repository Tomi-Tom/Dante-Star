/*
** EPITECH PROJECT, 2022
** MY_IMPERFECT_MAZE_C
** File description:
** my_imperfect_maze
*/

#include "my_generator.h"

void my_make_it_imperfect(int x, int y, char **maze)
{
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < (x + y)) {
        j = rand() % y;
        k = rand() % x;
        maze[j][k] = '*';
        i++;
    }
}

int my_imperfect_maze(int x, int y, char **maze)
{
    if (my_perfect_maze(x, y, maze) == 84)
        return 84;
    my_make_it_imperfect(x, y, maze);
    return 0;
}
