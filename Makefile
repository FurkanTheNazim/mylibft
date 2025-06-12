NAME	= libft.a


CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS	:= ft_atoi.c/ft_isdigit.c
OBJS	:= $(SRCS: .c=.o)

all: $(NAME)


$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)
	
re: fclean all

.PHONY: all clean fclean re