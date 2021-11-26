##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

NAME		=	eval_expr

NAME_TEST	=	unit_tests

SRC			=	eval_expr.c

SRC_TEST	=	tests/unit_tests.c

FLAGS		=	-Wall -Wextra -Werror

INC			=	-I include -L lib -lmy

CRIT		=	-lcriterion --coverage

all: $(NAME)

$(NAME):
	make re -C lib/my
	gcc $(FLAGS) -o $(NAME) main.c $(SRC) $(INC)

re:	fclean	all

clean:
	make clean -C lib/my/

fclean: clean
	make fclean -C lib/my/
	rm -f $(NAME)
	rm -f *.gcda
	rm -f *.gcno

tests_run:
	gcc $(FLAGS) -o $(NAME_TEST) $(SRC) $(SRC_TEST) $(INC) $(CRIT)
	./$(NAME_TEST)

re:	all	re	clean	fclean
