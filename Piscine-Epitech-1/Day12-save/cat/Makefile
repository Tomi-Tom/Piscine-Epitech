##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

NAME		=	cat

SRC			=	cat.c

FLAGS		=	-Wall -Wextra -Werror

INCLUDE		=	-I ../include/ -L ../lib/ -lmy

OBJ			=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
	gcc $(FLAGS) $(OBJ) $(INCLUDE) -o $(NAME)

$(OBJ):
	gcc -c $(SRC)

re:			fclean	all

tests_run:	re	fclean	all	clean
	gcc -o unit_tests $(SRC) ../tests/my_cat_tests.c --coverage -lcriterion
	./unit_tests cat.c

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME) unit_tests *.gcno *.gcda

.PHONY: 	all	re	clean	fclean	tests_run
