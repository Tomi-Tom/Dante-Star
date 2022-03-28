/*
** EPITECH PROJECT, 2022
** MY_GENERATOR_C
** File description:
** my_generator
*/

#include "my_generator.h"

void my_free_array(char **maze)
{
    int i = 0;

    while (maze[i]) {
        free(maze[i]);
        i++;
    }
    free(maze);
}

void my_print_maze(char **maze)
{
    int i = 0;

    printf("%s", maze[i++]);
    while (maze[i])
        printf("\n%s", maze[i++]);
}

int my_generator(int x, int y, char *perfect)
{
    char **maze = malloc(sizeof(char *) * (y + 1));
    int line = 0;

    if (maze == NULL)
        return 84;
    while (line < y) {
        maze[line] = malloc(sizeof(char) * (x + 1));
        maze[line][0] = '\0';
        line++;
    }
    maze[line] = NULL;
    if (my_controller(x, y, perfect, maze) == 84) {
        my_print_maze(maze);
        my_free_array(maze);
        return 84;
    }
    my_print_maze(maze);
    my_free_array(maze);
    return 0;
}