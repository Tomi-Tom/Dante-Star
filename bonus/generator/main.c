/*
** EPITECH PROJECT, 2021
** MAIN_C
** File description:
** main
*/

#include "my_generator.h"

int main(int ac, char **av)
{
    char *perfect = NULL;

    srand(time(NULL));
    if (my_error_handling(ac, av))
        return 84;
    if (strcmp(av[1], "-h") == 0)
        return my_help();
    if (ac == 4)
        perfect = av[3];
    if (my_generator(atoi(av[1]), atoi(av[2]), perfect))
        return 84;
    return 0;
}
