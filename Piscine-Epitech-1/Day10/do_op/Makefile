##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## Makefile de Do_op
##

NAME = do-op

OBJ = $(SRC:.c:.o)

SRC = *.c

FLAGS = -Wall -Wextra -Werror

LIBMY = -I ../include/*.c

PATHLIB = ../lib


all:		$(NAME)

$(NAME):	$(OBJ)
			ar rc $(NAME) $(OBJ)

$(OBJ):		
			gcc $(FLAGS) -c $(SRC) $(LIBMY) -o $(NAME) $(PATHLIB)-lmy 

re:			fclean	all

clean:		
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)


.PHONE: all re clean fclean
