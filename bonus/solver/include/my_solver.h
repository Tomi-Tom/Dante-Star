/*
** EPITECH PROJECT, 2022
** MY_SOLVER_H
** File description:
** MY_SOLVER_H
*/

#ifndef MY_SOLVER_H
    #define MY_SOLVER_H
    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <assert.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <sys/mman.h>
    #include <fcntl.h>
    #include <time.h>
    #include <ncurses.h>

typedef struct current_s {
    int x;
    int y;
} current_t;

typedef struct vec_s {
    struct vec_s *next;
    struct vec_s *last;
    current_t *a;
    int x;
    int y;
} vec_t;

void solver(char *file);

int count_line(char *str);
int count_collum(char *str);
char *read_file(char *file);
char **convert_map(char *str);

vec_t *move_element_list(vec_t *head, int y, int x);
vec_t *remove_last_element(vec_t *head);
vec_t *get_last_element(vec_t *head);
int linked_list_len(vec_t *head);

char **draw_path(char **result, vec_t *pos, int max_y, int max_x);
void print_maze(char **maze);
void my_print_map_nc(char **map);
void my_start_color(void);

int my_error_handling(int ac, char **av);
int my_help(void);

void free_all(char **result, char **maze, char *tmp, vec_t *head);

#endif /* !MY_SOLVER_H */
