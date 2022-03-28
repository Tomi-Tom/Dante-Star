/*
** EPITECH PROJECT, 2022
** dante
** File description:
** get_maze
*/

#include "my_solver.h"

char *read_file(char *file)
{
    int fd = open(file, O_RDONLY);
    struct stat sb;
    char *map = NULL;
    ssize_t size = 0;

    stat(file, &sb);
    map = malloc(sizeof(char) * sb.st_size + 1);
    size = read(fd, map, sb.st_size);
    map[size] = '\0';
    return (map);
}

int count_collum(char *str)
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            count++;
    }
    return (count);
}

int count_line(char *str)
{
    int i = 0;

    for (; str[i] != '\n'; i++);
    return (i);
}

char **convert_map(char *str)
{
    int line = count_line(str) + 1;
    int collum = count_collum(str) + 2;
    char **map = malloc(sizeof(char *) * line + 1);
    int y = 0;
    int x = 0;

    for (int i = 0; i < line; i++)
        map[i] = malloc(sizeof(char *) * collum + 1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') {
            map[y][x] = '\0';
            y++;
            x = 0;
        } else {
            map[y][x] = str[i];
            x++;
        }
    }
    map[y][x] = '\0';
    map[y + 1] = NULL;
    return (map);
}
