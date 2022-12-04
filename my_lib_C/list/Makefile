##
## EPITECH PROJECT, 2020
## makefile
## File description:
## make
##

SRC	=	list_add_elem_at_back.c	\
    	list_clear.c	\
		list_del_elem_at_position.c	\
		list_get_elem_at_position.c	\
		list_is_empty.c	\
		list_add_elem_at_front.c	\
		list_del_elem_at_back.c	\
		list_get_elem_at_back.c	\
		list_get_size.c	\
		list_add_elem_at_position.c	\
		list_del_elem_at_front.c	\
		list_get_elem_at_front.c


OBJ	=	$(SRC:.c=.o)

CPPFLAGS	=	-I./

CFLAGS	=	-W -Wall -Wextra

AR	=	ar rc

RM	=	rm -f

CP	=	cp

NAME	=	liblist.a

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(AR) -o $(NAME) $(OBJ)
	@$(CP) $(NAME) ../
	@$(CP) list.h ../../include

clean:
	@$(RM) $(OBJ)
	@$(RM) *~

fclean: clean
	@$(RM) $(NAME)
	@$(RM) ../$(NAME)

re:	fclean all

.PHONY: all clean fclean re
