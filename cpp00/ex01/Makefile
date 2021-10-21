NAME		= 	phonebook

SRCS		= 	phonebook.cpp \
				contact.cpp \
				main.cpp

OBJS		= 	$(SRCS:.cpp=.o)

CFLAGS		= 	-Wall -Wextra -Werror
INC			= 	.
CC			= 	clang++

%.o :		%.cpp
			$(CC) -c -I $(INC) $(CFLAGS) $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
