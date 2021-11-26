##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

NAME		=	eval_expr

NAME_TEST	=	unit_tests

SRC 		=	eval_exp.c	\
				do_op_num.c

SRC_TEST 	=	tests/unit_test.c

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

tests_run:
	make re -C lib/my
	gcc -o $(NAME_TEST) $(SRC) $(SRC_TEST) $(INC) $(CRIT)
	./$(NAME_TEST)

.PHONY:	all	re	clean	fclean	tests_run
