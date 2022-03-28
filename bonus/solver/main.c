/*
** EPITECH PROJECT, 2021
** MAIN_C
** File description:
** main
*/

#include "my_solver.h"

int main(int ac, char **av)
{
    if (my_error_handling(ac, av))
        return 84;
    if (strcmp(av[1], "-h") == 0)
        return my_help();
    solver(av[1]);
    return 0;
}
