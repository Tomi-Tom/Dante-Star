/*
** EPITECH PROJECT, 2022
** MY_CONTROLLER_C
** File description:
** my_controller
*/

#include "my_generator.h"

int my_controller(int x, int y, char *perfect, char **maze)
{
    if (perfect) {
        if (my_perfect_maze(x, y, maze) == 84)
            return 84;
    } else {
        if (my_imperfect_maze(x, y, maze) == 84)
            return 84;
    }
    return 0;
}
