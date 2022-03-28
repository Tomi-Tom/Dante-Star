/*
** EPITECH PROJECT, 2022
** dante
** File description:
** solver
*/

#include "my_solver.h"

char **where_should_i_go(char **maze, vec_t **pos, int max_y, int max_x)
{
    if ((*pos)->a->x != max_x && maze[(*pos)->a->y][(*pos)->a->x + 1] == '*') {
        *pos = move_element_list(*pos, (*pos)->a->y, (*pos)->a->x + 1);
        (*pos)->a->x += 1;
        return maze;
    }
    if ((*pos)->a->y != max_y && maze[(*pos)->a->y + 1][(*pos)->a->x] == '*') {
        *pos = move_element_list(*pos, (*pos)->a->y + 1, (*pos)->a->x);
        (*pos)->a->y += 1;
        return maze;
    }
    if ((*pos)->a->x != 0 &&  maze[(*pos)->a->y][(*pos)->a->x - 1] == '*') {
        *pos = move_element_list(*pos, (*pos)->a->y, (*pos)->a->x - 1);
        (*pos)->a->x -= 1;
        return maze;
    }
    if ((*pos)->a->y != 0 && maze[(*pos)->a->y - 1][(*pos)->a->x] == '*') {
        *pos = move_element_list(*pos, (*pos)->a->y - 1, (*pos)->a->x);
        (*pos)->a->y -= 1;
    }
    return maze;
}

int am_i_stuck(char **maze, vec_t *pos, int max_y, int max_x)
{
    int count = 0;

    if (max_x == pos->a->x || maze[(pos)->a->y][(pos)->a->x + 1] != '*')
        count++;
    if ((pos)->a->y == 0 || maze[(pos)->a->y - 1][(pos)->a->x] != '*')
        count++;
    if (max_y == (pos)->a->y || maze[(pos)->a->y + 1][(pos)->a->x] != '*')
        count++;
    if ((pos)->a->x == 0 || maze[(pos)->a->y][(pos)->a->x - 1] != '*')
        count++;
    if (count == 4)
        return 1;
    else
        return 0;
}

char **go_back(char **maze, vec_t **pos)
{
    maze[(*pos)->a->y][(*pos)->a->x] = 'X';
    *pos = remove_last_element(*pos);
    return maze;
}

vec_t *explor_maze(char **maze, vec_t *pos, int max_y, int max_x)
{
    pos->a = malloc(sizeof(current_t));
    pos->a->x = 0;
    pos->a->y = 0;
    while (maze[max_y][max_x] == '*' && maze[0][0] != 'X') {
        maze = where_should_i_go(maze, &pos, max_y, max_x);
        maze[(pos)->a->y][(pos)->a->x] = 'o';
        if (maze[max_y][max_x] == 'o')
            return pos;
        if (am_i_stuck(maze, pos, max_y, max_x))
            maze = go_back(maze, &pos);
    }
    if (maze[0][0] == 'X')
        return NULL;
    return pos;
}

void solver(char *file)
{
    char *tmp = read_file(file);
    char **maze = convert_map(tmp);
    char **result = convert_map(tmp);
    int max_y = count_collum(tmp);
    int max_x = count_line(tmp) - 1;
    vec_t *head = NULL;

    head = move_element_list(head, 0, 0);
    head = explor_maze(maze, head, max_y, max_x);
    if (head == NULL) {
        printf("no solution found");
        return;
    }
    result = draw_path(result, head, max_y, max_x);
    print_maze(result);
    free_all(result, maze, tmp, head);
}
