/*
** EPITECH PROJECT, 2022
** MY_BASE_REFERENT_C
** File description:
** my_base_referent
*/

#include "my_generator.h"

char **my_build_referent(int x, int y)
{
    char **referent = malloc(sizeof(char *) * (y + 1));
    int i = 0;
    int j = 0;

    if (referent == NULL)
        return NULL;
    while (i < y) {
        j = 0;
        referent[i] = malloc(sizeof(char) * (x + 1));
        if (referent[i] == NULL)
            return NULL;
        while (j < x)
            referent[i][j++] = '#';
        referent[i][j] = '\0';
        i++;
    }
    referent[i] = NULL;
    return referent;
}
