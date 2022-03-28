##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

## ===========================================================
## ===========================[VAR]===========================
## ===========================================================

NAME			=			generator

NAME_TEST		=			unit_test

## ==========================[PATHS]==========================

SRC_PATH		=			srcs/

UTILS_PATH		=			$(SRC_PATH)utils/main/

MAIN_PATH		=			$(SRC_PATH)main/

CONT_PATH		=			$(SRC_PATH)controller/

PERF_PATH		=			$(SRC_PATH)maze/perfect_maze/

IMPERF_PATH		=			$(SRC_PATH)maze/imperfect_maze/

LINKED_PATH		=			$(SRC_PATH)utils/linked_list/

TEST_PATH		=			tests/

## ===========================[SRC]===========================

SRC_GLOBAL		=			$(UTILS_PATH)my_error_handling.c		\
							$(UTILS_PATH)my_help.c					\
							$(MAIN_PATH)my_generator.c				\
							$(CONT_PATH)my_controller.c				\
							$(IMPERF_PATH)my_imperfect_maze.c		\
							$(PERF_PATH)base/my_base_maze.c			\
							$(PERF_PATH)base/my_base_referent.c		\
							$(PERF_PATH)my_schema.c					\
							$(PERF_PATH)my_move.c					\
							$(PERF_PATH)my_build_maze.c				\
							$(PERF_PATH)my_perfect_maze.c			\
							$(LINKED_PATH)my_linked_list.c			\

SRC				=			$(SRC_GLOBAL)							\
							main.c

TEST_SRC		=			$(TEST_PATH)tests_error_handling.c		\

OBJ				=			$(SRC:.c=.o)

## =========================[OPTIONS]=========================

CFLAGS			=			-Wall -Wextra

CPPFLAGS		=			-I include

CRIT			=			$(CPPFLAGS) -lcriterion --coverage

## ===========================================================
## ==========================[RULES]==========================
## ===========================================================

all:
		@make $(NAME)

$(NAME):	$(OBJ)
		@gcc $(CFLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS) $(LDFLAGS)

re:			fclean	all

clean:
		@rm -rf $(OBJ)

fclean:		clean
		@rm -rf $(NAME)
		@rm -rf $(NAME_TEST)
		@rm -rf *gcda
		@rm -rf *gcno

tests_run:
	gcc -o $(NAME_TEST) $(SRC_GLOBAL) $(SRC_TEST) $(TEST_SRC) $(CRIT)
	./$(NAME_TEST)

## ===========================[END]===========================

.PHONY:	all	re	clean	fclean	tests_run
