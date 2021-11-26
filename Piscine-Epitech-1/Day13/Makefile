##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## MAKEFILE CSFML
##

NAME	= window

SRC		= task01.c

FLAGS	= -lcsfml-graphics -lcsfml-system -lcsfml-audio -lcsfml-window


all:	$(NAME)

$(NAME):
	@cat files_make/compile 
	@gcc -o $(NAME) $(SRC) $(FLAGS)

re:		fclean	all

fclean:
	@rm $(NAME)

.PHONY:	all	re	fclean
