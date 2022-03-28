##
## EPITECH PROJECT, 2022
## MAKEFILE
## File description:
## Makefile
##

all:
	@make -C solver/
	@make -C generator/

re:
	@make re -C solver/
	@make re -C generator/

clean:
	@make clean -C solver/
	@make clean -C generator/

fclean:
	@make fclean -C solver/
	@make fclean -C generator/

.PHONY:	all	re	clean	fclean
