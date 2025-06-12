NAME	:= libft.a
SRCS	:= main.c
OBJS	:= main.o

CC := clang
CFLAGS := -Wall -Werror -Wextra

RM := rm -f
MAKEFLAGS += --noprint-directory

all: $(NAME)


$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: clean fclean re