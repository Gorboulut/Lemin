##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC = $(wildcard *.c)

OBJ = $(SRC:.c=.o)

NAME = libmy.a

all: $(NAME)

$(NAME): $(OBJ)
	gcc -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re:	fclean all
