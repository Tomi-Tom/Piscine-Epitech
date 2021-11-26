##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE
##

NAME	=	cat

SRC		=	main.c	\
			cat.c

FLAGS	=	-Wall -Wextra -Werror

INCLUDE	=	-I ../include/ -L ../lib/ -lmy

OBJ		=	$(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ)
	gcc $(FLAGS) $(OBJ) $(INCLUDE) -o $(NAME)

$(OBJ):
	gcc -c $(SRC)

re:		fclean	all

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)

.PHONY: all re clean fclean
