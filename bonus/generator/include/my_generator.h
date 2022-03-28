/*
** EPITECH GENERATOR, 2022
** MY_GENERATOR_H
** File description:
** MY_GENERATOR_H
*/

#ifndef MY_GENERATOR_H
    #define MY_GENERATOR_H

    #include <unistd.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <assert.h>
    #include <sys/stat.h>
    #include <sys/types.h>
    #include <sys/mman.h>
    #include <time.h>
    #include <ncurses.h>

typedef struct vec_s {
    int x;
    int y;
} vec_t;

typedef struct position_s {
    int x;
    int y;
    struct position_s *prev;
    struct position_s *next;
} position_t;

void my_free_array(char **array);
int my_error_handling(int ac, char **av);
int my_help(void);

int my_generator(int x, int y, char *perfect);
void my_print_maze(char **maze);
void my_print_map_nc(char **map);

int my_controller(int x, int y, char *perfect, char **maze);

void my_base_maze(int x, int y, char **maze);
char **my_build_referent(int x, int y);
int my_perfect_maze(int x, int y, char **maze);
void my_build_maze(char **maze);

int my_imperfect_maze(int x, int y, char **maze);

position_t *my_schema_0(char **maze, position_t *dig);
position_t *my_schema_1(char **maze, position_t *dig);
position_t *my_schema_2(char **maze, position_t *dig);
position_t *my_schema_3(char **maze, position_t *dig);

position_t *my_go_up(char **maze, position_t *tmp);
position_t *my_go_down(char **maze, position_t *tmp);
position_t *my_go_left(char **maze, position_t *tmp);
position_t *my_go_right(char **maze, position_t *tmp);

position_t *my_append_elem(position_t *head, int x, int y);
position_t *my_delete_last_elem(position_t *dig);

#endif /* !MY_GENERATOR _H */
