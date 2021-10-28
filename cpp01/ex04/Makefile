NAME		= program

SRCS		= 	main.cpp \
				check_args.cpp \
				ft_replace.cpp

OBJS		= $(SRCS:.cpp=.o)

CFLAGS		= -Wall -Wextra -Werror

CC			= g++

%.o :		%.c
			$(CC) -c -I. $(CFLAGS) $< -o $@

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CC) $(OBJS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -f $(NAME)
			rm -f $(wildcard *.replace)

re:			fclean all

.PHONY:		all clean fclean re
