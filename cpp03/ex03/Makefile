NAME		= 	program

SRCS		= 	main.cpp \
				ClapTrap.cpp \
				FragTrap.cpp \
				ScavTrap.cpp \
				DiamondTrap.cpp

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
