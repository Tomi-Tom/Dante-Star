/*
** EPITECH PROJECT, 2022
** MY_MOVE_C
** File description:
** my_move
*/

#include "my_generator.h"

position_t *my_go_up(char **maze, position_t *dig)
{
    if (dig->y == 0)
        return dig;
    if (maze[dig->y * 2 - 2][dig->x * 2] == '*')
        return dig;
    maze[dig->y * 2][dig->x * 2] = '*';
    maze[dig->y * 2 - 1][dig->x * 2] = '*';
    maze[dig->y * 2 - 2][dig->x * 2] = '*';
    dig = my_append_elem(dig, dig->x, dig->y - 1);
    return dig;
}

position_t *my_go_down(char **maze, position_t *dig)
{
    if (maze[dig->y * 2 + 1] == NULL || maze[dig->y * 2 + 2] == NULL)
        return dig;
    if (maze[dig->y * 2 + 2][dig->x * 2] == '*')
        return dig;
    maze[dig->y * 2][dig->x * 2] = '*';
    maze[dig->y * 2 + 1][dig->x * 2] = '*';
    maze[dig->y * 2 + 2][dig->x * 2] = '*';
    dig = my_append_elem(dig, dig->x, dig->y + 1);
    return dig;
}

position_t *my_go_left(char **maze, position_t *dig)
{
    if (dig->x == 0)
        return dig;
    if (maze[dig->y * 2][dig->x * 2 - 2] == '*')
        return dig;
    maze[dig->y * 2][dig->x * 2] = '*';
    maze[dig->y * 2][dig->x * 2 - 1] = '*';
    maze[dig->y * 2][dig->x * 2 - 2] = '*';
    dig = my_append_elem(dig, dig->x - 1, dig->y);
    return dig;
}

position_t *my_go_right(char **maze, position_t *dig)
{
    if (maze[dig->y * 2][dig->x * 2 + 1] == '\0' ||
        maze[dig->y * 2][dig->x * 2 + 2] == '\0')
        return dig;
    if (maze[dig->y * 2][dig->x * 2 + 2] == '*')
        return dig;
    maze[dig->y * 2][dig->x * 2] = '*';
    maze[dig->y * 2][dig->x * 2 + 1] = '*';
    maze[dig->y * 2][dig->x * 2 + 2] = '*';
    dig = my_append_elem(dig, dig->x + 1, dig->y);
    return dig;
}
