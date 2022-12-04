##
## EPITECH PROJECT, 2020
## makefile
## File description:
## make
##

SRC	=	$(shell find src/*c)

OBJ	=	$(SRC:.c=.o)

CPPFLAGS =	-Iinclude/

CFLAGS	=	-W -Wall -Wextra

UTFLAGS	=	--coverage -lcriterion

LDFLAGS = 	-Lmy_lib_C/ -lmy

VFLAGS  =       -g3

CSFMLFLAGS      =       -lcsfml-graphics -lcsfml-window -lcsfml-system

CC	=	gcc

RM	=	rm -f

MAKE	=	make

MAKEC	=	make clean

MAKEFC	=	make fclean

RE	=	make re

NAME =	hunter

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(MAKE) -C my_lib_C/
	@$(CC) -o $(NAME) $(OBJ) $(CPPFLAGS) $(LDFLAGS) $(CFLAGS) $(CSFMLFLAGS)

clean:
	@$(RM) $(OBJ)
	@$(RM) src/*~
	@$(RM) *~
	@$(RM) include/*~
	@$(MAKEC) -C my_lib_C/

fclean: clean
	@$(RM) $(NAME)
	@$(MAKEFC) -C my_lib_C/

re:	fclean all

.PHONY: all clean fclean re
