##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

NAME		=	infin_add

NAME_TEST	=	unit_tests

SRC		=	infinadd.c	\
			infinsub.c	\
			usefull.c

SRC_TEST	=	tests/test.c

FLAGS		= 	-Wall -Wextra -Werror

INC		=	-I include/ -L lib/ -lmy

CRIT		=	-lcriterion --coverage

all:
		@make re -C lib/my
		@gcc $(FLAGS) $(SRC) main.c -o $(NAME) $(INC)

re:			fclean	all

clean:
		@make clean -C lib/my
		@rm -rf $(OBJ)

fclean:			clean
		@make fclean -C lib/my
		@rm -rf $(NAME)
		@rm -rf $(NAME_TEST)
		@rm -rf *.gcda
		@rm -rf *.gcno

tests_run:
		@make re -C lib/my
		@gcc $(FLAGS) $(SRC) -o $(NAME_TEST) $(INC) $(SRC_TEST) $(CRIT)
		@./$(NAME_TEST)

.PHONY:	all	re	clean	fclean	test
