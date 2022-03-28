/*
** EPITECH PROJECT, 2022
** MY_PERFECT_MAZE_C
** File description:
** my_perfect_maze
*/

#include "my_generator.h"

int my_perfect_maze(int x, int y, char **maze)
{
    my_base_maze(x, y, maze);
    my_build_maze(maze);
    return 0;
}
