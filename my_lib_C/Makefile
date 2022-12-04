##
## EPITECH PROJECT, 2020
## makefile
## File description:
## make
##

MAKE	=	make

MAKEC	=	make clean

MAKEFC	=	make fclean

RE	=	make re

all:
	@$(MAKE) -C list/
	@$(MAKE) -C my/

clean:
	@$(MAKEC) -C list/
	@$(MAKEC) -C my/

fclean:
	@$(MAKEFC) -C list/
	@$(MAKEFC) -C my/

re:	fclean all

.PHONY: all clean fclean re
