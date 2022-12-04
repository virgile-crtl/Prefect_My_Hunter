##
## EPITECH PROJECT, 2020
## makefile
## File description:
## make
##

SRC	=	count_words.c	\
		my_compute_square_root.c	\
		my_epurstr.c	\
		my_getnbr.c	\
		my_putchar.c	\
		my_puterror.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_show_word_array.c	\
		my_strcapitalize.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_strdup.c	\
		my_str_isalpha.c	\
		my_str_islower.c	\
		my_str_isnum.c		\
		my_str_isupper.c	\
		my_strlen.c	\
		my_strlowcase.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_strstr.c	\
		my_str_to_word_array.c	\
		my_str_to_word_array_delim.c	\
		my_strupcase.c	\
		number.c	\
		factors.c	\
		summands.c	\
		my_printf/base.c	\
		my_printf/main.c	\
		my_printf/print.c	\
		fs_open_file.c	\
		load_2d_arr_from_file.c	\
		load_file_in_mem.c	\
		int_to_char.c	\
		free_tab.c

OBJ	=	$(SRC:.c=.o)

CPPFLAGS	=	-I.

CFLAGS	=	-W -Wall -Wextra

AR	=	ar rc

RM	=	rm -f

CP	=	cp

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	@$(AR) -o $(NAME) $(OBJ)
	@$(CP) $(NAME) ../
	@$(CP) my.h ../../include

clean:
	@$(RM) $(OBJ)
	@$(RM) *~

fclean: clean
	@$(RM) $(NAME)
	@$(RM) ../$(NAME)

re:	fclean all

.PHONY: all clean fclean re
