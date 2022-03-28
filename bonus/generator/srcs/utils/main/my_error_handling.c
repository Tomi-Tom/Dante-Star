/*
** EPITECH PROJECT, 2021
** EXEMPLE_C
** File description:
** exemple_c
*/

#include "my_generator.h"
#include "ctype.h"

int check_not_number(char *s1, char *s2)
{
    int i = 0;

    while (s1[i]) {
        if ((s1[i] < '0' || s1[i] > '9') && s1[i] != '-')
            return 84;
        i++;
    }
    i = 0;
    while (s2[i]) {
        if ((s2[i] < '0' || s2[i] > '9') && s2[i] != '-')
            return 84;
        i++;
    }
    return 0;
}

int my_error_handling(int ac, char **av)
{
    if (ac == 2 && strcmp(av[1], "-h") == 0)
        return 0;
    if ((ac == 4 && strcmp(av[3], "perfect") && ac != 3) != 0)
        return 84;
    if (check_not_number(av[1], av[2]))
        return 84;
    return 0;
}
