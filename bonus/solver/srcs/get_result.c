/*
** EPITECH PROJECT, 2022
** Untitled (Workspace)
** File description:
** get_result
*/

#include "my_solver.h"

void my_start_color(void)
{
    start_color();
    init_pair(1, COLOR_WHITE, COLOR_WHITE);
    init_pair(2, COLOR_BLACK, COLOR_BLACK);
    init_pair(3, COLOR_BLUE, COLOR_BLUE);
    init_pair(4, COLOR_GREEN, COLOR_GREEN);
    init_pair(5, COLOR_RED, COLOR_RED);
}

static void check_print(char print, int i, int j)
{
    if (print == 'X')
        attron(COLOR_PAIR(1));
    if (print == '*')
        attron(COLOR_PAIR(2));
    if (print == 'o')
        attron(COLOR_PAIR(4));
    if (print == 'J')
        attron(COLOR_PAIR(5));
    mvprintw(i, j, "%c", print);
    attroff(COLOR_PAIR(1));
    attroff(COLOR_PAIR(2));
    attroff(COLOR_PAIR(4));
    attroff(COLOR_PAIR(5));
}

void my_print_map_nc(char **map)
{
    int i = 0;
    int j = 0;

    while (map[i]) {
        j = 0;
        while (map[i][j]) {
            check_print(map[i][j], i, j);
            j++;
        }
        i++;
    }
}

char **draw_path(char **result, vec_t *pos, int max_y, int max_x)
{
    clock_t begin = clock();
    clock_t now = clock();

    my_print_map_nc(result);
    refresh();
    while (pos != NULL) {
        while ((now - begin) / 1000 < 5)
            now = clock();
        begin = clock();
        my_print_map_nc(result);
        refresh();
        result[pos->y][pos->x] = 'o';
        pos = pos->next;
    }
    result[max_y][max_x] = 'o';
    my_print_map_nc(result);
    refresh();
    getch();
    endwin();
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
