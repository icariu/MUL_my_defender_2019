##
## EPITECH PROJECT, 2019
## DEFENDER
## File description:
## Makefile
##

SRC		=		src/*.c\
				src/sprite/*.c\
				src/action/*.c\
				src/initialise/*.c\
				src/action/mouse/*.c\
				src/action/tower/*.c\
				src/action/sound/*.c\

CFLAGS	= 	-W -Wall -Wextra -I./include -L./lib/my -lmy -I./include

INCLUDE	= 	-I./include -o

CSFML	= 	-l csfml-graphics -l csfml-window -l csfml-system -l csfml-audio

OBJ		=	$(SRC:.c=.o)

NAME 	=	my_defender

all:		$(NAME)

$(NAME): 	$(OBJ)
	make -C lib/my
	gcc $(SRC) $(CFLAGS) $(INCLUDE) $(NAME) $(LIB) $(CSFML)

clean:
	make clean -C lib/my
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	all clean

debug: 	clean
	make -C lib/my
	gcc $(SRC) $(CFLAGS) $(INCLUDE) $(NAME) $(LIB) $(CSFML) -g

.PHONY: all clean fclean re