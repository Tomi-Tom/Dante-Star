/*
** EPITECH PROJECT, 2022
** MY_BASE_MAZE_C
** File description:
** my_base_maze
*/

#include "my_generator.h"

char my_put_char_in_maze(int x, int y)
{
    if (y % 2 == 1)
        return 'X';
    if (x % 2 == 0)
        return '*';
    return '#';
}

void my_put_last_line(char **maze, int y)
{
    int x = 0;

    while (maze[y][x]) {
        if (x % 2 == 0)
            maze[y][x] =  '*';
        if (x % 2 == 1)
            maze[y][x] =  'X';
        x++;
    }
}

void my_base_maze(int x, int y, char **maze)
{
    int i = 0;
    int j = 0;

    while (i < y) {
        j = 0;
        while (j < x) {
            maze[i][j] = 'X';
            j++;
        }
        maze[i][j] = '\0';
        i++;
    }
    if (y % 2 == 0)
        my_put_last_line(maze, y - 1);
    if (x % 2 == 0)
        maze[y - 1][x - 1] = '*';
}
