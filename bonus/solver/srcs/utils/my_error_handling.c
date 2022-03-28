/*
** EPITECH PROJECT, 2021
** EXEMPLE_C
** File description:
** exemple_c
*/

#include "my_solver.h"

int my_error_handling(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") == 0)
        return 0;
    if (ac != 2)
        return 84;
    return 0;
}
