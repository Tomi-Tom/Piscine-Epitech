##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## first makefile
##

NAME = libmy.a

FLAG = -Wall -Wextra -Werror -g

OPT = -c

SRC = *.c

OBJ = $(SRC:.c=.o)


all:		$(NAME)
		@mkdir -p ../../include
		@cp my.h ../../include
		@cp $(NAME) ..
		@cat files_make/end

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

$(OBJ):
		@cat files_make/head
		gcc $(FLAG) $(OPT) $(SRC)

re:			fclean	all

clean:
		@cat files_make/sup
		rm -f *.o
		rm -f libmy.a

fclean:		clean
		@cat files_make/fsup
		rm -f libmy.a
		rm -f ../libmy.a
		rm -f ../../include/my.h
		@cat files_make/end

.PHONY:	all	re	clean	fclean
