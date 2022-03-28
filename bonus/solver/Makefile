##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

## ===========================================================
## ===========================[VAR]===========================
## ===========================================================

NAME			=			solver

NAME_TEST		=			unit_test

## ==========================[PATHS]==========================

SRC_PATH		=			srcs/

UTILS_PATH		=			$(SRC_PATH)utils/

TEST_PATH		=			tests/

## ===========================[SRC]===========================

SRC_GLOBAL		=			$(UTILS_PATH)my_error_handling.c		\
							$(UTILS_PATH)my_help.c					\

SRC				=			$(SRC_GLOBAL)							\
							main.c									\
							$(SRC_PATH)get_maze.c					\
							$(SRC_PATH)solver.c						\
							$(SRC_PATH)get_result.c					\
							$(SRC_PATH)move_linked_list.c			\
							$(SRC_PATH)free_all.c					\

TEST_SRC		=			$(TEST_PATH)tests_error_handling.c		\

OBJ				=			$(SRC:.c=.o)

## =========================[OPTIONS]=========================

FLAGS			=			-Wall -Wextra -Werror

CPPFLAGS		=			-I include

CRIT			=			$(CPPFLAGS) -lcriterion --coverage

LDFLAGS			=			-L lib -lncurses

## ===========================================================
## ==========================[RULES]==========================
## ===========================================================

all:
		make $(NAME)

$(NAME):	$(OBJ)
		gcc $(FLAGS) -o $(NAME) $(OBJ) $(CPPFLAGS) $(LDFLAGS)

re:			fclean	all

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)
		rm -rf $(NAME_TEST)
		rm -rf *gcda
		rm -rf *gcno

tests_run:
	gcc -o $(NAME_TEST) $(SRC_GLOBAL) $(SRC_TEST) $(TEST_SRC) $(CRIT)
	./$(NAME_TEST)

## ===========================[END]===========================

.PHONY:	all	re	clean	fclean	tests_run
