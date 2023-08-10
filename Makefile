NAME = libft.a

SRCS = srcs/ft_putchar.c \
	   srcs/ft_swap.c \
	   srcs/ft_putstr.c \
	   srcs/ft_strlen.c \
	   srcs/ft_strcmp.c

OBJS = $(patsubst %.c,%.o,$(SRCS))

HEADER_DIR=includes

CC = cc

CFLAGS=-Wall -Werror -Wextra -I $(HEADER_DIR)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
