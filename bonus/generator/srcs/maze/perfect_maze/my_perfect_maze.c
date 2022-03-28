/*
** EPITECH PROJECT, 2022
** MY_PERFECT_MAZE_C
** File description:
** my_perfect_maze
*/

#include "my_generator.h"

static void check_print(char print, int i, int j)
{
    if (print == 'X')
        attron(COLOR_PAIR(1));
    if (print == '*')
        attron(COLOR_PAIR(2));
    mvprintw(i, j, "%c", print);
    attroff(COLOR_PAIR(1));
    attroff(COLOR_PAIR(2));
}

void my_start_color(void)
{
    start_color();
    init_pair(1, COLOR_WHITE, COLOR_WHITE);
    init_pair(2, COLOR_BLACK, COLOR_BLACK);
    init_pair(3, COLOR_BLUE, COLOR_BLUE);
    init_pair(4, COLOR_RED, COLOR_RED);
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

int my_perfect_maze(int x, int y, char **maze)
{
    clock_t begin = clock();
    clock_t now = clock();

    initscr();
    clear();
    my_start_color();
    my_base_maze(x, y, maze);
    my_print_map_nc(maze);
    refresh();
    while ((now - begin) / 100000 < 4)
        now = clock();
    my_base_maze(x, y, maze);
    my_build_maze(maze);
    my_print_map_nc(maze);
    refresh();
    endwin();
    return 0;
}
