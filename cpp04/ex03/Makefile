NAME		= 	program

SRCS		= 	main.cpp \
				AMateria.cpp \
				Character.cpp \
				Cure.cpp \
				Ice.cpp \
				MateriaSource.cpp

OBJS		= 	$(SRCS:.cpp=.o)

CFLAGS		= 	-Wall -Wextra -Werror

CC			= 	g++

%.o :		%.c
			$(CC) -c -I. $(CFLAGS) $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
