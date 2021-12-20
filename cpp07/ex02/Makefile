NAME		= 	program

SRCS		= 	main.cpp

OBJS		= 	$(SRCS:.cpp=.o)

CFLAGS		= 	-Wall -Wextra -Werror

CC			= 	clang++

%.o :		%.cpp
			$(CC) -c -I. $(CFLAGS) $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) -o $(NAME)

test:		main_test.o
			$(CC) main_test.o -o test

clean:
			rm -f $(OBJS)
			rm -f main_test.o

fclean:		clean
			rm -f $(NAME)
			rm -f test


re:			fclean all

.PHONY:		all clean fclean re
