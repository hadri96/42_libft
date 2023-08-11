NAME = libft.a

SRCS = srcs/ft_strlen.c \
	   srcs/ft_isalpha.c \
	   srcs/ft_isdigit.c \
	   srcs/ft_isprint.c \
	   srcs/ft_isascii.c \
	   srcs/ft_strcmp.c \
	   srcs/ft_strncmp.c \
	   srcs/ft_toupper.c \
	   srcs/ft_tolower.c \
	   srcs/ft_strchr.c \
	   srcs/ft_strrchr.c \
	   srcs/ft_strstr.c \
	   srcs/ft_itoa.c \
	   srcs/ft_atoi.c \
	   srcs/ft_strcat.c \
	   srcs/ft_strncat.c

OBJS = $(patsubst %.c,%.o,$(SRCS))

HEADER_DIR=includes

CC = cc

CFLAGS=-Wall -Werror -Wextraj -I $(HEADER_DIR)

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
