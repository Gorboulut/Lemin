##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##
SRC = $(wildcard src/*.c)

OBJ = $(SRC:.c=.o)

NAME = lem_in

CFLAGS = -g

INCLUDE = -W -Wall -Wextra -L ./lib/my -lmy -I./include -lncurses

all: $(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(INCLUDE)
	rm -f $(OBJ)
	$(MAKE) clean -C lib/my

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f *#
	$(MAKE) clean -C lib/my

fclean: clean
	rm -f $(NAME)
	rm -f vgcore.*
	rm -f lib/libmy.a
	rm -f lib/my/libmy.a

re:	fclean all
