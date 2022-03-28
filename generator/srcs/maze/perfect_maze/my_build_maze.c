/*
** EPITECH PROJECT, 2022
** MY_BUILD_MAZE_C
** File description:
** my_build_maze
*/

#include "my_generator.h"

position_t *my_maze_loop(char **maze, position_t *dig, int schema)
{
    int x = dig->x;
    int y = dig->y;

    schema = rand() % 4;
    if (schema == 0)
        dig = my_schema_0(maze, dig);
    if (schema == 1)
        dig = my_schema_1(maze, dig);
    if (schema == 2)
        dig = my_schema_2(maze, dig);
    if (schema == 3)
        dig = my_schema_3(maze, dig);
    if (x == dig->x && y == dig->y)
        dig = my_delete_last_elem(dig);
    return dig;
}

void my_build_maze(char **maze)
{
    position_t *dig = NULL;
    int schema = 0;

    dig = my_append_elem(dig, 0, 0);
    while (dig != NULL) {
        dig = my_maze_loop(maze, dig, schema);
    }
}
