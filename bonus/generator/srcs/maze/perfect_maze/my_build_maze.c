/*
** EPITECH PROJECT, 2022
** MY_BUILD_MAZE_C
** File description:
** my_build_maze
*/

#include "my_generator.h"

void my_print_list_nc(position_t *dig)
{
    position_t *tmp = dig;

    if (dig == NULL)
        return;
    attron(COLOR_PAIR(3));
    mvprintw(0, 0, "X");
    while (tmp->next) {
        mvprintw(tmp->y * 2, tmp->x * 2, "X");
        if (tmp->next->x > tmp->x) {
            mvprintw(tmp->y * 2, tmp->x * 2 + 1, "X");
        } else if (tmp->next->y > tmp->y) {
            mvprintw(tmp->y * 2 + 1, tmp->x * 2, "X");
        } else if (tmp->next->x < tmp->x) {
            mvprintw(tmp->y * 2, tmp->x * 2 - 1, "X");
        } else if (tmp->next->y < tmp->y) {
            mvprintw(tmp->y * 2 - 1, tmp->x * 2, "X");
        }
        tmp = tmp->next;
    }
    attroff(COLOR_PAIR(3));
    attron(COLOR_PAIR(4));
    mvprintw(dig->y * 2, dig->x * 2, "X");
    attroff(COLOR_PAIR(4));
}

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
    clock_t begin = clock();
    clock_t now = clock();

    dig = my_append_elem(dig, 0, 0);
    while (dig != NULL) {
        while ((now - begin) / 1000 < 5)
            now = clock();
        begin = clock();
        dig = my_maze_loop(maze, dig, schema);
        my_print_map_nc(maze);
        my_print_list_nc(dig);
        refresh();
    }
}
