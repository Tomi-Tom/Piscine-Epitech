##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

NAME		=	rush3

NAME_TEST	=	unit_tests

SRC 		=	rush3.c		\
			find_type.c	\
			find_size.c	\

SRC_TEST 	=	tests/unit_tests.c	\
			find_size.c		\
			find_type.c		\

FLAGS		=	-Wall -Wextra -Werror

INC		=	-I include/ -L lib/ -lmy

CRIT		=	-lcriterion --coverage

all:
	make re -C lib/my/
	gcc $(FLAGS) -o $(NAME) main.c $(SRC) $(INC)

re:		fclean	all

clean:
	make clean -C lib/my/

fclean:		clean
	make fclean -C lib/my/
	rm -rf $(NAME)
	rm -rf $(NAME_TEST)
	rm -rf *.gcno
	rm -rf *.gcda

tests_run:	fclean
	make re -C lib/my
	gcc -o $(NAME_TEST) $(SRC_TEST) $(INC) $(CRIT)
	./$(NAME_TEST)

.PHONY:	all	re	clean	fclean	tests_run
