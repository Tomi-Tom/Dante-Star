/*
** EPITECH PROJECT, 2022
** MY_SCHEMA_C
** File description:
** my_schema
*/

#include "my_generator.h"

position_t *my_schema_0(char **maze, position_t *dig)
{
    int x = dig->x;
    int y = dig->y;

    if (dig == NULL)
        return NULL;
    dig = my_go_up(maze, dig);
    if (dig->x == x && dig->y == y)
        dig = my_go_down(maze, dig);
    if (dig->x == x && dig->y == y)
        dig = my_go_left(maze, dig);
    if (dig->x == x && dig->y == y)
        dig = my_go_right(maze, dig);
    return dig;
}

position_t *my_schema_1(char **maze, position_t *dig)
{
    int x = dig->x;
    int y = dig->y;

    if (dig == NULL)
        return NULL;
    dig = my_go_down(maze, dig);
    if (dig->x == x && dig->y == y)
        dig = my_go_left(maze, dig);
    if (dig->x == x && dig->y == y)
        dig = my_go_right(maze, dig);
    if (dig->x == x && dig->y == y)
        dig = my_go_up(maze, dig);
    return dig;
}

position_t *my_schema_2(char **maze, position_t *dig)
{
    int x = dig->x;
    int y = dig->y;

    if (dig == NULL)
        return NULL;
    dig = my_go_left(maze, dig);
    if (dig->x == x && dig->y == y)
        dig = my_go_right(maze, dig);
    if (dig->x == x && dig->y == y)
        dig = my_go_up(maze, dig);
    if (dig->x == x && dig->y == y)
        dig = my_go_down(maze, dig);
    return dig;
}

position_t *my_schema_3(char **maze, position_t *dig)
{
    int x = dig->x;
    int y = dig->y;

    if (dig == NULL)
        return NULL;
    dig = my_go_right(maze, dig);
    if (dig->x == x && dig->y == y)
        dig = my_go_up(maze, dig);
    if (dig->x == x && dig->y == y)
        dig = my_go_down(maze, dig);
    if (dig->x == x && dig->y == y)
        dig = my_go_left(maze, dig);
    return dig;
}
